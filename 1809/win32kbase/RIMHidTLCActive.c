/*
 * XREFs of RIMHidTLCActive @ 0x1C0051510
 * Callers:
 *     rimOnPnpArrived @ 0x1C004D7FC (rimOnPnpArrived.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0050200 (RIMDirectStartStopDeviceRead.c)
 *     RIMFreeSpecificDevWorker @ 0x1C0121FA0 (RIMFreeSpecificDevWorker.c)
 *     rimObsStartStopDeviceRead @ 0x1C012D630 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     RIMHidValidExclusive @ 0x1C00949F4 (RIMHidValidExclusive.c)
 */

__int64 __fastcall RIMHidTLCActive(_DWORD *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1[7] || a1[6] || a1[8] > (unsigned int)RIMHidValidExclusive(a1) )
    return 1;
  return v1;
}
