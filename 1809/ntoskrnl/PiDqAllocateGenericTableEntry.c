/*
 * XREFs of PiDqAllocateGenericTableEntry @ 0x1406CF4B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PiDqAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x58706E50u);
}
