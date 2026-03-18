/*
 * XREFs of ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C00108DC
 * Callers:
 *     ?PowerGotoDNotZero@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010680 (-PowerGotoDNotZero@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0077F1C (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005CD60 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 */

void __fastcall FxIoQueue::StartPowerTransitionOff(FxIoQueue *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int16 v4; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *v6; // rdi
  FxVerifierLock *v7; // rcx
  const void *_a1; // rax
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  if ( this->m_PowerManaged )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v7 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v7, &irql, a3);
    }
    else
    {
      irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    this->m_PowerState = FxIoQueuePowerStartingTransition;
    KeClearEvent(&this->m_PowerIdle.m_Event);
    if ( FxIoQueue::DispatchEvents(this, irql, 0LL, v4) )
    {
      m_Globals = this->m_Globals;
      v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( m_Globals->FxVerboseOn )
      {
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_q(this->m_Globals, 5u, 0xDu, 0x66u, WPP_FxIoQueue_cpp_Traceguids, _a1);
        m_Globals = this->m_Globals;
      }
      if ( !this->m_ObjectSize )
        v6 = 0LL;
      v10 = -10000000LL * m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec;
      while ( KeWaitForSingleObject(
                &this->m_PowerIdle,
                Executive,
                0,
                0,
                (PLARGE_INTEGER)((unsigned __int64)&v10 & -(__int64)(v10 != 0))) == 258 )
      {
        DbgPrint(
          "Thread 0x%p is %s 0x%p\n",
          KeGetCurrentThread(),
          "waiting for all threads to stop dispatching requests so that queue can be powered off, WDFQUEUE",
          v6);
        if ( m_Globals->FxVerifierDbgBreakOnError )
          DbgBreakPoint();
      }
    }
  }
}
