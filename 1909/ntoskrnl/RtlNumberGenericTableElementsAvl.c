/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x14011E880
 * Callers:
 *     PiUpdateDriverDBCache @ 0x14070BF80 (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x14086336C (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
