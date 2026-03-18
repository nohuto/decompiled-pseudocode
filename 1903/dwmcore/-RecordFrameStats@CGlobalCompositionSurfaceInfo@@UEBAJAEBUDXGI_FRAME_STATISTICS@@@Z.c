/*
 * XREFs of ?RecordFrameStats@CGlobalCompositionSurfaceInfo@@UEBAJAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x18025DA70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::RecordFrameStats(
        CGlobalCompositionSurfaceInfo *this,
        const struct DXGI_FRAME_STATISTICS *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx

  v2 = 0;
  v3 = NtSetCompositionSurfaceStatistics(*((_QWORD *)this + 4), (char *)this + 96, a2);
  if ( v3 < 0 )
  {
    v2 = v3 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3 | 0x10000000, 0xFFu, 0LL);
  }
  return v2;
}
