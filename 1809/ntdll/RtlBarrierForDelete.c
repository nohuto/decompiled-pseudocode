/*
 * XREFs of RtlBarrierForDelete @ 0x1800ED4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBarrierForDelete(__int64 a1, __int64 a2)
{
  LODWORD(a2) = a2 | 0x10000;
  return RtlPosixBarrier(a1, a2);
}
