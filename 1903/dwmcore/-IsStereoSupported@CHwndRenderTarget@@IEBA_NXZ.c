/*
 * XREFs of ?IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ @ 0x1800B0DA4
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x1800B00C0 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?NeedsStereoChange@CDesktopRenderTarget@@UEAA_N_N@Z @ 0x1800BC060 (-NeedsStereoChange@CDesktopRenderTarget@@UEAA_N_N@Z.c)
 * Callees:
 *     ?HasStereoSupport@CDisplay@@QEBA_NXZ @ 0x1800B0DE0 (-HasStereoSupport@CDisplay@@QEBA_NXZ.c)
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
