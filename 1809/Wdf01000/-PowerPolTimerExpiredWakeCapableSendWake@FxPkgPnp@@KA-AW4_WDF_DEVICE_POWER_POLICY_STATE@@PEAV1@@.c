/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableSendWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008A840
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?PowerPolicySendWaitWakeRequest@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x1C008B224 (-PowerPolicySendWaitWakeRequest@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableSendWake(FxPkgPnp *This)
{
  int _a1; // eax

  This->m_WakeInterruptsKeepConnected = 1;
  _a1 = FxPkgPnp::PowerPolicySendWaitWakeRequest(This, PowerSystemWorking);
  if ( _a1 >= 0 )
    return 1433LL;
  WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x1Fu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
  return 1337LL;
}
