/*
 * XREFs of ?FreezeIdleTimeoutManagementStatus@IdleTimeoutManagement@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0089144
 * Callers:
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0089E10 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall IdleTimeoutManagement::FreezeIdleTimeoutManagementStatus(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals)
{
  volatile int m_IdleTimeoutStatus; // r8d
  int v4; // ebx
  void (__fastcall *ComponentIdleConditionCallback)(void *, unsigned int); // rsi
  const void *v6; // rdi
  const void *_a1; // rcx

  m_IdleTimeoutStatus = this->m_IdleTimeoutStatus;
  v4 = this->m_IdleTimeoutStatus | 1;
  ComponentIdleConditionCallback = this[-5].m_PoxSettings[1].ComponentIdleConditionCallback;
  v6 = (const void *)((unsigned __int64)ComponentIdleConditionCallback ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( _InterlockedExchange(&this->m_IdleTimeoutStatus, v4) != m_IdleTimeoutStatus )
  {
    _a1 = (const void *)((unsigned __int64)ComponentIdleConditionCallback ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*((_WORD *)ComponentIdleConditionCallback + 5) )
      _a1 = 0LL;
    WPP_IFR_SF_qq(
      DriverGlobals,
      3u,
      0xCu,
      0xCu,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      *((const void **)ComponentIdleConditionCallback + 18));
    FxVerifierDbgBreakPoint(DriverGlobals);
  }
  if ( (v4 & 4) != 0 && WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject && (v4 & 2) == 0 )
  {
    if ( !*((_WORD *)ComponentIdleConditionCallback + 5) )
      v6 = 0LL;
    WPP_IFR_SF_qq(
      DriverGlobals,
      3u,
      0xCu,
      0xDu,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      v6,
      *((const void **)ComponentIdleConditionCallback + 18));
    FxVerifierDbgBreakPoint(DriverGlobals);
  }
}
