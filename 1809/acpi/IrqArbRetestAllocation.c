/*
 * XREFs of IrqArbRetestAllocation @ 0x1C00B2F10
 * Callers:
 *     <none>
 * Callees:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C008FD00 (IrqArbpPrepareForTestOrConflict.c)
 *     ArbRetestAllocation @ 0x1C00B42D0 (ArbRetestAllocation.c)
 */

__int64 __fastcall IrqArbRetestAllocation(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = IrqArbpPrepareForTestOrConflict(a1, *a2);
  if ( (int)result >= 0 )
    return ArbRetestAllocation(a1, a2);
  return result;
}
