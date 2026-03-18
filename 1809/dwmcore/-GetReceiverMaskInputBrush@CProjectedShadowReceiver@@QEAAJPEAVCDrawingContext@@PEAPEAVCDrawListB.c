/*
 * XREFs of ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801AEE84
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C97D0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18005AB70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18005C51C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x1800AE108 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800AEDD0 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x1800E4768 (-GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801AEC0C (-GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801AEDF0 (-GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

__int64 __fastcall CProjectedShadowReceiver::GetReceiverMaskInputBrush(
        CProjectedShadowReceiver *this,
        struct IRenderTarget **a2,
        struct CDrawListBrush **a3)
{
  unsigned int v4; // ebx
  CSpriteVisualContent *EffectiveMaskBrush; // rax
  __int64 v8; // rdx
  CSpriteVisualContent *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // xmm1_4
  __int64 v13; // rax
  __int64 (__fastcall *v14)(CSpriteVisualContent *, struct IRenderTarget ***); // rax
  int v15; // eax
  __int64 v16; // rcx
  int MaskIntermediate; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  struct IImageSource *v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  CSurfaceDrawListBrush *v24; // rcx
  __int64 *v25; // rcx
  __int16 v27; // [rsp+30h] [rbp-A9h] BYREF
  char v28; // [rsp+32h] [rbp-A7h]
  CSurfaceDrawListBrush *v29; // [rsp+40h] [rbp-99h] BYREF
  __int64 v30; // [rsp+48h] [rbp-91h] BYREF
  float v31; // [rsp+50h] [rbp-89h]
  float v32; // [rsp+54h] [rbp-85h]
  __int128 v33; // [rsp+58h] [rbp-81h] BYREF
  char v34; // [rsp+68h] [rbp-71h]
  CSurfaceDrawListBrush **v35; // [rsp+70h] [rbp-69h]
  CSurfaceDrawListBrush *v36; // [rsp+78h] [rbp-61h] BYREF
  char v37; // [rsp+80h] [rbp-59h]
  float v38[6]; // [rsp+88h] [rbp-51h] BYREF
  struct IRenderTarget **v39; // [rsp+A0h] [rbp-39h] BYREF
  int v40; // [rsp+A8h] [rbp-31h]
  int v41; // [rsp+ACh] [rbp-2Dh]
  int v42; // [rsp+B0h] [rbp-29h]
  __int128 v43; // [rsp+B4h] [rbp-25h]
  struct CDrawListBrush *v44; // [rsp+C8h] [rbp-11h]
  __int64 v45; // [rsp+D0h] [rbp-9h]
  __int64 v46; // [rsp+D8h] [rbp-1h]
  __int64 v47; // [rsp+E0h] [rbp+7h]
  int v48; // [rsp+E8h] [rbp+Fh]
  char v49; // [rsp+ECh] [rbp+13h]

  v4 = 0;
  *a3 = 0LL;
  EffectiveMaskBrush = CProjectedShadowReceiver::GetEffectiveMaskBrush(this);
  v9 = EffectiveMaskBrush;
  if ( !EffectiveMaskBrush || CSpriteVisualContent::GetBrushGraph(EffectiveMaskBrush, v8) )
  {
    v25 = (__int64 *)((char *)this + 104);
    goto LABEL_25;
  }
  v10 = *((_QWORD *)this + 13);
  if ( v10 )
    goto LABEL_10;
  v11 = *((_QWORD *)this + 7);
  v39 = a2;
  v40 = *(_DWORD *)(v11 + 132);
  v12 = *(_DWORD *)(v11 + 136);
  v13 = *(_QWORD *)v9;
  v41 = v12;
  v42 = 0;
  v14 = *(__int64 (__fastcall **)(CSpriteVisualContent *, struct IRenderTarget ***))(v13 + 304);
  v43 = _xmm;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0;
  v49 = 0;
  v15 = v14(v9, &v39);
  v4 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x12Fu);
    goto LABEL_19;
  }
  if ( v45 )
  {
    MaskIntermediate = CProjectedShadowReceiver::GenerateMaskIntermediate(
                         this,
                         a2,
                         (const struct D2D_SIZE_F *)(*((_QWORD *)this + 7) + 132LL));
    v4 = MaskIntermediate;
    if ( MaskIntermediate < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, MaskIntermediate, 0x136u);
LABEL_19:
      CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v39);
      return v4;
    }
  }
  else
  {
    *a3 = v44;
    v44 = 0LL;
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v39);
  v10 = *((_QWORD *)this + 13);
  if ( v10 )
  {
LABEL_10:
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, float *))(*(_QWORD *)v10 + 120LL))(v10, 0LL, 0LL, v38);
    v4 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x143u);
      return v4;
    }
    v21 = (struct IImageSource *)*((_QWORD *)this + 13);
    v34 = 0;
    v33 = 0LL;
    v22 = CDrawListBitmap::FromImageSource((struct IImageSource **)&v33, v21, (const struct CDrawingContext *)a2, 0);
    v4 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x146u);
    }
    else
    {
      v30 = 0LL;
      v27 = SamplerMode::k_ClampClampLinear;
      v32 = v38[3] - v38[1];
      v28 = 1;
      v31 = v38[2] - v38[0];
      v29 = 0LL;
      v35 = &v29;
      v36 = 0LL;
      v37 = 1;
      v4 = CSurfaceDrawListBrush::CreateWithContentRect((__int64 *)&v33, &v27, (float *)&v30, (__int64 *)&v36);
      if ( v37 )
      {
        v24 = *v35;
        *v35 = v36;
        if ( v24 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v24, 1);
      }
      if ( (v4 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v24, 0LL, 0, v4, 0x14Du);
        if ( v29 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v29, 1);
      }
      else
      {
        *a3 = v29;
        v29 = 0LL;
      }
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33 + 1);
    v25 = (__int64 *)&v33;
LABEL_25:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v25);
  }
  return v4;
}
