/*
 * XREFs of PiSwDestroyDeviceObject @ 0x1407808F8
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14071F2B0 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x140730D70 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     IoDeleteDevice @ 0x1400B3E60 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x14078092C (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject(DeviceObject);
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
