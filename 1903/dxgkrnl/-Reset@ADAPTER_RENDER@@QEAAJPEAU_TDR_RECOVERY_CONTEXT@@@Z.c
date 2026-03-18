/*
 * XREFs of ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01F5D90
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01EE8A0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0122320 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C0123524 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C014535C (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0155CC4 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0156D9C (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01FC108 (-DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C023005C (-Reset@DXGDEVICE@@QEAAXXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C023EA7C (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall ADAPTER_RENDER::Reset(PERESOURCE **this, ULONG_PTR BugCheckParameter1)
{
  PERESOURCE **i; // rdx
  PERESOURCE **j; // rax
  __int64 v6; // rdx
  PERESOURCE *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  PERESOURCE *v10; // rcx
  __int64 v11; // rax
  int v12; // esi
  PERESOURCE v13; // rax
  DXGDEVICE *k; // rdi
  DXGDEVICE *v15; // rdi
  DXGDEVICE *m; // rbx

  ADAPTER_RENDER::FlushScheduler((__int64)this, 4, 0xFFFFFFFF, 0);
  ADAPTER_RENDER::DisablePinnedHardware(this);
  ADAPTER_RENDER::PurgeSegments((struct _EX_RUNDOWN_REF *)this, 0, 0LL);
  ADAPTER_RENDER::FlushScheduler((__int64)this, 4, 0xFFFFFFFF, 0);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 26, 0LL);
  this[27] = (PERESOURCE *)KeGetCurrentThread();
  for ( i = (PERESOURCE **)this[28]; i != this + 28; i = (PERESOURCE **)*i )
    *((_DWORD *)i[2] + 3) |= 0x10u;
  this[27] = 0LL;
  ExReleasePushLockExclusiveEx(this + 26, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 19));
  for ( j = (PERESOURCE **)this[24]; j != this + 24 && j; j = (PERESOURCE **)*j )
    *((_BYTE *)j + 25) = 1;
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 19);
  v7 = this[66];
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, v6);
    *(_QWORD *)(v8 + 24) = 2669LL;
    WdLogEvent5_WdAssertion(v8);
    v7 = this[66];
  }
  ((void (__fastcall *)(PERESOURCE *, __int64))this[65][1][7].OwnerTable)(v7, 1LL);
  if ( (int)ADAPTER_RENDER::DdiRestartFromTimeout((ADAPTER_RENDER *)this) < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 104) = this[2][56];
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  v10 = this[66];
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL, v9);
    *(_QWORD *)(v11 + 24) = 2686LL;
    WdLogEvent5_WdAssertion(v11);
    v10 = this[66];
  }
  v12 = (*(__int64 (__fastcall **)(PERESOURCE *, __int64))&this[65][1][7].ActiveCount)(v10, 1LL);
  v13 = this[65][1];
  if ( v12 < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 104) = *(_QWORD *)&v13[7].ActiveCount;
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  (*(void (__fastcall **)(PERESOURCE *, _QWORD))&v13[5].NumberOfSharedWaiters)(this[66], 0LL);
  ADAPTER_RENDER::RestoreFromPurgeSegments(this);
  ADAPTER_RENDER::ResumeVidMmWorkerThread(this, 1, 0);
  memset(this + 75, 0, 0x20uLL);
  this[121] = 0LL;
  this[122] = 0LL;
  for ( k = (DXGDEVICE *)this[15]; k != (DXGDEVICE *)(this + 15) && k; k = *(DXGDEVICE **)k )
    DXGDEVICE::Reset(k);
  v15 = (DXGDEVICE *)(this + 17);
  for ( m = (DXGDEVICE *)this[17]; m != v15 && m; m = *(DXGDEVICE **)m )
    DXGDEVICE::Reset(m);
  return (unsigned int)v12;
}
