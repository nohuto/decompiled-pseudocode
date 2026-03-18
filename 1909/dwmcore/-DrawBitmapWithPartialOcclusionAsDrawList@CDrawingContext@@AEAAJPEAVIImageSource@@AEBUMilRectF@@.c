/*
 * XREFs of ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x180069C68
 * Callers:
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800426F0 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180068B40 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IK@@@@Z @ 0x1800D1560 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18016B5BC (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016CB64 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017B7AC (-RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@AEAAJPEAVCDrawingContext@@@Z @ 0x18017D4C8 (-RenderLayer@CLinearInterpolationLayer@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180028D68 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A930 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18006A10C (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007DB04 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?FillRectanglesWithBitmapAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@IPEAVIImageSource@@AEBVMILMatrix3x2@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800957C0 (-FillRectanglesWithBitmapAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@IPEAVIImageSource@@AEBVM.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C2114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x1800CA0A0 (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x1800CDC24 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 *     ??1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ @ 0x1800CE2E0 (--1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        __int128 *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  int v7; // eax
  unsigned int v8; // ebx
  int v12; // xmm6_4
  int v13; // eax
  _DWORD *v14; // rsi
  int v15; // eax
  void *v16; // rcx
  __int64 v17; // rdx
  char *v18; // rcx
  char *v19; // rax
  void *v20; // rcx
  CMILMatrix *v21; // rcx
  __int64 v22; // r9
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm5_4
  float v26; // xmm3_4
  float v27; // xmm4_4
  __int64 v29; // rdx
  __int64 v30; // r10
  char v31; // r8
  __int64 (__fastcall *v32)(__int64, __int128 *, _QWORD, __int64, _BYTE *, _QWORD *, unsigned int *); // r11
  char v33; // al
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  unsigned int v39; // eax
  const struct CMILMatrix *TopByReference; // rax
  unsigned int v41; // xmm1_4
  int v42; // xmm0_4
  int v43; // xmm1_4
  int v44; // eax
  unsigned int v45; // ecx
  int v46; // eax
  unsigned int v47; // ecx
  int v48; // eax
  unsigned int v49; // ecx
  _BYTE v50[4]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v51; // [rsp+4Ch] [rbp-BCh] BYREF
  _BYTE v52[16]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v53[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v54; // [rsp+80h] [rbp-88h] BYREF
  int v55; // [rsp+90h] [rbp-78h]
  int v56; // [rsp+94h] [rbp-74h]
  _QWORD v57[2]; // [rsp+98h] [rbp-70h] BYREF
  char v58; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v59[16]; // [rsp+B8h] [rbp-50h] BYREF
  char v60; // [rsp+C8h] [rbp-40h] BYREF
  char v61; // [rsp+D8h] [rbp-30h] BYREF

  v7 = *(_DWORD *)(a1 + 3264);
  v8 = 0;
  if ( v7 )
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 3280) + 4LL * (unsigned int)(v7 - 1));
  else
    v12 = (int)FLOAT_1_0;
  v54 = *a4;
  *(_OWORD *)&v53[1] = *a3;
  MILMatrix3x2::InferAffineMatrix(v52, &v54, &v53[1]);
  v13 = *(_DWORD *)(a1 + 512);
  if ( v13 && *(_BYTE *)((unsigned int)(v13 - 1) + *(_QWORD *)(a1 + 528)) )
    goto LABEL_35;
  v14 = (_DWORD *)(a1 + 480);
  v15 = *(_DWORD *)(a1 + 480);
  v16 = v15 ? (void *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(v15 - 1)) : &CMILMatrix::Identity;
  if ( !CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)v16) )
    goto LABEL_35;
  v17 = 2LL;
  v57[0] = v59;
  v18 = &v61;
  v57[1] = &v60;
  v19 = &v58;
  do
  {
    *(_QWORD *)v19 = v18;
    v18 += 16;
    v19 += 8;
    --v17;
  }
  while ( v17 );
  v20 = *v14 ? (void *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(*v14 - 1)) : &CMILMatrix::Identity;
  if ( !CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)v20) )
    goto LABEL_35;
  if ( *v14 )
    v21 = (CMILMatrix *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(*v14 - 1));
  else
    v21 = (CMILMatrix *)&CMILMatrix::Identity;
  CMILMatrix::Transform2DBoundsHelper<0>(v21);
  CScopedClipStack::GetClipBoundsWorld(a1 + 1008, (__int64)&v54);
  v23 = *(float *)&v53[1];
  if ( *(float *)&v54 > *(float *)&v53[1] )
  {
    LODWORD(v53[1]) = v54;
    v23 = *(float *)&v54;
  }
  v24 = *((float *)&v53[1] + 1);
  v25 = *((float *)&v53[1] + 1);
  if ( *((float *)&v54 + 1) > *((float *)&v53[1] + 1) )
  {
    HIDWORD(v53[1]) = DWORD1(v54);
    v24 = *((float *)&v54 + 1);
    v25 = *((float *)&v54 + 1);
  }
  v26 = *(float *)&v53[2];
  if ( *(float *)&v53[2] > *((float *)&v54 + 2) )
  {
    LODWORD(v53[2]) = DWORD2(v54);
    v26 = *((float *)&v54 + 2);
  }
  v27 = *((float *)&v53[2] + 1);
  if ( *((float *)&v53[2] + 1) > *((float *)&v54 + 3) )
  {
    HIDWORD(v53[2]) = HIDWORD(v54);
    v27 = *((float *)&v54 + 3);
  }
  if ( v26 <= v23 || v27 <= v25 )
  {
    v24 = 0.0;
    v23 = 0.0;
    v26 = 0.0;
    *(_OWORD *)&v53[1] = 0uLL;
    v27 = 0.0;
  }
  if ( v26 <= v23 || v27 <= v24 )
  {
    v39 = 0;
    v51 = 0;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 6347) )
      goto LABEL_35;
    v29 = *(_QWORD *)(a1 + 6272);
    v50[0] = 0;
    v30 = *(_QWORD *)(v29 + 400);
    v31 = *(_BYTE *)(v29 + 893);
    v54 = *(_OWORD *)&v53[1];
    v32 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64, _BYTE *, _QWORD *, unsigned int *))(*(_QWORD *)v30 + 64LL);
    v33 = (char)(4 * v31) >> 6;
    if ( v33 )
    {
      LOBYTE(v22) = v33 == 1;
    }
    else
    {
      LOBYTE(v22) = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v29 + 828) - 0.0)) & _xmm) < 0.000081380211
                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v29 + 840) - 0.0)) & _xmm) < 0.000081380211
                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v29 + 848) - 0.0)) & _xmm) < 0.000081380211
                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v29 + 856) - 0.0)) & _xmm) < 0.000081380211
                 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v29 + 888) - 1.0)) & _xmm) < 0.000081380211;
      *(_BYTE *)(v29 + 893) = v31 ^ (v31 ^ (-16 - 32 * v22)) & 0x30;
      if ( (_BYTE)v22 )
        *(_BYTE *)(v29 + 892) |= 0x3Fu;
    }
    v34 = v32(v30, &v54, a5, v22, v50, v57, &v51);
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x384u, 0LL);
LABEL_35:
      v36 = CDrawingContext::FillRectanglesWithBitmapAsDrawList(a1, a4, 1LL, a2, v52, v12, a6, a7);
      v8 = v36;
      if ( v36 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x5DFu, 0LL);
      return v8;
    }
    if ( !v50[0] )
      goto LABEL_35;
    v39 = v51;
  }
  if ( v39 )
  {
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 480));
    v41 = *((_DWORD *)TopByReference + 1);
    LODWORD(v54) = *(_DWORD *)TopByReference;
    *(_QWORD *)((char *)&v54 + 4) = __PAIR64__(*((_DWORD *)TopByReference + 4), v41);
    v42 = *((_DWORD *)TopByReference + 12);
    HIDWORD(v54) = *((_DWORD *)TopByReference + 5);
    v43 = *((_DWORD *)TopByReference + 13);
    v55 = v42;
    v56 = v43;
    MILMatrix3x2::SetInverse((MILMatrix3x2 *)&v53[1], (const struct MILMatrix3x2 *)&v54);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v54,
      (const struct D2D1::Matrix3x2F *)&v53[1],
      (const struct D2D1::Matrix3x2F *)v52);
    v44 = CDrawingContext::PushTransformInternal(
            (CDrawingContext *)a1,
            0LL,
            (const struct CMILMatrix *)&CMILMatrix::Identity,
            0,
            1);
    v8 = v44;
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x5B7u, 0LL);
    }
    else
    {
      v53[1] = 0LL;
      v46 = CDrawingContext::CDisableCPUClipScope::Enter(
              (CDrawingContext::CDisableCPUClipScope *)&v53[1],
              (struct CDrawingContext *)a1);
      v8 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x5BDu, 0LL);
      }
      else
      {
        v48 = CDrawingContext::FillRectanglesWithBitmapAsDrawList(a1, v59, v51, a2, &v54, v12, a6, a7);
        v8 = v48;
        if ( v48 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x5C6u, 0LL);
      }
      CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v53[1]);
      CDrawingContext::PopTransformInternal((CDrawingContext *)a1, 1);
    }
  }
  return v8;
}
