/*
 * XREFs of ?PowerPolSystemAsleepNoWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0017D30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qdd @ 0x1C003DAD8 (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemAsleepNoWake(FxPkgPnp *This)
{
  _IRP *_a1; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  _a1 = This->m_PendingSystemPowerIrp;
  m_Globals = This->m_Globals;
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
  This->m_PendingSystemPowerIrp = 0LL;
  _a1->IoStatus.Status = 0;
  PoStartNextPowerIrp(_a1);
  IofCompleteRequest(_a1, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&This->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], _a1, 0x20u);
  return 1467LL;
}
