/*
 * XREFs of RtlPerformRetpolineRelocationsOnImage @ 0x1403154A0
 * Callers:
 *     MiMapSystemImageWithLargePage @ 0x14089A11C (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x140187478 (RtlPerformRetpolineRelocationsOnImageEx.c)
 */

__int64 __fastcall RtlPerformRetpolineRelocationsOnImage(
        char *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  return RtlPerformRetpolineRelocationsOnImageEx(a1, a2, a3, a4, a5, a6, 0, 0);
}
