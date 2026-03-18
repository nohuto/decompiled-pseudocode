/*
 * XREFs of ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180038D08
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800616E0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180096510 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18016B6F4 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18016C44C (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016CB64 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801D1980 (-DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 * Callees:
 *     ?Create@CD2DLayer@@SAJAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@PEAPEAV1@@Z @ 0x180038B6C (-Create@CD2DLayer@@SAJAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS.c)
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x180038C20 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180038EDC (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A930 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x18005CF68 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18015D590 (McTemplateU0d.c)
 */

__int64 __fastcall CDrawingContext::PushD2DLayer(
        CDrawingContext *this,
        struct CVisual *a2,
        struct D2D_RECT_F *a3,
        struct ID2D1Geometry *a4,
        struct D2D_MATRIX_3X2_F *a5,
        float a6,
        char a7,
        unsigned int a8)
{
  int v9; // ebx
  bool v10; // zf
  enum D2D1_LAYER_OPTIONS1 v11; // r14d
  char v12; // si
  __int64 v15; // rcx
  float v16; // xmm2_4
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // edx
  unsigned int v22; // ecx
  int v23; // eax
  enum D2D1_ANTIALIAS_MODE v24; // [rsp+20h] [rbp-71h]
  CD2DLayer *v25; // [rsp+40h] [rbp-51h] BYREF
  enum D2D1_PRIMITIVE_BLEND v26; // [rsp+48h] [rbp-49h]
  enum D2D1_ANTIALIAS_MODE v27; // [rsp+4Ch] [rbp-45h]
  struct D2D_RECT_F v28; // [rsp+50h] [rbp-41h] BYREF
  struct CVisual *v29; // [rsp+60h] [rbp-31h]
  struct D2D_MATRIX_3X2_F *v30; // [rsp+68h] [rbp-29h]
  struct D2D_RECT_F v31; // [rsp+70h] [rbp-21h] BYREF

  v30 = a5;
  v9 = 0;
  v10 = *((_DWORD *)this + 63) == 0;
  v25 = 0LL;
  v11 = D2D1_LAYER_OPTIONS1_NONE;
  v12 = 0;
  v27 = !v10;
  v26 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
  v15 = *((_QWORD *)this + 44);
  v29 = a2;
  v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a6 - 1.0)) & _xmm);
  if ( *(_DWORD *)((*(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *))(*(_QWORD *)v15 + 24LL))(v15, &v31) + 4) == 3 )
  {
    v11 = D2D1_LAYER_OPTIONS1_IGNORE_ALPHA|D2D1_LAYER_OPTIONS1_INITIALIZE_FROM_BACKGROUND;
  }
  else if ( v16 < 0.0000011920929 )
  {
    v26 = D2D1_PRIMITIVE_BLEND_COPY;
    v11 = D2D1_LAYER_OPTIONS1_INITIALIZE_FROM_BACKGROUND;
  }
  if ( a3 )
    v31 = *a3;
  else
    CScopedClipStack::GetClipBoundsWorld((char *)this + 1008, &v31);
  if ( !IsEmpty(&v31) )
  {
    v28 = v31;
    v17 = CD2DLayer::Create(&v28, a4, v30, a6, v27, v11, v26, &v25);
    v9 = v17;
    if ( v17 < 0 )
    {
      v24 = 5418;
LABEL_30:
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, v24, 0LL);
      goto LABEL_18;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_D2DLAYERCREATEREASON, a8);
    if ( !a7 || !a4 || v16 >= 0.0000011920929 )
    {
LABEL_16:
      v17 = CDrawingContext::PushLayer(this, v29, v25, v12 != 1, 1);
      v9 = v17;
      if ( v17 >= 0 )
      {
        v25 = 0LL;
        goto LABEL_18;
      }
      v24 = 5442;
      goto LABEL_30;
    }
    v19 = *((_DWORD *)this + 158);
    v20 = v19 + 1;
    if ( v19 + 1 < v19 )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024362, 0xB8u, 0LL);
    }
    else
    {
      if ( v20 <= *((_DWORD *)this + 157) )
      {
        *(_QWORD *)(*((_QWORD *)this + 76) + 8LL * v19) = v25;
        *((_DWORD *)this + 158) = v20;
LABEL_15:
        v12 = 1;
        goto LABEL_16;
      }
      v23 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 608, 8LL, 1LL, &v25);
      v9 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v23, 0xC3u, 0LL);
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v9, 0x1537u, 0LL);
      goto LABEL_18;
    }
    goto LABEL_15;
  }
  *(_QWORD *)&v28.right = v29;
  LODWORD(v28.left) = 6;
  CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)this + 448, &v28);
LABEL_18:
  if ( v9 < 0 )
  {
    if ( v12 )
      --*((_DWORD *)this + 158);
    if ( v25 )
      CD2DLayer::`scalar deleting destructor'(v25, 1);
  }
  return (unsigned int)v9;
}
