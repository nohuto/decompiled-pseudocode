/*
 * XREFs of ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800DA26C
 * Callers:
 *     ?InEarlyWakeUpCompositionMode@CHwndRenderTarget@@AEAA_NXZ @ 0x1800EA954 (-InEarlyWakeUpCompositionMode@CHwndRenderTarget@@AEAA_NXZ.c)
 * Callees:
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180194BF4 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::GetEffectiveDirectFlipMode(__int64 a1)
{
  CDirectFlipInfo *v1; // rcx
  unsigned int v2; // ebx

  v1 = *(CDirectFlipInfo **)(a1 + 13304);
  v2 = 0;
  if ( v1 )
  {
    v2 = *((_DWORD *)v1 + 17);
    if ( v2 == 4 && !CDirectFlipInfo::RenderingRealizationChanged(v1) )
      return 2;
  }
  return v2;
}
