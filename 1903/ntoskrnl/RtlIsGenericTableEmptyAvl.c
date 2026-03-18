/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x140001C90
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x1405B6008 (PiDqQueryFreeActiveData.c)
 *     PiPnpRtlEndOperation @ 0x1405BB544 (PiPnpRtlEndOperation.c)
 *     PiLookupInDDBCache @ 0x14070D520 (PiLookupInDDBCache.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
