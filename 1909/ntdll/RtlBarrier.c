/*
 * XREFs of RtlBarrier @ 0x1800EA690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 RtlBarrier()
{
  return RtlPosixBarrier();
}
