/*
 * XREFs of ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C00178E0
 * Callers:
 *     ?PowerGotoDNotZero@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010090 (-PowerGotoDNotZero@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010490 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C0018F9C (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C007C6D8 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C007D74C (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007FF60 (-PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00802D0 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerInitialSelfManagedIoFailedStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080960 (-PowerInitialSelfManagedIoFailedStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080ED0 (-PowerStartSelfManagedIoFailedStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedStartedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080F00 (-PowerStartSelfManagedIoFailedStartedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080F30 (-PowerStartSelfManagedIoNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0011A10 (WPP_IFR_SF_qqLL.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::ProcessEvent(
        FxSelfManagedIoMachine *this,
        FxSelfManagedIoEvents Event,
        FxCxCallbackProgress *Progress)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rsi
  unsigned int _a3; // edi
  __int64 m_CurrentState; // rdx
  int v9; // eax
  unsigned int TargetStatesCount; // r8d
  const FxSelfManagedIoTargetState *TargetStates; // rdx
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // r8
  char v16; // al
  FxSelfManagedIoStates (__fastcall *StateFunc)(FxSelfManagedIoMachine *, int *, FxCxCallbackProgress *); // rax
  int status; // [rsp+88h] [rbp+10h] BYREF

  p_m_StateMachineLock = &this->m_StateMachineLock;
  KeEnterCriticalRegion();
  if ( KeWaitForSingleObject(p_m_StateMachineLock, Executive, 0, 0, 0LL) == 258 )
    KeLeaveCriticalRegion();
  else
    p_m_StateMachineLock->m_OwningThread = KeGetCurrentThread();
  _a3 = 15;
  this->m_Events.History[this->m_EventHistoryIndex] = Event;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  m_CurrentState = this->m_CurrentState;
  if ( Progress )
    *Progress = FxCxCallbackProgressInitialized;
  v9 = 0;
  TargetStatesCount = FxSelfManagedIoMachine::m_StateTable[m_CurrentState - 1].TargetStatesCount;
  if ( TargetStatesCount )
  {
    TargetStates = FxSelfManagedIoMachine::m_StateTable[m_CurrentState - 1].TargetStates;
    while ( TargetStates[v9].SelfManagedIoEvent != Event )
    {
      if ( ++v9 >= TargetStatesCount )
        goto LABEL_9;
    }
    _a3 = TargetStates[v9].SelfManagedIoState;
  }
LABEL_9:
  status = 0;
  while ( _a3 != 15 )
  {
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
      0xCu,
      WPP_SelfManagedIoStateMachine_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a3,
      this->m_CurrentState);
    this->m_States.History[this->m_StateHistoryIndex] = _a3;
    v16 = this->m_StateHistoryIndex + 1;
    this->m_CurrentState = _a3;
    this->m_StateHistoryIndex = v16 & 7;
    StateFunc = FxSelfManagedIoMachine::m_StateTable[(unsigned __int8)_a3 - 1].StateFunc;
    if ( StateFunc )
      _a3 = StateFunc(this, &status, Progress);
    else
      _a3 = 15;
  }
  p_m_StateMachineLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_StateMachineLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)status;
}
