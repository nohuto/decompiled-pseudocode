/*
 * XREFs of ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180217EC4
 * Callers:
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x180217B8C (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800487D8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

void __fastcall CWindowNode::IntersectWithMaximizedClip(__int64 a1, _DWORD *a2)
{
  int v4; // ecx
  LONG v5; // ecx
  LONG v6; // eax
  struct tagRECT rcDst; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT v8; // [rsp+30h] [rbp-20h] BYREF

  v4 = *(_DWORD *)(a1 + 864);
  if ( v4 || *(_DWORD *)(a1 + 872) || *(_DWORD *)(a1 + 868) || *(_DWORD *)(a1 + 876) )
  {
    v5 = *(_DWORD *)(a1 + 664) + v4;
    rcDst.right = *(_DWORD *)(a1 + 672) - *(_DWORD *)(a1 + 868);
    rcDst.top = *(_DWORD *)(a1 + 668) + *(_DWORD *)(a1 + 872);
    v6 = *(_DWORD *)(a1 + 676) - *(_DWORD *)(a1 + 876);
    rcDst.left = v5;
    rcDst.bottom = v6;
    IntersectRect(&rcDst, &rcDst, (const RECT *)(a1 + 712));
    if ( !EqualRect(&rcDst, (const RECT *)(a1 + 712)) )
    {
      OffsetRect(&rcDst, -*(_DWORD *)(a1 + 712), -*(_DWORD *)(a1 + 716));
      if ( *(_BYTE *)(a1 + 947) )
        OffsetRect(&rcDst, -*(_DWORD *)(a1 + 948), -*(_DWORD *)(a1 + 952));
      v8 = rcDst;
      TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a2, &v8);
    }
  }
}
