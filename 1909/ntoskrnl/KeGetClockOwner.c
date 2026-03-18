/*
 * XREFs of KeGetClockOwner @ 0x14011FFD0
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x140120310 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     <none>
 */

__int64 KeGetClockOwner()
{
  return (unsigned int)KiClockTimerOwner;
}
