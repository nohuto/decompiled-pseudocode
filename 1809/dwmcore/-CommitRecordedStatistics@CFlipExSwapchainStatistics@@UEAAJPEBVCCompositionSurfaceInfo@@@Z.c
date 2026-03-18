/*
 * XREFs of ?CommitRecordedStatistics@CFlipExSwapchainStatistics@@UEAAJPEBVCCompositionSurfaceInfo@@@Z @ 0x1800209C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CFlipExSwapchainStatistics::CommitRecordedStatistics(
        CFlipExSwapchainStatistics *this,
        const struct CCompositionSurfaceInfo *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  unsigned int v4; // ecx

  v2 = 0;
  v3 = NtSetCompositionSurfaceBufferUsage(
         *((_QWORD *)a2 + 4),
         (char *)a2 + 56,
         *((unsigned int *)this + 2),
         *((unsigned int *)this + 3));
  if ( v3 < 0 )
  {
    v2 = v3 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3 | 0x10000000, 0x6Cu);
  }
  return v2;
}
