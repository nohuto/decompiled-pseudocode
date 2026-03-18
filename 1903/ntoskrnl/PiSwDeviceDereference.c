/*
 * XREFs of PiSwDeviceDereference @ 0x1407809EC
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14071EF0C (PiSwIrpStartCreateWorker.c)
 *     PiSwDispatch @ 0x14071FC00 (PiSwDispatch.c)
 *     PiSwCloseDevice @ 0x14074D4CC (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x14078083C (PiSwProcessRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x14078092C (PiSwUnassociateDeviceObject.c)
 *     PiSwBusRelationRemove @ 0x14078096C (PiSwBusRelationRemove.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiSwDeviceFree @ 0x140780A24 (PiSwDeviceFree.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree();
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
