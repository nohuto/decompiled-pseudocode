/*
 * XREFs of ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C008FE2C
 * Callers:
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C008FCA0 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0090050 (-_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0012020 (WPP_IFR_SF_qqLL.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0015668 (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxWakeInterruptMachine::ProcessEventInner(FxWakeInterruptMachine *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v4; // al
  unsigned __int8 m_QueueHead; // dl
  FxWakeInterruptEvents _a4; // ebp
  __int64 _a3; // r9
  int v8; // eax
  unsigned int TargetStatesCount; // r8d
  const FxWakeInterruptTargetState *TargetStates; // rdx
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // r8
  int WakeInterruptState; // edi
  FxPkgPnp *v16; // rcx
  FxDeviceBase *v17; // r10
  _FX_DRIVER_GLOBALS *v18; // rcx
  const void *v19; // r8
  __int64 m_HistoryIndex; // r8
  FxWakeInterruptStates (__fastcall *StateFunc)(FxWakeInterruptMachine *); // rax
  KIRQL v22; // r9

  p_m_Lock = &this->m_QueueLock.m_Lock;
  while ( 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    m_QueueHead = this->m_QueueHead;
    if ( this->m_QueueHead == this->m_QueueTail )
      break;
    _a4 = this->m_Queue[m_QueueHead];
    this->m_QueueHead = ((unsigned int)m_QueueHead + 1) % this->m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v4);
    _a3 = this->m_CurrentState;
    v8 = 0;
    TargetStatesCount = FxWakeInterruptMachine::m_StateTable[_a3 - 1].TargetStatesCount;
    if ( !TargetStatesCount )
      goto LABEL_7;
    TargetStates = FxWakeInterruptMachine::m_StateTable[_a3 - 1].TargetStates;
    while ( TargetStates[v8].WakeInterruptEvent != _a4 )
    {
      if ( ++v8 >= TargetStatesCount )
        goto LABEL_7;
    }
    WakeInterruptState = TargetStates[v8].WakeInterruptState;
    if ( WakeInterruptState == 10 )
    {
LABEL_7:
      m_PkgPnp = this->m_PkgPnp;
      m_DeviceBase = m_PkgPnp->m_DeviceBase;
      m_Globals = m_PkgPnp->m_Globals;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qqLL(
        m_Globals,
        4u,
        0xCu,
        0xBu,
        WPP_WakeInterruptStateMachine_cpp_Traceguids,
        _a1,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a3,
        _a4);
    }
    else
    {
      do
      {
        v16 = this->m_PkgPnp;
        v17 = v16->m_DeviceBase;
        v18 = v16->m_Globals;
        v19 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v17->m_ObjectSize )
          v19 = 0LL;
        WPP_IFR_SF_qqLL(
          v18,
          4u,
          0x15u,
          0xCu,
          WPP_WakeInterruptStateMachine_cpp_Traceguids,
          v19,
          v17->m_DeviceObject.m_DeviceObject,
          WakeInterruptState,
          this->m_CurrentState);
        m_HistoryIndex = this->m_HistoryIndex;
        this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_QueueDepth;
        this->m_States.History[m_HistoryIndex] = WakeInterruptState;
        this->m_CurrentState = WakeInterruptState;
        StateFunc = FxWakeInterruptMachine::m_StateTable[(unsigned __int8)WakeInterruptState - 1].StateFunc;
        if ( StateFunc )
          WakeInterruptState = StateFunc(this);
        else
          WakeInterruptState = 10;
      }
      while ( WakeInterruptState != 10 );
    }
  }
  FxEventQueue::GetFinishedState(this, Info);
  KeReleaseSpinLock(p_m_Lock, v22);
}
