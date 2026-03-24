/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x1400F51C0
 * Callers:
 *     PiUpdateDriverDBCache @ 0x14067EC68 (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x14082951C (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
