/*
 * XREFs of ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180029AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180029A00 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x18002B2A0 (-ShouldHitTest@CWindowNode@@MEBA_NXZ.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x18002D144 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18002E52C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800368E0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800A1964 (-GetTouchTargetBounds@CVisual@@IEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x1801B97E0 (-GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z @ 0x1802224FC (-IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CWindowNode::HitTestContent(CWindowNode *this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  int v11; // ecx
  float v12; // xmm8_4
  __m128i v13; // xmm9
  unsigned int v14; // eax
  float v15; // xmm9_4
  __m128i v16; // xmm7
  int v17; // eax
  CGeometry *v18; // rcx
  float v19; // xmm7_4
  float v20; // xmm6_4
  bool v21; // al
  __int64 v22; // rcx
  int ShapeData; // eax
  unsigned int v25; // ecx
  D3DVALUE v26; // xmm1_4
  int v27; // eax
  unsigned int v28; // ecx
  const struct MilRectF *TouchTargetBounds; // rax
  float x; // xmm0_4
  bool v31; // cc
  bool v32; // al
  struct D2D_POINT_2F v33; // [rsp+38h] [rbp-59h] BYREF
  __m128 v34; // [rsp+40h] [rbp-51h] BYREF
  struct _D3DCOLORVALUE v35; // [rsp+50h] [rbp-41h] BYREF
  float v36[4]; // [rsp+60h] [rbp-31h] BYREF

  v8 = CVisual::HitTestContent(this, 0, a3, a4);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x79Au);
    return v10;
  }
  if ( CWindowNode::ShouldHitTest(this) && !*a4 )
  {
    v11 = *((_DWORD *)this + 183);
    v12 = (float)(*((_DWORD *)this + 170) - *((_DWORD *)this + 182));
    v13 = _mm_cvtsi32_si128(*((_DWORD *)this + 171) - v11);
    v14 = *((_DWORD *)this + 172) - *((_DWORD *)this + 182);
    v36[0] = v12;
    LODWORD(v15) = _mm_cvtepi32_ps(v13).m128_u32[0];
    v16 = _mm_cvtsi32_si128(v14);
    v17 = *((_DWORD *)this + 173) - v11;
    v36[1] = v15;
    v18 = (CGeometry *)*((_QWORD *)this + 102);
    LODWORD(v19) = _mm_cvtepi32_ps(v16).m128_u32[0];
    v36[2] = v19;
    v20 = (float)v17;
    v36[3] = (float)v17;
    if ( v18 )
    {
      v21 = 0;
      if ( !*((_BYTE *)v18 + 152) )
      {
        v34.m128_u64[0] = 0LL;
        v34.m128_i8[8] = 0;
        ShapeData = CGeometry::GetShapeData(
                      v18,
                      (const struct D2D_SIZE_F *)((char *)this + 132),
                      (struct CShapePtr *)&v34);
        v10 = ShapeData;
        if ( ShapeData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, ShapeData, 0x7B3u);
          goto LABEL_25;
        }
        v26 = a3->y - v15;
        v35.r = a3->x - v12;
        v35.g = v26;
        v27 = CShapePtr::FillContainsPoint((CShapePtr *)&v34, (const struct D2D_POINT_2F *)&v35, a4);
        v10 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x7BCu);
          goto LABEL_25;
        }
        if ( *a4 )
          *a4 = IsPointInRect(a3, (const struct MilRectF *)v36);
        CShapePtr::Release((CShapePtr *)&v34);
        v21 = *a4;
      }
    }
    else
    {
      v21 = IsPointInRect(a3, (const struct MilRectF *)v36);
      *a4 = v21;
    }
    v33 = *a3;
    if ( !v21 )
    {
      if ( a2 )
      {
        TouchTargetBounds = (const struct MilRectF *)CVisual::GetTouchTargetBounds(this, &v34);
        if ( IsPointInRect(a3, TouchTargetBounds) )
        {
          x = v33.x;
          v31 = v12 <= v33.x;
          *a4 = 1;
          if ( v31 )
          {
            if ( x >= v19 )
              v33.x = v19 - 1.0;
          }
          else
          {
            v33.x = v12;
          }
          if ( v15 > v33.y )
          {
            v33.y = v15;
            goto LABEL_8;
          }
          if ( v33.y < v20 )
            goto LABEL_8;
          v33.y = v20 - 1.0;
        }
      }
    }
    if ( !*a4 )
    {
LABEL_20:
      if ( !*((_QWORD *)this + 113) )
        return v10;
      v34.m128_u64[0] = 0LL;
      v34.m128_i8[8] = 0;
      CWindowNode::GetDxClipShapeForHitTest(this, (struct CShapePtr *)&v34);
      if ( v34.m128_u64[0] )
        CShapePtr::FillContainsPoint((CShapePtr *)&v34, a3, a4);
      else
        *a4 = IsPointInRect(a3, (const struct MilRectF *)v36);
LABEL_25:
      CShapePtr::Release((CShapePtr *)&v34);
      return v10;
    }
LABEL_8:
    v22 = *((_QWORD *)this + 95);
    if ( v22
      && (*((_BYTE *)this + 876) & 0xA) != 0
      && (*(int (__fastcall **)(__int64, struct D2D_POINT_2F *, struct _D3DCOLORVALUE *))(*(_QWORD *)v22 + 224LL))(
           v22,
           &v33,
           &v35) >= 0 )
    {
      if ( (*((_BYTE *)this + 876) & 2) != 0 )
      {
        if ( *((_BYTE *)this + 962) )
        {
          v34.m128_u64[0] = __PAIR64__(LODWORD(v35.g), LODWORD(v35.b));
          v34.m128_u64[1] = __PAIR64__(LODWORD(v35.a), LODWORD(v35.r));
          v35.r = v35.b;
          LODWORD(v35.a) = _mm_shuffle_ps(v34, v34, 255).m128_u32[0];
          LODWORD(v35.g) = _mm_shuffle_ps(v34, v34, 85).m128_u32[0];
          LODWORD(v35.b) = _mm_shuffle_ps(v34, v34, 170).m128_u32[0];
        }
        v32 = !CColorKey::IsColorKey((CWindowNode *)((char *)this + 824), &v35);
        *a4 = v32;
      }
      else
      {
        v32 = *a4;
      }
      if ( v32 && (*((_BYTE *)this + 876) & 8) != 0 )
        *a4 = v35.a > 0.0;
    }
    if ( *a4 )
      return v10;
    goto LABEL_20;
  }
  return v10;
}
