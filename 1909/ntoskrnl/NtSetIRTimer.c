/*
 * XREFs of NtSetIRTimer @ 0x14013CEA0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x14009A980 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtSetIRTimer(HANDLE TimerHandle, PLARGE_INTEGER DueTime)
{
  return ExpSetTimer2(TimerHandle, (unsigned __int64)DueTime, 0LL, 0LL);
}
