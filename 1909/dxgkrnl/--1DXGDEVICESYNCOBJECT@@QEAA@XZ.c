/*
 * XREFs of ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00F6204
 * Callers:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000CABC (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00F426C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 * Callees:
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C000757C (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C00F47D4 (-RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00F5EF8 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00F8D70 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9E80 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C021A508 (-UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C022478C (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(DXGDEVICESYNCOBJECT *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *v6; // rsi
  DXGPUSHLOCK *v7; // rbx
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  struct DXGSYNCOBJECT *v15; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct DXGGLOBAL *v21; // rax
  _BYTE v22[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v23; // [rsp+28h] [rbp-20h]
  int v24; // [rsp+30h] [rbp-18h]

  if ( (*((_BYTE *)this + 92) & 2) != 0 )
    DXGDEVICE::RemoveDeviceSyncObjectFromList(*((DXGDEVICE **)this + 2), (struct DXGDEVICESYNCOBJECT ***)this);
  DXGDEVICESYNCOBJECT::DestroyCoreState(this);
  if ( *((_DWORD *)this + 10) )
  {
    Current = DXGPROCESS::GetCurrent();
    v6 = Current;
    v7 = (struct DXGPROCESS *)((char *)Current + 184);
    v23 = (char *)Current + 184;
    if ( Current != (struct DXGPROCESS *)-184LL )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)Current + 24) == CurrentThread )
      {
        v17 = WdLogNewEntry5_WdAssertion(v5, CurrentThread);
        *(_QWORD *)(v17 + 24) = 1449LL;
        WdLogEvent5_WdAssertion(v17);
      }
    }
    DXGPUSHLOCK::AcquireExclusive(v7);
    v9 = *((_DWORD *)this + 10);
    v24 = 2;
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)v6 + 208), v9);
    *((_DWORD *)this + 10) = 0;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  }
  if ( *((_QWORD *)this + 7) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 4) + 277LL) )
    {
      DXGDEVICESYNCOBJECT::UnmapCpuVaForParavirtualization(this);
    }
    else
    {
      v10 = *((_QWORD *)this + 2);
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 40) + 72LL);
      if ( v11 )
        v12 = *(_QWORD *)(v11 + 8);
      else
        v12 = 0LL;
      v13 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 544LL);
      MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
      (*(void (__fastcall **)(__int64, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(v13 + 8) + 952LL))(
        v12,
        MonitoredFenceStorage);
    }
  }
  v15 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 4);
  if ( v15 )
  {
    Global = DXGGLOBAL::GetGlobal(v3, v2);
    DXGGLOBAL::DestroySyncObject(Global, v15, 0);
  }
  if ( *((_DWORD *)this + 11) )
  {
    v18 = *((_DWORD *)DXGPROCESS::GetCurrent() + 92);
    v21 = DXGGLOBAL::GetGlobal(v20, v19);
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(
      *((DXG_GUEST_GLOBAL_VMBUS **)v21 + 164),
      v18,
      *((_DWORD *)this + 11));
  }
  *((_QWORD *)this + 2) = 0LL;
}
