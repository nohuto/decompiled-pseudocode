/*
 * XREFs of IoStartNextPacketByKey @ 0x140298B10
 * Callers:
 *     <none>
 * Callees:
 *     IopStartNextPacketByKey @ 0x1402992B8 (IopStartNextPacketByKey.c)
 *     IopStartNextPacketByKeyEx @ 0x14029937C (IopStartNextPacketByKeyEx.c)
 */

void __stdcall IoStartNextPacketByKey(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable, ULONG Key)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx(DeviceObject, Key, Cancelable != 0 ? 192 : 64);
  else
    IopStartNextPacketByKey(DeviceObject, Cancelable);
}
