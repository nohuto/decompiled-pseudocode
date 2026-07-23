/*
 * XREFs of PiSwDeviceDereference @ 0x1406D9CB0
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1406D80F8 (PiSwIrpStartCreateWorker.c)
 *     PiSwDispatch @ 0x1406D88E0 (PiSwDispatch.c)
 *     PiSwProcessRemove @ 0x1406D9DEC (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x1406D9FF4 (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x1406DA054 (PiSwUnassociateDeviceObject.c)
 *     PiSwCloseDevice @ 0x1406DA3B0 (PiSwCloseDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiSwDeviceFree @ 0x1406D9EA8 (PiSwDeviceFree.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree();
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
