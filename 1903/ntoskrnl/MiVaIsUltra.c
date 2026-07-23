/*
 * XREFs of MiVaIsUltra @ 0x1400F5580
 * Callers:
 *     MiTranslatePageForCopy @ 0x1400F4DC8 (MiTranslatePageForCopy.c)
 *     MiPrefetchVirtualMemory @ 0x1400F5100 (MiPrefetchVirtualMemory.c)
 *     MiZeroPageWorkMapping @ 0x140119504 (MiZeroPageWorkMapping.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  return qword_140466738 && a1 >= qword_140466738 && a1 < qword_140466738 + (BitMapHeader.SizeOfBitMap << 30);
}
