/*
 * XREFs of ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x18016C404
 * Callers:
 *     ?CheckPaddingCorrectness@COverlayContext@@CA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@AEBVOverlayPlaneInfo@1@@Z @ 0x18016A450 (-CheckPaddingCorrectness@COverlayContext@@CA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18006B8EC (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009B314 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A0628 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

char __fastcall COverlayContext::PaddingsIntersectWithDestRect(
        const struct COverlayContext::OverlayPlaneInfo *a1,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v3; // bl
  struct FastRegion::Internal::CRgnData *v5[10]; // [rsp+20h] [rbp-B8h] BYREF
  struct FastRegion::Internal::CRgnData *v6[10]; // [rsp+70h] [rbp-68h] BYREF

  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v6, (const struct tagRECT *)((char *)a1 + 76));
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v5, (const struct tagRECT *)((char *)a2 + 60));
  FastRegion::CRegion::Subtract(v6, v5);
  FastRegion::CRegion::FreeMemory((void **)v5);
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v5, (const struct tagRECT *)((char *)a2 + 60));
  v3 = 0;
  if ( *(_DWORD *)v6[0] && *(_DWORD *)v5[0] )
    v3 = FastRegion::Internal::CRgnData::Intersects(v6[0], v5[0]);
  FastRegion::CRegion::FreeMemory((void **)v5);
  FastRegion::CRegion::FreeMemory((void **)v6);
  return v3;
}
