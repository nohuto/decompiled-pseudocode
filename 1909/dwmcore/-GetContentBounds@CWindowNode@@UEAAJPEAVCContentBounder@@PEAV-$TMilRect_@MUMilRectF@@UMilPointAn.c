/*
 * XREFs of ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A2A90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800047C4 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180004A74 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEA_N3@Z @ 0x180069770 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMil.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18006996C (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A2C50 (-GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B6EE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801C6C40 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180217DE8 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

__int64 __fastcall CWindowNode::GetContentBounds(CWindowNode *this, __int64 a2, __int64 a3)
{
  signed int ContentBounds; // eax
  __int64 v6; // rcx
  unsigned int RenderBounds; // ebx
  __int64 v8; // rcx
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  float v12; // xmm0_4
  unsigned int v13; // eax
  __m128i v14; // xmm0
  int v15; // eax
  signed int WindowClipShape; // eax
  __int64 v18; // rcx
  signed int TightBounds; // eax
  __int64 v20; // rcx
  __int64 i; // rax
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 *DxClipShape; // rax
  __int64 v25; // rcx
  __int64 j; // rax
  unsigned int v27; // [rsp+20h] [rbp-40h]
  __int64 v28; // [rsp+30h] [rbp-30h] BYREF
  char v29; // [rsp+38h] [rbp-28h]
  float v30[4]; // [rsp+40h] [rbp-20h] BYREF

  ContentBounds = CVisual::GetContentBounds();
  RenderBounds = ContentBounds;
  if ( ContentBounds < 0 )
  {
    v27 = 1625;
    goto LABEL_31;
  }
  if ( *((_BYTE *)this + 938) )
    return RenderBounds;
  if ( *((_QWORD *)this + 93) )
  {
    ContentBounds = CWindowNode::EnsureEffectiveSpriteClip(this);
    RenderBounds = ContentBounds;
    if ( ContentBounds < 0 )
    {
      v27 = 1640;
    }
    else
    {
      ContentBounds = CWindowNode::GetRenderBounds(
                        (__int64)this,
                        *((_QWORD *)this + 93),
                        *((_QWORD *)this + 116),
                        v30,
                        0LL,
                        0LL);
      RenderBounds = ContentBounds;
      if ( ContentBounds >= 0 )
      {
        for ( i = 0LL; i < 4; ++i )
          *(float *)((char *)&v28 + i * 4) = (float)SLODWORD(v30[i]);
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, &v28);
        goto LABEL_4;
      }
      v27 = 1644;
    }
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, ContentBounds, v27, 0LL);
    return RenderBounds;
  }
LABEL_4:
  v8 = *((_QWORD *)this + 111);
  if ( v8 && CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(v8 + 64)) )
  {
    v23 = *((_QWORD *)this + 111);
    DxClipShape = (__int64 *)CWindowNode::GetDxClipShape(this, &v28, v22);
    RenderBounds = CWindowNode::GetRenderBounds(
                     (__int64)this,
                     (v23 + 64) & -(__int64)(v23 != 0),
                     *DxClipShape,
                     v30,
                     0LL,
                     0LL);
    CShapePtr::Release((CShapePtr *)&v28);
    if ( (RenderBounds & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, RenderBounds, 0x677u, 0LL);
      return RenderBounds;
    }
    for ( j = 0LL; j < 4; ++j )
      *(float *)((char *)&v28 + j * 4) = (float)SLODWORD(v30[j]);
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, &v28);
  }
  if ( !*((_BYTE *)this + 938) && *((_QWORD *)this + 80) )
  {
    if ( !*((_QWORD *)this + 100) )
    {
      v9 = *((_DWORD *)this + 178);
      v10 = *((_DWORD *)this + 179);
      v11 = *((_DWORD *)this + 167) - v10;
      v30[0] = (float)(*((_DWORD *)this + 166) - v9);
      v12 = (float)v11;
      v13 = *((_DWORD *)this + 168) - v9;
      v30[1] = v12;
      v14 = _mm_cvtsi32_si128(v13);
      v15 = *((_DWORD *)this + 169) - v10;
      LODWORD(v30[2]) = _mm_cvtepi32_ps(v14).m128_u32[0];
      v30[3] = (float)v15;
LABEL_9:
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v30);
      return RenderBounds;
    }
    v28 = 0LL;
    v29 = 0;
    WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v28);
    RenderBounds = WindowClipShape;
    if ( WindowClipShape < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, WindowClipShape, 0x694u, 0LL);
    }
    else
    {
      TightBounds = CShapePtr::GetTightBounds(&v28);
      RenderBounds = TightBounds;
      if ( TightBounds >= 0 )
      {
        CShapePtr::Release((CShapePtr *)&v28);
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, TightBounds, 0x696u, 0LL);
    }
    CShapePtr::Release((CShapePtr *)&v28);
  }
  return RenderBounds;
}
