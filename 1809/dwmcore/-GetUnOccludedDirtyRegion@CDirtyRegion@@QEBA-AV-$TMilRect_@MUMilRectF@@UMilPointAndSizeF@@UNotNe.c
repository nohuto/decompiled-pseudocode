/*
 * XREFs of ?GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCVisualTree@@_NIAEBV2@@Z @ 0x180031CE0
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180030D74 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x18015ED70 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180160094 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x18021117C (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18002CDDC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?InflateRectF_InPlace@@YAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180176B28 (-InflateRectF_InPlace@@YAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180176FD4 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 */

float *__fastcall CDirtyRegion::GetUnOccludedDirtyRegion(
        __int64 a1,
        float *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        float *a7)
{
  __int64 v11; // rcx
  _QWORD **v12; // r14
  _QWORD *v13; // rsi
  _QWORD *v14; // rbp
  CVisual *v15; // rcx
  struct _LIST_ENTRY *v16; // rdi
  _DWORD *Flink; // rcx
  unsigned int v18; // edi
  __m128 v19; // xmm2
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v28; // r10
  __int64 v29; // rax
  __m128 v30; // [rsp+30h] [rbp-68h] BYREF
  __m128 v31; // [rsp+40h] [rbp-58h] BYREF

  if ( *(_BYTE *)(a1 + 2883) )
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 2860);
    return a2;
  }
  *((_QWORD *)a2 + 1) = 0LL;
  *(_QWORD *)a2 = 0LL;
  if ( a6 >= *(_DWORD *)(a1 + 1276) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x37Fu);
    return a2;
  }
  _mm_lfence();
  v11 = 16LL * *(unsigned int *)(a1 + 4LL * a6 + 1244);
  v12 = (_QWORD **)(v11 + a1 + 280);
  *(_OWORD *)a2 = *(_OWORD *)(v11 + a1 + 152);
  v13 = *v12;
  while ( v13 != v12 )
  {
    v14 = v13;
    v13 = (_QWORD *)*v13;
    v15 = (CVisual *)v14[2];
    if ( *(_BYTE *)(a4 + 32) )
    {
      v16 = (struct _LIST_ENTRY *)((char *)v15 + 328);
LABEL_7:
      if ( v16 )
      {
        Flink = v16[2].Flink;
        if ( Flink
          || (v29 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *))v16[1].Blink->Flink[20].Blink)(v16[1].Blink),
              v16[2].Flink = (struct _LIST_ENTRY *)v29,
              (Flink = (_DWORD *)v29) != 0LL) )
        {
          if ( *((_BYTE *)v14 + 24) )
            v18 = Flink[3];
          else
            v18 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)Flink + 24LL))(Flink);
          goto LABEL_11;
        }
      }
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v15);
      v28 = TreeDataListHead;
      if ( TreeDataListHead )
      {
        while ( 1 )
        {
          TreeDataListHead = TreeDataListHead->Flink;
          if ( TreeDataListHead == v28 )
            break;
          v16 = TreeDataListHead - 14;
          if ( TreeDataListHead[2].Flink == (struct _LIST_ENTRY *)a4 )
            goto LABEL_7;
        }
      }
    }
    v18 = 0;
LABEL_11:
    v19 = (__m128)_mm_loadu_si128((const __m128i *)((char *)v14 + 28));
    v30 = v19;
    if ( _mm_shuffle_ps(v19, v19, 170).m128_f32[0] > v19.m128_f32[0]
      && _mm_shuffle_ps(v19, v19, 255).m128_f32[0] > _mm_shuffle_ps(v19, v19, 85).m128_f32[0] )
    {
      if ( *(_BYTE *)(a3 + 816) )
        COcclusionContext::PageInPixelsRectToDeviceRect(a3, &v30, &v31);
      else
        v31 = v19;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __m128 *, _QWORD))(**(_QWORD **)(a3 + 392) + 56LL))(
              *(_QWORD *)(a3 + 392),
              &v31,
              v18) )
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a2, &v30);
    }
  }
  v20 = *a2;
  if ( a2[2] > *a2 && a2[3] > a2[1] )
  {
    if ( a5 )
    {
      InflateRectF_InPlace(a2);
      v20 = *a2;
    }
    if ( *a7 > v20 )
      *a2 = *a7;
    v21 = a7[1];
    if ( v21 > a2[1] )
      a2[1] = v21;
    v22 = a7[2];
    v23 = a2[2];
    if ( v23 > v22 )
    {
      a2[2] = v22;
      v23 = v22;
    }
    v24 = a7[3];
    v25 = a2[3];
    if ( v25 > v24 )
    {
      a2[3] = v24;
      v25 = v24;
      v23 = a2[2];
    }
    if ( v23 <= *a2 || v25 <= a2[1] )
    {
      *((_QWORD *)a2 + 1) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
  }
  return a2;
}
