/*
 * XREFs of SepRmCapPoolExpand @ 0x140300D1C
 * Callers:
 *     SepReadAndPopulateCapes @ 0x140738268 (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1408A5AA4 (SepReadAndInsertCaps.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

PVOID __fastcall SepRmCapPoolExpand(void *a1, SIZE_T a2)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePoolWithTag(PagedPool, a2, 0x70536553u);
}
