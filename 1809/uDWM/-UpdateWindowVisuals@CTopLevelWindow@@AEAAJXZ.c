/*
 * XREFs of ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001C300
 * Callers:
 *     ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800112F0 (-SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180016B10 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180019504 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001F390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18001F8B8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180022890 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x1800229CC (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x180025384 (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180025544 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x1800356F0 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x180035BF0 (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x180035C10 (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x180035C84 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?SetColor@CText@@QEAAXK@Z @ 0x180035CB4 (-SetColor@CText@@QEAAXK@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x180035CEC (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?Create@CText@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180035F64 (-Create@CText@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x180038484 (-IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?BlendColors@@YAKKKM@Z @ 0x180038558 (-BlendColors@@YAKKKM@Z.c)
 *     ?GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z @ 0x180038698 (-GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800387A4 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x180039B3C (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004C598 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1800782E8 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x180087000 (-CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateWindowVisuals(CTopLevelWindow *this)
{
  CTopLevelWindow *v1; // rbp
  unsigned int v2; // esi
  int v3; // ebx
  char v4; // di
  _DWORD *v5; // r14
  int v6; // ebx
  bool v7; // dl
  bool v8; // r12
  __int64 *v9; // r8
  char v10; // cl
  __int64 *v11; // r8
  char v12; // cl
  __int64 *v13; // r15
  struct CAtlasedImage *v14; // r13
  struct CAtlasedImage **v15; // rbx
  unsigned int i; // edi
  struct CAtlasedImage *v17; // rcx
  int v18; // ebx
  int updated; // eax
  int v20; // ecx
  __int64 v21; // rax
  bool v22; // r12
  struct CVisual *v23; // rdx
  int v24; // eax
  CBaseObject *v25; // rcx
  __int64 v27; // rsi
  struct CAtlasedImage *v28; // rbp
  __int64 v29; // rcx
  struct CAtlasedImage *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // rbp
  unsigned int v38; // edx
  unsigned int v39; // ecx
  struct CAtlasedImage **j; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r9
  struct CAtlasedImage **v44; // rdx
  struct CAtlasedImage **v45; // r8
  struct CAtlasedImage *v46; // r8
  __int64 v47; // rsi
  unsigned int v48; // edx
  __int64 v49; // r9
  __int64 k; // rcx
  char v51; // di
  __int64 v52; // rcx
  CAtlasedImage *v53; // r9
  CAtlasedImage *v54; // rcx
  CAtlasedImage *v55; // rcx
  CAtlasedImage *v56; // rcx
  CAtlasedImage *v57; // rcx
  CAtlasedImage *v58; // rcx
  CAtlasedImage *v59; // rcx
  CAtlasedImage *v60; // rcx
  CAtlasedImage *v61; // rcx
  CAtlasedImage *v62; // rcx
  CAtlasedImage *v63; // rcx
  CAtlasedImage *v64; // rcx
  CAtlasedImage *v65; // rcx
  CAtlasedImage *v66; // rcx
  CAtlasedImage *v67; // rcx
  CAtlasedImage *v68; // rcx
  __int64 v69; // r8
  _DWORD *CurrentDefaultColorizationFlags; // rax
  unsigned int WindowColorizationColor; // ebx
  __int64 v72; // rdx
  unsigned int v73; // r9d
  unsigned int v74; // r8d
  double *v75; // rcx
  double v76; // xmm1_8
  int v77; // eax
  int inserted; // eax
  int v79; // eax
  int v80; // eax
  __int64 v81; // rax
  __int64 v82; // rax
  CAtlasedImage *v83; // rcx
  CAtlasedImage *v84; // rcx
  CAtlasedImage *v85; // rcx
  CAtlasedImage *v86; // rcx
  CAtlasedImage *v87; // rcx
  CAtlasedImage *v88; // rcx
  CAtlasedImage *v89; // rcx
  CAtlasedImage *v90; // rcx
  CAtlasedImage *v91; // rcx
  CAtlasedImage *v92; // rcx
  CAtlasedImage *v93; // rcx
  CAtlasedImage *v94; // rcx
  CAtlasedImage *v95; // rcx
  CAtlasedImage *v96; // rcx
  __int64 v97; // rcx
  int v98; // eax
  __int64 v99; // rcx
  __int64 v100; // rax
  int v101; // eax
  CBaseObject *v102; // rcx
  int HolographicSlate; // eax
  struct CVisual *v104; // rdx
  VisualCollection *v105; // rcx
  CBaseObject *v106; // rcx
  unsigned int v107; // [rsp+20h] [rbp-D8h]
  bool v108; // [rsp+30h] [rbp-C8h]
  bool v109; // [rsp+31h] [rbp-C7h]
  struct CAtlasedImage **v110; // [rsp+38h] [rbp-C0h] BYREF
  struct CAtlasedImage *v111; // [rsp+40h] [rbp-B8h] BYREF
  CTopLevelWindow *v112; // [rsp+48h] [rbp-B0h]
  _DWORD *v113; // [rsp+50h] [rbp-A8h]
  _BYTE v114[8]; // [rsp+58h] [rbp-A0h] BYREF
  tagLOGFONTW v115; // [rsp+60h] [rbp-98h] BYREF

  v1 = this;
  v112 = this;
  v2 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v2;
  v3 = *((_DWORD *)v1 + 146);
  v4 = *(_BYTE *)(*((_QWORD *)v1 + 90) + 599LL);
  if ( (v3 & 2) != 0 )
    LOBYTE(v2) = 1;
  if ( (unsigned __int8)IsOpenThemeDataPresent() && (v3 & 6) != 0 )
  {
    v51 = v4 & 0x10;
    if ( (v3 & 0x20) != 0 )
    {
      if ( v51 || (v3 & 0x40) != 0 )
        v5 = *(_DWORD **)(CTopLevelWindow::s_rgpwfWindowFrames + 16);
      else
        v5 = *(_DWORD **)(CTopLevelWindow::s_rgpwfWindowFrames + 24);
    }
    else
    {
      if ( v51 || (v3 & 0x40) != 0 )
      {
        v52 = 0LL;
        if ( (_BYTE)v2 )
          v52 = 32LL;
      }
      else if ( (_BYTE)v2 )
      {
        v52 = 40LL;
      }
      else
      {
        v52 = 8LL;
      }
      v5 = *(_DWORD **)(v52 + CTopLevelWindow::s_rgpwfWindowFrames);
    }
  }
  else
  {
    v5 = 0LL;
  }
  v6 = *((_DWORD *)v1 + 146);
  v113 = v5;
  v7 = (unsigned __int8)IsOpenThemeDataPresent() && (v6 & 6) != 0;
  v108 = v7;
  v8 = (*((_DWORD *)v1 + 146) & 0x20000) != 0;
  v9 = (__int64 *)*((_QWORD *)v1 + 32);
  v109 = v8;
  v10 = *((_BYTE *)v9 + 84);
  if ( v8 != (v10 & 1) )
  {
    v81 = *v9;
    *((_BYTE *)v9 + 84) = v8 | v10 & 0xFE;
    (*(void (__fastcall **)(__int64 *, __int64))(v81 + 24))(v9, 16LL);
    v7 = v108;
  }
  v11 = (__int64 *)*((_QWORD *)v1 + 67);
  v12 = *((_BYTE *)v11 + 84);
  if ( v8 != (v12 & 1) )
  {
    v82 = *v11;
    *((_BYTE *)v11 + 84) = v8 | v12 & 0xFE;
    (*(void (__fastcall **)(__int64 *, __int64))(v82 + 24))(v11, 16LL);
    v7 = v108;
  }
  v13 = (__int64 *)(v5 + 376);
  v14 = 0LL;
  v15 = (struct CAtlasedImage **)((char *)v1 + 296);
  for ( i = 0; i < 0x16; ++i )
  {
    v17 = *v15;
    if ( !v7 )
    {
      if ( v17 )
      {
        if ( *((_QWORD *)v17 + 10) )
        {
          CAtlasedRectsVisual::RemoveAtlasImage(*((CAtlasedRectsVisual **)v17 + 10), *v15);
          v17 = *v15;
          v7 = v108;
        }
        if ( v17 )
        {
          CBaseObject::Release(v17);
          *v15 = 0LL;
          goto LABEL_41;
        }
      }
      goto LABEL_17;
    }
    if ( !v17 )
    {
      v34 = *(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL);
      if ( !v15 )
      {
        v2 = -2147024809;
        goto LABEL_173;
      }
      v35 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
              WPF::g_pProcessHeap,
              136LL);
      if ( !v35 )
      {
        v2 = -2147024882;
LABEL_173:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xA5u);
        v107 = 2045;
        goto LABEL_231;
      }
      *(_DWORD *)(v35 + 8) = 1;
      *(_QWORD *)v35 = &CAtlasedImage::`vftable';
      *(_QWORD *)(v35 + 72) = 0LL;
      *(_QWORD *)(v35 + 88) = 0LL;
      *(_DWORD *)(v35 + 32) = 0x7FFFFFFF;
      *(_DWORD *)(v35 + 40) = 0x7FFFFFFF;
      *(_DWORD *)(v35 + 36) = 0x7FFFFFFF;
      *(_DWORD *)(v35 + 44) = 0x7FFFFFFF;
      *(_DWORD *)(v35 + 52) = 0x80000000;
      *(_DWORD *)(v35 + 48) = 0x80000000;
      *(_DWORD *)(v35 + 60) = 0x7FFFFFFF;
      *(_DWORD *)(v35 + 56) = 0x7FFFFFFF;
      *(_DWORD *)(v35 + 68) = -1;
      *(_DWORD *)(v35 + 132) = 22;
      *(_QWORD *)(v35 + 104) = v34;
      *v15 = (struct CAtlasedImage *)v35;
      *(_DWORD *)(v35 + 132) = i;
      v36 = *((_QWORD *)v1 + 34);
      v37 = 0LL;
      if ( v14 )
      {
        v38 = *(_DWORD *)(v36 + 264);
        v39 = 0;
        for ( j = *(struct CAtlasedImage ***)(v36 + 240); v39 < v38; ++j )
        {
          if ( v14 == *j )
            break;
          ++v39;
        }
        if ( v39 == v38 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x39u);
          v2 = -2147024809;
LABEL_170:
          v107 = 2050;
LABEL_231:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, v107);
          return v2;
        }
        v37 = v39 + 1;
      }
      v111 = *v15;
      if ( (unsigned int)v37 > *(_DWORD *)(v36 + 264) )
      {
        v2 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1C3u);
      }
      else
      {
        v110 = &v111;
        v41 = DynArrayImpl<0>::Grow((int)v36 + 240, 8, 1, 0, (__int64)&v110);
        v2 = v41;
        if ( v41 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x1CDu);
        }
        else
        {
          v42 = *(unsigned int *)(v36 + 264);
          v43 = *(_QWORD *)(v36 + 240);
          *(_DWORD *)(v36 + 264) = v42 + 1;
          if ( (unsigned int)v42 > (unsigned int)v37 )
          {
            v69 = v43 + 8 * v42;
            do
            {
              v42 = (unsigned int)(v42 - 1);
              v69 -= 8LL;
              *(_QWORD *)(v69 + 8) = *(_QWORD *)(v43 + 8 * v42);
            }
            while ( (unsigned int)v42 > (unsigned int)v37 );
          }
          v44 = v110;
          v45 = (struct CAtlasedImage **)(v43 + 8 * v37);
          if ( v110 >= v45 && (unsigned __int64)v110 < v43 + 8 * ((unsigned __int64)*(unsigned int *)(v36 + 264) - 1) )
            v44 = ++v110;
          *v45 = *v44;
        }
        if ( (v2 & 0x80000000) == 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v111 + 2);
          *((_QWORD *)v111 + 10) = v36;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 24LL))(v36, 0x2000LL);
LABEL_64:
          if ( (v2 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x40u);
            goto LABEL_170;
          }
          v5 = v113;
          goto LABEL_31;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x4Du);
      goto LABEL_64;
    }
LABEL_31:
    if ( v5 )
    {
      v27 = *(v13 - 1);
      if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17) && *v13 )
        v27 = *v13;
    }
    else
    {
      v27 = 0LL;
    }
    v28 = *v15;
    v29 = *((_QWORD *)*v15 + 9);
    if ( v29 != v27 )
    {
      if ( v29 && _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 8), 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64, __int64))v29)(v29, 1LL);
      *((_QWORD *)v28 + 9) = v27;
      if ( v27 )
        _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
      *((_DWORD *)v28 + 24) |= 1u;
      v33 = *((_QWORD *)v28 + 10);
      if ( v33 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 24LL))(v33, 0x2000LL);
    }
    if ( (i - 18 > 3 || *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17)) && v27 )
    {
      v30 = *v15;
      if ( *((_DWORD *)*v15 + 6) != *(_DWORD *)(v27 + 24) || *((_DWORD *)v30 + 7) != *(_DWORD *)(v27 + 28) )
      {
        v31 = *(_QWORD *)(v27 + 24);
        *((_DWORD *)v30 + 24) |= 1u;
        *((_QWORD *)v30 + 3) = v31;
        v32 = *((_QWORD *)v30 + 10);
        if ( v32 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 24LL))(v32, 0x2000LL);
      }
      v14 = *v15;
LABEL_40:
      v1 = v112;
LABEL_41:
      v7 = v108;
      goto LABEL_17;
    }
    v46 = *v15;
    v47 = *((_QWORD *)*v15 + 10);
    if ( v47 )
    {
      v48 = *(_DWORD *)(v47 + 264);
      v49 = *(_QWORD *)(v47 + 240);
      for ( k = 0LL; (unsigned int)k < v48; k = (unsigned int)(k + 1) )
      {
        if ( v46 == *(struct CAtlasedImage **)(v49 + 8 * k) )
          break;
      }
      if ( (unsigned int)k < v48 )
      {
        for ( ; (unsigned int)k < v48 - 1; v48 = *(_DWORD *)(v47 + 264) )
        {
          *(_QWORD *)(v49 + 8 * k) = *(_QWORD *)(v49 + 8LL * (unsigned int)(k + 1));
          k = (unsigned int)(k + 1);
        }
        *(_DWORD *)(v47 + 264) = v48 - 1;
      }
      *((_QWORD *)v46 + 10) = 0LL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v46 + 2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(struct CAtlasedImage *, __int64))v46)(v46, 1LL);
      (*(void (__fastcall **)(__int64, __int64, struct CAtlasedImage *, __int64))(*(_QWORD *)v47 + 24LL))(
        v47,
        0x2000LL,
        v46,
        v49);
      v46 = *v15;
    }
    if ( !v46 )
      goto LABEL_40;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v46 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(struct CAtlasedImage *, __int64))v46)(v46, 1LL);
    v1 = v112;
    v7 = v108;
    *v15 = 0LL;
LABEL_17:
    ++v15;
    v13 += 2;
  }
  v18 = 2;
  if ( v7 )
  {
    if ( CTopLevelWindow::IsSheetOfGlass(v1) )
    {
      if ( *((_DWORD *)v53 + 16) != 10 )
      {
        *((_DWORD *)v53 + 16) = 10;
        CAtlasedImage::SetDirtyFlags(v53, 1u, 0x2000u);
      }
      v83 = (CAtlasedImage *)*((_QWORD *)v1 + 38);
      if ( *((_DWORD *)v83 + 16) != 8 )
      {
        *((_DWORD *)v83 + 16) = 8;
        CAtlasedImage::SetDirtyFlags(v83, 1u, 0x2000u);
      }
      v84 = (CAtlasedImage *)*((_QWORD *)v1 + 39);
      if ( *((_DWORD *)v84 + 16) != 9 )
      {
        *((_DWORD *)v84 + 16) = 9;
        CAtlasedImage::SetDirtyFlags(v84, 1u, 0x2000u);
      }
      v85 = (CAtlasedImage *)*((_QWORD *)v1 + 40);
      if ( *((_DWORD *)v85 + 16) != 2 )
      {
        *((_DWORD *)v85 + 16) = 2;
        CAtlasedImage::SetDirtyFlags(v85, 1u, 0x2000u);
      }
      v86 = (CAtlasedImage *)*((_QWORD *)v1 + 41);
      if ( *((_DWORD *)v86 + 16) != 1 )
      {
        *((_DWORD *)v86 + 16) = 1;
        CAtlasedImage::SetDirtyFlags(v86, 1u, 0x2000u);
      }
      v87 = (CAtlasedImage *)*((_QWORD *)v1 + 42);
      if ( *((_DWORD *)v87 + 16) != 6 )
      {
        *((_DWORD *)v87 + 16) = 6;
        CAtlasedImage::SetDirtyFlags(v87, 1u, 0x2000u);
      }
      v88 = (CAtlasedImage *)*((_QWORD *)v1 + 43);
      if ( *((_DWORD *)v88 + 16) != 4 )
      {
        *((_DWORD *)v88 + 16) = 4;
        CAtlasedImage::SetDirtyFlags(v88, 1u, 0x2000u);
      }
      v89 = (CAtlasedImage *)*((_QWORD *)v1 + 44);
      if ( *((_DWORD *)v89 + 16) != 5 )
      {
        *((_DWORD *)v89 + 16) = 5;
        CAtlasedImage::SetDirtyFlags(v89, 1u, 0x2000u);
      }
      v90 = (CAtlasedImage *)*((_QWORD *)v1 + 46);
      if ( *((_DWORD *)v90 + 16) != 10 )
      {
        *((_DWORD *)v90 + 16) = 10;
        CAtlasedImage::SetDirtyFlags(v90, 1u, 0x2000u);
      }
      v91 = (CAtlasedImage *)*((_QWORD *)v1 + 47);
      if ( *((_DWORD *)v91 + 16) != 8 )
      {
        *((_DWORD *)v91 + 16) = 8;
        CAtlasedImage::SetDirtyFlags(v91, 1u, 0x2000u);
      }
      v92 = (CAtlasedImage *)*((_QWORD *)v1 + 48);
      if ( *((_DWORD *)v92 + 16) != 9 )
      {
        *((_DWORD *)v92 + 16) = 9;
        CAtlasedImage::SetDirtyFlags(v92, 1u, 0x2000u);
      }
      v93 = (CAtlasedImage *)*((_QWORD *)v1 + 49);
      if ( *((_DWORD *)v93 + 16) != 2 )
      {
        *((_DWORD *)v93 + 16) = 2;
        CAtlasedImage::SetDirtyFlags(v93, 1u, 0x2000u);
      }
      v94 = (CAtlasedImage *)*((_QWORD *)v1 + 50);
      if ( *((_DWORD *)v94 + 16) != 1 )
      {
        *((_DWORD *)v94 + 16) = 1;
        CAtlasedImage::SetDirtyFlags(v94, 1u, 0x2000u);
      }
      v95 = (CAtlasedImage *)*((_QWORD *)v1 + 51);
      if ( *((_DWORD *)v95 + 16) != 6 )
      {
        *((_DWORD *)v95 + 16) = 6;
        CAtlasedImage::SetDirtyFlags(v95, 1u, 0x2000u);
      }
      v96 = (CAtlasedImage *)*((_QWORD *)v1 + 52);
      if ( *((_DWORD *)v96 + 16) != 4 )
      {
        *((_DWORD *)v96 + 16) = 4;
        CAtlasedImage::SetDirtyFlags(v96, 1u, 0x2000u);
      }
      v68 = (CAtlasedImage *)*((_QWORD *)v1 + 53);
      if ( *((_DWORD *)v68 + 16) == 5 )
        goto LABEL_19;
      *((_DWORD *)v68 + 16) = 5;
    }
    else
    {
      if ( *((_DWORD *)v53 + 16) )
      {
        *((_DWORD *)v53 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v53, 1u, 0x2000u);
      }
      v54 = (CAtlasedImage *)*((_QWORD *)v1 + 38);
      if ( *((_DWORD *)v54 + 16) )
      {
        *((_DWORD *)v54 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v54, 1u, 0x2000u);
      }
      v55 = (CAtlasedImage *)*((_QWORD *)v1 + 39);
      if ( *((_DWORD *)v55 + 16) )
      {
        *((_DWORD *)v55 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v55, 1u, 0x2000u);
      }
      v56 = (CAtlasedImage *)*((_QWORD *)v1 + 40);
      if ( *((_DWORD *)v56 + 16) )
      {
        *((_DWORD *)v56 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v56, 1u, 0x2000u);
      }
      v57 = (CAtlasedImage *)*((_QWORD *)v1 + 41);
      if ( *((_DWORD *)v57 + 16) )
      {
        *((_DWORD *)v57 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v57, 1u, 0x2000u);
      }
      v58 = (CAtlasedImage *)*((_QWORD *)v1 + 42);
      if ( *((_DWORD *)v58 + 16) )
      {
        *((_DWORD *)v58 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v58, 1u, 0x2000u);
      }
      v59 = (CAtlasedImage *)*((_QWORD *)v1 + 43);
      if ( *((_DWORD *)v59 + 16) )
      {
        *((_DWORD *)v59 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v59, 1u, 0x2000u);
      }
      v60 = (CAtlasedImage *)*((_QWORD *)v1 + 44);
      if ( *((_DWORD *)v60 + 16) )
      {
        *((_DWORD *)v60 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v60, 1u, 0x2000u);
      }
      v61 = (CAtlasedImage *)*((_QWORD *)v1 + 46);
      if ( *((_DWORD *)v61 + 16) )
      {
        *((_DWORD *)v61 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v61, 1u, 0x2000u);
      }
      v62 = (CAtlasedImage *)*((_QWORD *)v1 + 47);
      if ( *((_DWORD *)v62 + 16) )
      {
        *((_DWORD *)v62 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v62, 1u, 0x2000u);
      }
      v63 = (CAtlasedImage *)*((_QWORD *)v1 + 48);
      if ( *((_DWORD *)v63 + 16) )
      {
        *((_DWORD *)v63 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v63, 1u, 0x2000u);
      }
      v64 = (CAtlasedImage *)*((_QWORD *)v1 + 49);
      if ( *((_DWORD *)v64 + 16) )
      {
        *((_DWORD *)v64 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v64, 1u, 0x2000u);
      }
      v65 = (CAtlasedImage *)*((_QWORD *)v1 + 50);
      if ( *((_DWORD *)v65 + 16) )
      {
        *((_DWORD *)v65 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v65, 1u, 0x2000u);
      }
      v66 = (CAtlasedImage *)*((_QWORD *)v1 + 51);
      if ( *((_DWORD *)v66 + 16) )
      {
        *((_DWORD *)v66 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v66, 1u, 0x2000u);
      }
      v67 = (CAtlasedImage *)*((_QWORD *)v1 + 52);
      if ( *((_DWORD *)v67 + 16) )
      {
        *((_DWORD *)v67 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v67, 1u, 0x2000u);
      }
      v68 = (CAtlasedImage *)*((_QWORD *)v1 + 53);
      if ( !*((_DWORD *)v68 + 16) )
        goto LABEL_19;
      *((_DWORD *)v68 + 16) = 0;
    }
    CAtlasedImage::SetDirtyFlags(v68, 1u, 0x2000u);
  }
LABEL_19:
  updated = CTopLevelWindow::UpdateButtonVisuals(v1, (const struct CTopLevelWindow::WindowFrame *)v5);
  v2 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x853u);
    return v2;
  }
  v20 = *((_DWORD *)v1 + 146);
  v21 = *((_QWORD *)v1 + 65);
  if ( (v20 & 0x10080) != 0 )
  {
    if ( !v21 )
    {
      v77 = CImage::Create(*(struct IDwmChannel **)(*((_QWORD *)v1 + 2) + 16LL), (struct CImage **)v1 + 65);
      v2 = v77;
      if ( v77 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0x859u);
        return v2;
      }
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)v1 + 32) + 32LL),
                   *((struct CVisual **)v1 + 65),
                   *((struct CVisual **)v1 + 34),
                   1,
                   1);
      v2 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x85Au);
        return v2;
      }
      CVisual::SetDirtyFlags(v1, 0x20000u);
      v20 = *((_DWORD *)v1 + 146);
      v21 = *((_QWORD *)v1 + 65);
    }
    v22 = v109;
    if ( (v20 & 0x80u) != 0 )
      v18 = 3;
    *(_DWORD *)(v21 + 192) = v18;
    CVisual::SetRTLMirror(*((CVisual **)v1 + 65), v109);
  }
  else
  {
    if ( v21 )
    {
      v97 = *(_QWORD *)(v21 + 24);
      if ( v97 )
      {
        v98 = VisualCollection::Remove((VisualCollection *)(v97 + 32), *((struct CVisual **)v1 + 65));
        v2 = v98;
        if ( v98 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v98, 0x869u);
          return v2;
        }
        CVisual::SetDirtyFlags(v1, 0x1000u);
        v21 = *((_QWORD *)v1 + 65);
      }
      if ( v21 )
      {
        CBaseObject::Release((CBaseObject *)v21);
        *((_QWORD *)v1 + 65) = 0LL;
      }
    }
    v22 = v109;
  }
  v23 = (struct CVisual *)*((_QWORD *)v1 + 64);
  if ( (*((_BYTE *)v1 + 584) & 8) != 0 )
  {
    if ( !v23 )
    {
      v79 = CText::Create(*(struct IDwmChannel **)(*((_QWORD *)v1 + 2) + 16LL), (struct CText **)v1 + 64);
      v2 = v79;
      if ( v79 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v79, 0x876u);
        return v2;
      }
      v80 = VisualCollection::InsertRelative(
              (VisualCollection *)(*((_QWORD *)v1 + 34) + 32LL),
              *((struct CVisual **)v1 + 64),
              0LL,
              1,
              1);
      v2 = v80;
      if ( v80 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v80, 0x879u);
        return v2;
      }
      CVisual::SetDirtyFlags(v1, 0x10000u);
    }
    CurrentDefaultColorizationFlags = (_DWORD *)CTopLevelWindow::GetCurrentDefaultColorizationFlags(v1, v114);
    WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(v1, *CurrentDefaultColorizationFlags | 8u);
    CText::SetBackgroundColor(*((CText **)v1 + 64), WindowColorizationColor);
    if ( v5 )
    {
      v72 = BYTE2(WindowColorizationColor) + 5 * BYTE1(WindowColorizationColor);
      v73 = v72 + 2 * (unsigned __int8)WindowColorizationColor;
      if ( v73 > 0x400 == (unsigned __int8)BYTE2(v5[462])
                        + 5 * BYTE1(v5[462])
                        + 2 * (unsigned int)(unsigned __int8)v5[462] > 0x400 )
      {
        v99 = 318LL;
        if ( v73 <= 0x400 )
          v99 = 292LL;
        ColorCache::GetColor(v99, v72);
      }
      if ( !CTopLevelWindow::TreatAsActiveWindow(v1) )
        v74 = BlendColors(WindowColorizationColor, v74, 0.40000001);
      CText::SetColor(*((CText **)v1 + 64), v74);
    }
    memset_0(&v115, 0, sizeof(v115));
    CWindowData::GetNonClientCaptionFont(*((CWindowData **)v1 + 90), &v115);
    CText::SetFont(*((CText **)v1 + 64), &v115);
    v75 = (double *)*((_QWORD *)v1 + 64);
    v76 = *(double *)(*((_QWORD *)v1 + 90) + 296LL);
    if ( v75[52] != v76 )
    {
      v100 = *(_QWORD *)v75;
      v75[52] = v76;
      (*(void (__fastcall **)(double *, __int64))(v100 + 24))(v75, 4096LL);
      v75 = (double *)*((_QWORD *)v1 + 64);
    }
    CVisual::SetRTLMirror((CVisual *)v75, v22);
    CText::SetRTLReading(*((CText **)v1 + 64), (*((_DWORD *)v1 + 146) & 0x80000) != 0);
    CText::SetReverseAlignment(*((CText **)v1 + 64), (*((_DWORD *)v1 + 146) & 0x400000) != 0);
  }
  else if ( v23 )
  {
    v101 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v1 + 34) + 32LL), v23);
    v2 = v101;
    if ( v101 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v101, 0x8A2u);
      return v2;
    }
    v102 = (CBaseObject *)*((_QWORD *)v1 + 64);
    if ( v102 )
    {
      CBaseObject::Release(v102);
      *((_QWORD *)v1 + 64) = 0LL;
    }
  }
  v24 = CTopLevelWindow::EnsureClientAreaNode(v1);
  v2 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x8A7u);
    return v2;
  }
  v2 = 0;
  if ( (*((_BYTE *)v1 + 241) & 4) != 0 )
  {
    HolographicSlate = CTopLevelWindow::CreateHolographicSlate(v1);
    v2 = HolographicSlate;
    if ( HolographicSlate < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, HolographicSlate, 0x182u);
  }
  else
  {
    v25 = (CBaseObject *)*((_QWORD *)v1 + 98);
    if ( v25 )
    {
      CBaseObject::Release(v25);
      v104 = (struct CVisual *)*((_QWORD *)v1 + 59);
      v105 = (VisualCollection *)(*((_QWORD *)v1 + 99) + 32LL);
      *((_QWORD *)v1 + 98) = 0LL;
      VisualCollection::InsertRelative(v105, v104, 0LL, 1, 1);
      v106 = (CBaseObject *)*((_QWORD *)v1 + 99);
      if ( v106 )
      {
        CBaseObject::Release(v106);
        *((_QWORD *)v1 + 99) = 0LL;
      }
    }
  }
  if ( (v2 & 0x80000000) != 0 )
  {
    v107 = 2217;
    goto LABEL_231;
  }
  return v2;
}
