/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x140001C90
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x1405B63E8 (PiDqQueryFreeActiveData.c)
 *     PiPnpRtlEndOperation @ 0x1405BB924 (PiPnpRtlEndOperation.c)
 *     PiLookupInDDBCache @ 0x14070F300 (PiLookupInDDBCache.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
