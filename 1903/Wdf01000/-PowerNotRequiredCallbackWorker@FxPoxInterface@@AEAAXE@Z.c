/*
 * XREFs of ?PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C0015380
 * Callers:
 *     ?PowerPolSleeping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00151C0 (-PowerPolSleeping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?SimulateDevicePowerNotRequired@FxPoxInterface@@QEAAXXZ @ 0x1C0090FA8 (-SimulateDevicePowerNotRequired@FxPoxInterface@@QEAAXXZ.c)
 *     ?PowerNotRequiredCallback@FxPoxInterface@@CAXPEAX@Z @ 0x1C00915F0 (-PowerNotRequiredCallback@FxPoxInterface@@CAXPEAX@Z.c)
 * Callees:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C001569C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C0090D14 (-DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

void __fastcall FxPoxInterface::PowerNotRequiredCallbackWorker(
        FxPoxInterface *this,
        unsigned __int8 InvokedFromPoxCallback)
{
  KIRQL v4; // al

  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_DevicePowerRequiredLock.m_Lock);
  this->m_DevicePowerRequired = 0;
  KeReleaseSpinLock(&this->m_DevicePowerRequiredLock.m_Lock, v4);
  if ( InvokedFromPoxCallback )
    FxPoxInterface::DprProcessEventFromPoxCallback(this, DprEventPoxDoesNotRequirePower);
  else
    FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, DprEventPoxDoesNotRequirePower);
}
