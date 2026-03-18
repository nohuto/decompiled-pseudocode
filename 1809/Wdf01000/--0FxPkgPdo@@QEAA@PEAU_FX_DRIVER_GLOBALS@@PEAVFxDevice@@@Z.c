/*
 * XREFs of ??0FxPkgPdo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C007B2C0
 * Callers:
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0052924 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C00815E8 (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 */

void __fastcall FxPkgPdo::FxPkgPdo(FxPkgPdo *this, _FX_DRIVER_GLOBALS *FxDriverGlobals, FxDevice *Device)
{
  FxPkgPnp::FxPkgPnp(this, FxDriverGlobals, Device, 0x1102u);
  this->__vftable = (FxPkgPdo_vtbl *)FxPkgPdo::`vftable';
  this->m_DeviceResourcesQuery.m_Method = 0LL;
  this->m_DeviceResourceRequirementsQuery.m_Method = 0LL;
  this->m_DeviceEject.m_Method = 0LL;
  this->m_DeviceSetLock.m_Method = 0LL;
  this->m_DeviceEnableWakeAtBus.m_Method = 0LL;
  this->m_DeviceDisableWakeAtBus.m_Method = 0LL;
  this->m_DeviceReportedMissing.m_Method = 0LL;
  this->m_DeviceTextHead.Next = 0LL;
  this->m_DeviceID = 0LL;
  this->m_InstanceID = 0LL;
  this->m_HardwareIDs = 0LL;
  this->m_CompatibleIDs = 0LL;
  this->m_ContainerID = 0LL;
  this->m_IDsAllocation = 0LL;
  *(_WORD *)&this->m_RawOK = 0;
  this->m_AddedToStaticList = 0;
  this->m_Description = 0LL;
  this->m_OwningChildList = 0LL;
  this->m_EjectionDeviceList = 0LL;
  this->m_DeviceEjectProcessed = 0LL;
  *(_WORD *)&this->m_CanBeDeleted = 0;
  this->m_SharedPower.m_WaitWakeOwner = 1;
}
