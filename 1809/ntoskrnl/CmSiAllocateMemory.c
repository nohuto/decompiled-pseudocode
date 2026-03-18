/*
 * XREFs of CmSiAllocateMemory @ 0x14000F104
 * Callers:
 *     HvpViewMapCreateView @ 0x1405A5570 (HvpViewMapCreateView.c)
 *     CmpVolumeContextCreate @ 0x14075F6A0 (CmpVolumeContextCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmSiAllocateMemory(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}
