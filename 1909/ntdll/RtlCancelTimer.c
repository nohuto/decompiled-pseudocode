/*
 * XREFs of RtlCancelTimer @ 0x18010FC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlCancelTimer(void *a1, void *a2)
{
  return RtlDeleteTimer(a1, a2, 0LL);
}
