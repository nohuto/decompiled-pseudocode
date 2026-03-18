/*
 * XREFs of ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180014AA8
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180014828 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 * Callees:
 *     ??0CTreeEffectLayer@@IEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@PEAVCEffectBrush@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@4MM@Z @ 0x180014DB4 (--0CTreeEffectLayer@@IEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@P.c)
 *     ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x180014E7C (-GetLayerPointAndSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPo.c)
 *     ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x180014EC0 (-HasBlurEffectNode@CEffectBrush@@QEBA_NXZ.c)
 *     ?GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z @ 0x180014EF4 (-GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E304 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
  __int64 v26; // rax
  int v28; // r9d
  unsigned int v29; // [rsp+28h] [rbp-E0h]
  char v30; // [rsp+30h] [rbp-D8h]
  int v31; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v32; // [rsp+60h] [rbp-A8h] BYREF
  int v33; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v34; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v36[4]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v37[64]; // [rsp+88h] [rbp-80h] BYREF
  int v38; // [rsp+C8h] [rbp-40h]
  __int128 v39; // [rsp+D8h] [rbp-30h] BYREF
  const char *v40; // [rsp+E8h] [rbp-20h] BYREF
  int v41; // [rsp+F0h] [rbp-18h]

  v8 = *(float *)&FLOAT_1_0;
  v34 = 0LL;
  *(_QWORD *)a7 = 0LL;
  v32 = 0;
  v38 = 0;
  v13 = *(float *)&FLOAT_1_0;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*a1 + 24))(a1, &v39);
  v15 = *(_QWORD *)v14;
  v36[2] = *(_DWORD *)(v14 + 8);
  v16 = *a1;
  v36[0] = v15;
  v36[1] = 1;
  DisplaySize = (*(__int64 (__fastcall **)(__int64 *, __int64 *, unsigned int *))(v16 + 120))(a1, &v35, &v32);
  v19 = DisplaySize;
  if ( DisplaySize < 0 )
  {
    v29 = 43;
    goto LABEL_36;
  }
  v39 = *(_OWORD *)CTreeEffectLayer::GetLayerPointAndSize(&v40, a3, a2, a5);
  DisplaySize = CTreeEffectLayer::GetDisplaySize(v32, v35, &v33, &v31);
  v19 = DisplaySize;
  if ( DisplaySize < 0 )
  {
    v29 = 54;
    goto LABEL_36;
  }
  if ( DWORD2(v39) > v33 )
    v8 = (float)v33 / (float)SDWORD2(v39);
  if ( HIDWORD(v39) > v31 )
    v13 = (float)v31 / (float)SHIDWORD(v39);
  if ( v13 > v8 )
    v13 = v8;
  else
    v8 = v13;
  v20 = (float)SDWORD2(v39) * v8;
  *(float *)&v31 = v20;
  if ( COERCE_UNSIGNED_INT(fabs(v20)) > 0x497FFFF0 )
  {
    v7.m128_f32[0] = (float)(int)v20 - v20;
    v7 = _mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5));
    v31 = v7.m128_i32[0];
    v18 = (int)v20 - v7.m128_i32[0];
  }
  else
  {
    *(float *)&v31 = v20 + 6291456.25;
    v18 = v31 << 10 >> 11;
  }
  DWORD2(v39) = v18;
  v21 = (float)SHIDWORD(v39) * v13;
  *(float *)&v31 = v21;
  if ( COERCE_UNSIGNED_INT(fabs(v21)) > 0x497FFFF0 )
  {
    v7.m128_f32[0] = (float)(int)v21 - v21;
    v31 = _mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    v22 = (int)v21 - v31;
  }
  else
  {
    *(float *)&v31 = v21 + 6291456.25;
    v22 = v31 << 10 >> 11;
  }
  HIDWORD(v39) = v22;
  if ( !v18 || !v22 )
  {
    v19 = -2147024809;
    v29 = 82;
    goto LABEL_32;
  }
  if ( a3 )
    HasBlurEffectNode = CEffectBrush::HasBlurEffectNode(a3);
  else
    HasBlurEffectNode = 0;
  v24 = *a1;
  v40 = "DWM Scratch Rendertarget (tree effect layer)";
  v41 = 44;
  v30 = (*(__int64 (__fastcall **)(__int64 *))(v24 + 144))(a1);
  DisplaySize = CExternalLayer::CreateRenderTargetBitmap(&v40, &v39, v36, v35, v32, v30, 1, HasBlurEffectNode, &v34);
  v19 = DisplaySize;
  if ( DisplaySize < 0 )
  {
    v29 = 96;
LABEL_36:
    v28 = DisplaySize;
    goto LABEL_37;
  }
  v25 = operator new(0x118uLL);
  if ( v25 )
    v26 = CTreeEffectLayer::CTreeEffectLayer(v25, &v39, a5, v34, a3, a6, v37, &v40, LODWORD(v8), LODWORD(v13), v31);
  else
    v26 = 0LL;
  *(_QWORD *)a7 = v26;
  if ( !v26 )
  {
    v19 = -2147024882;
    v29 = 108;
LABEL_32:
    v28 = v19;
LABEL_37:
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v28, v29, 0LL);
    goto LABEL_24;
  }
  if ( a4 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 48LL))(a4, 91LL) )
    *(_QWORD *)(*(_QWORD *)a7 + 248LL) = a4;
LABEL_24:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v34);
  return v19;
}
