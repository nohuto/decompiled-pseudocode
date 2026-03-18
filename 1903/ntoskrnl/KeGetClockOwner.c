/*
 * XREFs of KeGetClockOwner @ 0x14011F280
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x14011F5C0 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     <none>
 */

__int64 KeGetClockOwner()
{
  return (unsigned int)KiClockTimerOwner;
}
