/*
 * XREFs of ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180016B10
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ @ 0x180006170 (-UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180013D64 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowRegion@CTopLevelWindow@@AEAAXXZ @ 0x1800141E8 (-UpdateWindowRegion@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800144CC (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180014C30 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180014FB8 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180017670 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x1800182E0 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180018510 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180018E30 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180019190 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800193B0 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180019E60 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001C300 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180022890 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x1800229CC (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18002631C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x180035C30 (-ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x180035C84 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x180035D84 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?UpdateGDISurface@CTopLevelWindow@@AEAAJXZ @ 0x180038348 (-UpdateGDISurface@CTopLevelWindow@@AEAAJXZ.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x1800384A4 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004C598 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ceil_0 @ 0x18004E236 (ceil_0.c)
 *     floor_0 @ 0x18004E25A (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x180083EB0 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x180087578 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x18008818C (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x1800886C4 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 *     ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x1800AB31C (-NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ValidateVisual(CTopLevelWindow *this)
{
  int v1; // eax
  char v3; // di
  int v4; // ecx
  int v5; // r8d
  int v6; // ebp
  int v7; // r15d
  int v8; // r14d
  char v9; // r13
  int v10; // esi
  _DWORD *v11; // rax
  int v12; // r12d
  char v13; // r15
  int v14; // ebp
  int v15; // esi
  int v16; // edi
  int v17; // r11d
  int v18; // ecx
  int v19; // ecx
  int v20; // r8d
  _DWORD *v21; // rdx
  int v22; // r8d
  int v23; // r9d
  int v24; // ecx
  int v25; // r10d
  int v26; // eax
  int v27; // r8d
  int v28; // eax
  int v29; // r11d
  char v30; // r14
  int v31; // edx
  char v32; // r14
  int v33; // edi
  char v34; // r15
  int CurrentStyle; // eax
  float *v36; // rax
  __int64 v37; // rcx
  int v38; // ebp
  char v39; // si
  int v40; // edi
  bool v41; // al
  bool v42; // bp
  bool v43; // cl
  char v44; // si
  bool v45; // bp
  int v46; // eax
  CAccent *v47; // rcx
  int v48; // r14d
  int v49; // eax
  char v50; // al
  __int64 v52; // rcx
  __int64 v53; // rdi
  double v54; // xmm0_8
  double v55; // xmm0_8
  double v56; // xmm0_8
  double v57; // xmm0_8
  double v58; // xmm0_8
  double v59; // xmm0_8
  double v60; // xmm0_8
  double v61; // xmm0_8
  int v62; // eax
  CText *v63; // rcx
  struct CWindowData *v64; // rdx
  CProjectionBorderVisual *v65; // rcx
  int updated; // eax
  __int64 v67; // r9
  bool v68; // al
  int v69; // eax
  char v70; // al
  struct CWindowData *v71; // rdx
  CProjectionBorderVisual *v72; // rcx
  _DWORD *CurrentDefaultColorizationFlags; // rax
  unsigned int WindowColorizationColor; // r12d
  CDesktopManager *v75; // r14
  __int64 v76; // r8
  __int64 v77; // rcx
  unsigned int v78; // edx
  __int64 i; // r15
  __int64 v80; // rcx
  CTopLevelWindow *v81; // rcx
  int v82; // eax
  int v83; // r9d
  __int64 v84; // r10
  int v85; // r9d
  int v86; // eax
  unsigned int v87; // [rsp+20h] [rbp-B8h]
  unsigned int v88; // [rsp+20h] [rbp-B8h]
  char v89; // [rsp+30h] [rbp-A8h]
  int v90; // [rsp+34h] [rbp-A4h]
  int v91; // [rsp+38h] [rbp-A0h]
  int v92; // [rsp+3Ch] [rbp-9Ch]
  int v93; // [rsp+40h] [rbp-98h] BYREF
  int v94; // [rsp+44h] [rbp-94h]
  int v95; // [rsp+48h] [rbp-90h]
  struct _MARGINS v96; // [rsp+50h] [rbp-88h] BYREF
  int v97; // [rsp+60h] [rbp-78h] BYREF
  __int64 *v98; // [rsp+68h] [rbp-70h]
  int v99; // [rsp+70h] [rbp-68h]
  __int64 v100; // [rsp+78h] [rbp-60h] BYREF
  __int64 v101; // [rsp+80h] [rbp-58h]

  v1 = *((_DWORD *)this + 20);
  v3 = 0;
  v4 = v1 & 2;
  v89 = 0;
  v92 = v4;
  v5 = v1 & 8;
  v90 = v5;
  v95 = v1 & 0x4000;
  v6 = v1 & 0x100000;
  v7 = v1 & 0x200000;
  v93 = v1 & 0x100000;
  v91 = v1 & 0x200000;
  v8 = v1 & 0x1000000;
  v9 = 0;
  LOBYTE(v10) = 0;
  v94 = v1 & 0x1000000;
  if ( (*((_BYTE *)this + 240) & 0x10) == 0 )
  {
    if ( (v1 & 0x40000) != 0 )
    {
      CTopLevelWindow::UpdateWindowScale(this);
      *((_DWORD *)this + 20) &= ~0x40000u;
      v1 = *((_DWORD *)this + 20);
      v4 = v92;
      v5 = v90;
      v89 = 1;
    }
    if ( (v1 & 0x40E000) == 0 && !v7 && !v4 && !v5 && !v8 && !v6 )
      goto LABEL_64;
    v11 = (_DWORD *)*((_QWORD *)this + 90);
    v12 = 0;
    v13 = 0;
    v14 = v11[16];
    v15 = v11[18];
    v16 = v11[17];
    v17 = v11[19];
    if ( v14 != *((_DWORD *)this + 147) )
    {
      *((_DWORD *)this + 147) = v14;
      v13 = 1;
    }
    if ( v16 != *((_DWORD *)this + 148) )
    {
      *((_DWORD *)this + 148) = v16;
      v13 = 1;
    }
    if ( v15 != *((_DWORD *)this + 149) )
    {
      *((_DWORD *)this + 149) = v15;
      v13 = 1;
    }
    if ( v17 != *((_DWORD *)this + 150) )
    {
      *((_DWORD *)this + 150) = v17;
      v13 = 1;
    }
    v18 = v11[14] - v11[12];
    if ( v18 < 0 )
      v18 = 0;
    v19 = v18 - v16 - v14;
    v20 = v11[15] - v11[13];
    if ( v20 < 0 )
      v20 = 0;
    v21 = (_DWORD *)*((_QWORD *)this + 90);
    v22 = v20 - v17 - v15;
    v23 = v21[20];
    if ( *((_QWORD *)v21 + 10) == 0x7FFFFFFF7FFFFFFFLL && v21[22] == 0x7FFFFFFF && v21[23] == 0x7FFFFFFF )
    {
      v23 = v19 / 2;
      v25 = v22 / 2;
      v24 = (v19 + 1) / 2;
      v26 = (v22 + 1) / 2;
    }
    else
    {
      if ( v19 < v23 )
        v23 = v19;
      v24 = v19 - v23;
      if ( v24 >= v21[21] )
        v24 = v21[21];
      v25 = v22;
      v26 = v21[23];
      if ( v22 >= v21[22] )
        v25 = v21[22];
      v27 = v22 - v25;
      if ( v27 < v26 )
        goto LABEL_26;
    }
    v27 = v26;
LABEL_26:
    v28 = v24 + v16;
    v29 = v27 + v17;
    v30 = 0;
    v31 = v25 + v15;
    if ( v23 + v14 != *((_DWORD *)this + 151) )
    {
      *((_DWORD *)this + 151) = v23 + v14;
      v30 = 1;
    }
    if ( v28 != *((_DWORD *)this + 152) )
    {
      *((_DWORD *)this + 152) = v28;
      v30 = 1;
    }
    if ( v31 != *((_DWORD *)this + 153) )
    {
      *((_DWORD *)this + 153) = v31;
      v30 = 1;
    }
    if ( v29 != *((_DWORD *)this + 154) )
    {
      *((_DWORD *)this + 154) = v29;
      v30 = 1;
    }
    v32 = v13 | v30;
    if ( v32 )
    {
      v71 = (struct CWindowData *)*((_QWORD *)this + 90);
      v72 = (CProjectionBorderVisual *)*((_QWORD *)v71 + 51);
      if ( v72 )
        CProjectionBorderVisual::UpdateRectFromWindow(v72, v71);
    }
    v33 = *((_DWORD *)this + 146);
    v34 = (unsigned __int8)IsOpenThemeDataPresent() && (v33 & 6) != 0;
    v9 = 0;
    CurrentStyle = CTopLevelWindow::GetCurrentStyle(*((_QWORD *)this + 90), 0LL);
    if ( CurrentStyle != *((_DWORD *)this + 146) )
    {
      *((_DWORD *)this + 146) = CurrentStyle;
      v9 = 1;
    }
    if ( (int)CTopLevelWindow::UpdateColorizationColor(this) >= 0 )
    {
      v36 = (float *)*((_QWORD *)this + 72);
      if ( v36 )
      {
        v37 = *((_QWORD *)this + 90);
        if ( v37 )
        {
          if ( (*(_BYTE *)(v37 + 596) & 8) != 0
            && (*((_DWORD *)this + 151) || *((_DWORD *)this + 153) || *((_DWORD *)this + 152) || *((_DWORD *)this + 154))
            && (1.0 != *((float *)this + 178)
             || (float)(v36[8] * v36[4]) != *((float *)this + 175)
             || (float)(v36[8] * v36[5]) != *((float *)this + 176)
             || (float)(v36[8] * v36[6]) != *((float *)this + 177)) )
          {
            v9 = 1;
          }
        }
      }
    }
    v38 = *((_DWORD *)this + 146);
    v39 = v38 ^ v33;
    v40 = ((unsigned __int8)v38 ^ (unsigned __int8)v33) & 0x40;
    v10 = v39 & 0x20;
    v41 = 0;
    if ( v9 )
    {
      v70 = (unsigned __int8)IsOpenThemeDataPresent() && (v38 & 6) != 0;
      if ( v34 != v70 )
        v41 = 1;
    }
    v7 = v91;
    if ( v10 || v40 || v91 || v41 )
      LOBYTE(v10) = 1;
    v42 = !*((_QWORD *)this + 59) && *(_DWORD *)(*((_QWORD *)this + 90) + 128LL);
    v3 = v32 | CTopLevelWindow::UpdateMarginsDependentOnStyle(this);
    v8 = v94;
    if ( v94 || v3 || v9 || (_BYTE)v10 || v42 )
    {
      v64 = (struct CWindowData *)*((_QWORD *)this + 90);
      v65 = (CProjectionBorderVisual *)*((_QWORD *)v64 + 51);
      if ( v65 )
      {
        if ( v3 )
          CProjectionBorderVisual::UpdateRectFromWindow(v65, v64);
        if ( v91 )
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 90) + 408LL) + 24LL))(
            *(_QWORD *)(*((_QWORD *)this + 90) + 408LL),
            0x4000LL);
      }
      updated = CTopLevelWindow::UpdateWindowVisuals(this);
      v12 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x106Du);
    }
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1107u);
      return (unsigned int)v12;
    }
    *((_DWORD *)this + 20) &= 0xFE9F1FFF;
    v1 = *((_DWORD *)this + 20);
    v6 = v93;
LABEL_64:
    if ( (v1 & 0x4000000) != 0 )
    {
      v62 = CTopLevelWindow::UpdateClientAreaBounds(this);
      v12 = v62;
      if ( v62 < 0 )
      {
        v87 = 4366;
        goto LABEL_198;
      }
      *((_DWORD *)this + 20) &= ~0x4000000u;
      v1 = *((_DWORD *)this + 20);
    }
    if ( (v1 & 0x2000000) != 0 )
    {
      v62 = CTopLevelWindow::UpdateGDISurface(this);
      v12 = v62;
      if ( v62 < 0 )
      {
        v87 = 4373;
        goto LABEL_198;
      }
      *((_DWORD *)this + 20) &= ~0x2000000u;
      v1 = *((_DWORD *)this + 20);
    }
    v43 = v6 || v7;
    v44 = v43 | v10;
    if ( (v1 & 0x10000) != 0 )
    {
      v63 = (CText *)*((_QWORD *)this + 64);
      v12 = 0;
      if ( v63 )
      {
        v82 = CText::SetText(v63, *(const unsigned __int16 **)(*((_QWORD *)this + 90) + 16LL));
        v12 = v82;
        if ( v82 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v82, 0x12CEu);
      }
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1120u);
        return (unsigned int)v12;
      }
      *((_DWORD *)this + 20) &= ~0x10000u;
      v1 = *((_DWORD *)this + 20);
    }
    if ( (v1 & 0x20000) != 0 )
    {
      v62 = CTopLevelWindow::UpdateIcon(this);
      v12 = v62;
      if ( v62 < 0 )
      {
        v87 = 4390;
        goto LABEL_198;
      }
      *((_DWORD *)this + 20) &= ~0x20000u;
    }
    v45 = v3 || v92;
    if ( (unsigned __int8)IsOpenThemeDataPresent() && ((*((_DWORD *)this + 20) & 0x1000) != 0 || v9 || v3 || v89 || v8) )
    {
      v62 = CTopLevelWindow::UpdateNCAreaPositionsAndSizes(this);
      v12 = v62;
      if ( v62 < 0 )
      {
        v87 = 4405;
        goto LABEL_198;
      }
      *((_DWORD *)this + 20) &= ~0x1000u;
    }
    if ( *((_QWORD *)this + 64) && v44 )
    {
      CurrentDefaultColorizationFlags = (_DWORD *)CTopLevelWindow::GetCurrentDefaultColorizationFlags(this, &v93);
      WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(this, *CurrentDefaultColorizationFlags | 8u);
      CText::SetBackgroundColor(*((CText **)this + 64), WindowColorizationColor);
      v75 = CDesktopManager::s_pDesktopManagerInstance;
      v76 = 0LL;
      v77 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64);
      v78 = *(_DWORD *)(v77 + 360);
      if ( v78 )
      {
        v84 = *(_QWORD *)(v77 + 336);
        while ( *(_QWORD *)(v84 + 48 * v76 + 8) != *((_QWORD *)this + 90) )
        {
          v76 = (unsigned int)(v76 + 1);
          if ( (unsigned int)v76 >= v78 )
            goto LABEL_177;
        }
        CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(
          *(CTopLevelWindow **)(v84 + 48 * v76),
          WindowColorizationColor);
        v75 = CDesktopManager::s_pDesktopManagerInstance;
      }
LABEL_177:
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v75 + 194); i = (unsigned int)(i + 1) )
        CDesktopThumbnailBase::NotifyTlwTitleBackgroundChange(
          *(CDesktopThumbnailBase **)(*((_QWORD *)v75 + 94) + 8 * i),
          this,
          WindowColorizationColor);
      v80 = *(_QWORD *)(*((_QWORD *)this + 90) + 424LL);
      if ( v80 )
      {
        v81 = *(CTopLevelWindow **)(v80 + 24);
        if ( v81 )
          CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(v81, WindowColorizationColor);
      }
    }
    v46 = *((_DWORD *)this + 20);
    v12 = 0;
    if ( (v46 & 2) != 0 )
    {
      v69 = (*(__int64 (__fastcall **)(CTopLevelWindow *, _QWORD))(*(_QWORD *)this + 88LL))(this, 0LL);
      v12 = v69;
      if ( v69 < 0 )
      {
        v88 = 131;
        goto LABEL_223;
      }
      *((_DWORD *)this + 20) &= ~2u;
      v46 = *((_DWORD *)this + 20);
    }
    if ( (v46 & 8) != 0 )
    {
      v69 = (*(__int64 (__fastcall **)(CTopLevelWindow *))(*(_QWORD *)this + 176LL))(this);
      v12 = v69;
      if ( v69 < 0 )
      {
        v88 = 138;
        goto LABEL_223;
      }
      *((_DWORD *)this + 20) &= ~8u;
      v46 = *((_DWORD *)this + 20);
    }
    if ( (v46 & 0x10) != 0 )
    {
      v69 = CVisual::UpdateTransform(this);
      v12 = v69;
      if ( v69 < 0 )
      {
        v88 = 145;
        goto LABEL_223;
      }
      *((_DWORD *)this + 20) &= ~0x10u;
      v46 = *((_DWORD *)this + 20);
    }
    if ( (v46 & 0x20) == 0 )
    {
LABEL_86:
      if ( (v46 & 0x40) == 0 )
      {
LABEL_87:
        if ( v12 < 0 )
        {
          v87 = 4443;
          v83 = v12;
          goto LABEL_200;
        }
        if ( v44 || v45 || v95 )
        {
          v62 = CTopLevelWindow::UpdateNCAreaBackground(this);
          v12 = v62;
          if ( v62 < 0 )
          {
            v87 = 4450;
            goto LABEL_198;
          }
          *((_DWORD *)this + 20) &= ~0x100000u;
        }
        if ( (*((_DWORD *)this + 20) & 0x80000) != 0 || v45 )
        {
          v62 = CTopLevelWindow::UpdateClientBlur(this);
          v12 = v62;
          if ( v62 < 0 )
          {
            v87 = 4457;
            goto LABEL_198;
          }
          *((_DWORD *)this + 20) &= ~0x80000u;
        }
        if ( v3 )
          CWindowData::NotifySWROfMarginOrSizeChange(
            *((CWindowData **)this + 90),
            (*((_BYTE *)this + 240) & 0x40) == 0,
            (*((_BYTE *)this + 240) & 0x40) != 0);
        v47 = (CAccent *)*((_QWORD *)this + 33);
        if ( !v47 )
        {
          v48 = v90;
          goto LABEL_97;
        }
        v67 = *((_QWORD *)this + 90);
        v68 = (*(_BYTE *)(v67 + 156) & 2) == 0 && v44 && *(_DWORD *)(v67 + 152) == 2;
        v48 = v90;
        if ( !v45 && !v90 && !v68 )
          goto LABEL_156;
        if ( v68 )
        {
          *(_DWORD *)(*((_QWORD *)this + 90) + 160LL) = CTopLevelWindow::GetTransparentGradientColorForAccent(this);
          v67 = *((_QWORD *)this + 90);
          v47 = (CAccent *)*((_QWORD *)this + 33);
        }
        v62 = CAccent::UpdateAccentPolicy(
                v47,
                (const struct tagRECT *)(v67 + 48),
                (const struct ACCENT_POLICY *)(v67 + 152),
                *(struct CResource **)(v67 + 360));
        v12 = v62;
        if ( v62 >= 0 )
        {
          v47 = (CAccent *)*((_QWORD *)this + 33);
LABEL_156:
          v62 = (*(__int64 (__fastcall **)(CAccent *))(*(_QWORD *)v47 + 48LL))(v47);
          v12 = v62;
          if ( v62 >= 0 )
          {
LABEL_97:
            if ( (*((_BYTE *)this + 240) & 0x40) == 0 && (v3 || v48 || v92) )
              CTopLevelWindow::UpdateWindowRegion(this);
            v49 = *((_DWORD *)this + 20);
            if ( (v49 & 0x800000) != 0 )
            {
              CTopLevelWindow::UpdateLivePreviewAnimation(this);
              *((_DWORD *)this + 20) &= ~0x800000u;
              v49 = *((_DWORD *)this + 20);
            }
            if ( (v49 & 0x8000000) != 0 )
            {
              CTopLevelWindow::UpdateDCompVisuals(this);
              *((_DWORD *)this + 20) &= ~0x8000000u;
            }
            v50 = *((_BYTE *)this + 241);
            if ( (v50 & 0x20) == 0 || (*((_DWORD *)this + 146) & 0x40000) == 0 && (v44 || v45 || v9) )
            {
              v52 = *((_QWORD *)this + 90);
              if ( v52 && *(_QWORD *)(v52 + 40) )
              {
                CTopLevelWindow::GetOutsideMargins(this, &v96);
                v53 = *((_QWORD *)this + 90);
                v100 = 0LL;
                v101 = 0LL;
                v54 = (double)v96.cxLeftWidth / *(double *)(v53 + 296);
                if ( v54 < 0.0 )
                  v55 = ceil_0(v54 - 0.5);
                else
                  v55 = floor_0(v54 + 0.5);
                LODWORD(v100) = (int)v55;
                v56 = (double)v96.cxRightWidth / *(double *)(v53 + 296);
                if ( v56 < 0.0 )
                  v57 = ceil_0(v56 - 0.5);
                else
                  v57 = floor_0(v56 + 0.5);
                LODWORD(v101) = (int)v57;
                v58 = (double)v96.cyBottomHeight / *(double *)(v53 + 296);
                if ( v58 < 0.0 )
                  v59 = ceil_0(v58 - 0.5);
                else
                  v59 = floor_0(v58 + 0.5);
                HIDWORD(v101) = (int)v59;
                v60 = (double)v96.cyTopHeight / *(double *)(v53 + 296);
                if ( v60 < 0.0 )
                  v61 = ceil_0(v60 - 0.5);
                else
                  v61 = floor_0(v60 + 0.5);
                v97 = 8;
                v99 = 16;
                HIDWORD(v100) = (int)v61;
                v98 = &v100;
                SetWindowCompositionAttribute(*(_QWORD *)(v53 + 40), &v97);
                v50 = *((_BYTE *)this + 241);
              }
              *((_BYTE *)this + 241) = v50 | 0x20;
            }
            return (unsigned int)v12;
          }
          v87 = 4487;
          goto LABEL_198;
        }
        v87 = 4485;
LABEL_198:
        v83 = v62;
LABEL_200:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v83, v87);
        return (unsigned int)v12;
      }
      v86 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 408LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
              (char *)this + 196);
      v12 = v86;
      if ( v86 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v86, 0x3D9u);
      if ( v12 >= 0 )
      {
        *((_DWORD *)this + 20) &= ~0x40u;
        goto LABEL_87;
      }
      v88 = 159;
      v85 = v12;
LABEL_225:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v85, v88);
      goto LABEL_87;
    }
    v69 = (*(__int64 (__fastcall **)(CTopLevelWindow *))(*(_QWORD *)this + 160LL))(this);
    v12 = v69;
    if ( v69 >= 0 )
    {
      *((_DWORD *)this + 20) &= ~0x20u;
      v46 = *((_DWORD *)this + 20);
      goto LABEL_86;
    }
    v88 = 152;
LABEL_223:
    v85 = v69;
    goto LABEL_225;
  }
  v62 = CVisual::ValidateVisual(this);
  v12 = v62;
  if ( v62 < 0 )
  {
    v87 = 4329;
    goto LABEL_198;
  }
  if ( (*((_DWORD *)this + 20) & 0x800000) != 0 )
  {
    CTopLevelWindow::UpdateLivePreviewAnimation(this);
    *((_DWORD *)this + 20) &= ~0x800000u;
  }
  return (unsigned int)v12;
}
