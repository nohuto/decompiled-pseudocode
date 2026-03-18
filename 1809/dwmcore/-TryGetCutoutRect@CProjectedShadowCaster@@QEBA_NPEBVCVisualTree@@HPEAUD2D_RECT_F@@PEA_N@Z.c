/*
 * XREFs of ?TryGetCutoutRect@CProjectedShadowCaster@@QEBA_NPEBVCVisualTree@@HPEAUD2D_RECT_F@@PEA_N@Z @ 0x1801AE228
 * Callers:
 *     ?TryGetCutoutBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x1801CC204 (-TryGetCutoutBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListB.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x1800A5950 (-GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18015AE90 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180199D8C (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1801AD950 (-GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z.c)
 */

bool __fastcall CProjectedShadowCaster::TryGetCutoutRect(
        CProjectedShadowCaster *this,
        const struct CVisualTree *a2,
        int a3,
        struct D2D_RECT_F *a4,
        bool *a5)
{
  __int64 v7; // rax
  char v8; // si
  CVisual *v11; // rcx
  struct CSpriteVisualContent *v12; // rbx
  struct COcclusionInfo *OcclusionInfo; // rax
  CGeometry *v14; // rcx
  float left; // xmm2_4
  float top; // xmm3_4
  float right; // xmm0_4
  float bottom; // xmm1_4
  float v19; // xmm7_4
  float v20; // xmm8_4
  float v21; // xmm4_4
  bool result; // al
  bool v23; // [rsp+38h] [rbp-51h] BYREF
  struct D2D_SIZE_F v24; // [rsp+40h] [rbp-49h] BYREF
  struct CSpriteVisualContent *v25; // [rsp+48h] [rbp-41h] BYREF
  struct D2D_RECT_F v26; // [rsp+50h] [rbp-39h] BYREF
  struct D2D_RECT_F v27; // [rsp+60h] [rbp-29h] BYREF
  __int128 v28; // [rsp+70h] [rbp-19h] BYREF

  v28 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v25 = 0LL;
  v7 = *((_QWORD *)this + 7);
  v23 = 0;
  v8 = 0;
  v24 = *(struct D2D_SIZE_F *)(v7 + 132);
  LODWORD(v26.top) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 85).m128_u32[0];
  *a4 = 0LL;
  *a5 = 0;
  v11 = (CVisual *)*((_QWORD *)this + 7);
  v26.left = 0.0;
  LODWORD(v26.right) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 170).m128_u32[0];
  v26.bottom = 0.0;
  CVisual::GetContentAsSpriteNoRef(v11, &v25);
  v12 = v25;
  if ( !v25
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(CProjectedShadowCaster::GetEffectiveAlpha(this, a2, &v23) - 1.0)) & _xmm) >= 0.0000011920929
    || v23
    || (OcclusionInfo = CVisual::GetOcclusionInfo(*((CVisual **)this + 7), a2),
        a3 < (*(int (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo))
    || !(*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, struct D2D_SIZE_F *, struct D2D_RECT_F *))(*(_QWORD *)v12 + 288LL))(
          v12,
          &v24,
          &v26) )
  {
    if ( !*((_BYTE *)this + 88) )
      return 0;
  }
  v14 = *(CGeometry **)(*((_QWORD *)this + 7) + 248LL);
  if ( v14 )
  {
    if ( !CGeometry::TryGetAxisAlignedRectangle(v14, &v24, &v28) )
      return 0;
    v8 = 1;
  }
  if ( IsEmpty(&v26) )
  {
    if ( !v12 )
    {
      left = 0.0;
      top = 0.0;
      right = v24.width + 0.0;
      bottom = v24.height + 0.0;
      goto LABEL_16;
    }
    if ( (*(int (__fastcall **)(struct CSpriteVisualContent *, _QWORD, struct D2D_SIZE_F *, struct D2D_RECT_F *))(*(_QWORD *)v12 + 168LL))(
           v12,
           0LL,
           &v24,
           &v27) >= 0 )
    {
      bottom = v27.bottom;
      right = v27.right;
      top = v27.top;
      left = v27.left;
      goto LABEL_16;
    }
    return 0;
  }
  left = v26.left;
  top = v26.top;
  right = v26.right;
  bottom = v26.bottom;
  *a5 = 1;
LABEL_16:
  if ( v8 )
  {
    if ( *(float *)&v28 > left )
      LODWORD(left) = v28;
    v19 = top;
    if ( *((float *)&v28 + 1) > top )
    {
      top = *((float *)&v28 + 1);
      v19 = *((float *)&v28 + 1);
    }
    v20 = right;
    if ( right > *((float *)&v28 + 2) )
    {
      right = *((float *)&v28 + 2);
      v20 = *((float *)&v28 + 2);
    }
    v21 = bottom;
    if ( bottom > *((float *)&v28 + 3) )
    {
      bottom = *((float *)&v28 + 3);
      v21 = *((float *)&v28 + 3);
    }
    if ( v20 <= left || v21 <= v19 )
    {
      bottom = 0.0;
      right = 0.0;
      top = 0.0;
      left = 0.0;
    }
  }
  *(_QWORD *)&v27.left = __PAIR64__(LODWORD(top), LODWORD(left));
  result = 1;
  *(_QWORD *)&v27.right = __PAIR64__(LODWORD(bottom), LODWORD(right));
  *a4 = v27;
  return result;
}
