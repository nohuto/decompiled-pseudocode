/*
 * XREFs of ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C008601C
 * Callers:
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0084710 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?IsCxUsingSelfManagedIo@FxDevice@@QEAAEXZ @ 0x1C0084A08 (-IsCxUsingSelfManagedIo@FxDevice@@QEAAEXZ.c)
 *     ?InitializeMachine@FxSelfManagedIoMachine@@QEAAXPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C008F590 (-InitializeMachine@FxSelfManagedIoMachine@@QEAAXPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 *     ?_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z @ 0x1C008F670 (-_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z.c)
 */

int __fastcall FxPkgPnp::RegisterCallbacks(FxPkgPnp *this, _WDF_PNPPOWER_EVENT_CALLBACKS *DispatchTable)
{
  int v2; // esi
  int result; // eax

  v2 = 0;
  this->m_DeviceD0Entry.m_Method = DispatchTable->EvtDeviceD0Entry;
  this->m_DeviceD0Entry.m_PkgPnp = this;
  this->m_DeviceD0Entry.m_CallbackType = FxCxCallbackD0Entry;
  this->m_DeviceD0Exit.m_Method = DispatchTable->EvtDeviceD0Exit;
  this->m_DeviceD0Exit.m_PkgPnp = this;
  this->m_DeviceD0Exit.m_CallbackType = FxCxCallbackD0Exit;
  this->m_DevicePrepareHardware.m_Method = DispatchTable->EvtDevicePrepareHardware;
  this->m_DevicePrepareHardware.m_PkgPnp = this;
  this->m_DevicePrepareHardware.m_CallbackType = FxCxCallbackPrepareHardware;
  this->m_DeviceReleaseHardware.m_Method = DispatchTable->EvtDeviceReleaseHardware;
  this->m_DeviceReleaseHardware.m_PkgPnp = this;
  this->m_DeviceReleaseHardware.m_CallbackType = FxCxCallbackReleaseHardware;
  this->m_DeviceSurpriseRemoval.m_Method = DispatchTable->EvtDeviceSurpriseRemoval;
  this->m_DeviceSurpriseRemoval.m_PkgPnp = this;
  this->m_DeviceSurpriseRemoval.m_CallbackType = FxCxCallbackSurpriseRemoval;
  this->m_DeviceD0EntryPostInterruptsEnabled.m_Method = DispatchTable->EvtDeviceD0EntryPostInterruptsEnabled;
  this->m_DeviceD0ExitPreInterruptsDisabled.m_Method = DispatchTable->EvtDeviceD0ExitPreInterruptsDisabled;
  this->m_DeviceQueryStop.m_Method = DispatchTable->EvtDeviceQueryStop;
  this->m_DeviceQueryRemove.m_Method = DispatchTable->EvtDeviceQueryRemove;
  this->m_DeviceUsageNotification.m_Method = DispatchTable->EvtDeviceUsageNotification;
  this->m_DeviceUsageNotificationEx.m_Method = DispatchTable->EvtDeviceUsageNotificationEx;
  this->m_DeviceRelationsQuery.m_Method = DispatchTable->EvtDeviceRelationsQuery;
  if ( *(_OWORD *)&DispatchTable->EvtDeviceSelfManagedIoCleanup != 0LL
    || DispatchTable->EvtDeviceSelfManagedIoInit
    || DispatchTable->EvtDeviceSelfManagedIoSuspend
    || DispatchTable->EvtDeviceSelfManagedIoRestart
    || FxDevice::IsCxUsingSelfManagedIo(this->m_Device) )
  {
    result = FxSelfManagedIoMachine::_CreateAndInit(&this->m_SelfManagedIoMachine, this);
    v2 = result;
    if ( result < 0 )
      return result;
    FxSelfManagedIoMachine::InitializeMachine(this->m_SelfManagedIoMachine, DispatchTable);
  }
  return v2;
}
