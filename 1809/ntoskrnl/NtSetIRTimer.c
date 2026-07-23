/*
 * XREFs of NtSetIRTimer @ 0x14013B630
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1400FC060 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtSetIRTimer(HANDLE TimerHandle, PLARGE_INTEGER DueTime)
{
  return ExpSetTimer2(TimerHandle, (__int64)DueTime, 0LL);
}
