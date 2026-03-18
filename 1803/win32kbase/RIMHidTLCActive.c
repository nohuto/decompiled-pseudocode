/*
 * XREFs of RIMHidTLCActive @ 0x1C000F2B8
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C000F090 (RIMDirectStartStopDeviceRead.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00F7A6C (RIMFreeSpecificDevWorker.c)
 *     rimOnPnpArrived @ 0x1C00FCE28 (rimOnPnpArrived.c)
 *     rimObsStartStopDeviceRead @ 0x1C010593C (rimObsStartStopDeviceRead.c)
 * Callees:
 *     RIMHidValidExclusive @ 0x1C000F2F8 (RIMHidValidExclusive.c)
 */

__int64 __fastcall RIMHidTLCActive(_DWORD *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1[7] || a1[6] || a1[8] > (unsigned int)RIMHidValidExclusive(a1) )
    return 1;
  return v1;
}
