/*
 * XREFs of MiVaIsUltra @ 0x1400EA5D4
 * Callers:
 *     MiTranslatePageForCopy @ 0x1400E9C10 (MiTranslatePageForCopy.c)
 *     MiPrefetchVirtualMemory @ 0x1400EA120 (MiPrefetchVirtualMemory.c)
 *     MiZeroPageWorkMapping @ 0x140121304 (MiZeroPageWorkMapping.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  return qword_14043ACB0 && a1 >= qword_14043ACB0 && a1 < qword_14043ACB0 + (qword_14043ACC0 << 30);
}
