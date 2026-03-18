/*
 * XREFs of ?FreezeIdleTimeoutManagementStatus@IdleTimeoutManagement@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C008A2BC
 * Callers:
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B130 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall IdleTimeoutManagement::FreezeIdleTimeoutManagementStatus(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals)
{
  volatile int m_IdleTimeoutStatus; // r8d
  int v4; // ebx
  __int64 v5; // rsi
  const void *v6; // rdi
  const void *_a1; // rcx

  m_IdleTimeoutStatus = this->m_IdleTimeoutStatus;
  v4 = this->m_IdleTimeoutStatus | 1;
  v5 = *(_QWORD *)(*(_QWORD *)&this[-3].m_IdleTimeoutStatus + 96LL);
  v6 = (const void *)(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( _InterlockedExchange(&this->m_IdleTimeoutStatus, v4) != m_IdleTimeoutStatus )
  {
    _a1 = (const void *)(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(v5 + 10) )
      _a1 = 0LL;
    WPP_IFR_SF_qq(
      DriverGlobals,
      3u,
      0xCu,
      0xCu,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      *(const void **)(v5 + 144));
    FxVerifierDbgBreakPoint(DriverGlobals);
  }
  if ( (v4 & 4) != 0 && WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject && (v4 & 2) == 0 )
  {
    if ( !*(_WORD *)(v5 + 10) )
      v6 = 0LL;
    WPP_IFR_SF_qq(
      DriverGlobals,
      3u,
      0xCu,
      0xDu,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      v6,
      *(const void **)(v5 + 144));
    FxVerifierDbgBreakPoint(DriverGlobals);
  }
}
