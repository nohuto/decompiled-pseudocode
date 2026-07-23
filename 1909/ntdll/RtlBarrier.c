/*
 * XREFs of RtlBarrier @ 0x1800EA690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __cdecl RtlBarrier(PRTL_BARRIER Barrier, ULONG Flags)
{
  return RtlPosixBarrier(Barrier, Flags);
}
