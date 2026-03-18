/*
 * XREFs of ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180011038
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180010DB8 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 * Callees:
 *     ??0CTreeEffectLayer@@IEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@PEAVCEffectBrush@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@4MM@Z @ 0x18001133C (--0CTreeEffectLayer@@IEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@P.c)
 *     ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x180011404 (-GetLayerPointAndSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPo.c)
 *     ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x180011448 (-HasBlurEffectNode@CEffectBrush@@QEBA_NXZ.c)
 *     ?GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z @ 0x180011480 (-GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002FB08 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTreeEffectLayer::Create(
        __int64 *a1,
        __int64 a2,
        CEffectBrush *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __m128 v7; // xmm2
  float v8; // xmm6_4
  float v13; // xmm7_4
  __int64 v14; // rax
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  int DisplaySize; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  float v20; // xmm0_4
  float v21; // xmm0_4
  int v22; // eax
  bool HasBlurEffectNode; // bl
  __int64 v24; // rdx
  void *v25; // rax
  int v27; // r9d
  unsigned int v28; // [rsp+28h] [rbp-E0h]
  char v29; // [rsp+30h] [rbp-D8h]
  int v30; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-A8h] BYREF
  int v32; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v35[4]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v36[64]; // [rsp+88h] [rbp-80h] BYREF
  int v37; // [rsp+C8h] [rbp-40h]
  __int128 v38; // [rsp+D8h] [rbp-30h] BYREF
  const char *v39; // [rsp+E8h] [rbp-20h] BYREF
  int v40; // [rsp+F0h] [rbp-18h]

  v8 = FLOAT_1_0;
  v33 = 0LL;
  *(_QWORD *)a7 = 0LL;
  v31 = 0;
  v37 = 0;
  v13 = FLOAT_1_0;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*a1 + 24))(a1, &v38);
  v15 = *(_QWORD *)v14;
  v35[2] = *(_DWORD *)(v14 + 8);
  v16 = *a1;
  v35[0] = v15;
  v35[1] = 1;
  DisplaySize = (*(__int64 (__fastcall **)(__int64 *, __int64 *, unsigned int *))(v16 + 120))(a1, &v34, &v31);
  v19 = DisplaySize;
  if ( DisplaySize < 0 )
  {
    v28 = 43;
    goto LABEL_35;
  }
  v38 = *(_OWORD *)CTreeEffectLayer::GetLayerPointAndSize(&v39, a3, a2, a5);
  DisplaySize = CTreeEffectLayer::GetDisplaySize(v31, v34, &v32, &v30);
  v19 = DisplaySize;
  if ( DisplaySize < 0 )
  {
    v28 = 54;
    goto LABEL_35;
  }
  if ( DWORD2(v38) > v32 )
    v8 = (float)v32 / (float)SDWORD2(v38);
  if ( HIDWORD(v38) > v30 )
    v13 = (float)v30 / (float)SHIDWORD(v38);
  if ( v13 > v8 )
    v13 = v8;
  else
    v8 = v13;
  v20 = (float)SDWORD2(v38) * v8;
  *(float *)&v30 = v20;
  if ( COERCE_UNSIGNED_INT(fabs(v20)) > 0x497FFFF0 )
  {
    v7.m128_f32[0] = (float)(int)v20 - v20;
    v7 = _mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5));
    v30 = v7.m128_i32[0];
    v18 = (int)v20 - v7.m128_i32[0];
  }
  else
  {
    *(float *)&v30 = v20 + 6291456.25;
    v18 = v30 << 10 >> 11;
  }
  DWORD2(v38) = v18;
  v21 = (float)SHIDWORD(v38) * v13;
  *(float *)&v30 = v21;
  if ( COERCE_UNSIGNED_INT(fabs(v21)) > 0x497FFFF0 )
  {
    v7.m128_f32[0] = (float)(int)v21 - v21;
    v30 = _mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    v22 = (int)v21 - v30;
  }
  else
  {
    *(float *)&v30 = v21 + 6291456.25;
    v22 = v30 << 10 >> 11;
  }
  HIDWORD(v38) = v22;
  if ( !v18 || !v22 )
  {
    v19 = -2147024809;
    v28 = 82;
    goto LABEL_31;
  }
  if ( a3 )
    HasBlurEffectNode = CEffectBrush::HasBlurEffectNode(a3);
  else
    HasBlurEffectNode = 0;
  v24 = *a1;
  v39 = "DWM Scratch Rendertarget (tree effect layer)";
  v40 = 44;
  v29 = (*(__int64 (__fastcall **)(__int64 *))(v24 + 144))(a1);
  DisplaySize = CExternalLayer::CreateRenderTargetBitmap(&v39, &v38, v35, v34, v31, v29, 1, HasBlurEffectNode, &v33);
  v19 = DisplaySize;
  if ( DisplaySize < 0 )
  {
    v28 = 96;
LABEL_35:
    v27 = DisplaySize;
    goto LABEL_36;
  }
  v25 = operator new(0x118uLL);
  if ( v25 )
    v25 = (void *)CTreeEffectLayer::CTreeEffectLayer(
                    v25,
                    &v38,
                    a5,
                    v33,
                    a3,
                    a6,
                    v36,
                    &v39,
                    LODWORD(v8),
                    LODWORD(v13),
                    v30);
  *(_QWORD *)a7 = v25;
  if ( !v25 )
  {
    v19 = -2147024882;
    v28 = 108;
LABEL_31:
    v27 = v19;
LABEL_36:
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v27, v28);
    goto LABEL_24;
  }
  if ( a4 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 48LL))(a4, 86LL) )
    *(_QWORD *)(*(_QWORD *)a7 + 248LL) = a4;
LABEL_24:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v33);
  return v19;
}
