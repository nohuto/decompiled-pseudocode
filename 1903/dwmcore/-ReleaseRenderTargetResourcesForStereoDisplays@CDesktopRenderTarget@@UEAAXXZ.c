/*
 * XREFs of ?ReleaseRenderTargetResourcesForStereoDisplays@CDesktopRenderTarget@@UEAAXXZ @ 0x1801A8B40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800AF680 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?HasStereoSupport@CDisplay@@QEBA_NXZ @ 0x1800B0DE0 (-HasStereoSupport@CDisplay@@QEBA_NXZ.c)
 */

void __fastcall CDesktopRenderTarget::ReleaseRenderTargetResourcesForStereoDisplays(CDesktopRenderTarget *this)
{
  __int64 i; // rbx
  __int64 v3; // rsi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * i);
    if ( CDisplay::HasStereoSupport(*(CDisplay **)(v3 + 168)) )
      CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(v3 + 64));
  }
}
