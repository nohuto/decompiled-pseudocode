/*
 * XREFs of MmSetAddressRangeModified @ 0x1401342E0
 * Callers:
 *     <none>
 * Callees:
 *     MmSetAddressRangeModifiedEx @ 0x140086780 (MmSetAddressRangeModifiedEx.c)
 */

BOOLEAN __stdcall MmSetAddressRangeModified(PVOID Address, SIZE_T Length)
{
  return MmSetAddressRangeModifiedEx((unsigned __int64)Address, Length);
}
