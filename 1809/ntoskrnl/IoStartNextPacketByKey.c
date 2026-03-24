/*
 * XREFs of IoStartNextPacketByKey @ 0x140283990
 * Callers:
 *     <none>
 * Callees:
 *     IopStartNextPacketByKey @ 0x140284214 (IopStartNextPacketByKey.c)
 *     IopStartNextPacketByKeyEx @ 0x1402842D8 (IopStartNextPacketByKeyEx.c)
 */

void __stdcall IoStartNextPacketByKey(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable, ULONG Key)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx(DeviceObject, Key, Cancelable != 0 ? 192 : 64);
  else
    IopStartNextPacketByKey(DeviceObject, Cancelable);
}
