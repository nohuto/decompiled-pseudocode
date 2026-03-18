/*
 * XREFs of RIMHidTLCActive @ 0x1C00589D8
 * Callers:
 *     rimOnPnpArrived @ 0x1C0055150 (rimOnPnpArrived.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0057780 (RIMDirectStartStopDeviceRead.c)
 *     RIMFreeSpecificDevWorker @ 0x1C005B1DC (RIMFreeSpecificDevWorker.c)
 *     rimObsStartStopDeviceRead @ 0x1C0158408 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     RIMHidValidExclusive @ 0x1C005AFA0 (RIMHidValidExclusive.c)
 */

__int64 __fastcall RIMHidTLCActive(_DWORD *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1[7] || a1[6] || a1[8] > (unsigned int)RIMHidValidExclusive(a1) )
    return 1;
  return v1;
}
