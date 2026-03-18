/*
 * XREFs of ?CheckOverlayCandidateCollectionEnabled@COcclusionContext@@AEBA_NXZ @ 0x18008EA80
 * Callers:
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@AEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18008E760 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

char __fastcall COcclusionContext::CheckOverlayCandidateCollectionEnabled(COcclusionContext *this)
{
  gsl::details **v1; // rdi
  char v2; // bl
  gsl::details *v3; // rsi
  gsl::details **v4; // rax
  gsl::details *v5; // rcx
  gsl::details **v7; // [rsp+20h] [rbp-18h] BYREF
  gsl::details *v8; // [rsp+28h] [rbp-10h]

  v1 = (gsl::details **)((char *)this + 1184);
  v2 = 0;
  v3 = (gsl::details *)*((_QWORD *)this + 148);
  v4 = (gsl::details **)((char *)this + 1184);
  v7 = (gsl::details **)((char *)this + 1184);
  v5 = 0LL;
  v8 = 0LL;
  while ( v5 != v3 || v4 != v1 )
  {
    if ( v5 == *v4 )
    {
      gsl::details::terminate(v5);
      JUMPOUT(0x18008EAE7LL);
    }
    if ( *(_BYTE *)(*((_QWORD *)v4[1] + (_QWORD)v5) + 13416LL) )
      return 1;
    gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&v7);
    v5 = v8;
    v4 = v7;
  }
  return v2;
}
