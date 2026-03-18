/*
 * XREFs of PiSwDeviceDereference @ 0x140782D54
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140720DAC (PiSwIrpStartCreateWorker.c)
 *     PiSwDispatch @ 0x140721AA0 (PiSwDispatch.c)
 *     PiSwCloseDevice @ 0x14074DF5C (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x140782BA4 (PiSwProcessRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x140782C94 (PiSwUnassociateDeviceObject.c)
 *     PiSwBusRelationRemove @ 0x140782CD4 (PiSwBusRelationRemove.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiSwDeviceFree @ 0x140782D8C (PiSwDeviceFree.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree();
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
