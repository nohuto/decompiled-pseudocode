/*
 * XREFs of ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA824
 * Callers:
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C00AC0D0 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F9860 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0101F10 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C01D8428 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000E548 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00EA9C0 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00FE560 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(
        ADAPTER_RENDER *this,
        struct DXGRESOURCE *a2,
        struct COREDEVICEACCESS *a3)
{
  struct DXGPROCESS *Current; // rbp
  HMGRTABLE *v6; // r14
  int v7; // eax
  unsigned int v8; // r8d
  __int64 v9; // rax
  int v10; // edx
  char v11; // bl
  int v12; // eax
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  Current = DXGPROCESS::GetCurrent();
  v6 = (struct DXGPROCESS *)((char *)Current + 232);
  LOBYTE(v7) = EvaluateCurrentState((int **)&g_Feature_645437753_58376215_FeatureDescriptorDetails);
  if ( v7 )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v13,
      (struct _KTHREAD **)Current);
    v8 = *((_DWORD *)a2 + 4);
    v9 = (v8 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v9 < *((_DWORD *)Current + 62) )
    {
      v10 = *(_DWORD *)(*(_QWORD *)v6 + 16 * v9 + 8);
      if ( ((v8 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v6 + 16 * v9 + 8) & 0x60)
        && (v10 & 0x2000) == 0
        && (v10 & 0x1F) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)v6 + 16 * (((unsigned __int64)v8 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DxgkUnreferenceDxgResource(a2);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  }
  else
  {
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
    HMGRTABLE::FreeHandle(v6, *((_DWORD *)a2 + 4));
    DxgkUnreferenceDxgResource(a2);
    *((_QWORD *)Current + 27) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
    KeLeaveCriticalRegion();
  }
  v11 = 0;
  if ( a3 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)a3 + 3)) )
  {
    v11 = 1;
    if ( *((_BYTE *)a3 + 80) )
      COREACCESS::Release((struct _KTHREAD ***)a3 + 5);
    COREACCESS::Release((struct _KTHREAD ***)a3 + 1);
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)a2 + 9);
  if ( v11 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)a3 + 1);
    if ( *((_BYTE *)a3 + 80) )
      COREACCESS::AcquireShared((DXGADAPTER **)a3 + 5);
  }
  LOBYTE(v12) = EvaluateCurrentState((int **)&g_Feature_645437753_58376215_FeatureDescriptorDetails);
  if ( v12 )
    DXGPROCESS::FreeResourceHandleNoRefSafe(Current, *((_DWORD *)a2 + 4));
}
