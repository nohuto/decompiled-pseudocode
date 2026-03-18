/*
 * XREFs of ?ReleaseRenderTargetResourcesForStereoDisplays@CDesktopRenderTarget@@UEAAXXZ @ 0x1801A7280
 * Callers:
 *     <none>
 * Callees:
 *     ?HasStereoSupport@CDisplay@@QEBA_NXZ @ 0x18002B0E4 (-HasStereoSupport@CDisplay@@QEBA_NXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x18002BC20 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
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
