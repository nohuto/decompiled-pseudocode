/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x1400F5240
 * Callers:
 *     PiUpdateDriverDBCache @ 0x14067FE28 (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x14082A71C (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
