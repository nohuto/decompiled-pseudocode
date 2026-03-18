/*
 * XREFs of ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C00B1870 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F0408 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F3E74 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C00F7BA0 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F8394 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C010D030 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C011FB7C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0120BCC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C013B504 (-DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C01DCFE0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x1C01E73D0 (-DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C01FDC5C (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C02246A8 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C022489C (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C023C39C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C0245DE4 (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0101F10 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C013C7E8 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01F4264 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 */

void __fastcall DXGDEVICE::DestroyAllocationInternal(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        struct COREDEVICEACCESS *a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v8; // r14
  __int64 v10; // rcx
  unsigned int v11; // r15d
  __int64 v12; // rax
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F v13; // ebx
  __int64 v14; // r13
  unsigned int v15; // edi
  struct DXGPROCESS *Current; // rax
  struct DXGALLOCATION **v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  struct DXGALLOCATION *v20; // rdi
  struct DXGRESOURCE *v21; // rbp
  struct COREDEVICEACCESS *v22; // r14
  _QWORD *v23; // rax
  struct DXGALLOCATION *v24; // r9
  struct COREDEVICEACCESS *v25; // rbp
  _QWORD *v26; // rax
  struct DXGALLOCATION *v27; // r9
  struct DXGALLOCATION *v28; // [rsp+70h] [rbp+8h] BYREF

  v8 = a2;
  v11 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v12 + 24) = 6256LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  v13 = a6.0;
  v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_BYTE *)(v14 + 185) )
  {
    if ( a4 )
      v11 = *((_DWORD *)a4 + 5);
    v15 = *((_DWORD *)this + 84);
    Current = DXGPROCESS::GetCurrent();
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
      (DXG_GUEST_VIRTUALGPU_VMBUS *)(v14 + 4152),
      *((_DWORD *)Current + 98),
      v15,
      v11,
      v8,
      a3,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v13);
    if ( a4 )
      *((_DWORD *)a4 + 5) = 0;
    if ( (_DWORD)v8 )
    {
      v17 = a3;
      v18 = v8;
      do
      {
        v19 = (__int64)*v17++;
        *(_DWORD *)(v19 + 96) = 0;
        --v18;
      }
      while ( v18 );
    }
  }
  if ( a4 )
  {
    DXGDEVICE::TerminateAllocations(
      this,
      a4,
      1,
      *((struct DXGALLOCATION **)a4 + 3),
      a5,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v13);
  }
  else
  {
    v28 = 0LL;
    DXGDEVICE::RemoveAllocationsAndTransferToList(this, a3, v8, &v28);
    v20 = v28;
    if ( v28 )
    {
      v21 = (struct DXGRESOURCE *)*((_QWORD *)v28 + 5);
      if ( v21 )
      {
        v22 = a5;
        do
        {
          v23 = (_QWORD *)((char *)v20 + 64);
          v24 = v20;
          v20 = (struct DXGALLOCATION *)*((_QWORD *)v20 + 8);
          *v23 = 0LL;
          DXGDEVICE::TerminateAllocations(this, v21, 0, v24, v22, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v13);
        }
        while ( v20 );
      }
      else
      {
        v25 = a5;
        do
        {
          v26 = (_QWORD *)((char *)v20 + 64);
          v27 = v20;
          v20 = (struct DXGALLOCATION *)*((_QWORD *)v20 + 8);
          *v26 = 0LL;
          DXGDEVICE::TerminateAllocations(this, 0LL, 0, v27, v25, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v13);
        }
        while ( v20 );
      }
    }
  }
}
