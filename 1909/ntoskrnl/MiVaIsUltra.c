/*
 * XREFs of MiVaIsUltra @ 0x1400C8420
 * Callers:
 *     MiTranslatePageForCopy @ 0x1400C7C68 (MiTranslatePageForCopy.c)
 *     MiPrefetchVirtualMemory @ 0x1400C7FA0 (MiPrefetchVirtualMemory.c)
 *     MiZeroPageWorkMapping @ 0x1400F855C (MiZeroPageWorkMapping.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  return qword_140466438 && a1 >= qword_140466438 && a1 < qword_140466438 + (BitMapHeader.SizeOfBitMap << 30);
}
