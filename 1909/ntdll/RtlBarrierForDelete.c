/*
 * XREFs of RtlBarrierForDelete @ 0x1800EA6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlBarrierForDelete(PRTL_BARRIER Barrier, ULONG Flags)
{
  return RtlPosixBarrier(Barrier, Flags | 0x10000);
}
