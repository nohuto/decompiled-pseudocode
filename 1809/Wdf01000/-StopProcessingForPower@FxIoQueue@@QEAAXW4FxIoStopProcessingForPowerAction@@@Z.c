/*
 * XREFs of ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C00101EC
 * Callers:
 *     ?PowerGotoDNotZero@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010090 (-PowerGotoDNotZero@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0018FF4 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016430 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C0016A00 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 */

void __fastcall FxIoQueue::StopProcessingForPower(
        FxIoQueue *this,
        FxIoStopProcessingForPowerAction Action,
        unsigned __int8 a3)
{
  int v4; // edx
  unsigned __int16 v5; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  const void *v7; // rsi
  int v8; // edx
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // r8
  FxVerifierLock *v11; // rcx
  const void *_a1; // rax
  unsigned __int8 irql; // [rsp+68h] [rbp+38h] BYREF
  __int64 v14; // [rsp+70h] [rbp+40h] BYREF

  v4 = Action - 1;
  if ( v4 )
  {
    v8 = v4 - 1;
    if ( v8 )
    {
      if ( v8 != 1 || this->m_PowerManaged == 1 )
        return;
    }
    else if ( !this->m_PowerManaged )
    {
      return;
    }
    FxNonPagedObject::Lock(this, &irql, a3);
    FxIoQueue::SetState(this, FxIoQueueSetShutdown|0x2);
    FxNonPagedObject::Unlock(this, irql, v9);
    FxIoQueue::QueuePurge(this, 1u, 1u, 0LL, 0LL);
    FxNonPagedObject::Lock(this, &irql, v10);
    this->m_PowerState = FxIoQueuePowerPurge;
  }
  else
  {
    if ( !this->m_PowerManaged )
      return;
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v11 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v11, &irql, a3);
    }
    else
    {
      irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    this->m_PowerState = FxIoQueuePowerStopping;
  }
  KeClearEvent(&this->m_PowerIdle.m_Event);
  if ( FxIoQueue::DispatchEvents(this, irql, 0LL, v5) )
  {
    m_Globals = this->m_Globals;
    v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( m_Globals->FxVerboseOn )
    {
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(this->m_Globals, 5u, 0xDu, 0x67u, WPP_FxIoQueue_cpp_Traceguids, _a1);
      m_Globals = this->m_Globals;
    }
    if ( !this->m_ObjectSize )
      v7 = 0LL;
    v14 = -10000000LL * m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec;
    while ( KeWaitForSingleObject(
              &this->m_PowerIdle,
              Executive,
              0,
              0,
              (PLARGE_INTEGER)((unsigned __int64)&v14 & -(__int64)(v14 != 0))) == 258 )
    {
      DbgPrint(
        "Thread 0x%p is %s 0x%p\n",
        KeGetCurrentThread(),
        "waiting for all inflight requests to be acknowledged on WDFQUEUE",
        v7);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
    }
  }
}
