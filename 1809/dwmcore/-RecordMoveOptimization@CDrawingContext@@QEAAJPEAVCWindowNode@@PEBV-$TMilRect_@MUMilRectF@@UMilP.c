/*
 * XREFs of ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x1801667A8
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x1800133C4 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x180013440 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x180016DAC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180030B00 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18008E53C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18009E3AC (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800DA754 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x180162334 (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x180165D14 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x18017FF5C (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 */

__int64 __fastcall CDrawingContext::RecordMoveOptimization(
        struct CDrawingContext *a1,
        CVisual *this,
        __int64 a3,
        const struct MilPoint2F *a4,
        int a5,
        int a6,
        _BYTE *a7)
{
  int v7; // ebx
  CDrawingContext *v11; // rcx
  __int64 v12; // rcx
  __int128 *v13; // r11
  CMoveRenderPassInfo *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rcx
  int v20; // eax
  int v22; // [rsp+28h] [rbp-D8h]
  float v23; // [rsp+40h] [rbp-C0h] BYREF
  float v24; // [rsp+44h] [rbp-BCh]
  CMILCOMBase *v25; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v26[3]; // [rsp+50h] [rbp-B0h] BYREF
  __m128 v27; // [rsp+80h] [rbp-80h]
  int v28; // [rsp+90h] [rbp-70h]
  _OWORD v29[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v30; // [rsp+E0h] [rbp-20h]
  __int128 v31; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v32; // [rsp+100h] [rbp+0h] BYREF
  float v33[4]; // [rsp+110h] [rbp+10h] BYREF

  v7 = 0;
  v25 = 0LL;
  *a7 = 0;
  if ( *((_BYTE *)a1 + 6348) )
  {
    if ( CDrawingContext::IsDirectRenderingToDisplayRenderTarget(a1)
      && !*((_BYTE *)v11 + 6133)
      && !CDrawingContext::IsInLayer(v11) )
    {
      v28 = 0;
      CMatrixStack::Top((CMatrixStack *)(v12 + 480), (struct CMILMatrix *)v26);
      if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)v26) )
      {
        v32 = *v13;
        CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v26, (__int64)&v32, (float *)&v31);
        v29[1] = v26[1];
        v29[0] = v26[0];
        v29[3] = v27;
        v29[2] = v26[2];
        v30 = v28;
        CMILMatrix::Translate(
          (CMILMatrix *)v29,
          COERCE_FLOAT(v27.m128_i32[0] ^ _xmm),
          COERCE_FLOAT(_mm_shuffle_ps(v27, v27, 85).m128_u32[0] ^ _xmm));
        CMILMatrix::Transform((CMILMatrix *)v29, a4, (struct MilPoint2F *)&v23, 1);
        v14 = CVisual::PreviousFrameVisibleRegion(this, a1);
        if ( (unsigned __int8)CDwmMetaRegion::ClipRectWitRegion(&v31, v14, 0LL) )
        {
          *(float *)&v32 = *(float *)&v31 + v23;
          *((float *)&v32 + 1) = *((float *)&v31 + 1) + v24;
          *((float *)&v32 + 2) = *((float *)&v31 + 2) + v23;
          *((float *)&v32 + 3) = *((float *)&v31 + 3) + v24;
          CScopedClipStack::GetClipBoundsWorld((struct CDrawingContext *)((char *)a1 + 1008), (__int64)v33);
          if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(v33, (float *)&v32) )
          {
            v15 = MoveOptimizationInfo::Create((__int64)this, v23, v24, &v31, 0LL, v22, &v25);
            v7 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1B14u);
            }
            else
            {
              v17 = *((_DWORD *)a1 + 1542);
              v18 = v17 + 1;
              v7 = v17 + 1 < v17 ? 0x80070216 : 0;
              if ( v17 + 1 < v17 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v7, 0xB5u);
              }
              else if ( v18 > *((_DWORD *)a1 + 1541) )
              {
                v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 6144, 8, 1, &v25);
                v7 = v20;
                if ( v20 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v20, 0xC0u);
              }
              else
              {
                v19 = v17;
                *(_QWORD *)(*((_QWORD *)a1 + 768) + 8LL * v17) = v25;
                *((_DWORD *)a1 + 1542) = v18;
              }
              if ( v7 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v7, 0x1B19u);
              }
              else
              {
                CMILCOMBase::InternalAddRef(v25);
                *a7 = 1;
              }
            }
          }
        }
      }
    }
  }
  ReleaseInterface<CCompositionSurfaceInfo>(&v25);
  return (unsigned int)v7;
}
