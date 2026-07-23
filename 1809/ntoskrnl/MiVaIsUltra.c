/*
 * XREFs of MiVaIsUltra @ 0x1400EA674
 * Callers:
 *     MiTranslatePageForCopy @ 0x1400E9CB0 (MiTranslatePageForCopy.c)
 *     MiPrefetchVirtualMemory @ 0x1400EA1C0 (MiPrefetchVirtualMemory.c)
 *     MiZeroPageWorkMapping @ 0x1401213F4 (MiZeroPageWorkMapping.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  return qword_14043BD70 && a1 >= qword_14043BD70 && a1 < qword_14043BD70 + (BitMapHeader.SizeOfBitMap << 30);
}
