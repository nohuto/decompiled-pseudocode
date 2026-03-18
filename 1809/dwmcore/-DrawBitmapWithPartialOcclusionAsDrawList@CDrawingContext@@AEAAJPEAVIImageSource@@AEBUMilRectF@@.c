/*
 * XREFs of ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x1800B18C8
 * Callers:
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0HJ@@@@Z @ 0x18008D560 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18008D9AC (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180162430 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z @ 0x1801640EC (-DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z.c)
 *     ?RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017B32C (-RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017CFFC (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x180030128 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18003E3F0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ @ 0x180066AD0 (--1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x1800676B4 (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006A728 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800B17F8 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?FillRectanglesWithBitmapAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@IPEAVIImageSource@@AEBVMILMatrix3x2@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800B1FB4 (-FillRectanglesWithBitmapAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@IPEAVIImageSource@@AEBVM.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int128 *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  int v7; // eax
  unsigned int v8; // edi
  float v12; // xmm9_4
  int v13; // eax
  _DWORD *v14; // rsi
  int v15; // eax
  void *v16; // r10
  float *v17; // r10
  float v18; // xmm1_4
  float v19; // xmm1_4
  __int64 v20; // rdx
  char *v21; // rcx
  char *v22; // rax
  void *v23; // r10
  float *v24; // r10
  float v25; // xmm1_4
  float v26; // xmm1_4
  CMILMatrix *v27; // rcx
  __int64 v28; // r9
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm5_4
  float v32; // xmm2_4
  float v33; // xmm3_4
  __int64 v35; // rdx
  char v36; // r8
  char v37; // al
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // eax
  unsigned int v41; // ecx
  unsigned int v43; // eax
  const struct CMILMatrix *TopByReference; // rax
  unsigned int v45; // xmm1_4
  int v46; // xmm0_4
  int v47; // xmm1_4
  int v48; // eax
  unsigned int v49; // ecx
  int v50; // eax
  unsigned int v51; // ecx
  int v52; // eax
  unsigned int v53; // ecx
  int v54; // eax
  float v55; // xmm1_4
  float v56; // xmm1_4
  float v57; // xmm1_4
  float v58; // xmm1_4
  _BYTE v59[4]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v60; // [rsp+4Ch] [rbp-BCh] BYREF
  _BYTE v61[16]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v62; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v63; // [rsp+80h] [rbp-88h] BYREF
  int v64; // [rsp+90h] [rbp-78h]
  int v65; // [rsp+94h] [rbp-74h]
  _QWORD v66[2]; // [rsp+98h] [rbp-70h] BYREF
  char v67; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v68[16]; // [rsp+B8h] [rbp-50h] BYREF
  char v69; // [rsp+C8h] [rbp-40h] BYREF
  char v70; // [rsp+D8h] [rbp-30h] BYREF

  v7 = *(_DWORD *)(a1 + 3264);
  v8 = 0;
  if ( v7 )
    v12 = *(float *)(*(_QWORD *)(a1 + 3280) + 4LL * (unsigned int)(v7 - 1));
  else
    v12 = FLOAT_1_0;
  v63 = *a4;
  v62 = *a3;
  MILMatrix3x2::InferAffineMatrix((__int64)v61, (float *)&v63, (float *)&v62);
  v13 = *(_DWORD *)(a1 + 512);
  if ( v13 && *(_BYTE *)((unsigned int)(v13 - 1) + *(_QWORD *)(a1 + 528)) )
    goto LABEL_39;
  v14 = (_DWORD *)(a1 + 480);
  v15 = *(_DWORD *)(a1 + 480);
  v16 = v15 ? (void *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(v15 - 1)) : &CMILMatrix::Identity;
  if ( !CMILMatrix::Is2DAffine<1>((__int64)v16, 1)
    || (v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v17[1] - 0.0)) & _xmm), v18 >= 0.000081380211)
    || (v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v17[4] - 0.0)) & _xmm), v19 >= 0.000081380211) )
  {
    v55 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*v17 - 0.0)) & _xmm);
    if ( v55 >= 0.000081380211 )
      goto LABEL_39;
    v56 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v17[5] - 0.0)) & _xmm);
    if ( v56 >= 0.000081380211 )
      goto LABEL_39;
  }
  v20 = 2LL;
  v66[0] = v68;
  v21 = &v70;
  v66[1] = &v69;
  v22 = &v67;
  do
  {
    *(_QWORD *)v22 = v21;
    v21 += 16;
    v22 += 8;
    --v20;
  }
  while ( v20 );
  v23 = *v14 ? (void *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(*v14 - 1)) : &CMILMatrix::Identity;
  if ( !CMILMatrix::Is2DAffine<1>((__int64)v23, 1)
    || (v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v24[1] - 0.0)) & _xmm), v25 >= 0.000081380211)
    || (v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v24[4] - 0.0)) & _xmm), v26 >= 0.000081380211) )
  {
    v57 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*v24 - 0.0)) & _xmm);
    if ( v57 >= 0.000081380211 )
      goto LABEL_39;
    v58 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v24[5] - 0.0)) & _xmm);
    if ( v58 >= 0.000081380211 )
      goto LABEL_39;
  }
  if ( *v14 )
    v27 = (CMILMatrix *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(*v14 - 1));
  else
    v27 = (CMILMatrix *)&CMILMatrix::Identity;
  CMILMatrix::Transform2DBoundsHelper<0>(v27);
  CScopedClipStack::GetClipBoundsWorld((CScopedClipStack *)(a1 + 1008), (__int64)&v63);
  v29 = *(float *)&v62;
  if ( *(float *)&v63 > *(float *)&v62 )
  {
    LODWORD(v62) = v63;
    v29 = *(float *)&v63;
  }
  v30 = *((float *)&v62 + 1);
  v31 = *((float *)&v62 + 1);
  if ( *((float *)&v63 + 1) > *((float *)&v62 + 1) )
  {
    DWORD1(v62) = DWORD1(v63);
    v30 = *((float *)&v63 + 1);
    v31 = *((float *)&v63 + 1);
  }
  v32 = *((float *)&v62 + 2);
  if ( *((float *)&v62 + 2) > *((float *)&v63 + 2) )
  {
    DWORD2(v62) = DWORD2(v63);
    v32 = *((float *)&v63 + 2);
  }
  v33 = *((float *)&v62 + 3);
  if ( *((float *)&v62 + 3) > *((float *)&v63 + 3) )
  {
    HIDWORD(v62) = HIDWORD(v63);
    v33 = *((float *)&v63 + 3);
  }
  if ( v32 <= v29 || v33 <= v31 )
  {
    v30 = 0.0;
    v29 = 0.0;
    v32 = 0.0;
    v62 = 0uLL;
    v33 = 0.0;
  }
  if ( v32 <= v29 || v33 <= v30 )
  {
    v43 = 0;
    v60 = 0;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 6347) )
      goto LABEL_39;
    v35 = *(_QWORD *)(a1 + 6272);
    v59[0] = 0;
    v36 = *(_BYTE *)(v35 + 885);
    v37 = (char)(4 * v36) >> 6;
    v63 = v62;
    if ( v37 )
    {
      LOBYTE(v28) = v37 == 1;
    }
    else
    {
      LOBYTE(v28) = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v35 + 820) - 0.0)) & _xmm) < 0.000081380211
                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v35 + 832) - 0.0)) & _xmm) < 0.000081380211
                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v35 + 840) - 0.0)) & _xmm) < 0.000081380211
                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v35 + 848) - 0.0)) & _xmm) < 0.000081380211
                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v35 + 880) - 1.0)) & _xmm) < 0.000081380211;
      *(_BYTE *)(v35 + 885) = v36 ^ (v36 ^ (-16 - 32 * v28)) & 0x30;
      if ( (_BYTE)v28 )
        *(_BYTE *)(v35 + 884) |= 0x3Fu;
    }
    v38 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, __int64, _BYTE *, _QWORD *, unsigned int *))(**(_QWORD **)(v35 + 392) + 64LL))(
            *(_QWORD *)(v35 + 392),
            &v63,
            a5,
            v28,
            v59,
            v66,
            &v60);
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x385u);
LABEL_39:
      v40 = CDrawingContext::FillRectanglesWithBitmapAsDrawList(a1, a4, 1LL, a2, v61, LODWORD(v12), a6, a7);
      v8 = v40;
      if ( v40 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x5E2u);
      return v8;
    }
    if ( !v59[0] )
      goto LABEL_39;
    v43 = v60;
  }
  if ( v43 )
  {
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 480));
    v45 = *((_DWORD *)TopByReference + 1);
    LODWORD(v63) = *(_DWORD *)TopByReference;
    *(_QWORD *)((char *)&v63 + 4) = __PAIR64__(*((_DWORD *)TopByReference + 4), v45);
    v46 = *((_DWORD *)TopByReference + 12);
    HIDWORD(v63) = *((_DWORD *)TopByReference + 5);
    v47 = *((_DWORD *)TopByReference + 13);
    v64 = v46;
    v65 = v47;
    MILMatrix3x2::SetInverse((MILMatrix3x2 *)&v62, (const struct MILMatrix3x2 *)&v63);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v63,
      (const struct D2D1::Matrix3x2F *)&v62,
      (const struct D2D1::Matrix3x2F *)v61);
    v48 = CDrawingContext::PushTransformInternal(
            (CDrawingContext *)a1,
            0LL,
            (const struct CMILMatrix *)&CMILMatrix::Identity,
            0,
            1);
    v8 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x5BAu);
    }
    else
    {
      *(_QWORD *)&v62 = 0LL;
      v50 = CDrawingContext::CDisableCPUClipScope::Enter(
              (CDrawingContext::CDisableCPUClipScope *)&v62,
              (struct CDrawingContext *)a1);
      v8 = v50;
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x5C0u);
      }
      else
      {
        v52 = CDrawingContext::FillRectanglesWithBitmapAsDrawList(a1, v68, v60, a2, &v63, LODWORD(v12), a6, a7);
        v8 = v52;
        if ( v52 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x5C9u);
      }
      CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v62);
      CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
        (int *)(a1 + 448),
        &v63);
      if ( *v14 )
        --*v14;
      v54 = *(_DWORD *)(a1 + 512);
      if ( v54 )
        *(_DWORD *)(a1 + 512) = v54 - 1;
      *(_BYTE *)(a1 + 6344) = 1;
    }
  }
  return v8;
}
