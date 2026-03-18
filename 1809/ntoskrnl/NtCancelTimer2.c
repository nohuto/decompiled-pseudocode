/*
 * XREFs of NtCancelTimer2 @ 0x140139740
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1400FBFC0 (ExpSetTimer2.c)
 */

NTSTATUS __fastcall NtCancelTimer2(void *a1)
{
  return ExpSetTimer2(a1, 0LL, 0LL);
}
