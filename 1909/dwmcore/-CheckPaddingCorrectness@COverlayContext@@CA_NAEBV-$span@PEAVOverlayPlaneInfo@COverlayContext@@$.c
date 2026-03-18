/*
 * XREFs of ?CheckPaddingCorrectness@COverlayContext@@CA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@AEBVOverlayPlaneInfo@1@@Z @ 0x180183C68
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1800E5DA4 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$v.c)
 * Callees:
 *     ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180185B8C (-PaddingsIntersectWithDestRect@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z @ 0x180185C90 (-RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z.c)
 */

char __fastcall COverlayContext::CheckPaddingCorrectness(__int64 a1, __int64 a2)
{
  char v3; // di
  bool v4; // al
  _QWORD *v5; // r8
  const struct COverlayContext::OverlayPlaneInfo **v6; // rbx
  bool v7; // r14
  const struct COverlayContext::OverlayPlaneInfo **v8; // rbp
  const struct COverlayContext::OverlayPlaneInfo *v9; // r8
  const struct COverlayContext::OverlayPlaneInfo *v10; // rdx
  const struct COverlayContext::OverlayPlaneInfo *v11; // rcx
  const struct COverlayContext::OverlayPlaneInfo *v12; // r8

  v3 = 1;
  v4 = COverlayContext::RectContainsRect((const struct tagRECT *)(a2 + 60), (const struct tagRECT *)(a2 + 76));
  v6 = (const struct COverlayContext::OverlayPlaneInfo **)v5[1];
  v7 = v4;
  v8 = &v6[*v5];
  while ( v6 != v8 )
  {
    v9 = *v6;
    if ( *(_QWORD *)a2 != *(_QWORD *)*v6 )
      goto LABEL_9;
    if ( *(_DWORD *)(a2 + 232) >= *((_DWORD *)v9 + 58) )
    {
      if ( COverlayContext::RectContainsRect(
             (const struct tagRECT *)((char *)v9 + 60),
             (const struct tagRECT *)((char *)v9 + 76)) )
      {
        goto LABEL_9;
      }
      v10 = (const struct COverlayContext::OverlayPlaneInfo *)a2;
      v11 = v12;
    }
    else
    {
      if ( v7 )
        goto LABEL_9;
      v10 = *v6;
      v11 = (const struct COverlayContext::OverlayPlaneInfo *)a2;
    }
    if ( COverlayContext::PaddingsIntersectWithDestRect(v11, v10) )
      return 0;
LABEL_9:
    ++v6;
  }
  return v3;
}
