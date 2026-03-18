/*
 * XREFs of ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800C27D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180067570 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180083ABC (-GetTouchTargetBounds@CVisual@@IEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180087E4C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x1800880F0 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x1800C29D0 (-ShouldHitTest@CWindowNode@@MEBA_NXZ.c)
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800C29F0 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x180219530 (-GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z @ 0x18024E974 (-IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CWindowNode::HitTestContent(CWindowNode *this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  signed int v8; // eax
  __int64 v9; // rcx
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
  signed int ShapeData; // eax
  __int64 v25; // rcx
  signed int v26; // eax
  __int64 v27; // rcx
  const struct MilRectF *TouchTargetBounds; // rax
  float x; // xmm0_4
  bool v30; // cc
  bool v31; // al
  struct D2D_POINT_2F v32; // [rsp+38h] [rbp-59h] BYREF
  struct _D3DCOLORVALUE v33; // [rsp+40h] [rbp-51h] BYREF
  float v34[4]; // [rsp+50h] [rbp-41h] BYREF
  __m128 v35; // [rsp+60h] [rbp-31h] BYREF

  v8 = CVisual::HitTestContent(this, 0, a3, a4);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x753u, 0LL);
    return v10;
  }
  if ( CWindowNode::ShouldHitTest(this) && !*a4 )
  {
    v11 = *((_DWORD *)this + 179);
    v12 = (float)(*((_DWORD *)this + 166) - *((_DWORD *)this + 178));
    v13 = _mm_cvtsi32_si128(*((_DWORD *)this + 167) - v11);
    v14 = *((_DWORD *)this + 168) - *((_DWORD *)this + 178);
    v34[0] = v12;
    LODWORD(v15) = _mm_cvtepi32_ps(v13).m128_u32[0];
    v16 = _mm_cvtsi32_si128(v14);
    v17 = *((_DWORD *)this + 169) - v11;
    v34[1] = v15;
    v18 = (CGeometry *)*((_QWORD *)this + 100);
    LODWORD(v19) = _mm_cvtepi32_ps(v16).m128_u32[0];
    v34[2] = v19;
    v20 = (float)v17;
    v34[3] = (float)v17;
    if ( v18 )
    {
      v21 = 0;
      if ( !*((_BYTE *)v18 + 160) )
      {
        *(_QWORD *)&v33.r = 0LL;
        LOBYTE(v33.b) = 0;
        ShapeData = CGeometry::GetShapeData(
                      v18,
                      (const struct D2D_SIZE_F *)((char *)this + 132),
                      (struct CShapePtr *)&v33);
        v10 = ShapeData;
        if ( ShapeData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, ShapeData, 0x76Cu, 0LL);
          goto LABEL_25;
        }
        v26 = CShapePtr::FillContainsPoint((CShape **)&v33, a3, a4);
        v10 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x76Fu, 0LL);
          goto LABEL_25;
        }
        if ( *a4 )
          *a4 = IsPointInRect(a3, (const struct MilRectF *)v34);
        CShapePtr::Release((CShapePtr *)&v33);
        v21 = *a4;
      }
    }
    else
    {
      v21 = IsPointInRect(a3, (const struct MilRectF *)v34);
      *a4 = v21;
    }
    v32 = *a3;
    if ( !v21 )
    {
      if ( a2 )
      {
        TouchTargetBounds = (const struct MilRectF *)CVisual::GetTouchTargetBounds((__int64)this, &v35);
        if ( IsPointInRect(a3, TouchTargetBounds) )
        {
          x = v32.x;
          v30 = v12 <= v32.x;
          *a4 = 1;
          if ( v30 )
          {
            if ( x >= v19 )
              v32.x = v19 - 1.0;
          }
          else
          {
            v32.x = v12;
          }
          if ( v15 > v32.y )
          {
            v32.y = v15;
            goto LABEL_8;
          }
          if ( v32.y < v20 )
            goto LABEL_8;
          v32.y = v20 - 1.0;
        }
      }
    }
    if ( !*a4 )
    {
LABEL_20:
      if ( !*((_QWORD *)this + 111) )
        return v10;
      *(_QWORD *)&v33.r = 0LL;
      LOBYTE(v33.b) = 0;
      CWindowNode::GetDxClipShapeForHitTest(this, (struct CShapePtr *)&v33);
      if ( *(_QWORD *)&v33.r )
        CShapePtr::FillContainsPoint((CShape **)&v33, a3, a4);
      else
        *a4 = IsPointInRect(a3, (const struct MilRectF *)v34);
LABEL_25:
      CShapePtr::Release((CShapePtr *)&v33);
      return v10;
    }
LABEL_8:
    v22 = *((_QWORD *)this + 93);
    if ( v22
      && (*((_BYTE *)this + 860) & 0xA) != 0
      && (*(int (__fastcall **)(__int64, struct D2D_POINT_2F *, struct _D3DCOLORVALUE *))(*(_QWORD *)v22 + 224LL))(
           v22,
           &v32,
           &v33) >= 0 )
    {
      if ( (*((_BYTE *)this + 860) & 2) != 0 )
      {
        if ( *((_BYTE *)this + 944) )
        {
          v35.m128_u64[0] = __PAIR64__(LODWORD(v33.g), LODWORD(v33.b));
          v35.m128_u64[1] = __PAIR64__(LODWORD(v33.a), LODWORD(v33.r));
          v33.r = v33.b;
          LODWORD(v33.a) = _mm_shuffle_ps(v35, v35, 255).m128_u32[0];
          LODWORD(v33.g) = _mm_shuffle_ps(v35, v35, 85).m128_u32[0];
          LODWORD(v33.b) = _mm_shuffle_ps(v35, v35, 170).m128_u32[0];
        }
        v31 = !CColorKey::IsColorKey((CWindowNode *)((char *)this + 808), &v33);
        *a4 = v31;
      }
      else
      {
        v31 = *a4;
      }
      if ( v31 && (*((_BYTE *)this + 860) & 8) != 0 )
        *a4 = v33.a > 0.0;
    }
    if ( *a4 )
      return v10;
    goto LABEL_20;
  }
  return v10;
}
