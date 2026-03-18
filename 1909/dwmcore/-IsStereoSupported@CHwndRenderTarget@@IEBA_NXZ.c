/*
 * XREFs of ?IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ @ 0x18002B0A8
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180028760 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?NeedsStereoChange@CDesktopRenderTarget@@UEAA_N_N@Z @ 0x1800BD690 (-NeedsStereoChange@CDesktopRenderTarget@@UEAA_N_N@Z.c)
 * Callees:
 *     ?HasStereoSupport@CDisplay@@QEBA_NXZ @ 0x18002B0E4 (-HasStereoSupport@CDisplay@@QEBA_NXZ.c)
 */

char __fastcall CHwndRenderTarget::IsStereoSupported(CHwndRenderTarget *this)
{
  char v1; // bl
  CDisplay *v2; // rcx

  v1 = 0;
  if ( *((_BYTE *)this + 868) )
  {
    v2 = (CDisplay *)*((_QWORD *)this + 21);
    if ( v2 )
      return CDisplay::HasStereoSupport(v2);
  }
  return v1;
}
