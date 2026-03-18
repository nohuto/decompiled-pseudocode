/*
 * XREFs of NtSetIRTimer @ 0x14013C8C0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1400BAB10 (ExpSetTimer2.c)
 */

NTSTATUS __fastcall NtSetIRTimer(void *a1, unsigned __int64 a2)
{
  return ExpSetTimer2(a1, a2, 0LL, 0LL);
}
