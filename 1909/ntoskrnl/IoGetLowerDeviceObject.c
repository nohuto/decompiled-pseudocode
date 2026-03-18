/*
 * XREFs of IoGetLowerDeviceObject @ 0x140139CC0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetLowerDeviceObjectWithTag @ 0x140139CDC (IoGetLowerDeviceObjectWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetLowerDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetLowerDeviceObjectWithTag(DeviceObject, 1953261124LL);
}
