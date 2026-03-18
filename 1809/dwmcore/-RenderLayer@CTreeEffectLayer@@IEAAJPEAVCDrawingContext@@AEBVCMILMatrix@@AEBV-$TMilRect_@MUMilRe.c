/*
 * XREFs of ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000F2A4
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000EE68 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18000F480 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ @ 0x18001005C (-PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ.c)
 *     ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ @ 0x18001016C (-PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180018ADC (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18003745C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180038F00 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x18006ABF4 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180162430 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x18019451C (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderLayer(
        CTreeEffectLayer *this,
        CDrawingContext *a2,
        struct CMILMatrix *a3,
        int a4,
        float *a5)
{
  char v6; // r15
  char v7; // r12
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ecx
  _QWORD *v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  CDropShadow *v21; // rcx
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  int v29; // eax
  unsigned int v30; // ecx
  int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // [rsp+20h] [rbp-58h]
  _BYTE v34[8]; // [rsp+30h] [rbp-48h] BYREF
  struct CRenderTargetImageSource *v35[2]; // [rsp+38h] [rbp-40h] BYREF
  struct D2D_RECT_F v36; // [rsp+48h] [rbp-30h] BYREF
  float v37; // [rsp+58h] [rbp-20h]
  float v38; // [rsp+5Ch] [rbp-1Ch]
  float v39; // [rsp+60h] [rbp-18h]
  float v40; // [rsp+64h] [rbp-14h]

  v6 = 0;
  v7 = 0;
  if ( !*((_QWORD *)this + 31) )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x2F5u);
    return v12;
  }
  v10 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, a4, 1, 0);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x2F8u);
    return v12;
  }
  CScopedClipStack::GetClipBoundsWorld((CDrawingContext *)((char *)a2 + 1008));
  if ( IsEmpty(&v36) )
    goto LABEL_14;
  v13 = CDrawingContext::PushTransformInternal(a2, 0LL, a3, 0, 1);
  v12 = v13;
  if ( v13 < 0 )
  {
    v33 = 774;
    goto LABEL_32;
  }
  v6 = 1;
  v13 = CDrawingContext::PushEffectiveAlphaForNode(a2, 0LL, 1.0, 1);
  v12 = v13;
  if ( v13 < 0 )
  {
    v33 = 777;
    goto LABEL_32;
  }
  ++*((_DWORD *)a2 + 192);
  v7 = 1;
  v13 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
  v12 = v13;
  if ( v13 < 0 )
  {
    v33 = 783;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, v33);
    goto LABEL_14;
  }
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**((_QWORD **)this + 1) + 216LL))(
      *((_QWORD *)this + 1),
      *((_QWORD *)a2 + 48),
      ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  v15 = (_QWORD *)*((_QWORD *)this + 31);
  if ( *((_QWORD *)this + 30) )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 184LL))(v15);
    if ( !v16 )
      goto LABEL_12;
    CTreeEffectLayer::PushLayerTransformOnExplicitSurfaceInput(this);
    *(_QWORD *)(v16 + 8) = this;
    v17 = *((_QWORD *)this + 30);
    v34[0] = 0;
    *(_OWORD *)v35 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v18 = (*(__int64 (__fastcall **)(__int64, CDrawingContext *, float *, _BYTE *, struct CRenderTargetImageSource **))(*(_QWORD *)v17 + 160LL))(
            v17,
            a2,
            a5,
            v34,
            v35);
    *(_QWORD *)(v16 + 8) = 0LL;
    v12 = v18;
    CTreeEffectLayer::PopLayerTransformFromExplicitSurfaceInput(this);
    if ( (v12 & 0x80000000) == 0 )
      goto LABEL_12;
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v12, 0x336u);
  }
  else
  {
    v21 = (CDropShadow *)v15[70];
    if ( !v21 || CDropShadow::GetMaskForLayerVisualNoRef(v21) )
    {
LABEL_12:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
      goto LABEL_14;
    }
    v22 = *a5;
    v23 = a5[1];
    v36.left = 0.0;
    v36.top = 0.0;
    v24 = *((float *)this + 56);
    v35[0] = 0LL;
    v36.right = v22 + 0.0;
    v25 = (float)*((int *)this + 5);
    v36.bottom = v23 + 0.0;
    v26 = v24 - v25;
    v27 = *((float *)this + 55);
    v28 = (float)*((int *)this + 4);
    v38 = v26;
    v40 = v26 + *((float *)this + 58);
    v37 = v27 - v28;
    v39 = (float)(v27 - v28) + *((float *)this + 57);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v35);
    v29 = CRenderTargetImageSource::Create(*((struct IRenderTarget **)this + 1), 1, v35);
    v12 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x352u);
    }
    else
    {
      v31 = CDrawingContext::DrawBitmap(a2, v35[0], 0, 0);
      v12 = v31;
      if ( v31 >= 0 )
      {
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v35);
        goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x35Bu);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v35);
  }
LABEL_14:
  CDrawingContext::PopGpuClipRectInternal(a2, 0);
  if ( v7 )
  {
    --*((_DWORD *)a2 + 192);
    CDrawingContext::PopAlpha(a2, 1);
  }
  if ( v6 )
    CDrawingContext::PopTransformInternal(a2, 1);
  return v12;
}
