/*
 * XREFs of ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C007939C
 * Callers:
 *     imp_WdfIoQueueStopAndPurgeSynchronously @ 0x1C00768F0 (imp_WdfIoQueueStopAndPurgeSynchronously.c)
 *     imp_WdfIoQueueStopSynchronously @ 0x1C0076950 (imp_WdfIoQueueStopSynchronously.c)
 * Callees:
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016744 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     WPP_IFR_SF_dq @ 0x1C00307D4 (WPP_IFR_SF_dq.c)
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C0058E94 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueIdleSynchronously(FxIoQueue *this, unsigned __int8 CancelRequests)
{
  int v4; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v6; // rbx
  const void *_a2; // rdx
  MxEvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  eventOnStack.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event, NotificationEvent, 0);
  eventOnStack.m_DbgFlagIsInitialized = 1;
  v4 = FxIoQueue::QueueIdle(this, CancelRequests, FxIoQueue::_PurgeComplete, &eventOnStack);
  if ( v4 >= 0 )
  {
    m_Globals = this->m_Globals;
    v6 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_dq(m_Globals, 5u, 0xDu, 0x45u, WPP_FxIoQueue_cpp_Traceguids, this->m_DriverIoCount, _a2);
    }
    KeEnterCriticalRegion();
    if ( !this->m_ObjectSize )
      v6 = 0LL;
    _FX_DRIVER_GLOBALS::WaitForSignal(
      this->m_Globals,
      &eventOnStack,
      "waiting for queue to stop, WDFQUEUE",
      v6,
      this->m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec,
      1);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v4;
}
