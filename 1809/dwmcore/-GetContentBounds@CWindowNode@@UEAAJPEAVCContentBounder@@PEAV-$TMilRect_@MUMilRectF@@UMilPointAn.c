/*
 * XREFs of ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002B0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800140C0 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x18002B2A0 (-ShouldHitTest@CWindowNode@@MEBA_NXZ.c)
 *     ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002B2C0 (-GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002B47C (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEA_N3@Z @ 0x1800B0798 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMil.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800B1144 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180192200 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801B9788 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

__int64 __fastcall CWindowNode::GetContentBounds(CWindowNode *this, __int64 a2, __int64 a3)
{
  int ContentBounds; // eax
  unsigned int v6; // ecx
  unsigned int RenderBounds; // ebx
  __int64 v8; // rcx
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  float v12; // xmm0_4
  unsigned int v13; // eax
  __m128i v14; // xmm0
  int v15; // eax
  int WindowClipShape; // eax
  unsigned int v18; // ecx
  int TightBounds; // eax
  unsigned int v20; // ecx
  __int64 i; // rax
  __int64 v22; // rbx
  _QWORD *DxClipShape; // rax
  unsigned int v24; // ecx
  __int64 j; // rax
  unsigned int v26; // [rsp+20h] [rbp-40h]
  __int64 v27; // [rsp+30h] [rbp-30h] BYREF
  char v28; // [rsp+38h] [rbp-28h]
  float v29[4]; // [rsp+40h] [rbp-20h] BYREF

  ContentBounds = CVisual::GetContentBounds();
  RenderBounds = ContentBounds;
  if ( ContentBounds < 0 )
  {
    v26 = 1695;
    goto LABEL_30;
  }
  if ( *((_BYTE *)this + 954) )
    goto LABEL_5;
  if ( *((_QWORD *)this + 95) )
  {
    ContentBounds = CWindowNode::EnsureEffectiveSpriteClip(this);
    RenderBounds = ContentBounds;
    if ( ContentBounds < 0 )
    {
      v26 = 1710;
    }
    else
    {
      ContentBounds = CWindowNode::GetRenderBounds(
                        (_DWORD)this,
                        *((_QWORD *)this + 95),
                        *((_QWORD *)this + 118),
                        (unsigned int)v29,
                        0LL,
                        0LL);
      RenderBounds = ContentBounds;
      if ( ContentBounds >= 0 )
      {
        for ( i = 0LL; i < 4; ++i )
          *(float *)((char *)&v27 + i * 4) = (float)SLODWORD(v29[i]);
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, &v27);
        goto LABEL_4;
      }
      v26 = 1714;
    }
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, ContentBounds, v26);
    return RenderBounds;
  }
LABEL_4:
  v8 = *((_QWORD *)this + 113);
  if ( v8 && CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(v8 + 64)) )
  {
    v22 = *((_QWORD *)this + 113);
    DxClipShape = (_QWORD *)CWindowNode::GetDxClipShape(this, &v27);
    RenderBounds = CWindowNode::GetRenderBounds(
                     (_DWORD)this,
                     v22 != 0 ? v22 + 64 : 0,
                     *DxClipShape,
                     (unsigned int)v29,
                     0LL,
                     0LL);
    CShapePtr::Release((CShapePtr *)&v27);
    if ( (RenderBounds & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, RenderBounds, 0x6BDu);
      return RenderBounds;
    }
    for ( j = 0LL; j < 4; ++j )
      *(float *)((char *)&v27 + j * 4) = (float)SLODWORD(v29[j]);
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, &v27);
  }
LABEL_5:
  if ( CWindowNode::ShouldHitTest(this) )
  {
    if ( !*((_QWORD *)this + 102) )
    {
      v9 = *((_DWORD *)this + 182);
      v10 = *((_DWORD *)this + 183);
      v11 = *((_DWORD *)this + 171) - v10;
      v29[0] = (float)(*((_DWORD *)this + 170) - v9);
      v12 = (float)v11;
      v13 = *((_DWORD *)this + 172) - v9;
      v29[1] = v12;
      v14 = _mm_cvtsi32_si128(v13);
      v15 = *((_DWORD *)this + 173) - v10;
      LODWORD(v29[2]) = _mm_cvtepi32_ps(v14).m128_u32[0];
      v29[3] = (float)v15;
LABEL_8:
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v29);
      return RenderBounds;
    }
    v27 = 0LL;
    v28 = 0;
    WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v27);
    RenderBounds = WindowClipShape;
    if ( WindowClipShape < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, WindowClipShape, 0x6DAu);
    }
    else
    {
      TightBounds = CShapePtr::GetTightBounds(&v27, v29, 0LL);
      RenderBounds = TightBounds;
      if ( TightBounds >= 0 )
      {
        CShapePtr::Release((CShapePtr *)&v27);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, TightBounds, 0x6DCu);
    }
    CShapePtr::Release((CShapePtr *)&v27);
  }
  return RenderBounds;
}
