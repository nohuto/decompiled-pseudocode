/*
 * XREFs of ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x180245BDC
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180246070 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180044FFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18004AC18 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800B518C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x18015ECCC (McTemplateU0x.c)
 *     McTemplateU0xq @ 0x18015ED28 (McTemplateU0xq.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ @ 0x180177754 (-GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ.c)
 *     ?GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCVisualTree@@_NIAEBV2@@Z @ 0x18017840C (-GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     McTemplateU0qdffff @ 0x180178754 (McTemplateU0qdffff.c)
 *     McTemplateU0xqq @ 0x1801A9D58 (McTemplateU0xqq.c)
 *     ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802473E0 (-NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 */

__int64 __fastcall CHolographicInteropTarget::RenderDirtyRegion(
        CHolographicInteropTarget *this,
        struct CHolographicInteropTexture *a2,
        struct CVisualTree *a3,
        const struct CDirtyRegion *a4,
        unsigned int a5,
        unsigned int a6,
        struct IRenderTargetBitmap *a7,
        struct CDrawingContext *a8)
{
  char *v10; // rbx
  unsigned int v11; // r14d
  __int64 v12; // rdi
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm2_4
  float v21; // xmm5_4
  CComposition *v22; // rcx
  __int64 v23; // rcx
  char *v24; // rbx
  float right; // xmm0_4
  float bottom; // xmm1_4
  __int64 v27; // rcx
  unsigned int v28; // r14d
  __int64 v29; // r12
  unsigned int *v30; // rbx
  const __m128i *v31; // r15
  __m128 v32; // xmm6
  FLOAT v33; // xmm7_4
  FLOAT v34; // xmm8_4
  FLOAT v35; // xmm9_4
  __int64 v36; // rcx
  __int64 v37; // r9
  signed int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  char v42; // [rsp+68h] [rbp-A0h]
  struct D2D_RECT_F v43; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v44; // [rsp+80h] [rbp-88h]
  struct CVisualTree *v45; // [rsp+88h] [rbp-80h]
  struct CHolographicInteropTexture *v46; // [rsp+90h] [rbp-78h]
  struct D2D_RECT_F v47; // [rsp+98h] [rbp-70h] BYREF
  struct D2D_RECT_F v48; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v49[16]; // [rsp+B8h] [rbp-50h] BYREF
  struct D2D_RECT_F v50[8]; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v51[8]; // [rsp+148h] [rbp+40h] BYREF

