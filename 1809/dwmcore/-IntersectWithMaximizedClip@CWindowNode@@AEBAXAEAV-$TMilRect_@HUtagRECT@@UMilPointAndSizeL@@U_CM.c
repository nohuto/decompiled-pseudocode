/*
 * XREFs of ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801B9864
 * Callers:
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x1801B93D8 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEAV3@3@Z @ 0x1801B9580 (-GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEBV-$TMilRect_@HUtagRECT@@UMilPointAnd.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

void __fastcall CWindowNode::IntersectWithMaximizedClip(__int64 a1, LONG *a2)
{
  int v4; // ecx
  LONG v5; // ecx
  LONG v6; // eax
  LONG v7; // eax
  LONG right; // ecx
  LONG v9; // edx
  __int64 v10; // rcx
  struct tagRECT rcDst; // [rsp+20h] [rbp-20h] BYREF

  v4 = *(_DWORD *)(a1 + 880);
  if ( v4 || *(_DWORD *)(a1 + 888) || *(_DWORD *)(a1 + 884) || *(_DWORD *)(a1 + 892) )
  {
    v5 = *(_DWORD *)(a1 + 680) + v4;
    rcDst.right = *(_DWORD *)(a1 + 688) - *(_DWORD *)(a1 + 884);
    rcDst.top = *(_DWORD *)(a1 + 684) + *(_DWORD *)(a1 + 888);
    v6 = *(_DWORD *)(a1 + 692) - *(_DWORD *)(a1 + 892);
    rcDst.left = v5;
    rcDst.bottom = v6;
    IntersectRect(&rcDst, &rcDst, (const RECT *)(a1 + 728));
    if ( !EqualRect(&rcDst, (const RECT *)(a1 + 728)) )
    {
      OffsetRect(&rcDst, -*(_DWORD *)(a1 + 728), -*(_DWORD *)(a1 + 732));
      if ( *(_BYTE *)(a1 + 965) )
        OffsetRect(&rcDst, -*(_DWORD *)(a1 + 968), -*(_DWORD *)(a1 + 972));
      if ( rcDst.left > *a2 )
        *a2 = rcDst.left;
      if ( rcDst.top > a2[1] )
        a2[1] = rcDst.top;
      v7 = a2[2];
      right = rcDst.right;
      if ( rcDst.right < v7 )
      {
        a2[2] = rcDst.right;
        v7 = right;
      }
      v9 = a2[3];
      v10 = HIDWORD(*(_QWORD *)&rcDst.right);
      if ( rcDst.bottom < v9 )
      {
        a2[3] = rcDst.bottom;
        v9 = v10;
        v7 = a2[2];
      }
      if ( v7 <= *a2 || v9 <= a2[1] )
      {
        a2[3] = 0;
        a2[2] = 0;
        a2[1] = 0;
        *a2 = 0;
      }
    }
  }
}
