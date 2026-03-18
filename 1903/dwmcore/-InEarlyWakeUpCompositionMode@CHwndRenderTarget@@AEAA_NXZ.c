/*
 * XREFs of ?InEarlyWakeUpCompositionMode@CHwndRenderTarget@@AEAA_NXZ @ 0x1800EA954
 * Callers:
 *     ?InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z @ 0x180049788 (-InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800DA26C (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 */

char __fastcall CHwndRenderTarget::InEarlyWakeUpCompositionMode(CHwndRenderTarget *this)
{
  __int64 v1; // rcx
  int EffectiveDirectFlipMode; // eax
  char v3; // cl

  v1 = *((_QWORD *)this + 106);
  if ( !v1 )
    return 0;
  EffectiveDirectFlipMode = COverlayContext::GetEffectiveDirectFlipMode(v1);
  v3 = 1;
  if ( EffectiveDirectFlipMode != 1 )
    return 0;
  return v3;
}
