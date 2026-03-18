/*
 * XREFs of ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x180012234
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180011DF8 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x180012424 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ @ 0x180012FFC (-PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ.c)
 *     ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ @ 0x180013048 (-PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x180047F78 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180057308 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800583E0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180071500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x1800742B0 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800749E0 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x18007AF54 (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C24A4 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015EAF8 (McTemplateU0.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18016CCA0 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801CA294 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderLayer(
        CTreeEffectLayer *this,
        CDrawingContext *a2,
        struct CMILMatrix *a3,
        int a4,
        struct CRenderTargetImageSource *a5)
{
  char v8; // r12
  char v9; // r13
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ecx
  _QWORD *v15; // rcx
  __int64 v16; // r14
  struct CRenderTargetImageSource *v17; // r8
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  CDropShadow *v22; // rcx
  float *v23; // rax
  FLOAT v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // [rsp+20h] [rbp-58h]
  _BYTE v35[8]; // [rsp+30h] [rbp-48h] BYREF
  struct CRenderTargetImageSource *v36; // [rsp+38h] [rbp-40h] BYREF
  __int128 v37; // [rsp+40h] [rbp-38h] BYREF
  struct D2D_RECT_F v38; // [rsp+50h] [rbp-28h] BYREF

  v36 = a5;
  v8 = 0;
  v9 = 0;
  if ( !*((_QWORD *)this + 31) )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a5, 0LL, 0, -2147024809, 0x2F5u, 0LL);
    return v12;
  }
  v10 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, a4, 1, 0);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x2F8u, 0LL);
    return v12;
  }
  CScopedClipStack::GetClipBoundsWorld((char *)a2 + 1008, &v38);
  if ( IsEmpty(&v38) )
    goto LABEL_14;
  v13 = CDrawingContext::PushTransformInternal(a2, 0LL, a3, 0, 1);
  v12 = v13;
  if ( v13 < 0 )
  {
    v34 = 774;
    goto LABEL_32;
  }
  v8 = 1;
  v13 = CDrawingContext::PushEffectiveAlphaForNode(a2, 0LL, 1.0, 1);
  v12 = v13;
  if ( v13 < 0 )
  {
    v34 = 777;
    goto LABEL_32;
  }
  ++*((_DWORD *)a2 + 192);
  v9 = 1;
  v13 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
  v12 = v13;
  if ( v13 < 0 )
  {
    v34 = 783;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, v34, 0LL);
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
    v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 224LL))(v15);
    if ( !v16 )
      goto LABEL_12;
    CTreeEffectLayer::PushLayerTransformOnExplicitSurfaceInput(this);
    v17 = v36;
    *(_QWORD *)(v16 + 8) = this;
    v18 = *((_QWORD *)this + 30);
    v35[0] = 0;
    v37 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v19 = (*(__int64 (__fastcall **)(__int64, CDrawingContext *, struct CRenderTargetImageSource *, _BYTE *, __int128 *))(*(_QWORD *)v18 + 200LL))(
            v18,
            a2,
            v17,
            v35,
            &v37);
    *(_QWORD *)(v16 + 8) = 0LL;
    v12 = v19;
    CTreeEffectLayer::PopLayerTransformFromExplicitSurfaceInput(this);
    if ( (v12 & 0x80000000) == 0 )
      goto LABEL_12;
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v12, 0x336u, 0LL);
  }
  else
  {
    v22 = (CDropShadow *)v15[70];
    if ( !v22 || CDropShadow::GetMaskForLayerVisualNoRef(v22) )
    {
LABEL_12:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
      goto LABEL_14;
    }
    v23 = (float *)v36;
    v38.left = 0.0;
    v38.top = 0.0;
    v36 = 0LL;
    v24 = v23[1] + 0.0;
    v25 = *((float *)this + 56);
    v38.right = *v23 + 0.0;
    v26 = (float)*((int *)this + 5);
    v38.bottom = v24;
    v27 = v25 - v26;
    v28 = *((float *)this + 55);
    v29 = (float)*((int *)this + 4);
    *((float *)&v37 + 1) = v27;
    *((float *)&v37 + 3) = v27 + *((float *)this + 58);
    *(float *)&v37 = v28 - v29;
    *((float *)&v37 + 2) = (float)(v28 - v29) + *((float *)this + 57);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v36);
    v30 = CRenderTargetImageSource::Create(*((struct IRenderTarget **)this + 1), 1, 0LL, &v36);
    v12 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x352u, 0LL);
    }
    else
    {
      v32 = CDrawingContext::DrawBitmap(a2, v36, 0, 0);
      v12 = v32;
      if ( v32 >= 0 )
      {
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v36);
        goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x35Bu, 0LL);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v36);
  }
LABEL_14:
  CScopedClipStack::PopGpuClipFromScope((CDrawingContext *)((char *)a2 + 1008));
  *((_BYTE *)a2 + 6345) = 1;
  if ( v9 )
  {
    --*((_DWORD *)a2 + 192);
    CDrawingContext::PopAlpha(a2, 1);
  }
  if ( v8 )
    CDrawingContext::PopTransformInternal(a2, 1);
  return v12;
}
