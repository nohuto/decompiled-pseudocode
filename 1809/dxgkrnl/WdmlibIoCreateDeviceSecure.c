/*
 * XREFs of WdmlibIoCreateDeviceSecure @ 0x1C0147E64
 * Callers:
 *     DpiGdoCreateGdiObjects @ 0x1C0147354 (DpiGdoCreateGdiObjects.c)
 *     DpiPdoAddPdo @ 0x1C027449C (DpiPdoAddPdo.c)
 *     DriverEntry @ 0x1C02A1904 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     WdmlibInit @ 0x1C0146000 (WdmlibInit.c)
 */

NTSTATUS __stdcall WdmlibIoCreateDeviceSecure(
        PDRIVER_OBJECT DriverObject,
        ULONG DeviceExtensionSize,
        PUNICODE_STRING DeviceName,
        ULONG DeviceType,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        PCUNICODE_STRING DefaultSDDLString,
        LPCGUID DeviceClassGuid,
        PDEVICE_OBJECT *DeviceObject)
{
  if ( !WdmlibInitialized )
    WdmlibInit();
  return ((__int64 (__fastcall *)(PDRIVER_OBJECT, _QWORD, PUNICODE_STRING, _QWORD, ULONG, _BYTE, PCUNICODE_STRING, LPCGUID, PDEVICE_OBJECT *))PfnIoCreateDeviceSecure)(
           DriverObject,
           DeviceExtensionSize,
           DeviceName,
           DeviceType,
           DeviceCharacteristics,
           0,
           DefaultSDDLString,
           DeviceClassGuid,
           DeviceObject);
}
