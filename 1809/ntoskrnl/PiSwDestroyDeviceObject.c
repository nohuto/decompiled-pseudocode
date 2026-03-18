/*
 * XREFs of PiSwDestroyDeviceObject @ 0x1406D90FC
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1406D8350 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x1406ED258 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     IoDeleteDevice @ 0x1400DAAC0 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x1406D8DD4 (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject((__int64)DeviceObject);
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
