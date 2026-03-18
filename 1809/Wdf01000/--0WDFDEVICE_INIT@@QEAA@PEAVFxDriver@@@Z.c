/*
 * XREFs of ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C005190C
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C003CE84 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     imp_WdfPdoInitAllocate @ 0x1C0047E90 (imp_WdfPdoInitAllocate.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C0051D58 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0057750 (-AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 */

void __fastcall WDFDEVICE_INIT::WDFDEVICE_INIT(WDFDEVICE_INIT *this, FxDriver *Driver)
{
  this->Driver = Driver;
  this->Pdo.HardwareIDs.m_Count = 0;
  this->Pdo.HardwareIDs.m_ListHead.Blink = &this->Pdo.HardwareIDs.m_ListHead;
  this->Pdo.HardwareIDs.m_ListHead.Flink = &this->Pdo.HardwareIDs.m_ListHead;
  this->Pdo.CompatibleIDs.m_Count = 0;
  this->Pdo.CompatibleIDs.m_ListHead.Blink = &this->Pdo.CompatibleIDs.m_ListHead;
  this->Pdo.CompatibleIDs.m_ListHead.Flink = &this->Pdo.CompatibleIDs.m_ListHead;
  this->Pdo.LastDeviceTextEntry = &this->Pdo.DeviceText.Next;
  this->Pdo.DeviceText.Next = 0LL;
  this->Control.ShutdownNotification = 0LL;
  this->Control.Flags = 0;
  this->DriverGlobals = Driver->m_Globals;
  this->ReadWriteIoType = WdfDeviceIoBuffered;
  *(_WORD *)&this->PowerPageable = 1;
  this->DeviceType = 34;
  this->Characteristics = 256;
  memset(&this->FileObject, 0, sizeof(this->FileObject));
  this->FileObject.AutoForwardCleanupClose = WdfUseDefault;
  this->DeviceName = 0LL;
  this->CreatedDevice = 0LL;
  *(_WORD *)&this->CreatedOnStack = 0;
  this->RequiresSelfIoTarget = 0;
  this->RemoveLockOptionFlags = 0;
  memset(&this->PnpPower, 0, 0xD0uLL);
  this->PnpPower.PnpStateCallbacks = 0LL;
  this->PnpPower.PowerStateCallbacks = 0LL;
  this->PnpPower.PowerPolicyStateCallbacks = 0LL;
  this->PnpPower.PowerPolicyOwner = WdfUseDefault;
  this->InitType = FxDeviceInitTypeFdo;
  memset(&this->Fdo, 0, 0xB8uLL);
  this->Fdo.Filter = 0;
  memset(&this->Pdo, 0, 0x40uLL);
  *(_WORD *)&this->Pdo.Raw = 0;
  this->Pdo.DeviceID = 0LL;
  this->Pdo.InstanceID = 0LL;
  this->Pdo.ContainerID = 0LL;
  this->Pdo.DefaultLocale = 0;
  this->Pdo.DescriptionEntry = 0LL;
  this->Pdo.ForwardRequestToParent = 0;
  memset(&this->Security, 0, 0x58uLL);
  this->PreprocessInfo = 0LL;
  this->IoInCallerContextCallback = 0LL;
  this->CxDeviceInitListHead.Blink = &this->CxDeviceInitListHead;
  this->CxDeviceInitListHead.Flink = &this->CxDeviceInitListHead;
  this->ReleaseHardwareOrderOnFailure = WdfReleaseHardwareOrderOnFailureEarly;
}
