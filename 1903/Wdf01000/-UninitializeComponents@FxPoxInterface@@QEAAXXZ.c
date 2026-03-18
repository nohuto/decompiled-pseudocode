/*
 * XREFs of ?UninitializeComponents@FxPoxInterface@@QEAAXXZ @ 0x1C0090FD8
 * Callers:
 *     ?PowerPolStoppedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B1E0 (-PowerPolStoppedRemoving@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C001569C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C0090D68 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 */

void __fastcall FxPoxInterface::UninitializeComponents(FxPoxInterface *this)
{
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  unsigned __int64 v3; // r9
  void (__fastcall *EvtDeviceWdmPrePoFxUnregisterDevice)(WDFDEVICE__ *, POHANDLE__ *); // rax
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // r8
  unsigned __int64 v7; // rcx

  if ( (this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
  {
    PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(this);
    if ( PowerFrameworkSettings )
    {
      EvtDeviceWdmPrePoFxUnregisterDevice = PowerFrameworkSettings->EvtDeviceWdmPrePoFxUnregisterDevice;
      if ( EvtDeviceWdmPrePoFxUnregisterDevice )
      {
        m_DeviceBase = this->m_PkgPnp->m_DeviceBase;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        v7 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !m_ObjectSize )
          v7 = v3;
        EvtDeviceWdmPrePoFxUnregisterDevice((WDFDEVICE__ *)v7, this->m_PoHandle);
      }
    }
    PoFxUnregisterDevice(this->m_PoHandle);
    FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, DprEventUnregisteredWithPox);
  }
}
