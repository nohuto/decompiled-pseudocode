/*
 * XREFs of ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801F2CA4
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801F1060 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180051ED4 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180052140 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180075FA8 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x18008055C (-GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800BA950 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x180258E54 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 */

__int64 __fastcall CProjectedShadowReceiver::GetReceiverMaskInputBrush(
        CProjectedShadowReceiver *this,
        struct CDrawingContext *a2,
        struct CDrawListBrush **a3)
{
  CSpriteVisualContent *v5; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // xmm1_4
  __int64 v13; // rax
  __int64 (__fastcall *v14)(CSpriteVisualContent *, struct CDrawingContext **); // rax
  signed int v15; // eax
  __int64 v16; // rcx
  signed int MaskIntermediate; // eax
  __int64 v18; // rcx
  signed int v19; // eax
  __int64 v20; // rcx
  struct IImageSource *v21; // rdx
  signed int v22; // eax
  __int64 v23; // rcx
  CSurfaceDrawListBrush *v24; // rcx
  __int16 v26; // [rsp+40h] [rbp-C0h] BYREF
  char v27; // [rsp+42h] [rbp-BEh]
  const char *v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+58h] [rbp-A8h]
  float v30; // [rsp+5Ch] [rbp-A4h]
  __int128 v31; // [rsp+60h] [rbp-A0h] BYREF
  char v32; // [rsp+70h] [rbp-90h]
  CSurfaceDrawListBrush **v33; // [rsp+78h] [rbp-88h]
  CSurfaceDrawListBrush *v34; // [rsp+80h] [rbp-80h] BYREF
  char v35; // [rsp+88h] [rbp-78h]
  CSurfaceDrawListBrush *v36[2]; // [rsp+90h] [rbp-70h] BYREF
  float v37[4]; // [rsp+A0h] [rbp-60h] BYREF
  struct CDrawingContext *v38; // [rsp+B0h] [rbp-50h] BYREF
  int v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+BCh] [rbp-44h]
  int v41; // [rsp+C0h] [rbp-40h]
  __int128 v42; // [rsp+C4h] [rbp-3Ch]
  struct CDrawListBrush *v43; // [rsp+D8h] [rbp-28h]
  __int64 v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  __int64 v46; // [rsp+F0h] [rbp-10h]
  int v47; // [rsp+F8h] [rbp-8h]
  char v48; // [rsp+FCh] [rbp-4h]

  *a3 = 0LL;
  v5 = (CSpriteVisualContent *)*((_QWORD *)this + 12);
  v7 = 0;
  if ( !v5 )
    v5 = *(CSpriteVisualContent **)(*((_QWORD *)this + 2) + 144LL);
  if ( !CSpriteVisualContent::GetBrushGraph(v5, (__int64)a2) )
  {
    v8 = *((_QWORD *)this + 13);
    if ( v8 )
      goto LABEL_12;
    v9 = (*(__int64 (__fastcall **)(CSpriteVisualContent *, struct CDrawingContext *, __int64))(*(_QWORD *)v5 + 360LL))(
           v5,
           a2,
           *((_QWORD *)this + 7) + 132LL);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC0u, 0LL);
      return v7;
    }
    v11 = *((_QWORD *)this + 7);
    v38 = a2;
    v39 = *(_DWORD *)(v11 + 132);
    v12 = *(_DWORD *)(v11 + 136);
    v13 = *(_QWORD *)v5;
    v40 = v12;
    v41 = 0;
    v14 = *(__int64 (__fastcall **)(CSpriteVisualContent *, struct CDrawingContext **))(v13 + 368);
    v42 = _xmm;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0;
    v48 = 0;
    v15 = v14(v5, &v38);
    v7 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xC4u, 0LL);
      goto LABEL_20;
    }
    if ( v44 )
    {
      *(_OWORD *)v36 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 13);
      v28 = "DWM ProjectedShadow Mask";
      v29 = 24;
      MaskIntermediate = ShadowHelpers::GenerateMaskIntermediate(
                           (struct CResourceTag *)&v28,
                           a2,
                           0LL,
                           0,
                           (__int64)v36,
                           (__int64)this + 104);
      v7 = MaskIntermediate;
      if ( MaskIntermediate < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, MaskIntermediate, 0xD3u, 0LL);
LABEL_20:
        CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v38);
        return v7;
      }
    }
    else
    {
      *a3 = v43;
      v43 = 0LL;
    }
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v38);
    v8 = *((_QWORD *)this + 13);
    if ( v8 )
    {
LABEL_12:
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, float *))(*(_QWORD *)v8 + 120LL))(v8, 0LL, 0LL, v37);
      v7 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xE0u, 0LL);
      }
      else
      {
        v21 = (struct IImageSource *)*((_QWORD *)this + 13);
        v32 = 0;
        v31 = 0LL;
        v22 = CDrawListBitmap::FromImageSource((struct IImageSource **)&v31, v21, a2, 0);
        v7 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xE3u, 0LL);
        }
        else
        {
          v28 = 0LL;
          v33 = v36;
          v30 = v37[3] - v37[1];
          v26 = SamplerMode::k_ClampClampLinear;
          *(float *)&v29 = v37[2] - v37[0];
          v36[0] = 0LL;
          v34 = 0LL;
          v35 = 1;
          v27 = 1;
          v7 = CSurfaceDrawListBrush::CreateWithContentRect((__int64)&v31, &v26, (float *)&v28, (__int64 *)&v34);
          if ( v35 )
          {
            v24 = *v33;
            *v33 = v34;
            if ( v24 )
              CSurfaceDrawListBrush::`vector deleting destructor'(v24, 1);
          }
          if ( (v7 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v24, 0LL, 0, v7, 0xEAu, 0LL);
            if ( v36[0] )
              CSurfaceDrawListBrush::`vector deleting destructor'(v36[0], 1);
          }
          else
          {
            *a3 = v36[0];
            v36[0] = 0LL;
          }
        }
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v31 + 1);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v31);
      }
    }
  }
  return v7;
}
