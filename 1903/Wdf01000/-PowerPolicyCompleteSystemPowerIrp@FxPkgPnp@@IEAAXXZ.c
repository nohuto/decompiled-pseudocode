/*
 * XREFs of ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C008C600
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011710 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerPolSleepingWakePowerDownFailedWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008A990 (-PowerPolSleepingWakePowerDownFailedWakeCanceled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@.c)
 *     ?PowerPolPowerUpForSystemSleepNotSeen@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008A9B0 (-PowerPolPowerUpForSystemSleepNotSeen@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008AB70 (-PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemAsleepWakeArmedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B600 (-PowerPolSystemAsleepWakeArmedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qdd @ 0x1C003DAD8 (WPP_IFR_SF_qdd.c)
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C00838BC (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(FxPkgPnp *this)
{
  _IRP *_a1; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxIrp irp; // [rsp+50h] [rbp+8h] BYREF

  _a1 = this->m_PendingSystemPowerIrp;
  irp.m_Irp = _a1;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qdd(
      m_Globals,
      5u,
      0xCu,
      0x26u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      _a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 1,
      0);
  this->m_PendingSystemPowerIrp = 0LL;
  FxPkgPnp::CompletePowerRequest(this, &irp, 0);
}
