/*
 * XREFs of PiSwDestroyDeviceObject @ 0x140782C60
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x140721150 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x140732FD0 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     IoDeleteDevice @ 0x1400F0E80 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x140782C94 (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject(DeviceObject);
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
