/*
 * XREFs of MmSetAddressRangeModified @ 0x140136020
 * Callers:
 *     <none>
 * Callees:
 *     MmSetAddressRangeModifiedEx @ 0x14005E570 (MmSetAddressRangeModifiedEx.c)
 */

BOOLEAN __stdcall MmSetAddressRangeModified(PVOID Address, SIZE_T Length)
{
  return MmSetAddressRangeModifiedEx((unsigned __int64)Address, Length);
}
