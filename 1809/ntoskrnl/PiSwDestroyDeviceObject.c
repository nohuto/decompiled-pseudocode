/*
 * XREFs of PiSwDestroyDeviceObject @ 0x1406DA37C
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1406D95D0 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x1406EE4D8 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     IoDeleteDevice @ 0x1400DAB60 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x1406DA054 (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject((__int64)DeviceObject);
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
