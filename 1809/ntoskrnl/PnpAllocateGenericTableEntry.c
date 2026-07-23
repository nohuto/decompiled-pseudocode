/*
 * XREFs of PnpAllocateGenericTableEntry @ 0x1406D0570
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PnpAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x75737050u);
}
