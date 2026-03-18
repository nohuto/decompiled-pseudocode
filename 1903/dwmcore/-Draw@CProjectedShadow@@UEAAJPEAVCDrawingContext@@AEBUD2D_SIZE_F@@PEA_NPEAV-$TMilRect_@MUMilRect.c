/*
 * XREFs of ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F03B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Lbound@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x180007EFC (--$_Lbound@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProje.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18004D300 (-GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18007A200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18007A99C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?IsDrawListCachingDisabled@CDrawingContext@@QEBA_NXZ @ 0x18007B34C (-IsDrawListCachingDisabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C57A0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1801F0144 (-ComputeShadowColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801F020C (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F2338 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::Draw(
        CProjectedShadow *this,
        struct IRenderTarget **a2,
        FLOAT *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v9; // rdx
  FLOAT *v10; // r8
  __int64 v11; // r9
  signed int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // esi
  __int64 v15; // r9
  __int64 *v16; // rax
  __int64 v17; // r9
  unsigned __int64 v18; // r10
  __m128 v19; // xmm1
  int v20; // eax
  __int64 v21; // rbx
  float v22; // xmm0_4
  void (__fastcall *v23)(CProjectedShadow *, __int64, CProjectedShadow *); // rax
  signed int updated; // eax
  __int64 v25; // rcx
  CDrawListCache *v26; // rbx
  signed int Cache; // eax
  __int64 v28; // rcx
  CDirtyRegion *v29; // rcx
  signed int v30; // eax
  __int64 v31; // rcx
  struct _D3DCOLORVALUE v33; // [rsp+30h] [rbp-18h] BYREF

  if ( CDrawingContext::IsBounding((CDrawingContext *)a2) )
  {
    v12 = CContent::DrawAsDrawList((CComposition **)this, v9, v10, v11, a5, 0LL);
    v14 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x116u, 0LL);
    return v14;
  }
  v15 = *((_QWORD *)this + 8);
  *(_QWORD *)&v33.r = *(_QWORD *)(v9 + 6056);
  v16 = std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Lbound<CVisualTree const *>(
          (__int64 *)(v15 + 72),
          &v33);
  if ( v16 == *(__int64 **)(v17 + 72) || v18 < v16[4] )
    v16 = *(__int64 **)(v17 + 72);
  v19 = (__m128)_mm_loadu_si128((const __m128i *)((char *)v16 + 60));
  *((float *)this + 78) = fminf(
                            _mm_shuffle_ps(v19, v19, 170).m128_f32[0] - v19.m128_f32[0],
                            _mm_shuffle_ps(v19, v19, 255).m128_f32[0] - _mm_shuffle_ps(v19, v19, 85).m128_f32[0]);
  v20 = CProjectedShadow::ComputeShadowPath((__int64)this, (__int64)a2);
  if ( *((_DWORD *)this + 62) != v20 )
  {
    *((_DWORD *)this + 62) = v20;
    (*(void (__fastcall **)(CProjectedShadow *, _QWORD, CProjectedShadow *))(*(_QWORD *)this + 64LL))(this, 0LL, this);
    v21 = *((_QWORD *)this + 37);
    if ( v21 )
    {
      *(_DWORD *)(v21 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v21 + 16, 0x18u);
      *(_BYTE *)(v21 + 200) = 1;
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 37);
    }
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 38);
  }
  CProjectedShadow::ComputeShadowColor(this, &v33, a2);
  v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 71) - v33.a)) & _xmm);
  if ( v22 > 0.0000011920929
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 68) - v33.r)) & _xmm) > 0.0000011920929
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 69) - v33.g)) & _xmm) > 0.0000011920929
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 70) - v33.b)) & _xmm) > 0.0000011920929 )
  {
    v23 = *(void (__fastcall **)(CProjectedShadow *, __int64, CProjectedShadow *))(*(_QWORD *)this + 64LL);
    *((struct _D3DCOLORVALUE *)this + 17) = *(struct _D3DCOLORVALUE *)&v33.r;
    v23(this, 5LL, this);
  }
  if ( !*(_DWORD *)(*((_QWORD *)this + 2) + 1104LL) )
  {
    updated = CProjectedShadow::UpdateShadowIntermediates(this, (struct CDrawingContext *)a2);
    v14 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, updated, 0x148u, 0LL);
      return v14;
    }
  }
  v26 = 0LL;
  *(_QWORD *)&v33.r = 0LL;
  if ( !CDrawingContext::IsDrawListCachingDisabled((CDrawingContext *)a2) )
  {
    Cache = CDrawListCacheSet::GetCache(
              (CProjectedShadow *)((char *)this + 240),
              0,
              0LL,
              a2[44],
              (struct CDrawListCache **)&v33);
    v14 = Cache;
    if ( Cache < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, Cache, 0x14Eu, 0LL);
      v29 = *(CDirtyRegion **)&v33.r;
      if ( !*(_QWORD *)&v33.r )
        return v14;
LABEL_29:
      CDirtyRegion::Release(v29);
      return v14;
    }
    v26 = *(CDrawListCache **)&v33.r;
  }
  v30 = CContent::DrawAsDrawList((CComposition **)this, (__int64)a2, a3, a4, a5, v26);
  v14 = v30;
  if ( v30 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x152u, 0LL);
  if ( v26 )
  {
    v29 = v26;
    goto LABEL_29;
  }
  return v14;
}
