/*
 * XREFs of ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0081C30
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C001772C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0077DA4 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C0081A64 (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0081B08 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerStartSelfManagedIoNP(FxPkgPnp *This)
{
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  __int64 v4; // rdx
  unsigned __int8 v5; // r8
  __int64 v6; // rdx
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  FxPkgIo::ResumeProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink);
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine
    && (int)FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventStart, &progress) < 0 )
  {
    return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 33582 : 33634;
  }
  FxPkgPnp::PowerSetDevicePowerState(This, (POWER_STATE)1);
  FxPkgPnp::PowerSendPowerUpEvents(This, v4, v5);
  LOBYTE(v6) = 1;
  This->PowerReleasePendingDeviceIrp(This, v6);
  return This->m_SharedPower.m_WaitWakeOwner != 0 ? 33546 : 33544;
}
