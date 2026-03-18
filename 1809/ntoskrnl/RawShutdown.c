/*
 * XREFs of RawShutdown @ 0x14088F7F0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400C10A0 (IofCompleteRequest.c)
 *     IoDeleteDevice @ 0x1400DAAC0 (IoDeleteDevice.c)
 *     RawScanDeletedList @ 0x1405A2620 (RawScanDeletedList.c)
 *     IoUnregisterFileSystem @ 0x140706BC0 (IoUnregisterFileSystem.c)
 */

__int64 __fastcall RawShutdown(__int64 a1, IRP *a2)
{
  RawScanDeletedList();
  IoUnregisterFileSystem(RawDeviceDiskObject);
  IoUnregisterFileSystem(RawDeviceCdRomObject);
  IoUnregisterFileSystem(RawDeviceTapeObject);
  IoDeleteDevice(RawDeviceTapeObject);
  IoDeleteDevice(RawDeviceCdRomObject);
  IoDeleteDevice(RawDeviceDiskObject);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 1);
  return 0LL;
}
