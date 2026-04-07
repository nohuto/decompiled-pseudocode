/*
 * XREFs of ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180017100
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B210 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x18008E134 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x180012F88 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180012FE0 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x180013108 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180014898 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180014E34 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x180014F10 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180016F50 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x1800195EC (--0CAtlasedImage@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180028B9C (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800365C0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CText@@SAJPEAPEAV1@@Z @ 0x180036E40 (-Create@CText@@SAJPEAPEAV1@@Z.c)
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x180037068 (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x180037088 (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x1800370A8 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?SetColor@CText@@QEAAXK@Z @ 0x1800370D8 (-SetColor@CText@@QEAAXK@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x180037110 (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x1800374E0 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z @ 0x180039034 (-GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z.c)
 *     ?BlendColors@@YAKKKM@Z @ 0x180039874 (-BlendColors@@YAKKKM@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180039B54 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x18003A424 (-IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x18003A46C (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x18003AC38 (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?SetScalingFactor@CText@@QEAAXN@Z @ 0x18003B074 (-SetScalingFactor@CText@@QEAAXN@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004E888 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FDC2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18007E918 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x18008D10C (-CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateWindowVisuals(CTopLevelWindow *this)
{
  CTopLevelWindow *v1; // rbp
  unsigned int v2; // esi
  struct CTopLevelWindow::WindowFrame *v3; // rax
  int v4; // ebx
  struct CTopLevelWindow::WindowFrame *v5; // r14
  bool v6; // r8
  bool v7; // r12
  __int64 *v8; // rcx
  char v9; // dl
  __int64 *v10; // rcx
  char v11; // dl
  struct CAtlasedImage *v12; // r13
  __int64 *v13; // r15
  unsigned int v14; // edi
  struct CAtlasedImage **v15; // rbx
  struct CAtlasedImage *v16; // rcx
  __int64 v17; // rsi
  struct CAtlasedImage *v18; // rbp
  __int64 v19; // rcx
  struct CAtlasedImage *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // ebx
  CAtlasedImage *v24; // r9
  CAtlasedImage *v25; // rcx
  CAtlasedImage *v26; // rcx
  CAtlasedImage *v27; // rcx
  CAtlasedImage *v28; // rcx
  CAtlasedImage *v29; // rcx
  CAtlasedImage *v30; // rcx
  CAtlasedImage *v31; // rcx
  CAtlasedImage *v32; // rcx
  CAtlasedImage *v33; // rcx
  CAtlasedImage *v34; // rcx
  CAtlasedImage *v35; // rcx
  CAtlasedImage *v36; // rcx
  CAtlasedImage *v37; // rcx
  CAtlasedImage *v38; // rcx
  CAtlasedImage *v39; // rcx
  int updated; // eax
  int v41; // edx
  __int64 v42; // rax
  bool v43; // r12
  struct CVisual *v44; // rdx
  int v45; // eax
  __int64 v47; // rcx
  CAtlasedImage *v48; // rax
  CAtlasedImage *v49; // rax
  __int64 v50; // r12
  __int64 v51; // rbp
  unsigned int v52; // edx
  unsigned int v53; // ecx
  struct CAtlasedImage **j; // rax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // r9
  struct CAtlasedImage **v58; // rdx
  struct CAtlasedImage **v59; // r8
  struct CAtlasedImage *v60; // r8
  __int64 v61; // rsi
  unsigned int v62; // edx
  __int64 v63; // rcx
  __int64 i; // r9
  __int64 v65; // r8
  int *CurrentDefaultColorizationFlags; // rax
  unsigned int WindowColorizationColor; // ebx
  unsigned int v68; // r9d
  unsigned int v69; // r8d
  int v70; // eax
  int inserted; // eax
  int v72; // eax
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rax
  CAtlasedImage *v76; // rcx
  CAtlasedImage *v77; // rcx
  CAtlasedImage *v78; // rcx
  CAtlasedImage *v79; // rcx
  CAtlasedImage *v80; // rcx
  CAtlasedImage *v81; // rcx
  CAtlasedImage *v82; // rcx
  CAtlasedImage *v83; // rcx
  CAtlasedImage *v84; // rcx
  CAtlasedImage *v85; // rcx
  CAtlasedImage *v86; // rcx
  CAtlasedImage *v87; // rcx
  CAtlasedImage *v88; // rcx
  CAtlasedImage *v89; // rcx
  __int64 v90; // rcx
  int v91; // eax
  __int64 v92; // rcx
  int v93; // eax
  CBaseObject *v94; // rcx
  int HolographicSlate; // eax
  unsigned int v96; // [rsp+20h] [rbp-D8h]
  void *v97; // [rsp+28h] [rbp-D0h]
  bool v98; // [rsp+30h] [rbp-C8h]
  bool v99; // [rsp+31h] [rbp-C7h]
  struct CAtlasedImage **v100; // [rsp+38h] [rbp-C0h] BYREF
  struct CAtlasedImage *v101; // [rsp+40h] [rbp-B8h] BYREF
  CTopLevelWindow *v102; // [rsp+48h] [rbp-B0h]
  int v103; // [rsp+50h] [rbp-A8h] BYREF
  struct CTopLevelWindow::WindowFrame *v104; // [rsp+58h] [rbp-A0h]
  tagLOGFONTW v105; // [rsp+60h] [rbp-98h] BYREF

  v1 = this;
  v102 = this;
  v2 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v2;
  v3 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
         *((_DWORD *)v1 + 146),
         0,
         (*(_BYTE *)(*((_QWORD *)v1 + 90) + 607LL) & 0x10) != 0);
  v4 = *((_DWORD *)v1 + 146);
  v5 = v3;
  v104 = v3;
  v6 = (unsigned __int8)IsOpenThemeDataPresent() && (v4 & 6) != 0;
  v98 = v6;
  v7 = (*((_DWORD *)v1 + 146) & 0x20000) != 0;
  v8 = (__int64 *)*((_QWORD *)v1 + 32);
  v99 = v7;
  v9 = *((_BYTE *)v8 + 84);
  if ( v7 != (v9 & 1) )
  {
    v74 = *v8;
    *((_BYTE *)v8 + 84) = v7 | v9 & 0xFE;
    (*(void (__fastcall **)(__int64 *, __int64))(v74 + 24))(v8, 16LL);
    v6 = v98;
  }
  v10 = (__int64 *)*((_QWORD *)v1 + 67);
  v11 = *((_BYTE *)v10 + 84);
  if ( v7 != (v11 & 1) )
  {
    v75 = *v10;
    *((_BYTE *)v10 + 84) = v7 | v11 & 0xFE;
    (*(void (__fastcall **)(__int64 *, __int64))(v75 + 24))(v10, 16LL);
    v6 = v98;
  }
  v12 = 0LL;
  v13 = (__int64 *)((char *)v5 + 1504);
  v14 = 0;
  v15 = (struct CAtlasedImage **)((char *)v1 + 296);
  do
  {
    v16 = *v15;
    if ( v6 )
    {
      if ( v16 )
      {
LABEL_12:
        if ( v5 )
        {
          v17 = *(v13 - 1);
          if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17) && *v13 )
            v17 = *v13;
        }
        else
        {
          v17 = 0LL;
        }
        v18 = *v15;
        v19 = *((_QWORD *)*v15 + 9);
        if ( v19 != v17 )
        {
          if ( v19 && _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(__int64, __int64))v19)(v19, 1LL);
          *((_QWORD *)v18 + 9) = v17;
          if ( v17 )
            _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
          *((_DWORD *)v18 + 24) |= 1u;
          v47 = *((_QWORD *)v18 + 10);
          if ( v47 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v47 + 24LL))(v47, 0x2000LL);
        }
        if ( (v14 - 18 > 3 || *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17)) && v17 )
        {
          v20 = *v15;
          if ( *((_DWORD *)*v15 + 6) != *(_DWORD *)(v17 + 24) || *((_DWORD *)v20 + 7) != *(_DWORD *)(v17 + 28) )
          {
            v21 = *(_QWORD *)(v17 + 24);
            *((_DWORD *)v20 + 24) |= 1u;
            *((_QWORD *)v20 + 3) = v21;
            v22 = *((_QWORD *)v20 + 10);
            if ( v22 )
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, 0x2000LL);
          }
          v12 = *v15;
        }
        else
        {
          v60 = *v15;
          v61 = *((_QWORD *)*v15 + 10);
          if ( v61 )
          {
            v62 = *(_DWORD *)(v61 + 264);
            v63 = 0LL;
            for ( i = *(_QWORD *)(v61 + 240); (unsigned int)v63 < v62; v63 = (unsigned int)(v63 + 1) )
            {
              if ( v60 == *(struct CAtlasedImage **)(i + 8 * v63) )
                break;
            }
            if ( (unsigned int)v63 < v62 )
            {
              for ( ; (unsigned int)v63 < v62 - 1; v62 = *(_DWORD *)(v61 + 264) )
              {
                *(_QWORD *)(i + 8 * v63) = *(_QWORD *)(i + 8LL * (unsigned int)(v63 + 1));
                v63 = (unsigned int)(v63 + 1);
              }
              *(_DWORD *)(v61 + 264) = v62 - 1;
            }
            *((_QWORD *)v60 + 10) = 0LL;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v60 + 2, 0xFFFFFFFF) == 1 )
              (**(void (__fastcall ***)(struct CAtlasedImage *, __int64))v60)(v60, 1LL);
            (*(void (__fastcall **)(__int64, __int64, struct CAtlasedImage *, __int64))(*(_QWORD *)v61 + 24LL))(
              v61,
              0x2000LL,
              v60,
              i);
            v60 = *v15;
          }
          if ( v60 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v60 + 2, 0xFFFFFFFF) == 1 )
              (**(void (__fastcall ***)(struct CAtlasedImage *, __int64))v60)(v60, 1LL);
            *v15 = 0LL;
          }
        }
        v1 = v102;
        goto LABEL_22;
      }
      if ( v15 )
      {
        v48 = (CAtlasedImage *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                                 WPF::g_pProcessHeap,
                                 128LL);
        if ( v48 && (v49 = CAtlasedImage::CAtlasedImage(v48)) != 0LL )
        {
          *v15 = v49;
          v2 = 0;
        }
        else
        {
          v2 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA3u, v97);
          *v15 = 0LL;
        }
      }
      else
      {
        v2 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xA3u, v97);
      }
      if ( (v2 & 0x80000000) != 0 )
      {
        v96 = 2022;
        goto LABEL_212;
      }
      *((_DWORD *)*v15 + 30) = v14;
      v50 = *((_QWORD *)v1 + 34);
      v51 = 0LL;
      if ( v12 )
      {
        v52 = *(_DWORD *)(v50 + 264);
        v53 = 0;
        for ( j = *(struct CAtlasedImage ***)(v50 + 240); v53 < v52; ++j )
        {
          if ( v12 == *j )
            break;
          ++v53;
        }
        if ( v53 == v52 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x39u, v97);
          v2 = -2147024809;
LABEL_154:
          v96 = 2027;
LABEL_212:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, v96, v97);
          return v2;
        }
        v51 = v53 + 1;
      }
      v101 = *v15;
      if ( (unsigned int)v51 > *(_DWORD *)(v50 + 264) )
      {
        v2 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1C3u, v97);
      }
      else
      {
        v100 = &v101;
        v55 = DynArrayImpl<0>::Grow((char **)(v50 + 240), 8u, 1, 0, (unsigned __int64 *)&v100);
        v2 = v55;
        if ( v55 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x1CDu, v97);
        }
        else
        {
          v56 = *(unsigned int *)(v50 + 264);
          v57 = *(_QWORD *)(v50 + 240);
          *(_DWORD *)(v50 + 264) = v56 + 1;
          if ( (unsigned int)v56 > (unsigned int)v51 )
          {
            v65 = v57 + 8 * v56;
            do
            {
              v56 = (unsigned int)(v56 - 1);
              v65 -= 8LL;
              *(_QWORD *)(v65 + 8) = *(_QWORD *)(v57 + 8 * v56);
            }
            while ( (unsigned int)v56 > (unsigned int)v51 );
          }
          v58 = v100;
          v59 = (struct CAtlasedImage **)(v57 + 8 * v51);
          if ( v100 >= v59 && (unsigned __int64)v100 < v57 + 8 * ((unsigned __int64)*(unsigned int *)(v50 + 264) - 1) )
            v58 = ++v100;
          *v59 = *v58;
        }
        if ( (v2 & 0x80000000) == 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v101 + 2);
          *((_QWORD *)v101 + 10) = v50;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v50 + 24LL))(v50, 0x2000LL);
LABEL_95:
          if ( (v2 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x40u, v97);
            goto LABEL_154;
          }
          v5 = v104;
          goto LABEL_12;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x4Du, v97);
      goto LABEL_95;
    }
    if ( v16 )
    {
      if ( *((_QWORD *)v16 + 10) )
      {
        CAtlasedRectsVisual::RemoveAtlasImage(*((CAtlasedRectsVisual **)v16 + 10), *v15);
        v16 = *v15;
        v6 = v98;
      }
      if ( v16 )
      {
        CBaseObject::Release(v16);
        *v15 = 0LL;
LABEL_22:
        v6 = v98;
      }
    }
    ++v14;
    ++v15;
    v13 += 2;
  }
  while ( v14 < 0x16 );
  v23 = 2;
  if ( v6 )
  {
    if ( CTopLevelWindow::IsSheetOfGlass(v1) )
    {
      if ( *((_DWORD *)v24 + 16) != 10 )
      {
        *((_DWORD *)v24 + 16) = 10;
        CAtlasedImage::SetDirtyFlags(v24, 1u, 0x2000u);
      }
      v76 = (CAtlasedImage *)*((_QWORD *)v1 + 38);
      if ( *((_DWORD *)v76 + 16) != 8 )
      {
        *((_DWORD *)v76 + 16) = 8;
        CAtlasedImage::SetDirtyFlags(v76, 1u, 0x2000u);
      }
      v77 = (CAtlasedImage *)*((_QWORD *)v1 + 39);
      if ( *((_DWORD *)v77 + 16) != 9 )
      {
        *((_DWORD *)v77 + 16) = 9;
        CAtlasedImage::SetDirtyFlags(v77, 1u, 0x2000u);
      }
      v78 = (CAtlasedImage *)*((_QWORD *)v1 + 40);
      if ( *((_DWORD *)v78 + 16) != 2 )
      {
        *((_DWORD *)v78 + 16) = 2;
        CAtlasedImage::SetDirtyFlags(v78, 1u, 0x2000u);
      }
      v79 = (CAtlasedImage *)*((_QWORD *)v1 + 41);
      if ( *((_DWORD *)v79 + 16) != 1 )
      {
        *((_DWORD *)v79 + 16) = 1;
        CAtlasedImage::SetDirtyFlags(v79, 1u, 0x2000u);
      }
      v80 = (CAtlasedImage *)*((_QWORD *)v1 + 42);
      if ( *((_DWORD *)v80 + 16) != 6 )
      {
        *((_DWORD *)v80 + 16) = 6;
        CAtlasedImage::SetDirtyFlags(v80, 1u, 0x2000u);
      }
      v81 = (CAtlasedImage *)*((_QWORD *)v1 + 43);
      if ( *((_DWORD *)v81 + 16) != 4 )
      {
        *((_DWORD *)v81 + 16) = 4;
        CAtlasedImage::SetDirtyFlags(v81, 1u, 0x2000u);
      }
      v82 = (CAtlasedImage *)*((_QWORD *)v1 + 44);
      if ( *((_DWORD *)v82 + 16) != 5 )
      {
        *((_DWORD *)v82 + 16) = 5;
        CAtlasedImage::SetDirtyFlags(v82, 1u, 0x2000u);
      }
      v83 = (CAtlasedImage *)*((_QWORD *)v1 + 46);
      if ( *((_DWORD *)v83 + 16) != 10 )
      {
        *((_DWORD *)v83 + 16) = 10;
        CAtlasedImage::SetDirtyFlags(v83, 1u, 0x2000u);
      }
      v84 = (CAtlasedImage *)*((_QWORD *)v1 + 47);
      if ( *((_DWORD *)v84 + 16) != 8 )
      {
        *((_DWORD *)v84 + 16) = 8;
        CAtlasedImage::SetDirtyFlags(v84, 1u, 0x2000u);
      }
      v85 = (CAtlasedImage *)*((_QWORD *)v1 + 48);
      if ( *((_DWORD *)v85 + 16) != 9 )
      {
        *((_DWORD *)v85 + 16) = 9;
        CAtlasedImage::SetDirtyFlags(v85, 1u, 0x2000u);
      }
      v86 = (CAtlasedImage *)*((_QWORD *)v1 + 49);
      if ( *((_DWORD *)v86 + 16) != 2 )
      {
        *((_DWORD *)v86 + 16) = 2;
        CAtlasedImage::SetDirtyFlags(v86, 1u, 0x2000u);
      }
      v87 = (CAtlasedImage *)*((_QWORD *)v1 + 50);
      if ( *((_DWORD *)v87 + 16) != 1 )
      {
        *((_DWORD *)v87 + 16) = 1;
        CAtlasedImage::SetDirtyFlags(v87, 1u, 0x2000u);
      }
      v88 = (CAtlasedImage *)*((_QWORD *)v1 + 51);
      if ( *((_DWORD *)v88 + 16) != 6 )
      {
        *((_DWORD *)v88 + 16) = 6;
        CAtlasedImage::SetDirtyFlags(v88, 1u, 0x2000u);
      }
      v89 = (CAtlasedImage *)*((_QWORD *)v1 + 52);
      if ( *((_DWORD *)v89 + 16) != 4 )
      {
        *((_DWORD *)v89 + 16) = 4;
        CAtlasedImage::SetDirtyFlags(v89, 1u, 0x2000u);
      }
      v39 = (CAtlasedImage *)*((_QWORD *)v1 + 53);
      if ( *((_DWORD *)v39 + 16) == 5 )
        goto LABEL_57;
      *((_DWORD *)v39 + 16) = 5;
    }
    else
    {
      if ( *((_DWORD *)v24 + 16) )
      {
        *((_DWORD *)v24 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v24, 1u, 0x2000u);
      }
      v25 = (CAtlasedImage *)*((_QWORD *)v1 + 38);
      if ( *((_DWORD *)v25 + 16) )
      {
        *((_DWORD *)v25 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v25, 1u, 0x2000u);
      }
      v26 = (CAtlasedImage *)*((_QWORD *)v1 + 39);
      if ( *((_DWORD *)v26 + 16) )
      {
        *((_DWORD *)v26 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v26, 1u, 0x2000u);
      }
      v27 = (CAtlasedImage *)*((_QWORD *)v1 + 40);
      if ( *((_DWORD *)v27 + 16) )
      {
        *((_DWORD *)v27 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v27, 1u, 0x2000u);
      }
      v28 = (CAtlasedImage *)*((_QWORD *)v1 + 41);
      if ( *((_DWORD *)v28 + 16) )
      {
        *((_DWORD *)v28 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v28, 1u, 0x2000u);
      }
      v29 = (CAtlasedImage *)*((_QWORD *)v1 + 42);
      if ( *((_DWORD *)v29 + 16) )
      {
        *((_DWORD *)v29 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v29, 1u, 0x2000u);
      }
      v30 = (CAtlasedImage *)*((_QWORD *)v1 + 43);
      if ( *((_DWORD *)v30 + 16) )
      {
        *((_DWORD *)v30 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v30, 1u, 0x2000u);
      }
      v31 = (CAtlasedImage *)*((_QWORD *)v1 + 44);
      if ( *((_DWORD *)v31 + 16) )
      {
        *((_DWORD *)v31 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v31, 1u, 0x2000u);
      }
      v32 = (CAtlasedImage *)*((_QWORD *)v1 + 46);
      if ( *((_DWORD *)v32 + 16) )
      {
        *((_DWORD *)v32 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v32, 1u, 0x2000u);
      }
      v33 = (CAtlasedImage *)*((_QWORD *)v1 + 47);
      if ( *((_DWORD *)v33 + 16) )
      {
        *((_DWORD *)v33 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v33, 1u, 0x2000u);
      }
      v34 = (CAtlasedImage *)*((_QWORD *)v1 + 48);
      if ( *((_DWORD *)v34 + 16) )
      {
        *((_DWORD *)v34 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v34, 1u, 0x2000u);
      }
      v35 = (CAtlasedImage *)*((_QWORD *)v1 + 49);
      if ( *((_DWORD *)v35 + 16) )
      {
        *((_DWORD *)v35 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v35, 1u, 0x2000u);
      }
      v36 = (CAtlasedImage *)*((_QWORD *)v1 + 50);
      if ( *((_DWORD *)v36 + 16) )
      {
        *((_DWORD *)v36 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v36, 1u, 0x2000u);
      }
      v37 = (CAtlasedImage *)*((_QWORD *)v1 + 51);
      if ( *((_DWORD *)v37 + 16) )
      {
        *((_DWORD *)v37 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v37, 1u, 0x2000u);
      }
      v38 = (CAtlasedImage *)*((_QWORD *)v1 + 52);
      if ( *((_DWORD *)v38 + 16) )
      {
        *((_DWORD *)v38 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v38, 1u, 0x2000u);
      }
      v39 = (CAtlasedImage *)*((_QWORD *)v1 + 53);
      if ( !*((_DWORD *)v39 + 16) )
        goto LABEL_57;
      *((_DWORD *)v39 + 16) = 0;
    }
    CAtlasedImage::SetDirtyFlags(v39, 1u, 0x2000u);
  }
LABEL_57:
  updated = CTopLevelWindow::UpdateButtonVisuals((CButton **)v1, (struct CBitmapSource **)v5);
  v2 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x83Cu, v97);
    return v2;
  }
  v41 = *((_DWORD *)v1 + 146);
  v42 = *((_QWORD *)v1 + 65);
  if ( (v41 & 0x10080) != 0 )
  {
    if ( !v42 )
    {
      v70 = CImage::Create((struct CImage **)v1 + 65);
      v2 = v70;
      if ( v70 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x842u, v97);
        return v2;
      }
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)v1 + 32) + 32LL),
                   *((struct CVisual **)v1 + 65),
                   *((struct CVisual **)v1 + 34),
                   1u,
                   1);
      v2 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x843u, v97);
        return v2;
      }
      CVisual::SetDirtyFlags(v1, 0x20000);
      v41 = *((_DWORD *)v1 + 146);
      v42 = *((_QWORD *)v1 + 65);
    }
    v43 = v99;
    if ( (v41 & 0x80u) != 0 )
      v23 = 3;
    *(_DWORD *)(v42 + 192) = v23;
    CVisual::SetRTLMirror(*((CVisual **)v1 + 65), v99);
  }
  else
  {
    if ( v42 )
    {
      v90 = *(_QWORD *)(v42 + 24);
      if ( v90 )
      {
        v91 = VisualCollection::Remove((VisualCollection *)(v90 + 32), *((struct CVisual **)v1 + 65));
        v2 = v91;
        if ( v91 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v91, 0x852u, v97);
          return v2;
        }
        CVisual::SetDirtyFlags(v1, 4096);
        v42 = *((_QWORD *)v1 + 65);
      }
      if ( v42 )
      {
        CBaseObject::Release((CBaseObject *)v42);
        *((_QWORD *)v1 + 65) = 0LL;
      }
    }
    v43 = v99;
  }
  v44 = (struct CVisual *)*((_QWORD *)v1 + 64);
  if ( (*((_BYTE *)v1 + 584) & 8) != 0 )
  {
    if ( !v44 )
    {
      v72 = CText::Create((struct CText **)v1 + 64);
      v2 = v72;
      if ( v72 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v72, 0x85Fu, v97);
        return v2;
      }
      v73 = VisualCollection::InsertRelative(
              (VisualCollection *)(*((_QWORD *)v1 + 34) + 32LL),
              *((struct CVisual **)v1 + 64),
              0LL,
              1u,
              1);
      v2 = v73;
      if ( v73 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v73, 0x862u, v97);
        return v2;
      }
      CVisual::SetDirtyFlags(v1, 0x10000);
    }
    CurrentDefaultColorizationFlags = CTopLevelWindow::GetCurrentDefaultColorizationFlags((__int64)v1, &v103);
    WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(
                                (__int64)v1,
                                *CurrentDefaultColorizationFlags | 8u);
    CText::SetBackgroundColor(*((CText **)v1 + 64), WindowColorizationColor);
    if ( v5 )
    {
      v68 = BYTE2(WindowColorizationColor)
          + 5 * BYTE1(WindowColorizationColor)
          + 2 * (unsigned __int8)WindowColorizationColor;
      if ( v68 > 0x400 == (unsigned __int8)BYTE2(*((_DWORD *)v5 + 462))
                        + 5 * BYTE1(*((_DWORD *)v5 + 462))
                        + 2 * (unsigned int)(unsigned __int8)*((_DWORD *)v5 + 462) > 0x400 )
      {
        v92 = 321LL;
        if ( v68 <= 0x400 )
          v92 = 292LL;
        ColorCache::GetColor(v92);
      }
      if ( !CTopLevelWindow::TreatAsActiveWindow(v1) )
        v69 = BlendColors(WindowColorizationColor, v69, 0.40000001);
      CText::SetColor(*((CText **)v1 + 64), v69);
    }
    memset_0(&v105, 0, sizeof(v105));
    CWindowData::GetNonClientCaptionFont(*((CWindowData **)v1 + 90), &v105);
    CText::SetFont(*((CText **)v1 + 64), &v105);
    CText::SetScalingFactor(*((CText **)v1 + 64), *(double *)(*((_QWORD *)v1 + 90) + 296LL));
    CVisual::SetRTLMirror(*((CVisual **)v1 + 64), v43);
    CText::SetRTLReading(*((CText **)v1 + 64), (*((_DWORD *)v1 + 146) & 0x80000) != 0);
    CText::SetReverseAlignment(*((CText **)v1 + 64), (*((_DWORD *)v1 + 146) & 0x400000) != 0);
  }
  else if ( v44 )
  {
    v93 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v1 + 34) + 32LL), v44);
    v2 = v93;
    if ( v93 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v93, 0x88Bu, v97);
      return v2;
    }
    v94 = (CBaseObject *)*((_QWORD *)v1 + 64);
    if ( v94 )
    {
      CBaseObject::Release(v94);
      *((_QWORD *)v1 + 64) = 0LL;
    }
  }
  v45 = CTopLevelWindow::EnsureClientAreaNode(v1);
  v2 = v45;
  if ( v45 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x890u, v97);
    return v2;
  }
  v2 = 0;
  if ( (*((_BYTE *)v1 + 241) & 2) != 0 )
  {
    HolographicSlate = CTopLevelWindow::CreateHolographicSlate(v1);
    v2 = HolographicSlate;
    if ( HolographicSlate < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, HolographicSlate, 0x17Bu, v97);
  }
  else
  {
    CTopLevelWindow::ReleaseHolographicSlate(v1);
  }
  if ( (v2 & 0x80000000) != 0 )
  {
    v96 = 2194;
    goto LABEL_212;
  }
  return v2;
}
