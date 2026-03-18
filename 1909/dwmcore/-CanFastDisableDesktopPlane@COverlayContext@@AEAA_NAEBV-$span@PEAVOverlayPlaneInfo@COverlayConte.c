/*
 * XREFs of ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x180182614
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1801840C8 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18007C35C (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x1801822A0 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 */

char __fastcall COverlayContext::CanFastDisableDesktopPlane(__int64 a1, unsigned __int64 *a2)
{
  char v2; // bl
  __int64 v4; // r10
  __int64 i; // rax
  _BYTE *v6; // r10
  char v7; // r11
  char v8; // al
  struct D2D_RECT_F v10; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( *a2 )
  {
    v4 = *(_QWORD *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, 0LL);
    for ( i = 0LL; i < 4; ++i )
      *(&v10.left + i) = (float)*(int *)(v4 + 4 * i + 76);
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(&v10, (float *)(a1 + 56))
      && (!v6[185] || v6[189]) )
    {
      v8 = 0;
      if ( v6[187] )
        return v7;
      return v8;
    }
  }
  return v2;
}
