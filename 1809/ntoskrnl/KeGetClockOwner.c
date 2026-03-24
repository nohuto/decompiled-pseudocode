/*
 * XREFs of KeGetClockOwner @ 0x14011C580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KeGetClockOwner()
{
  return (unsigned int)KiClockTimerOwner;
}