  v44 = 0;
  v45 = a3;
  v46 = a2;
  if ( a4 )
    v10 = (char *)a4 + (*((_BYTE *)a4 + 2883) != 0 ? 2860LL : 1116LL);
  else
    v10 = 0LL;
  if ( a4 )
    v11 = *((_DWORD *)a4 + 319);
  else
    v11 = 0;
  v12 = 0LL;
  `vector constructor iterator'(
    (char *)v50,
    16LL,
    8LL,
    (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  *(_QWORD *)&v43.left = 0LL;
  v13 = *((_BYTE *)v46 + 132);
  v42 = v13;
  if ( a4 )
  {
    if ( *((_BYTE *)a4 + 2883) )
      v13 = 1;
    v42 = v13;
  }
  (*(void (__fastcall **)(struct IRenderTargetBitmap *, struct D2D_RECT_F *))(*(_QWORD *)a7 + 48LL))(a7, &v47);
  v16 = (float)*((int *)v46 + 39);
  v17 = (float)*((int *)v46 + 38);
  v18 = v47.top + v16;
  v19 = v47.left + v17;
  v20 = v47.right + v17;
  v21 = v47.bottom + v16;
  v47.top = v47.top + v16;
  v47.left = v47.left + v17;
  v47.right = v47.right + v17;
  v47.bottom = v47.bottom + v16;
  if ( v42 )
  {
    v22 = (CComposition *)*((_QWORD *)this + 2);
    LODWORD(v12) = 1;
    v51[0] = 0;
    v50[0] = v47;
    if ( !CComposition::GetStereoscopicContentManager(v22, v14, v15) || a6 )
      *((_BYTE *)v46 + 132) = 0;
  }
  else
  {
    v23 = 0LL;
    if ( v11 )
    {
      v24 = v10 + 8;
      do
      {
        v48 = *(struct D2D_RECT_F *)(v24 - 8);
        v50[(unsigned int)v12] = v48;
        if ( v19 > v50[(unsigned int)v12].left )
          v50[(unsigned int)v12].left = v19;
        if ( v18 > v50[(unsigned int)v12].top )
          v50[(unsigned int)v12].top = v18;
        right = v50[(unsigned int)v12].right;
        if ( right > v20 )
        {
          v50[(unsigned int)v12].right = v20;
          right = v20;
        }
        bottom = v50[(unsigned int)v12].bottom;
        if ( bottom > v21 )
        {
          v50[(unsigned int)v12].bottom = v21;
          bottom = v21;
          right = v50[(unsigned int)v12].right;
        }
        if ( right <= v50[(unsigned int)v12].left || bottom <= v50[(unsigned int)v12].top )
        {
          *(_QWORD *)&v50[(unsigned int)v12].right = 0LL;
          *(_QWORD *)&v50[(unsigned int)v12].left = 0LL;
        }
        else
        {
          v51[v12] = v23;
          v12 = (unsigned int)(v12 + 1);
        }
        v23 = (unsigned int)(v23 + 1);
        v24 += 16;
      }
      while ( (unsigned int)v23 < v11 );
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqq(v23, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start, (__int64)a8, 0, v12);
  if ( (_DWORD)v12 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xq(v23, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, (__int64)a8, 0);
    CDrawingContext::CalculateOcclusion(a8, v45, v12, v50, 0, 0, &v43);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xq(v27, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, (__int64)a8, 0);
    v28 = 0;
    v29 = *(_QWORD *)&v43.left;
    v30 = v51;
    v31 = (const __m128i *)v50;
    do
    {
      v32 = (__m128)_mm_loadu_si128(v31);
      LODWORD(v43.left) = v32.m128_i32[0];
      LODWORD(v33) = _mm_shuffle_ps(v32, v32, 85).m128_u32[0];
      LODWORD(v34) = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
      LODWORD(v35) = _mm_shuffle_ps(v32, v32, 255).m128_u32[0];
      v43.top = v33;
      v43.right = v34;
      v43.bottom = v35;
      v48 = (struct D2D_RECT_F)v32;
      if ( !v42 && v29 )
      {
        v43 = *(struct D2D_RECT_F *)CDirtyRegion::GetUnOccludedDirtyRegion(
                                      (__int64)a4,
                                      (__int64)v49,
                                      v29,
                                      v45,
                                      0,
                                      *v30,
                                      (__int64)&v47);
        LOBYTE(v35) = LOBYTE(v43.bottom);
        LOBYTE(v34) = LOBYTE(v43.right);
        LOBYTE(v33) = LOBYTE(v43.top);
        v32.m128_i8[0] = LOBYTE(v43.left);
      }
      if ( !IsEmpty(&v43) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
          McTemplateU0qdffff(
            v36,
            &EVTDESC_ETWGUID_DIRTYREGIONEVENT,
            *v30,
            v37,
            v32.m128_i8[0],
            SLOBYTE(v33),
            SLOBYTE(v34),
            SLOBYTE(v35));
        v38 = CDrawingContext::DrawVisualTree(
                a8,
                (float *)v45,
                (__int128 *)&v48,
                0LL,
                0x7FFFFFFF,
                1,
                0,
                v29 != 0,
                0LL,
                1,
                0);
        v44 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v38, 0x24Cu, 0LL);
          return v44;
        }
        CHolographicInteropTexture::NotifyRenderedRect(v46, v39, a6, &v43);
      }
      ++v28;
      ++v31;
      ++v30;
    }
    while ( v28 < (unsigned int)v12 );
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0x(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop,
      (__int64)a8);
  return v44;
}
