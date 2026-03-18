/*
 * XREFs of ?PowerPolSystemSleepNeedWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008A2C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C0016E74 (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C0019C30 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemSleepNeedWake(FxPkgPnp *This)
{
  int _a1; // eax

  FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  _a1 = FxPkgPnp::PowerPolicySendDevicePowerRequest(This, (POWER_STATE)1, Retry);
  if ( _a1 >= 0 )
    return 1433LL;
  WPP_IFR_SF_d(This->m_Globals, 3u, 0xCu, 0x16u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
  return 1324LL;
}
