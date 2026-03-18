/*
 * XREFs of ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00DC48C
 * Callers:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0035970 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C00EE58C (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C00EFFF8 (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C01143A0 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00DC7E8 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00DC96C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00FE560 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C012C820 (-RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z.c)
 *     ?UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C01EA540 (-UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C01F43EC (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(DXGDEVICESYNCOBJECT *this)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v4; // rsi
  char *v5; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rcx
  const GUID *v8; // r8
  unsigned int v9; // edx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGSYNCOBJECT *v13; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  struct DXGGLOBAL *v20; // rax
  _BYTE v21[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v22; // [rsp+28h] [rbp-20h]
  int v23; // [rsp+30h] [rbp-18h]

  if ( (*((_BYTE *)this + 92) & 2) != 0 )
    DXGDEVICE::RemoveDeviceSyncObjectFromList(*((DXGDEVICE **)this + 2), this);
  DXGDEVICESYNCOBJECT::DestroyCoreState(this);
  if ( *((_DWORD *)this + 10) )
  {
    Current = DXGPROCESS::GetCurrent();
    v4 = Current;
    v5 = (char *)Current + 208;
    v22 = (char *)Current + 208;
    if ( Current != (struct DXGPROCESS *)-208LL )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)Current + 27) == CurrentThread )
      {
        v15 = WdLogNewEntry5_WdAssertion(CurrentThread);
        *(_QWORD *)(v15 + 24) = 1309LL;
        WdLogEvent5_WdAssertion(v15);
      }
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v16 = *((_DWORD *)v5 + 4);
        if ( v16 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v7, &EventBlockThread, v8, v16);
      }
      ExAcquirePushLockExclusiveEx(v5, 0LL);
    }
    *((_QWORD *)v5 + 1) = KeGetCurrentThread();
    v9 = *((_DWORD *)this + 10);
    v23 = 2;
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)v4 + 232), v9);
    *((_DWORD *)this + 10) = 0;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  }
  if ( *((_QWORD *)this + 7) )
  {
    v10 = *((_QWORD *)this + 4);
    if ( *(_BYTE *)(v10 + 253) )
    {
      DXGDEVICESYNCOBJECT::UnmapCpuVaForParavirtualization(this);
    }
    else
    {
      if ( (unsigned int)(*(_DWORD *)(v10 + 168) - 5) > 1 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v2);
        *(_QWORD *)(v17 + 24) = 374LL;
        WdLogEvent5_WdAssertion(v17);
      }
      v11 = *((_QWORD *)this + 2);
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 40) + 72LL);
      if ( v12 )
        v12 = *(_QWORD *)(v12 + 8);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 544LL) + 8LL) + 952LL))(
        v12,
        v10 + 120);
    }
  }
  v13 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 4);
  if ( v13 )
  {
    Global = DXGGLOBAL::GetGlobal(v2);
    DXGGLOBAL::DestroySyncObject(Global, v13, 0);
  }
  if ( *((_DWORD *)this + 11) )
  {
    v18 = *((_DWORD *)DXGPROCESS::GetCurrent() + 98);
    v20 = DXGGLOBAL::GetGlobal(v19);
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(
      *((DXG_GUEST_GLOBAL_VMBUS **)v20 + 168),
      v18,
      *((_DWORD *)this + 11));
  }
  *((_QWORD *)this + 2) = 0LL;
}
