/*
 * XREFs of CmSiAllocateMemory @ 0x1400ED538
 * Callers:
 *     HvpViewMapCreateView @ 0x14068F520 (HvpViewMapCreateView.c)
 *     CmpVolumeContextCreate @ 0x1407887C8 (CmpVolumeContextCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmSiAllocateMemory(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}
