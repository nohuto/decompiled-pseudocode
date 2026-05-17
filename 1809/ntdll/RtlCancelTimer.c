/*
 * XREFs of RtlCancelTimer @ 0x1801113B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCancelTimer(__int64 a1, volatile signed __int32 *a2)
{
  return RtlDeleteTimer(a1, a2, 0LL);
}
