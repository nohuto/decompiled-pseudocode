/*
 * XREFs of ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0011B20
 * Callers:
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010490 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0011C80 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C0012AE0 (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerPolStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0012DD0 (-PowerPolStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C0019C30 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 *     ?_PowerTimeoutDpcRoutine@FxPowerIdleMachine@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C0019CF0 (-_PowerTimeoutDpcRoutine@FxPowerIdleMachine@@KAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?EnableTimer@FxPowerIdleMachine@@QEAAXXZ @ 0x1C001A1B0 (-EnableTimer@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x1C008682C (-ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?Start@FxPowerIdleMachine@@QEAAXXZ @ 0x1C00868F4 (-Start@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?Stop@FxPowerIdleMachine@@QEAAXXZ @ 0x1C008699C (-Stop@FxPowerIdleMachine@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0011A10 (WPP_IFR_SF_qqLL.c)
 */

void __fastcall FxPowerIdleMachine::ProcessEventLocked(FxPowerIdleMachine *this, FxPowerIdleEvents Event)
{
  _SINGLE_LIST_ENTRY *Next; // rbp
  __int64 m_CurrentIdleState; // r11
  __int64 v6; // rdx
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  __int64 v9; // rdx
  FxPowerIdleStates _a3; // edi
  _SINGLE_LIST_ENTRY *v11; // rcx
  const void *_a1; // rdx
  char v13; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  _SINGLE_LIST_ENTRY *v15; // r8
  const void *v16; // rdx

  Next = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
  this->m_EventHistory[this->m_EventHistoryIndex] = Event;
  m_CurrentIdleState = this->m_CurrentIdleState;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  v6 = 24 * m_CurrentIdleState - 24;
  v7 = 0;
  v8 = *(unsigned int *)((char *)&FxPowerIdleMachine::m_StateTable[0].TargetStatesCount + v6);
  if ( !v8 )
    goto $LN68_0;
  v9 = *(__int64 *)((char *)&FxPowerIdleMachine::m_StateTable[0].TargetStates + v6);
  while ( *(_DWORD *)(v9 + 8LL * v7) != Event )
  {
    if ( ++v7 >= v8 )
      goto $LN68_0;
  }
  _a3 = *(_DWORD *)(v9 + 8LL * v7 + 4);
  if ( _a3 == FxIdleMax )
  {
$LN68_0:
    if ( Event == PowerIdleEventEnabled )
    {
      if ( (this->m_Flags & 1) != 0 )
        return;
    }
    else if ( Event == PowerIdleEventIoDecrement || Event == PowerIdleEventIoIncrement )
    {
      return;
    }
    v15 = Next[12].Next;
    v16 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !WORD1(v15[1].Next) )
      v16 = 0LL;
    WPP_IFR_SF_qqLL(
      (_FX_DRIVER_GLOBALS *)Next[2].Next,
      4u,
      0xCu,
      0x10u,
      WPP_PowerIdleStateMachine_cpp_Traceguids,
      v16,
      v15[18].Next,
      m_CurrentIdleState,
      Event);
  }
  else
  {
    do
    {
      v11 = Next[12].Next;
      _a1 = 0LL;
      if ( WORD1(v11[1].Next) )
        _a1 = (const void *)((unsigned __int64)Next[12].Next ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qqLL(
        (_FX_DRIVER_GLOBALS *)Next[2].Next,
        4u,
        0x15u,
        0x11u,
        WPP_PowerIdleStateMachine_cpp_Traceguids,
        _a1,
        v11[18].Next,
        _a3,
        this->m_CurrentIdleState);
      this->m_StateHistory[this->m_StateHistoryIndex] = _a3;
      v13 = this->m_StateHistoryIndex + 1;
      this->m_CurrentIdleState = _a3;
      this->m_StateHistoryIndex = v13 & 7;
      StateFunc = FxPowerIdleMachine::m_StateTable[_a3 - 1].StateFunc;
      if ( !StateFunc )
        break;
      _a3 = StateFunc(this);
    }
    while ( _a3 != FxIdleMax );
  }
}
