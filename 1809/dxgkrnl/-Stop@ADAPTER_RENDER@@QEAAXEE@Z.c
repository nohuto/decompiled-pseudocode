/*
 * XREFs of ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01C7638
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01BFA94 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C00BCDC8 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C00D341C (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C00D347C (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00DC96C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C00F9388 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C0136D34 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01C66B4 (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?DdiBeginExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01C8634 (-DdiBeginExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DdiEndExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01CB208 (-DdiEndExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C01FFA58 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C0236410 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 *     DpiDetachIoMmuDomain @ 0x1C026CC90 (DpiDetachIoMmuDomain.c)
 */

void __fastcall ADAPTER_RENDER::Stop(DXGDEVICE **this, char a2, unsigned __int8 a3)
{
  unsigned __int16 v6; // bx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  DXGDEVICE *i; // rsi
  DXGDEVICE *j; // rsi
  DXGADAPTERSYNCOBJECT *k; // rsi
  DXGSHAREDRESOURCE **m; // rsi
  __int64 v13; // rcx
  struct DXGSYNCOBJECT *v14; // r12
  PERESOURCE *Global; // rax

  ADAPTER_RENDER::EnableClockCalibration((ADAPTER_RENDER *)this, 0);
  *((_BYTE *)this + 777) = a2;
  v6 = 0;
  if ( !a3 )
  {
    if ( !KeReadStateEvent((PRKEVENT)this[2] + 2) )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7);
      v8[3] = 275LL;
      v8[4] = 6LL;
      v8[5] = this[2];
      v8[6] = 0LL;
      v8[7] = 0LL;
      WdLogEvent5_WdCriticalError(v8);
    }
    ADAPTER_RENDER::FlushDeferredDestructions((PERESOURCE **)this);
  }
  for ( i = this[15]; i != (DXGDEVICE *)(this + 15) && i; i = *(DXGDEVICE **)i )
    DXGDEVICE::Stop(i, a3);
  for ( j = this[17]; j != (DXGDEVICE *)(this + 17) && j; j = *(DXGDEVICE **)j )
    DXGDEVICE::Stop(j, a3);
  if ( !a3 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 19));
    for ( k = this[24]; k != (DXGADAPTERSYNCOBJECT *)(this + 24) && k; k = *(DXGADAPTERSYNCOBJECT **)k )
      DXGADAPTERSYNCOBJECT::Stop(k);
    DXGFASTMUTEX::Release(this + 19);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 26, 0LL);
  this[27] = KeGetCurrentThread();
  for ( m = (DXGSHAREDRESOURCE **)this[28]; m != this + 28; m = (DXGSHAREDRESOURCE **)*m )
  {
    DXGSHAREDRESOURCE::DestroyCoreAllocations(m[2], 0LL, 0);
    *((_DWORD *)m[2] + 3) |= 0x10u;
    v14 = m[4];
    if ( v14 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v13);
      DXGGLOBAL::DestroySyncObject(Global, v14, 0);
      m[4] = 0LL;
    }
  }
  this[27] = 0LL;
  ExReleasePushLockExclusiveEx(this + 26, 0LL);
  KeLeaveCriticalRegion();
  if ( !a3 && !*((_BYTE *)this[2] + 185) )
  {
    ADAPTER_RENDER::FlushScheduler((__int64)this, 5, 0xFFFFFFFF, 0);
    ADAPTER_RENDER::SuspendVidMmWorkerThread((__int64)this, 1u, 0);
    ADAPTER_RENDER::ResumeVidMmWorkerThread((PERESOURCE **)this, 0, 1);
    ADAPTER_RENDER::PurgeSegments((struct _EX_RUNDOWN_REF *)this, 0, 0LL);
    ADAPTER_RENDER::FlushScheduler((__int64)this, 5, 0xFFFFFFFF, 0);
  }
  if ( *((_BYTE *)this + 1512) )
  {
    ADAPTER_RENDER::DdiBeginExclusiveAccess((ADAPTER_RENDER *)this);
    if ( *((_DWORD *)this[2] + 64) )
    {
      do
        DpiDetachIoMmuDomain(*(_QWORD *)(352LL * v6++ + *((_QWORD *)this[2] + 302) + 8));
      while ( (unsigned int)v6 < *((_DWORD *)this[2] + 64) );
    }
    ADAPTER_RENDER::DdiEndExclusiveAccess((ADAPTER_RENDER *)this);
  }
}
