/*
 * XREFs of RtlPerformRetpolineRelocationsOnImage @ 0x1402F7264
 * Callers:
 *     MiUseLargeDriverPage @ 0x140684420 (MiUseLargeDriverPage.c)
 * Callees:
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x1402F7294 (RtlPerformRetpolineRelocationsOnImageEx.c)
 */

__int64 __fastcall RtlPerformRetpolineRelocationsOnImage(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  return RtlPerformRetpolineRelocationsOnImageEx(a1, a5, a6, 0, 0);
}
