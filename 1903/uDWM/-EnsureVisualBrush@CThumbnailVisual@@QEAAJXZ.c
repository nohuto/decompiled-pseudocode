/*
 * XREFs of ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180025AE0
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180025480 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180025680 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x18000FC68 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18001449C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021984 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002204C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180023738 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@111PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x1800240EC (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@111PEAPEAVCC.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180025178 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4Reportin.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180025A50 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180025DA8 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x180025DCC (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x180037898 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x1800380E0 (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180038190 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x1800387D8 (-Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x18003897C (--$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x18003ACD4 (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x18003B0A8 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?Update@CTranslateTransformProxy@@QEAAJNN@Z @ 0x18003BB04 (-Update@CTranslateTransformProxy@@QEAAJNN@Z.c)
 *     ??$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z @ 0x18003CFF4 (--$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18008CC9C (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 *     ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x18008E5C0 (-SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z @ 0x1800B06E4 (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureVisualBrush(CBaseObject **this)
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
  CBaseObject *v11; // rax
  struct CRectangleGeometryProxy **v12; // rsi
  CThumbnailVisual *v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  CBaseObject *v19; // rsi
  CBaseObject *v20; // r13
  CBaseObject *v21; // r14
  HBITMAP v22; // r14
  CBaseObject *v23; // rsi
  __int64 v25; // rcx
  int Brush; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  char IsImmersiveIconic; // bl
  COLORREF v31; // ebx
  HBITMAP Bitmap; // rax
  signed int LastError; // eax
  int v34; // r9d
  HBRUSH SolidBrush; // rax
  int v36; // eax
  const struct _MARGINS *v37; // rdx
  int v38; // eax
  CScaleTransformProxy *v39; // r11
  CBaseObject *v40; // rax
  int v41; // ecx
  int v42; // r9d
  int v43; // r10d
  int v44; // eax
  unsigned int v45; // eax
  int v46; // ecx
  __m128i v47; // xmm2
  int v48; // eax
  double v49; // xmm2_8
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  CTranslateTransformProxy *v55; // r9
  int v56; // eax
  CBaseObject *v57; // r8
  int v58; // r10d
  int v59; // ebx
  __int64 v60; // rdx
  int v61; // ecx
  int v62; // r8d
  int v63; // r11d
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  CThumbnailAnimatedVisual *v72; // rcx
  int v73; // eax
  int v74; // eax
  CBaseObject *v75; // rcx
  __int64 v76; // [rsp+28h] [rbp-59h]
  unsigned int v77; // [rsp+28h] [rbp-59h]
  void *v78; // [rsp+30h] [rbp-51h]
  CBaseObject *v79; // [rsp+48h] [rbp-39h] BYREF
  HBITMAP v80; // [rsp+50h] [rbp-31h] BYREF
  CBaseObject *v81; // [rsp+58h] [rbp-29h] BYREF
  CBaseObject *v82; // [rsp+60h] [rbp-21h] BYREF
  CBaseObject *v83; // [rsp+68h] [rbp-19h] BYREF
  struct CRenderDataInstruction *v84; // [rsp+70h] [rbp-11h] BYREF
  struct CRenderDataInstruction *v85; // [rsp+78h] [rbp-9h] BYREF
  struct IWICBitmap *v86; // [rsp+80h] [rbp-1h] BYREF
  CBaseObject *v87; // [rsp+88h] [rbp+7h] BYREF
  HBRUSH v88; // [rsp+90h] [rbp+Fh] BYREF
  HGDIOBJ h; // [rsp+98h] [rbp+17h]
  RECT rc; // [rsp+A0h] [rbp+1Fh] BYREF

  v1 = 0LL;
  v82 = 0LL;
  v2 = 0LL;
  v83 = 0LL;
  v3 = 0LL;
  v81 = 0LL;
  CompatibleDC = 0LL;
  v88 = 0LL;
  v80 = 0LL;
  v86 = 0LL;
  v79 = 0LL;
  v87 = 0LL;
  *(_QWORD *)&rc.left = 0LL;
  v85 = 0LL;
  v84 = 0LL;
  h = 0LL;
  if ( !*((_BYTE *)this + 472) )
  {
    v74 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
    v8 = v74;
    if ( v74 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v74, 0x2E7u, v78);
      goto LABEL_30;
    }
    v75 = this[47];
    if ( !v75 )
      goto LABEL_30;
    CBaseObject::Release(v75);
    this[47] = 0LL;
LABEL_16:
    if ( v1 )
    {
      CBaseObject::Release(v1);
      v19 = v83;
      goto LABEL_18;
    }
    goto LABEL_30;
  }
  v6 = CThumbnailVisual::EnsureSecondaryWindowRepresentation((CThumbnailVisual *)this, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x258u, v78);
    goto LABEL_30;
  }
  v9 = this + 48;
  if ( this[48] )
  {
    if ( CThumbnailVisual::_HasBorder((CThumbnailVisual *)this) )
    {
      v29 = CRenderDataVisual::ClearInstructions(v10);
      v8 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x277u, v78);
        goto LABEL_30;
      }
    }
  }
  else
  {
    v25 = (__int64)this[47];
    *((_BYTE *)this + 474) = 0;
    Brush = CSecondaryWindowRepresentation::GetBrush(
              v25,
              v7,
              this + 49,
              this + 50,
              v76,
              this + 51,
              this + 54,
              this + 48);
    v8 = Brush;
    if ( Brush < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Brush, 0x267u, v78);
      goto LABEL_30;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x4000);
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 4096);
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x40000);
    v27 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
    v8 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x271u, v78);
      goto LABEL_30;
    }
  }
  if ( *((_DWORD *)this + 68) )
  {
LABEL_30:
    v22 = v80;
LABEL_31:
    v23 = v79;
    goto LABEL_32;
  }
  if ( !this[54] || (v11 = this[46]) == 0LL || (*((_DWORD *)v11 + 11) & 0x4000000) == 0 )
  {
    if ( !*v9 )
      goto LABEL_30;
    v12 = this + 52;
    if ( !this[52] )
    {
      v28 = CCompositor::CreateProxy<CRectangleGeometryProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              this + 52);
      v8 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x2C8u, v78);
        goto LABEL_30;
      }
    }
    if ( CThumbnailVisual::_HasBorder((CThumbnailVisual *)this) )
    {
      v71 = CThumbnailVisual::_AddBorderInstructions(v13);
      v8 = v71;
      if ( v71 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v71, 0x2CDu, v78);
        goto LABEL_30;
      }
    }
    if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this) )
    {
      if ( !CThumbnailVisual::_HasBorder((CThumbnailVisual *)this) )
      {
        v73 = CThumbnailAnimatedVisual::AddSolidBrushInstruction(v72, *v12, 0, 1.0);
        v8 = v73;
        if ( v73 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v73, 0x2D6u, v78);
          goto LABEL_30;
        }
      }
    }
    v14 = CDrawGeometryInstruction::Create(*v9, *v12, (struct CDrawGeometryInstruction **)&rc);
    v8 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x2DEu, v78);
      v1 = *(CBaseObject **)&rc.left;
    }
    else
    {
      v1 = *(CBaseObject **)&rc.left;
      v15 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, *(struct CRenderDataInstruction **)&rc.left);
      v8 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x2E0u, v78);
      }
      else
      {
        wil::Feature<__WilFeatureTraits_Feature_ThumbnailTabs>::ReportUsageToService(v17, v16, v18);
        v8 = 0;
      }
    }
    goto LABEL_16;
  }
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this);
  CVisual::SetBorderMode(this);
  if ( !IsImmersiveIconic )
  {
    v19 = v83;
    goto LABEL_118;
  }
  v31 = *(_DWORD *)(*((_QWORD *)this[46] + 3) + 168LL);
  CompatibleDC = CreateCompatibleDC(0LL);
  SetBkMode(CompatibleDC, 2);
  SetLastError(0);
  Bitmap = CreateBitmap(1, 1, 1u, 0x20u, 0LL);
  v80 = Bitmap;
  v22 = Bitmap;
  if ( !Bitmap )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    v77 = 658;
    if ( v8 >= 0 )
      v8 = -2003304445;
    goto LABEL_64;
  }
  h = SelectObject(CompatibleDC, Bitmap);
  SolidBrush = CreateSolidBrush(v31);
  v88 = SolidBrush;
  if ( !SolidBrush )
  {
    v8 = -2147024890;
    v77 = 661;
LABEL_64:
    v34 = v8;
LABEL_67:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, v77, v78);
    goto LABEL_31;
  }
  rc = (RECT)_mm_load_si128((const __m128i *)&_xmm);
  FillRect(CompatibleDC, &rc, SolidBrush);
  v36 = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                             + 39)
                                                                                          + 168LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 39),
          v22,
          0LL,
          2LL,
          &v86);
  v8 = v36;
  if ( v36 < 0 )
  {
    v77 = 665;
LABEL_66:
    v34 = v36;
    goto LABEL_67;
  }
  v36 = CBitmapSource::Create(v86, v37, &v79);
  v8 = v36;
  if ( v36 < 0 )
  {
    v77 = 667;
    goto LABEL_66;
  }
  v23 = v79;
  v38 = CDrawBitmapInstruction::Create(*((struct CBaseImageProxy **)v79 + 2), &v87);
  v8 = v38;
  if ( v38 >= 0 )
  {
    v39 = this[57];
    if ( !v39 )
    {
      v36 = CCompositor::CreateProxy<CScaleTransformProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
      v8 = v36;
      if ( v36 < 0 )
      {
        v77 = 672;
        goto LABEL_66;
      }
      v39 = this[57];
    }
    v40 = this[46];
    v41 = 0;
    v42 = *((_DWORD *)v40 + 15) - *((_DWORD *)v40 + 13);
    v43 = *((_DWORD *)v40 + 14) - *((_DWORD *)v40 + 12);
    if ( rc.bottom - rc.top >= 0 )
      v41 = rc.bottom - rc.top;
    v44 = 0;
    if ( v42 >= 0 )
      v44 = v42;
    v45 = v44 / v41;
    v46 = 0;
    if ( rc.right - rc.left >= 0 )
      v46 = rc.right - rc.left;
    v47 = _mm_cvtsi32_si128(v45);
    v48 = 0;
    *(_QWORD *)&v49 = *(_OWORD *)&_mm_cvtepi32_pd(v47);
    if ( v43 >= 0 )
      v48 = v43;
    v36 = CScaleTransformProxy::Update(v39, (double)(v48 / v46), v49, 0.0, 0.0);
    v8 = v36;
    if ( v36 < 0 )
    {
      v77 = 678;
      goto LABEL_66;
    }
    v50 = CPushTransformInstruction::Create(this[57], &v83);
    v8 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x2A7u, v78);
      v19 = v83;
LABEL_25:
      v21 = v81;
LABEL_26:
      if ( v19 )
        CBaseObject::Release(v19);
      if ( v21 )
        CBaseObject::Release(v21);
      goto LABEL_30;
    }
    v19 = v83;
    v51 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v83);
    v8 = v51;
    if ( v51 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x2A8u, v78);
      goto LABEL_25;
    }
    v52 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v87);
    v8 = v52;
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x2A9u, v78);
      goto LABEL_25;
    }
    v53 = CPopInstruction::Create(&v81);
    v8 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x2AAu, v78);
      goto LABEL_25;
    }
    v21 = v81;
    v54 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v81);
    v8 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0x2ABu, v78);
      goto LABEL_26;
    }
    v55 = this[56];
    if ( !v55 )
    {
      v56 = CCompositor::CreateProxy<CTranslateTransformProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              this + 56);
      v8 = v56;
      if ( v56 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x2B0u, v78);
        goto LABEL_25;
      }
      v55 = this[56];
    }
    v57 = this[46];
    v58 = 0;
    if ( *((_DWORD *)v57 + 15) - *((_DWORD *)v57 + 13) >= 0 )
      v58 = *((_DWORD *)v57 + 15) - *((_DWORD *)v57 + 13);
    v59 = 0;
    v60 = *((_QWORD *)this[47] + 64);
    if ( v60 )
      v59 = *(_DWORD *)(v60 + 124);
    v61 = *((_DWORD *)v57 + 14) - *((_DWORD *)v57 + 12);
    v62 = 0;
    if ( v61 >= 0 )
      v62 = v61;
    v63 = 0;
    if ( v60 )
      v63 = *(_DWORD *)(v60 + 120);
    v64 = CTranslateTransformProxy::Update(v55, (double)(v62 / 2 - v63 / 2), (double)(v58 / 2 - v59 / 2));
    v8 = v64;
    if ( v64 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x2B4u, v78);
      goto LABEL_25;
    }
    v65 = CPushTransformInstruction::Create(this[56], &v84);
    v8 = v65;
    if ( v65 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v65, 0x2B5u, v78);
      v3 = v84;
LABEL_114:
      v20 = v82;
LABEL_21:
      if ( v3 )
        CBaseObject::Release(v3);
      if ( v20 )
        CBaseObject::Release(v20);
      goto LABEL_25;
    }
    v3 = v84;
    v66 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v84);
    v8 = v66;
    if ( v66 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v66, 0x2B6u, v78);
      goto LABEL_114;
    }
LABEL_118:
    v67 = CDrawBitmapInstruction::Create(this[54], &v85);
    v8 = v67;
    if ( v67 >= 0 )
    {
      v2 = v85;
      v68 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v85);
      v8 = v68;
      if ( v68 >= 0 )
      {
        if ( v3 )
        {
          v69 = CPopInstruction::Create(&v82);
          v8 = v69;
          if ( v69 >= 0 )
          {
            v20 = v82;
            v70 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v82);
            v8 = v70;
            if ( v70 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x2BFu, v78);
            goto LABEL_19;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0x2BEu, v78);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0x2BAu, v78);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v67, 0x2B9u, v78);
      v2 = v85;
    }
LABEL_18:
    v20 = v82;
LABEL_19:
    if ( v2 )
      CBaseObject::Release(v2);
    goto LABEL_21;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x29Cu, v78);
LABEL_32:
  if ( v86 )
    ((void (__fastcall *)(struct IWICBitmap *))v86->lpVtbl->Release)(v86);
  if ( v23 )
    CBaseObject::Release(v23);
  if ( v87 )
    CBaseObject::Release(v87);
  if ( CompatibleDC && h )
    SelectObject(CompatibleDC, h);
  if ( v22 )
    ReleaseGDIObject<HRGN__ *>(&v80);
  if ( v88 )
    ReleaseGDIObject<HRGN__ *>(&v88);
  if ( CompatibleDC )
    DeleteDC(CompatibleDC);
  return (unsigned int)v8;
}
