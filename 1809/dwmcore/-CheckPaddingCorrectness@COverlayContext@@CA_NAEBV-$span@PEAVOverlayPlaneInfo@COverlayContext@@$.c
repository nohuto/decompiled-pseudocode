/*
 * XREFs of ?CheckPaddingCorrectness@COverlayContext@@CA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@AEBVOverlayPlaneInfo@1@@Z @ 0x18016A450
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1800708B0 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$v.c)
 * Callees:
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ??D?$span_iterator@V?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@$0A@@details@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@XZ @ 0x180005F08 (--D-$span_iterator@V-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@$0A@@details@gsl@@QEB.c)
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@$$CBUKeyframeData@@$0?0@gsl@@$0A@@01@0@Z @ 0x1801689A4 (--9details@gsl@@YA_NV-$span_iterator@V-$span@$$CBUKeyframeData@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x18016C404 (-PaddingsIntersectWithDestRect@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z @ 0x18016C508 (-RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z.c)
 */

char __fastcall COverlayContext::CheckPaddingCorrectness(__int64 a1, __int64 a2)
{
  char v3; // di
  bool v4; // si
  _QWORD *v5; // r8
  const struct COverlayContext::OverlayPlaneInfo **v6; // rax
  const struct COverlayContext::OverlayPlaneInfo *v7; // r8
  const struct COverlayContext::OverlayPlaneInfo *v8; // rdx
  const struct COverlayContext::OverlayPlaneInfo *v9; // rcx
  const struct COverlayContext::OverlayPlaneInfo *v10; // r8
  __int128 i; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF
  __int128 v14; // [rsp+40h] [rbp-10h] BYREF

  v3 = 1;
  v4 = COverlayContext::RectContainsRect((const struct tagRECT *)(a2 + 60), (const struct tagRECT *)(a2 + 76));
  *((_QWORD *)&v13 + 1) = *v5;
  *(_QWORD *)&v13 = v5;
  for ( i = (unsigned __int64)v5;
        ;
        gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&i) )
  {
    v14 = i;
    if ( !gsl::details::operator!=(&v14, &v13) )
      break;
    v6 = (const struct COverlayContext::OverlayPlaneInfo **)gsl::details::span_iterator<gsl::span<COverlayContext::OverlayPlaneInfo *,-1>,0>::operator*((gsl::details *)&i);
    v7 = *v6;
    if ( *(_QWORD *)a2 != *(_QWORD *)*v6 )
      continue;
    if ( *(_DWORD *)(a2 + 232) >= *((_DWORD *)v7 + 58) )
    {
      if ( COverlayContext::RectContainsRect(
             (const struct tagRECT *)((char *)v7 + 60),
             (const struct tagRECT *)((char *)v7 + 76)) )
      {
        continue;
      }
      v8 = (const struct COverlayContext::OverlayPlaneInfo *)a2;
      v9 = v10;
    }
    else
    {
      if ( v4 )
        continue;
      v8 = *v6;
      v9 = (const struct COverlayContext::OverlayPlaneInfo *)a2;
    }
    if ( COverlayContext::PaddingsIntersectWithDestRect(v9, v8) )
      return 0;
  }
  return v3;
}
