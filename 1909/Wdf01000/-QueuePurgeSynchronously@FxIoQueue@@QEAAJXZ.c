/*
 * XREFs of ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C0079D58
 * Callers:
 *     imp_WdfIoQueuePurgeSynchronously @ 0x1C0076D60 (imp_WdfIoQueuePurgeSynchronously.c)
 * Callees:
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016C70 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     WPP_IFR_SF_dq @ 0x1C002FBFC (WPP_IFR_SF_dq.c)
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C0058A34 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 */

__int64 __fastcall FxIoQueue::QueuePurgeSynchronously(FxIoQueue *this)
{
  int v2; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v4; // rbx
  const void *_a2; // r8
  MxEvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  eventOnStack.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event, NotificationEvent, 0);
  eventOnStack.m_DbgFlagIsInitialized = 1;
  v2 = FxIoQueue::QueuePurge(this, 1u, 1u, FxIoQueue::_PurgeComplete, &eventOnStack);
  if ( v2 >= 0 )
  {
    m_Globals = this->m_Globals;
    v4 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_dq(
        m_Globals,
        5u,
        0xDu,
        0x4Bu,
        WPP_FxIoQueue_cpp_Traceguids,
        this->m_Queue.m_RequestCount + this->m_DriverIoCount,
        _a2);
    }
    KeEnterCriticalRegion();
    if ( !this->m_ObjectSize )
      v4 = 0LL;
    _FX_DRIVER_GLOBALS::WaitForSignal(
      this->m_Globals,
      &eventOnStack,
      "waiting for queue to purge, WDFQUEUE",
      v4,
      this->m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec,
      1);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v2;
}
