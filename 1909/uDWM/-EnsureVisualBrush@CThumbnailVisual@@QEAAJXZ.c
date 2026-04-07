/*
 * XREFs of ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180010610
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18000FFB0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800101B0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180010580 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x1800108D8 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800108FC (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180011D18 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4Reportin.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180014730 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800212F4 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021F8C (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18002343C (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@111PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x180023AAC (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@111PEAPEAVCC.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180024974 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x180024A68 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x180037540 (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x180037BD8 (-Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x180037D14 (--$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x18003A35C (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x18003A854 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?Update@CTranslateTransformProxy@@QEAAJNN@Z @ 0x18003B314 (-Update@CTranslateTransformProxy@@QEAAJNN@Z.c)
 *     ??$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z @ 0x18003C8D4 (--$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x18003DECC (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18008C93C (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 *     ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x18008E260 (-SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z @ 0x1800B0384 (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureVisualBrush(struct CBaseImageProxy **this)
{
  CBaseObject *v1; // rsi
  CBaseObject *v2; // r15
  CBaseObject *v3; // r14
  HDC CompatibleDC; // r12
  int v6; // eax
  __int64 v7; // rdx
  signed int v8; // ebx
  struct CBaseLegacyMilBrushProxy **v9; // r13
  CRenderDataVisual *v10; // rcx
  struct CBaseImageProxy *v11; // rax
  struct CRectangleGeometryProxy **v12; // rsi
  CThumbnailVisual *v13; // rcx
  int v14; // eax
  int v15; // eax
  CBaseObject *v16; // rsi
  CBaseObject *v17; // r13
  CBaseObject *v18; // r14
  HBITMAP v19; // r14
  CBaseObject *v20; // rsi
  struct CBaseImageProxy *v22; // rcx
  int Brush; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  bool IsImmersiveIconic; // bl
  COLORREF v28; // ebx
  HBITMAP Bitmap; // rax
  signed int LastError; // eax
  int v31; // r9d
  HBRUSH SolidBrush; // rax
  int v33; // eax
  const struct _MARGINS *v34; // rdx
  int v35; // eax
  CScaleTransformProxy *v36; // r11
  struct CBaseImageProxy *v37; // rax
  int v38; // ecx
  int v39; // r9d
  int v40; // r10d
  int v41; // eax
  unsigned int v42; // eax
  int v43; // ecx
  __m128i v44; // xmm2
  int v45; // eax
  double v46; // xmm2_8
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  CTranslateTransformProxy *v52; // r9
  int v53; // eax
  struct CBaseImageProxy *v54; // r8
  int v55; // r10d
  int v56; // ebx
  __int64 v57; // rdx
  int v58; // ecx
  int v59; // r8d
  int v60; // r11d
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  CThumbnailAnimatedVisual *v69; // rcx
  int v70; // eax
  int v71; // eax
  CBaseObject *v72; // rcx
  unsigned int v73; // [rsp+28h] [rbp-59h]
  char *v74; // [rsp+30h] [rbp-51h]
  CBaseObject *v75; // [rsp+48h] [rbp-39h] BYREF
  HBITMAP v76; // [rsp+50h] [rbp-31h] BYREF
  CBaseObject *v77; // [rsp+58h] [rbp-29h] BYREF
  CBaseObject *v78; // [rsp+60h] [rbp-21h] BYREF
  CBaseObject *v79; // [rsp+68h] [rbp-19h] BYREF
  struct CRenderDataInstruction *v80; // [rsp+70h] [rbp-11h] BYREF
  struct CRenderDataInstruction *v81; // [rsp+78h] [rbp-9h] BYREF
  struct IWICBitmap *v82; // [rsp+80h] [rbp-1h] BYREF
  CBaseObject *v83; // [rsp+88h] [rbp+7h] BYREF
  HBRUSH v84; // [rsp+90h] [rbp+Fh] BYREF
  HGDIOBJ h; // [rsp+98h] [rbp+17h]
  RECT rc; // [rsp+A0h] [rbp+1Fh] BYREF

  v1 = 0LL;
  v78 = 0LL;
  v2 = 0LL;
  v79 = 0LL;
  v3 = 0LL;
  v77 = 0LL;
  CompatibleDC = 0LL;
  v84 = 0LL;
  v76 = 0LL;
  v82 = 0LL;
  v75 = 0LL;
  v83 = 0LL;
  *(_QWORD *)&rc.left = 0LL;
  v81 = 0LL;
  v80 = 0LL;
  h = 0LL;
  if ( !*((_BYTE *)this + 472) )
  {
    v71 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
    v8 = v71;
    if ( v71 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v71, 0x2E7u, v74);
      goto LABEL_30;
    }
    v72 = this[47];
    if ( !v72 )
      goto LABEL_30;
    CBaseObject::Release(v72);
    this[47] = 0LL;
LABEL_16:
    if ( v1 )
    {
      CBaseObject::Release(v1);
      v16 = v79;
      goto LABEL_18;
    }
    goto LABEL_30;
  }
  v6 = CThumbnailVisual::EnsureSecondaryWindowRepresentation((CThumbnailVisual *)this, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x258u, v74);
    goto LABEL_30;
  }
  v9 = this + 48;
  if ( this[48] )
  {
    if ( CThumbnailVisual::_HasBorder((CThumbnailVisual *)this) )
    {
      v26 = CRenderDataVisual::ClearInstructions(v10);
      v8 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x277u, v74);
        goto LABEL_30;
      }
    }
  }
  else
  {
    v74 = (char *)(this + 51);
    v22 = this[47];
    *((_BYTE *)this + 474) = 0;
    Brush = CSecondaryWindowRepresentation::GetBrush(v22, v7, this + 49, this + 50);
    v8 = Brush;
    if ( Brush < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Brush, 0x267u, v74);
      goto LABEL_30;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x4000);
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 4096);
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x40000);
    v24 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
    v8 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x271u, v74);
      goto LABEL_30;
    }
  }
  if ( *((_DWORD *)this + 68) )
  {
LABEL_30:
    v19 = v76;
LABEL_31:
    v20 = v75;
    goto LABEL_32;
  }
  if ( !this[54] || (v11 = this[46]) == 0LL || (*((_DWORD *)v11 + 11) & 0x4000000) == 0 )
  {
    if ( !*v9 )
      goto LABEL_30;
    v12 = this + 52;
    if ( !this[52] )
    {
      v25 = CCompositor::CreateProxy<CRectangleGeometryProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
      v8 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x2C8u, v74);
        goto LABEL_30;
      }
    }
    if ( CThumbnailVisual::_HasBorder((CThumbnailVisual *)this) )
    {
      v68 = CThumbnailVisual::_AddBorderInstructions(v13);
      v8 = v68;
      if ( v68 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0x2CDu, v74);
        goto LABEL_30;
      }
    }
    if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this)
      && !CThumbnailVisual::_HasBorder((CThumbnailVisual *)this) )
    {
      v70 = CThumbnailAnimatedVisual::AddSolidBrushInstruction(v69, *v12, 0, 1.0);
      v8 = v70;
      if ( v70 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x2D6u, v74);
        goto LABEL_30;
      }
    }
    v14 = CDrawGeometryInstruction::Create(*v9, *v12, (struct CDrawGeometryInstruction **)&rc);
    v8 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x2DEu, v74);
      v1 = *(CBaseObject **)&rc.left;
    }
    else
    {
      v1 = *(CBaseObject **)&rc.left;
      v15 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, *(struct CRenderDataInstruction **)&rc.left);
      v8 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x2E0u, v74);
      }
      else
      {
        wil::Feature<__WilFeatureTraits_Feature_ThumbnailTabs>::ReportUsageToService();
        v8 = 0;
      }
    }
    goto LABEL_16;
  }
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this);
  CVisual::SetBorderMode(this);
  if ( !IsImmersiveIconic )
  {
    v16 = v79;
    goto LABEL_118;
  }
  v28 = *(_DWORD *)(*((_QWORD *)this[46] + 3) + 168LL);
  CompatibleDC = CreateCompatibleDC(0LL);
  SetBkMode(CompatibleDC, 2);
  SetLastError(0);
  Bitmap = CreateBitmap(1, 1, 1u, 0x20u, 0LL);
  v76 = Bitmap;
  v19 = Bitmap;
  if ( !Bitmap )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    v73 = 658;
    if ( v8 >= 0 )
      v8 = -2003304445;
    goto LABEL_64;
  }
  h = SelectObject(CompatibleDC, Bitmap);
  SolidBrush = CreateSolidBrush(v28);
  v84 = SolidBrush;
  if ( !SolidBrush )
  {
    v8 = -2147024890;
    v73 = 661;
LABEL_64:
    v31 = v8;
LABEL_67:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, v73, v74);
    goto LABEL_31;
  }
  rc = (RECT)_mm_load_si128((const __m128i *)&_xmm);
  FillRect(CompatibleDC, &rc, SolidBrush);
  v33 = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                             + 39)
                                                                                          + 168LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 39),
          v19,
          0LL,
          2LL,
          &v82);
  v8 = v33;
  if ( v33 < 0 )
  {
    v73 = 665;
LABEL_66:
    v31 = v33;
    goto LABEL_67;
  }
  v33 = CBitmapSource::Create(v82, v34, &v75);
  v8 = v33;
  if ( v33 < 0 )
  {
    v73 = 667;
    goto LABEL_66;
  }
  v20 = v75;
  v35 = CDrawBitmapInstruction::Create(*((struct CBaseImageProxy **)v75 + 2), &v83);
  v8 = v35;
  if ( v35 >= 0 )
  {
    v36 = this[57];
    if ( !v36 )
    {
      v33 = CCompositor::CreateProxy<CScaleTransformProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
      v8 = v33;
      if ( v33 < 0 )
      {
        v73 = 672;
        goto LABEL_66;
      }
      v36 = this[57];
    }
    v37 = this[46];
    v38 = 0;
    v39 = *((_DWORD *)v37 + 15) - *((_DWORD *)v37 + 13);
    v40 = *((_DWORD *)v37 + 14) - *((_DWORD *)v37 + 12);
    if ( rc.bottom - rc.top >= 0 )
      v38 = rc.bottom - rc.top;
    v41 = 0;
    if ( v39 >= 0 )
      v41 = v39;
    v42 = v41 / v38;
    v43 = 0;
    if ( rc.right - rc.left >= 0 )
      v43 = rc.right - rc.left;
    v44 = _mm_cvtsi32_si128(v42);
    v45 = 0;
    *(_QWORD *)&v46 = *(_OWORD *)&_mm_cvtepi32_pd(v44);
    if ( v40 >= 0 )
      v45 = v40;
    v33 = CScaleTransformProxy::Update(v36, (double)(v45 / v43), v46, 0.0, 0.0);
    v8 = v33;
    if ( v33 < 0 )
    {
      v73 = 678;
      goto LABEL_66;
    }
    v47 = CPushTransformInstruction::Create(this[57], &v79);
    v8 = v47;
    if ( v47 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x2A7u, v74);
      v16 = v79;
LABEL_25:
      v18 = v77;
LABEL_26:
      if ( v16 )
        CBaseObject::Release(v16);
      if ( v18 )
        CBaseObject::Release(v18);
      goto LABEL_30;
    }
    v16 = v79;
    v48 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v79);
    v8 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x2A8u, v74);
      goto LABEL_25;
    }
    v49 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v83);
    v8 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x2A9u, v74);
      goto LABEL_25;
    }
    v50 = CPopInstruction::Create(&v77);
    v8 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x2AAu, v74);
      goto LABEL_25;
    }
    v18 = v77;
    v51 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v77);
    v8 = v51;
    if ( v51 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x2ABu, v74);
      goto LABEL_26;
    }
    v52 = this[56];
    if ( !v52 )
    {
      v53 = CCompositor::CreateProxy<CTranslateTransformProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
      v8 = v53;
      if ( v53 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x2B0u, v74);
        goto LABEL_25;
      }
      v52 = this[56];
    }
    v54 = this[46];
    v55 = 0;
    if ( *((_DWORD *)v54 + 15) - *((_DWORD *)v54 + 13) >= 0 )
      v55 = *((_DWORD *)v54 + 15) - *((_DWORD *)v54 + 13);
    v56 = 0;
    v57 = *((_QWORD *)this[47] + 64);
    if ( v57 )
      v56 = *(_DWORD *)(v57 + 124);
    v58 = *((_DWORD *)v54 + 14) - *((_DWORD *)v54 + 12);
    v59 = 0;
    if ( v58 >= 0 )
      v59 = v58;
    v60 = 0;
    if ( v57 )
      v60 = *(_DWORD *)(v57 + 120);
    v61 = CTranslateTransformProxy::Update(v52, (double)(v59 / 2 - v60 / 2), (double)(v55 / 2 - v56 / 2));
    v8 = v61;
    if ( v61 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x2B4u, v74);
      goto LABEL_25;
    }
    v62 = CPushTransformInstruction::Create(this[56], &v80);
    v8 = v62;
    if ( v62 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0x2B5u, v74);
      v3 = v80;
LABEL_114:
      v17 = v78;
LABEL_21:
      if ( v3 )
        CBaseObject::Release(v3);
      if ( v17 )
        CBaseObject::Release(v17);
      goto LABEL_25;
    }
    v3 = v80;
    v63 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v80);
    v8 = v63;
    if ( v63 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v63, 0x2B6u, v74);
      goto LABEL_114;
    }
LABEL_118:
    v64 = CDrawBitmapInstruction::Create(this[54], &v81);
    v8 = v64;
    if ( v64 >= 0 )
    {
      v2 = v81;
      v65 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v81);
      v8 = v65;
      if ( v65 >= 0 )
      {
        if ( v3 )
        {
          v66 = CPopInstruction::Create(&v78);
          v8 = v66;
          if ( v66 >= 0 )
          {
            v17 = v78;
            v67 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v78);
            v8 = v67;
            if ( v67 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v67, 0x2BFu, v74);
            goto LABEL_19;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v66, 0x2BEu, v74);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v65, 0x2BAu, v74);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x2B9u, v74);
      v2 = v81;
    }
LABEL_18:
    v17 = v78;
LABEL_19:
    if ( v2 )
      CBaseObject::Release(v2);
    goto LABEL_21;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x29Cu, v74);
LABEL_32:
  if ( v82 )
    ((void (__fastcall *)(struct IWICBitmap *))v82->lpVtbl->Release)(v82);
  if ( v20 )
    CBaseObject::Release(v20);
  if ( v83 )
    CBaseObject::Release(v83);
  if ( CompatibleDC && h )
    SelectObject(CompatibleDC, h);
  if ( v19 )
    ReleaseGDIObject<HRGN__ *>(&v76);
  if ( v84 )
    ReleaseGDIObject<HRGN__ *>(&v84);
  if ( CompatibleDC )
    DeleteDC(CompatibleDC);
  return (unsigned int)v8;
}
