/*
 * XREFs of ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18019A584
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180068B40 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x180012E40 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x1800130B8 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180028D68 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180036740 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A930 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18007D9D4 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007E00C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z @ 0x1800A4950 (--$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x18016B4C0 (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x18016EB60 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x180180548 (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18021BAB0 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
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
  signed int v7; // ebx
  CDrawingContext *v11; // rcx
  __int64 v12; // rcx
  __int128 *v13; // r11
  CMoveRenderPassInfo *v14; // rax
  signed int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rcx
  signed int v20; // eax
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
        CMILMatrix::Transform((CMILMatrix *)v29, a4, (struct MilPoint2F *)&v23, 1u);
        v14 = CVisual::PreviousFrameVisibleRegion(this, a1);
        if ( CDwmMetaRegion::ClipRectWitRegion((float *)&v31, (HRGN)v14, 0LL) )
        {
          *(float *)&v32 = *(float *)&v31 + v23;
          *((float *)&v32 + 1) = *((float *)&v31 + 1) + v24;
          *((float *)&v32 + 2) = *((float *)&v31 + 2) + v23;
          *((float *)&v32 + 3) = *((float *)&v31 + 3) + v24;
          CScopedClipStack::GetClipBoundsWorld((__int64)a1 + 1008, (__int64)v33);
          if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(v33, (float *)&v32) )
          {
            v15 = MoveOptimizationInfo::Create((__int64)this, v23, v24, &v31, 0LL, v22, &v25);
            v7 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x10Fu, 0LL);
              goto LABEL_19;
            }
            v17 = *((_DWORD *)a1 + 1542);
            v18 = v17 + 1;
            if ( v17 + 1 >= v17 )
            {
              if ( v18 <= *((_DWORD *)a1 + 1541) )
              {
                v7 = 0;
                *(_QWORD *)(*((_QWORD *)a1 + 768) + 8LL * *((unsigned int *)a1 + 1542)) = v25;
                *((_DWORD *)a1 + 1542) = v18;
LABEL_16:
                CMILCOMBase::InternalAddRef(v25);
                *a7 = 1;
                goto LABEL_19;
              }
              v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 6144, 8, 1, &v25);
              v7 = v20;
              if ( v20 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v20, 0xC3u, 0LL);
            }
            else
            {
              v7 = -2147024362;
              MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, 0x80070216, 0xB8u, 0LL);
            }
            if ( v7 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v7, 0x114u, 0LL);
              goto LABEL_19;
            }
            goto LABEL_16;
          }
        }
      }
    }
  }
LABEL_19:
  ReleaseInterface<MoveOptimizationInfo>(&v25);
  return (unsigned int)v7;
}
