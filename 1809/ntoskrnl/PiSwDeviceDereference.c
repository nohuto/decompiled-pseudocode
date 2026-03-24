/*
 * XREFs of PiSwDeviceDereference @ 0x1406D8A10
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1406D6E58 (PiSwIrpStartCreateWorker.c)
 *     PiSwDispatch @ 0x1406D7640 (PiSwDispatch.c)
 *     PiSwProcessRemove @ 0x1406D8B4C (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x1406D8D54 (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x1406D8DB4 (PiSwUnassociateDeviceObject.c)
 *     PiSwCloseDevice @ 0x1406D9110 (PiSwCloseDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PiSwDeviceFree @ 0x1406D8C08 (PiSwDeviceFree.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree();
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
