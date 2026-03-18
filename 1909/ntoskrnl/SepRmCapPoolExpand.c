/*
 * XREFs of SepRmCapPoolExpand @ 0x14031E7F0
 * Callers:
 *     SepReadAndPopulateCapes @ 0x14078736C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1408E289C (SepReadAndInsertCaps.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

PVOID __fastcall SepRmCapPoolExpand(void *a1, SIZE_T a2)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePoolWithTag(PagedPool, a2, 0x70536553u);
}
