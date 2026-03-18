/*
 * XREFs of ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C0051160
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C003C0F4 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     imp_WdfPdoInitAllocate @ 0x1C0047560 (imp_WdfPdoInitAllocate.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C00515F0 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0057100 (-AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     memset @ 0x1C001B300 (memset.c)
 */

void __fastcall WDFDEVICE_INIT::WDFDEVICE_INIT(WDFDEVICE_INIT *this, FxDriver *Driver)
{
  this->Driver = Driver;
  this->FileObject.Class = WdfFileObjectInvalid;
  memset(&this->FileObject.Attributes, 0, sizeof(this->FileObject.Attributes));
  memset(&this->FileObject.Callbacks, 0, sizeof(this->FileObject.Callbacks));
  this->FileObject.AutoForwardCleanupClose = WdfUseDefault;
  this->FileObject.Set = 0;
  this->Security.Sddl = 0LL;
  *(_QWORD *)&this->Security.DeviceClass.Data1 = 0LL;
  *(_QWORD *)this->Security.DeviceClass.Data4 = 0LL;
  this->Security.DeviceClassSet = 0;
  memset(&this->PnpPower, 0, 0xD0uLL);
  this->PnpPower.PnpStateCallbacks = 0LL;
  this->PnpPower.PowerStateCallbacks = 0LL;
  this->PnpPower.PowerPolicyStateCallbacks = 0LL;
  this->PnpPower.PowerPolicyOwner = WdfUseDefault;
  memset(&this->Fdo, 0, 0xB8uLL);
  this->Fdo.Filter = 0;
  this->Fdo.PhysicalDevice = 0LL;
  this->Pdo.HardwareIDs.m_Count = 0;
  this->Pdo.HardwareIDs.m_ListHead.Blink = &this->Pdo.HardwareIDs.m_ListHead;
  this->Pdo.HardwareIDs.m_ListHead.Flink = &this->Pdo.HardwareIDs.m_ListHead;
  this->Pdo.CompatibleIDs.m_Count = 0;
  this->Pdo.CompatibleIDs.m_ListHead.Blink = &this->Pdo.CompatibleIDs.m_ListHead;
  this->Pdo.CompatibleIDs.m_ListHead.Flink = &this->Pdo.CompatibleIDs.m_ListHead;
  memset(&this->Pdo, 0, 0x40uLL);
  *(_QWORD *)&this->Pdo.DefaultLocale = 0LL;
  this->Pdo.DeviceText.Next = 0LL;
  this->Pdo.LastDeviceTextEntry = &this->Pdo.DeviceText.Next;
  this->Pdo.Parent = 0LL;
  this->Pdo.DeviceID = 0LL;
  this->Pdo.InstanceID = 0LL;
  this->Pdo.ContainerID = 0LL;
  this->Pdo.DescriptionEntry = 0LL;
  this->Control.ShutdownNotification = 0LL;
  this->Control.Flags = 0;
  this->DriverGlobals = Driver->m_Globals;
  this->ReadWriteIoType = WdfDeviceIoBuffered;
  *(_DWORD *)&this->CreatedOnStack = 0x10000;
  this->DeviceType = 34;
  this->Characteristics = 256;
  this->DeviceName = 0LL;
  this->CreatedDevice = 0LL;
  this->RequiresSelfIoTarget = 0;
  *(_QWORD *)&this->RemoveLockOptionFlags = 0LL;
  memset(&this->RequestAttributes, 0, sizeof(this->RequestAttributes));
  this->PreprocessInfo = 0LL;
  this->IoInCallerContextCallback = 0LL;
  this->CxDeviceInitListHead.Blink = &this->CxDeviceInitListHead;
  this->CxDeviceInitListHead.Flink = &this->CxDeviceInitListHead;
  this->ReleaseHardwareOrderOnFailure = WdfReleaseHardwareOrderOnFailureEarly;
}
