/*
 * XREFs of SepRmCapPoolExpand @ 0x140300A2C
 * Callers:
 *     SepReadAndPopulateCapes @ 0x140737098 (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1408A4864 (SepReadAndInsertCaps.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

PVOID __fastcall SepRmCapPoolExpand(void *a1, SIZE_T a2)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePoolWithTag(PagedPool, a2, 0x70536553u);
}
