/*
 * XREFs of ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18002B8C8
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180039420 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800B35C0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180162558 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180163988 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z @ 0x1801640EC (-DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z.c)
 *     ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180190EA0 (-DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Create@CD2DLayer@@SAJAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@PEAPEAV1@@Z @ 0x18002B730 (-Create@CD2DLayer@@SAJAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS.c)
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x18002B7E0 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18002EC08 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180036B2C (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect_ea_180036B2C.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
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
  unsigned int v21; // ecx
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
    CScopedClipStack::GetClipBoundsWorld((CDrawingContext *)((char *)this + 1008));
  if ( IsEmpty(&v31) )
  {
    *(_QWORD *)&v28.right = v29;
    LODWORD(v28.left) = 6;
    CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
      (char *)this + 448,
      &v28);
  }
  else
  {
    v28 = v31;
    v17 = CD2DLayer::Create(&v28, a4, v30, a6, v27, v11, v26, &v25);
    v9 = v17;
    if ( v17 < 0 )
    {
      v24 = 5590;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_D2DLAYERCREATEREASON, a8);
      if ( a7 && a4 && v16 < 0.0000011920929 )
      {
        v19 = *((_DWORD *)this + 158);
        v20 = v19 + 1;
        v9 = v19 + 1 < v19 ? 0x80070216 : 0;
        if ( v19 + 1 < v19 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v9, 0xB5u);
        }
        else if ( v20 > *((_DWORD *)this + 157) )
        {
          v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 608, 8, 1, &v25);
          v9 = v23;
          if ( v23 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v23, 0xC0u);
        }
        else
        {
          v21 = *((_DWORD *)this + 158);
          *(_QWORD *)(*((_QWORD *)this + 76) + 8LL * v19) = v25;
          *((_DWORD *)this + 158) = v20;
        }
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v9, 0x15E3u);
          goto LABEL_19;
        }
        v12 = 1;
      }
      v17 = CDrawingContext::PushLayer(this, v29, v25, v12 != 1, 1);
      v9 = v17;
      if ( v17 >= 0 )
      {
        v25 = 0LL;
        goto LABEL_19;
      }
      v24 = 5614;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, v24);
  }
LABEL_19:
  if ( v9 < 0 )
  {
    if ( v12 )
      --*((_DWORD *)this + 158);
    if ( v25 )
      CD2DLayer::`scalar deleting destructor'(v25, 1);
  }
  return (unsigned int)v9;
}
