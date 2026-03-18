/*
 * XREFs of ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x180168D58
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18016A928 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AB5C8 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

char __fastcall COverlayContext::CanFastDisableDesktopPlane(float *a1, __int64 a2)
{
  char v2; // r10
  __int64 v3; // r11
  __int64 i; // rax
  _BYTE *v5; // r11
  char v6; // al
  struct D2D_RECT_F v8; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( *(_QWORD *)a2 )
  {
    if ( *(__int64 *)a2 <= 0 )
    {
      gsl::details::terminate((gsl::details *)a1);
      JUMPOUT(0x180168DEELL);
    }
    v3 = **(_QWORD **)(a2 + 8);
    for ( i = 0LL; i < 4; ++i )
      *(&v8.left + i) = (float)*(int *)(v3 + 4 * i + 76);
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(&v8, a1 + 14)
      && (v5[185] == v2 || v5[189] != v2) )
    {
      v6 = v2;
      if ( v5[187] != v2 )
        return 1;
      return v6;
    }
  }
  return v2;
}
