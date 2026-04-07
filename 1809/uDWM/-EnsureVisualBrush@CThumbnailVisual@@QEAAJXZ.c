/*
 * XREFs of ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180008EA0
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180008CA0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180009198 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180009174 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180009580 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800095DC (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180009708 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4Reportin.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18000976C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x180009950 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000EB68 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18000EE08 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x18000EF0C (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000F790 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800218A8 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800377CC (-Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x180086B6C (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 *     ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x180088440 (-SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z @ 0x1800AC3D4 (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureVisualBrush(CThumbnailVisual *this)
{
  CBaseObject *v2; // rsi
  CBaseObject *v3; // r15
  CBaseObject *v4; // r14
  bool v5; // zf
  CBaseObject *v6; // r13
  HDC CompatibleDC; // r12
  int v8; // eax
  __int64 v9; // rdx
  signed int v10; // ebx
  CRenderDataVisual *v11; // rcx
  _QWORD *v12; // r10
  __int64 v13; // rax
  struct CResource **v14; // rsi
  CThumbnailVisual *v15; // rcx
  int v16; // eax
  int v17; // eax
  CBaseObject *v18; // rsi
  CBaseObject *v19; // rsi
  HBITMAP v20; // r14
  HBRUSH v21; // r13
  CBaseObject *v22; // rsi
  __int64 v24; // rcx
  int Brush; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  bool IsImmersiveIconic; // bl
  COLORREF v30; // ebx
  HBITMAP Bitmap; // rax
  signed int LastError; // eax
  HBRUSH SolidBrush; // rax
  int v34; // eax
  const struct _MARGINS *v35; // rdx
  int v36; // eax
  __int64 v37; // r14
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // r10
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  CThumbnailAnimatedVisual *v55; // rcx
  int v56; // eax
  int v57; // eax
  CBaseObject *v58; // rcx
  unsigned int v59; // [rsp+28h] [rbp-59h]
  char *v60; // [rsp+30h] [rbp-51h]
  char *v61; // [rsp+38h] [rbp-49h]
  char *v62; // [rsp+40h] [rbp-41h]
  CBaseObject *v63; // [rsp+48h] [rbp-39h] BYREF
  HBITMAP v64; // [rsp+50h] [rbp-31h] BYREF
  HBRUSH v65; // [rsp+58h] [rbp-29h] BYREF
  CBaseObject *v66; // [rsp+60h] [rbp-21h] BYREF
  CBaseObject *v67; // [rsp+68h] [rbp-19h] BYREF
  struct CPushTransformInstruction *v68; // [rsp+70h] [rbp-11h] BYREF
  struct CPushTransformInstruction *v69; // [rsp+78h] [rbp-9h] BYREF
  struct CDrawBitmapInstruction *v70; // [rsp+80h] [rbp-1h] BYREF
  struct IWICBitmap *v71; // [rsp+88h] [rbp+7h] BYREF
  CBaseObject *v72; // [rsp+90h] [rbp+Fh] BYREF
  HGDIOBJ h; // [rsp+98h] [rbp+17h]
  RECT rc; // [rsp+A0h] [rbp+1Fh] BYREF

  v2 = 0LL;
  *(_QWORD *)&rc.left = 0LL;
  v3 = 0LL;
  v70 = 0LL;
  v4 = 0LL;
  v69 = 0LL;
  v5 = *((_BYTE *)this + 472) == 0;
  v6 = 0LL;
  v66 = 0LL;
  CompatibleDC = 0LL;
  v68 = 0LL;
  v67 = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  h = 0LL;
  v71 = 0LL;
  v63 = 0LL;
  v72 = 0LL;
  if ( v5 )
  {
    v57 = CRenderDataVisual::ClearInstructions(this);
    v10 = v57;
    if ( v57 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0x2F0u);
      goto LABEL_30;
    }
    v58 = (CBaseObject *)*((_QWORD *)this + 47);
    if ( !v58 )
      goto LABEL_30;
    CBaseObject::Release(v58);
    *((_QWORD *)this + 47) = 0LL;
LABEL_16:
    if ( v2 )
    {
      CBaseObject::Release(v2);
      goto LABEL_18;
    }
LABEL_30:
    v20 = v64;
LABEL_31:
    v21 = v65;
LABEL_32:
    v22 = v63;
    goto LABEL_33;
  }
  v8 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x25Fu);
    goto LABEL_30;
  }
  if ( *((_QWORD *)this + 48) )
  {
    if ( !CThumbnailVisual::_HasBorder(this) )
      goto LABEL_5;
    v28 = CRenderDataVisual::ClearInstructions(v11);
    v10 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x27Eu);
      goto LABEL_30;
    }
  }
  else
  {
    v62 = (char *)this + 384;
    v61 = (char *)this + 432;
    v60 = (char *)this + 408;
    v24 = *((_QWORD *)this + 47);
    *((_BYTE *)this + 474) = 0;
    Brush = CSecondaryWindowRepresentation::GetBrush(v24, v9, (char *)this + 392, (char *)this + 400);
    v10 = Brush;
    if ( Brush < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Brush, 0x26Eu);
      goto LABEL_30;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x4000u);
    CThumbnailVisual::SetDirtyFlags(this, 0x1000u);
    CThumbnailVisual::SetDirtyFlags(this, 0x40000u);
    v26 = CRenderDataVisual::ClearInstructions(this);
    v10 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x278u);
      goto LABEL_30;
    }
  }
  v12 = (_QWORD *)((char *)this + 384);
LABEL_5:
  if ( *((_DWORD *)this + 68) )
    goto LABEL_30;
  if ( !*((_QWORD *)this + 54) || (v13 = *((_QWORD *)this + 46)) == 0 || (*(_DWORD *)(v13 + 44) & 0x4000000) == 0 )
  {
    if ( !*v12 )
      goto LABEL_30;
    v14 = (struct CResource **)((char *)this + 416);
    if ( !*((_QWORD *)this + 52) )
    {
      v27 = CResource::Create(26LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (char *)this + 416);
      v10 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x2D1u);
        goto LABEL_30;
      }
    }
    if ( CThumbnailVisual::_HasBorder(this) )
    {
      v54 = CThumbnailVisual::_AddBorderInstructions(v15);
      v10 = v54;
      if ( v54 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0x2D6u);
        goto LABEL_30;
      }
    }
    if ( CThumbnailVisual::_IsImmersiveIconic(this) && !CThumbnailVisual::_HasBorder(this) )
    {
      v56 = CThumbnailAnimatedVisual::AddSolidBrushInstruction(v55, *v14, 0, 1.0);
      v10 = v56;
      if ( v56 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x2DFu);
        goto LABEL_30;
      }
    }
    v16 = CDrawGeometryInstruction::Create(
            *((struct CResource **)this + 48),
            *v14,
            (struct CDrawGeometryInstruction **)&rc);
    v10 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x2E7u);
      v2 = *(CBaseObject **)&rc.left;
    }
    else
    {
      v2 = *(CBaseObject **)&rc.left;
      v17 = CRenderDataVisual::AddInstruction(this, *(struct CRenderDataInstruction **)&rc.left);
      v10 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x2E9u);
      }
      else
      {
        wil::Feature<__WilFeatureTraits_Feature_ThumbnailTabs>::ReportUsageToService();
        v10 = 0;
      }
    }
    goto LABEL_16;
  }
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic(this);
  CVisual::SetBorderMode(this);
  if ( !IsImmersiveIconic )
    goto LABEL_102;
  v30 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 46) + 24LL) + 168LL);
  CompatibleDC = CreateCompatibleDC(0LL);
  SetBkMode(CompatibleDC, 2);
  SetLastError(0);
  Bitmap = CreateBitmap(1, 1, 1u, 0x20u, 0LL);
  v64 = Bitmap;
  v20 = Bitmap;
  if ( !Bitmap )
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    if ( v10 >= 0 )
      v10 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x299u);
    goto LABEL_31;
  }
  h = SelectObject(CompatibleDC, Bitmap);
  SolidBrush = CreateSolidBrush(v30);
  v65 = SolidBrush;
  v21 = SolidBrush;
  if ( !SolidBrush )
  {
    v10 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0x29Cu);
    goto LABEL_32;
  }
  rc = (RECT)_mm_load_si128((const __m128i *)&_xmm);
  FillRect(CompatibleDC, &rc, SolidBrush);
  v34 = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **, char *, char *, char *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 39) + 168LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 39),
          v20,
          0LL,
          2LL,
          &v71,
          v60,
          v61,
          v62);
  v10 = v34;
  if ( v34 < 0 )
  {
    v59 = 672;
LABEL_68:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, v59);
    goto LABEL_32;
  }
  v34 = CBitmapSource::Create(v71, v35, *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v63);
  v10 = v34;
  if ( v34 < 0 )
  {
    v59 = 674;
    goto LABEL_68;
  }
  v22 = v63;
  v36 = CDrawBitmapInstruction::Create(*((struct CResource **)v63 + 2), &v72);
  v10 = v36;
  if ( v36 >= 0 )
  {
    v37 = *((_QWORD *)this + 57);
    if ( !v37 )
    {
      v38 = CResource::Create(32LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (char *)this + 456);
      v10 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x2A7u);
LABEL_78:
        v20 = v64;
        goto LABEL_32;
      }
      v37 = *((_QWORD *)this + 57);
    }
    v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v37 + 16) + 1144LL))(
            *(_QWORD *)(v37 + 16),
            *(unsigned int *)(v37 + 24),
            (unsigned int)(rc.bottom - rc.top),
            (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 46) + 56LL) - *(_DWORD *)(*((_QWORD *)this + 46) + 48LL)),
            0LL,
            0LL);
    v10 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x2AEu);
      goto LABEL_78;
    }
    v40 = CPushTransformInstruction::Create(*((struct CResource **)this + 57), &v68);
    v10 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x2AFu);
      v6 = v68;
LABEL_25:
      v19 = v67;
LABEL_26:
      if ( v6 )
        CBaseObject::Release(v6);
      if ( v19 )
        CBaseObject::Release(v19);
      goto LABEL_30;
    }
    v6 = v68;
    v41 = CRenderDataVisual::AddInstruction(this, v68);
    v10 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x2B0u);
      goto LABEL_25;
    }
    v42 = CRenderDataVisual::AddInstruction(this, v72);
    v10 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x2B1u);
      goto LABEL_25;
    }
    v43 = CPopInstruction::Create(&v67);
    v10 = v43;
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x2B2u);
      goto LABEL_25;
    }
    v19 = v67;
    v44 = CRenderDataVisual::AddInstruction(this, v67);
    v10 = v44;
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x2B3u);
      goto LABEL_26;
    }
    v45 = *((_QWORD *)this + 56);
    if ( !v45 )
    {
      v46 = CResource::Create(37LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (char *)this + 448);
      v10 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x2B8u);
        goto LABEL_26;
      }
      v45 = *((_QWORD *)this + 56);
    }
    v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v45 + 16) + 1136LL))(
            *(_QWORD *)(v45 + 16),
            *(unsigned int *)(v45 + 24));
    v10 = v47;
    if ( v47 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x2BDu);
      goto LABEL_26;
    }
    v48 = CPushTransformInstruction::Create(*((struct CResource **)this + 56), &v69);
    v10 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x2BEu);
      v4 = v69;
LABEL_100:
      v18 = v66;
LABEL_21:
      if ( v4 )
        CBaseObject::Release(v4);
      if ( v18 )
        CBaseObject::Release(v18);
      goto LABEL_25;
    }
    v4 = v69;
    v49 = CRenderDataVisual::AddInstruction(this, v69);
    v10 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x2BFu);
      goto LABEL_100;
    }
LABEL_102:
    v50 = CDrawBitmapInstruction::Create(*((struct CResource **)this + 54), &v70);
    v10 = v50;
    if ( v50 >= 0 )
    {
      v3 = v70;
      v51 = CRenderDataVisual::AddInstruction(this, v70);
      v10 = v51;
      if ( v51 >= 0 )
      {
        if ( v4 )
        {
          v52 = CPopInstruction::Create(&v66);
          v10 = v52;
          if ( v52 >= 0 )
          {
            v18 = v66;
            v53 = CRenderDataVisual::AddInstruction(this, v66);
            v10 = v53;
            if ( v53 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x2C8u);
            goto LABEL_19;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x2C7u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x2C3u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x2C2u);
      v3 = v70;
    }
LABEL_18:
    v18 = v66;
LABEL_19:
    if ( v3 )
      CBaseObject::Release(v3);
    goto LABEL_21;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x2A3u);
LABEL_33:
  if ( v71 )
    ((void (__fastcall *)(struct IWICBitmap *))v71->lpVtbl->Release)(v71);
  if ( v22 )
    CBaseObject::Release(v22);
  if ( v72 )
    CBaseObject::Release(v72);
  if ( CompatibleDC && h )
    SelectObject(CompatibleDC, h);
  if ( v20 )
    ReleaseGDIObject<HRGN__ *>(&v64);
  if ( v21 )
    ReleaseGDIObject<HRGN__ *>(&v65);
  if ( CompatibleDC )
    DeleteDC(CompatibleDC);
  return (unsigned int)v10;
}
