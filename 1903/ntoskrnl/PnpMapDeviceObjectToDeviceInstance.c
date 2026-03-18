/*
 * XREFs of PnpMapDeviceObjectToDeviceInstance @ 0x140722ABC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1407215E0 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1408772E0 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x140001F10 (RtlInsertElementGenericTableAvl.c)
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 */

__int64 __fastcall PnpMapDeviceObjectToDeviceInstance(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = a1;
  Buffer[1] = a2;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v2 = RtlInsertElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer, 0x10u, 0LL) == 0LL ? 0xC0000001 : 0;
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  return v2;
}
