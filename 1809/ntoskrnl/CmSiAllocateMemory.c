/*
 * XREFs of CmSiAllocateMemory @ 0x14000F104
 * Callers:
 *     HvpViewMapCreateView @ 0x1405A6570 (HvpViewMapCreateView.c)
 *     CmpVolumeContextCreate @ 0x140760870 (CmpVolumeContextCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmSiAllocateMemory(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}
