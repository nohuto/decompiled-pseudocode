/*
 * XREFs of MiVaIsUltra @ 0x1400EA5F4
 * Callers:
 *     MiTranslatePageForCopy @ 0x1400E9C30 (MiTranslatePageForCopy.c)
 *     MiPrefetchVirtualMemory @ 0x1400EA140 (MiPrefetchVirtualMemory.c)
 *     MiZeroPageWorkMapping @ 0x140121324 (MiZeroPageWorkMapping.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  return qword_14043ACB0 && a1 >= qword_14043ACB0 && a1 < qword_14043ACB0 + (qword_14043ACC0 << 30);
}
