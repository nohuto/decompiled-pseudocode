/*
 * XREFs of CmSiAllocateMemory @ 0x140098E94
 * Callers:
 *     HvpViewMapCreateView @ 0x140660618 (HvpViewMapCreateView.c)
 *     CmpVolumeContextCreate @ 0x140786468 (CmpVolumeContextCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmSiAllocateMemory(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}
