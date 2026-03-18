/*
 * XREFs of ?OnSceneFrameTick@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801D1840
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801D1CB4 (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 */

__int64 __fastcall CCompositionMipmapSurface::OnSceneFrameTick(
        CCompositionMipmapSurface *this,
        struct ISpectreRenderer *a2)
{
  signed int updated; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  updated = CCompositionMipmapSurface::UpdateMipmapSurface((CCompositionMipmapSurface *)((char *)this - 80));
  v4 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, updated, 0xA1u, 0LL);
  return v4;
}
