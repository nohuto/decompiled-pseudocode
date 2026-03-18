/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x1400F51A0
 * Callers:
 *     PiUpdateDriverDBCache @ 0x14067EC88 (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x14082953C (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
