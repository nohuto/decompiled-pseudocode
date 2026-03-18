/*
 * XREFs of ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x18025B670
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureCurrentRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAAJXZ @ 0x1800BD94C (-EnsureCurrentRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAAJXZ.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2)
{
  unsigned int v2; // edi
  signed int v4; // eax
  __int64 v5; // rcx

  v2 = 0;
  *((_BYTE *)this + 80) = 1;
  if ( *((_QWORD *)this + 12) == a2 )
  {
    if ( *((_DWORD *)this + 36) )
    {
      v4 = CGlobalCompositionSurfaceInfo::EnsureCurrentRenderingRealization(this);
      v2 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x303u, 0LL);
    }
  }
  *((_BYTE *)this + 80) = 0;
  return v2;
}
