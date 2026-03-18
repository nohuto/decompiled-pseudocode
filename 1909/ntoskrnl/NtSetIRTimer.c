/*
 * XREFs of NtSetIRTimer @ 0x14013CEA0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x14009A980 (ExpSetTimer2.c)
 */

NTSTATUS __fastcall NtSetIRTimer(void *a1, unsigned __int64 a2)
{
  return ExpSetTimer2(a1, a2, 0LL, 0LL);
}
