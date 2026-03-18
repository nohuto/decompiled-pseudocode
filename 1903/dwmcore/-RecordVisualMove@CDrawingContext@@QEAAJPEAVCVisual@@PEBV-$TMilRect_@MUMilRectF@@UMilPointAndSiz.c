/*
 * XREFs of ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180170E14
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004F290 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x180014490 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x180014708 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006F7D4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800749E0 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ??$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z @ 0x180080904 (--$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016C8C4 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x18016CBA4 (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUHRGN__@@@Z @ 0x18016F250 (-ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x18016F92C (-GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x180170240 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     McTemplateU0xff @ 0x180171E94 (McTemplateU0xff.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x180181C48 (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x1801C313C (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z @ 0x1801C4A40 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::RecordVisualMove(struct CDrawingContext *a1, CVisual *this, _OWORD *a3)
{
  unsigned int v6; // ebx
  CDrawingContext *v7; // rcx
  __int64 v8; // rcx
  const struct CMILMatrix *v9; // r8
  int v10; // r10d
  signed int LocalToWorldTransform; // eax
  __int64 v12; // rcx
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rax
  float v14; // xmm10_4
  float v15; // xmm11_4
  int v16; // ecx
  int v17; // r9d
  float v18; // xmm12_4
  float v19; // xmm13_4
  CMoveRenderPassInfo *v20; // r15
  unsigned int v21; // esi
  signed int v22; // eax
  __int64 v23; // rcx
  float v24; // xmm9_4
  float v25; // xmm7_4
  float v26; // xmm8_4
  float v27; // xmm6_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  signed int v30; // eax
  __int64 v31; // rcx
  signed int v32; // eax
  __int64 v33; // rcx
  int v35; // [rsp+30h] [rbp-D8h]
  bool v36[8]; // [rsp+48h] [rbp-C0h] BYREF
  CGdiSpriteBitmap *v37; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v38; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v40[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v41; // [rsp+A8h] [rbp-60h]
  _BYTE v42[64]; // [rsp+B8h] [rbp-50h] BYREF
  int v43; // [rsp+F8h] [rbp-10h]
  _BYTE v44[64]; // [rsp+108h] [rbp+0h] BYREF
  int v45; // [rsp+148h] [rbp+40h]
  __int128 v46; // [rsp+158h] [rbp+50h] BYREF
  struct MilRectF *v47[2]; // [rsp+168h] [rbp+60h] BYREF

  v6 = 0;
  v37 = 0LL;
  if ( *((_BYTE *)a1 + 6348)
    && CDrawingContext::IsDirectRenderingToDisplayRenderTarget(a1)
    && !*((_BYTE *)v7 + 6133)
    && !CDrawingContext::IsInLayer(v7) )
  {
    v43 = 0;
    v40[0] = _xmm;
    v40[1] = _xmm;
    v40[2] = _xmm;
    v40[3] = _xmm;
    v41 = 32085;
    v45 = 0;
    v36[0] = 0;
    CMatrixStack::Top((CMatrixStack *)(v8 + 480), (struct CMILMatrix *)v42);
    v9 = (const struct CMILMatrix *)v40;
    if ( v10 < 5 )
      v9 = 0LL;
    LocalToWorldTransform = CVisual::SetLastLocalToWorldTransform(
                              this,
                              (const struct CMILMatrix *)v42,
                              v9,
                              v36,
                              (struct CMILMatrix *)v44,
                              a1);
    v6 = LocalToWorldTransform;
    if ( LocalToWorldTransform < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, LocalToWorldTransform, 0x1A2Bu, 0LL);
    }
    else if ( v36[0] )
    {
      v39 = 0LL;
      MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(this, a1);
      v14 = *((float *)MoveRenderPassInfoRef + 14);
      v15 = *((float *)MoveRenderPassInfoRef + 15);
      *(_OWORD *)v47 = *a3;
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v42, (__int64)v47, (float *)&v46);
      LODWORD(v18) = LODWORD(v15) ^ _xmm;
      LODWORD(v19) = LODWORD(v14) ^ _xmm;
      *((float *)&v46 + 1) = *((float *)&v46 + 1) + COERCE_FLOAT(LODWORD(v15) ^ _xmm);
      *(float *)&v46 = *(float *)&v46 + COERCE_FLOAT(LODWORD(v14) ^ _xmm);
      *((float *)&v46 + 3) = *((float *)&v46 + 3) + COERCE_FLOAT(LODWORD(v15) ^ _xmm);
      *((float *)&v46 + 2) = *((float *)&v46 + 2) + COERCE_FLOAT(LODWORD(v14) ^ _xmm);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xff(v16, (unsigned int)&MILEVENT_MEDIA_UCE_VISUAL_MOVE_DETECTED, (_DWORD)this, v17, SLOBYTE(v15));
      v20 = CVisual::PreviousFrameVisibleRegion(this, a1);
      if ( v20 )
      {
        v47[0] = 0LL;
        v38 = 0LL;
        if ( CVisual::GetAdditionalDirtyRects(this, &v38, (unsigned int *)&v36[4], (__m128i **)v47)
          && *(_QWORD *)(*((_QWORD *)a1 + 4) + 384LL) == v38
          && (v21 = 0, *(_DWORD *)&v36[4]) )
        {
          while ( 1 )
          {
            v22 = CDrawingContext::ExcludeLocalRenderingRectFromRegion(
                    (__int64)a1,
                    (__int64)v47[0] + 16 * v21,
                    0.0,
                    (HRGN)v20);
            v6 = v22;
            if ( v22 < 0 )
              break;
            if ( ++v21 >= *(_DWORD *)&v36[4] )
              goto LABEL_17;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1A53u, 0LL);
        }
        else
        {
LABEL_17:
          if ( (unsigned __int8)CDwmMetaRegion::ClipRectWitRegion(&v46, v20, &v39) )
          {
            v24 = *(float *)&v46 + v14;
            v25 = *((float *)&v46 + 1) + v15;
            v26 = *((float *)&v46 + 2) + v14;
            v27 = *((float *)&v46 + 3) + v15;
            CScopedClipStack::GetClipBoundsWorld((__int64)a1 + 1008, (__int64)v47);
            if ( *(float *)v47 > v24 )
              v24 = *(float *)v47;
            v28 = v25;
            if ( *((float *)v47 + 1) > v25 )
            {
              v25 = *((float *)v47 + 1);
              v28 = *((float *)v47 + 1);
            }
            v29 = v26;
            if ( v26 > *(float *)&v47[1] )
            {
              v26 = *(float *)&v47[1];
              v29 = *(float *)&v47[1];
            }
            if ( v27 > *((float *)&v47[1] + 1) )
              v27 = *((float *)&v47[1] + 1);
            if ( v29 > v24 && v27 > v28 )
            {
              *(float *)&v46 = v24 + v19;
              *((float *)&v46 + 1) = v25 + v18;
              *((float *)&v46 + 2) = v26 + v19;
              *((float *)&v46 + 3) = v27 + v18;
              v30 = MoveOptimizationInfo::Create((__int64)this, v14, v15, &v46, v39, v35, &v37);
              v6 = v30;
              if ( v30 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x1A65u, 0LL);
              }
              else
              {
                v32 = CDrawingContext::CombineMove((__int64)a1, (__int64)v37, (__int128 *)v47);
                v6 = v32;
                if ( v32 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x1A67u, 0LL);
              }
            }
          }
        }
      }
    }
  }
  ReleaseInterface<MoveOptimizationInfo>(&v37);
  return v6;
}
