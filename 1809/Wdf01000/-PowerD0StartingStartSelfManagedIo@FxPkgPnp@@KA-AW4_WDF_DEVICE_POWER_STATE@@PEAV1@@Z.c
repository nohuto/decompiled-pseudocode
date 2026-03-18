/*
 * XREFs of ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007FF60
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C00178E0 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0077764 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C0080D64 (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0080E08 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0StartingStartSelfManagedIo(FxPkgPnp *This)
{
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  FxPkgIo::ResumeProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink);
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine
    && (int)FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventStart, &progress) < 0 )
  {
    return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 835 : 864;
  }
  FxPkgPnp::PowerSetDevicePowerState(This, WdfPowerDeviceD0);
  FxPkgPnp::PowerSendPowerUpEvents(This);
  return 787LL;
}
