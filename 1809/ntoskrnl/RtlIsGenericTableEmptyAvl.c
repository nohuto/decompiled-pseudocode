/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x1400067C0
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x140590124 (PiDqQueryFreeActiveData.c)
 *     PiPnpRtlEndOperation @ 0x140595CA4 (PiPnpRtlEndOperation.c)
 *     PiLookupInDDBCache @ 0x14067F1C8 (PiLookupInDDBCache.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
