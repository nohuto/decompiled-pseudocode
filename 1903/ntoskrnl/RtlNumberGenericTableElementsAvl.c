/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x14011E370
 * Callers:
 *     PiUpdateDriverDBCache @ 0x14070A1A0 (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x140863C6C (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
