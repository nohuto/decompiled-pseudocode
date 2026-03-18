/*
 * XREFs of xxxRealDrawMenuItem @ 0x1C0232894
 * Callers:
 *     xxxDrawState @ 0x1C0230354 (xxxDrawState.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     NtGdiAlphaBlend @ 0x1C00489E0 (NtGdiAlphaBlend.c)
 *     GreCreateDIBitmapReal @ 0x1C004F05C (GreCreateDIBitmapReal.c)
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     _DrawIconEx @ 0x1C006D774 (_DrawIconEx.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C00AACC4 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00AB970 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     GetDPIMetrics @ 0x1C00AB99C (GetDPIMetrics.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 *     xxxGetWindowSmIcon @ 0x1C00B72A4 (xxxGetWindowSmIcon.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C00E4F1C (GreDecBitmapExclusiveRefCnt.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     BitBltSysBmp @ 0x1C01066B8 (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0106800 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C0106948 (PrepareHDCBITSBitmap.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C022470C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     BltColor @ 0x1C023020C (BltColor.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0230A0C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C02311D0 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C023A0D8 (xxxPSMTextOut.c)
 *     FindCharPosition @ 0x1C0241A1C (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C02440EC (xxxPSMGetTextExtent.c)
 */

__int64 __fastcall xxxRealDrawMenuItem(XLATEOBJ *a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  __int64 v9; // rdx
  int v10; // r14d
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // rcx
  bool v16; // zf
  unsigned int DpiForSystem; // eax
  int v18; // r8d
  unsigned __int64 v19; // rax
  int v20; // edx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int v25; // ebx
  HDC v26; // r14
  __int64 v27; // rbx
  unsigned int v28; // eax
  __int16 *OemBitmapInfoForDpi; // rax
  __int64 v30; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 WindowSmIcon; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // ecx
  unsigned int v36; // r14d
  unsigned int v37; // r8d
  int *v38; // rax
  int v39; // r12d
  int DpiDependentMetric; // r14d
  int v41; // ebx
  unsigned int v42; // eax
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // r8
  int ObjectW; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r10
  __int64 v52; // r15
  __int64 v53; // r13
  __int64 CompatibleDC; // rax
  XLATEOBJ *v55; // rbx
  int v56; // edx
  __int64 v57; // rax
  unsigned __int8 *v58; // r9
  unsigned int v59; // r8d
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r9
  const WCHAR *v65; // r15
  int v66; // ebx
  __int64 DPIMetrics; // rax
  int *v68; // r10
  __int64 v69; // rdx
  int v70; // r8d
  int v71; // eax
  __int64 CharPosition; // r12
  unsigned int v73; // r11d
  unsigned int v74; // eax
  __int64 v75; // r10
  int v76; // r13d
  __int64 v77; // r14
  unsigned int v78; // eax
  char *v79; // rax
  int v80; // r9d
  int v81; // r13d
  __int64 v82; // rcx
  __int64 v83; // rcx
  int v84; // r13d
  int v85; // esi
  __int64 v86; // rcx
  const WCHAR *v87; // r9
  HDC v88; // r14
  __int64 v89; // rcx
  __int64 v90; // r14
  __int64 v91; // rcx
  int *v92; // rdx
  __int64 v93; // r9
  int v94; // ebx
  unsigned int v95; // eax
  char *v96; // rax
  __int16 *v97; // rbx
  HDC v98; // r11
  int *v99; // r8
  int v100; // esi
  int v101; // r10d
  int v102; // eax
  int v103; // r9d
  __int64 v104; // rcx
  __int64 v105; // r9
  int v106; // esi
  __int64 v107; // r13
  __int64 v108; // rcx
  int v109; // ebx
  __int64 v110; // rsi
  __int64 v111; // rcx
  int v112; // edx
  unsigned int v114; // [rsp+70h] [rbp-90h]
  int v116; // [rsp+80h] [rbp-80h]
  int v117; // [rsp+80h] [rbp-80h]
  int v119; // [rsp+88h] [rbp-78h]
  __int64 v120; // [rsp+88h] [rbp-78h]
  BOOL v121; // [rsp+90h] [rbp-70h]
  __int64 *v122[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v123; // [rsp+A8h] [rbp-58h]
  __int64 v124; // [rsp+B0h] [rbp-50h]
  __int64 v125; // [rsp+B8h] [rbp-48h]
  __int64 v126; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v127; // [rsp+C8h] [rbp-38h]
  __int64 v128; // [rsp+D0h] [rbp-30h]
  __int64 v129; // [rsp+D8h] [rbp-28h]
  _QWORD v130[3]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v131[14]; // [rsp+F8h] [rbp-8h] BYREF
  char v132[16]; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int16 v133; // [rsp+140h] [rbp+40h]
  unsigned __int16 v134; // [rsp+142h] [rbp+42h]
  __int16 v135; // [rsp+15Eh] [rbp+5Eh]
  int v136; // [rsp+160h] [rbp+60h]

  SmartObjStackRefBase<tagMENU>::Init(v122, 0LL);
  v9 = *a2;
  v123 = 0LL;
  v10 = 0;
  v121 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v122, v9);
  v11 = a2[1];
  v124 = v11;
  v12 = *(_QWORD *)(*v122[0] + 40);
  v13 = *(_DWORD *)(v12 + 40) & 1;
  v114 = *(_DWORD *)(v12 + 40) & 1;
  if ( v114 )
  {
    v14 = 2;
    if ( *(int *)(*(_QWORD *)(*v122[0] + 40) + 40LL) >= 0 )
    {
      if ( a5 )
      {
        v15 = *(_QWORD *)v11;
        if ( (*(_DWORD *)(*(_QWORD *)v11 + 4LL) & 8) != 0 )
          v16 = *(_QWORD *)(v15 + 24) == 0LL;
        else
          v16 = *(_QWORD *)(v15 + 32) == 0LL;
        LOBYTE(v10) = !v16;
      }
      else
      {
        v10 = DrawMenuItemCheckMark((HDC)a1, (int **)v11);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*v122[0] + 40) + 40LL) & 0x4000000) == 0
        || !*(_QWORD *)(*(_QWORD *)v11 + 96LL)
        || v10 )
      {
        if ( (**(_DWORD **)v11 & 0x2000) != 0 )
        {
          v14 = 2;
        }
        else
        {
          DpiForSystem = GetDpiForSystem();
          v14 = *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2) + 4;
        }
      }
      v13 = v114;
    }
    else
    {
      v14 = 4;
    }
  }
  else
  {
    v14 = 0;
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 )
      v121 = *(char *)(*(_QWORD *)v11 + 4LL) < 0;
  }
  if ( !*(_QWORD *)(*(_QWORD *)v11 + 96LL) || v10 && (*(_DWORD *)(*(_QWORD *)(*v122[0] + 40) + 40LL) & 0x4000000) != 0 )
    goto LABEL_104;
  if ( a5 )
    goto LABEL_63;
  v18 = *(_DWORD *)(*(_QWORD *)v11 + 4LL);
  v19 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
  if ( (v18 & 0x20000000) != 0 )
  {
    if ( v19 == 1 )
      goto LABEL_51;
    v20 = v14;
    if ( v19 > 7 )
      goto LABEL_39;
    v21 = v19 - 2;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 2;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( !v24 )
          {
            v25 = 21;
            goto LABEL_38;
          }
          if ( v24 == 1 )
          {
            v25 = 25;
            v20 = v14 + 2;
LABEL_38:
            BitBltSysBmp((HDC)a1, v20, 2, v25, 1);
LABEL_104:
            v36 = v114;
            goto LABEL_105;
          }
LABEL_39:
          v26 = (HDC)PrepareHDCBITSBitmap(0LL);
          if ( v26 )
          {
            v27 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
            v28 = GetDpiForSystem();
            OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v27 + 79), v28);
            BltColor(
              (HDC)a1,
              0LL,
              v26,
              v14,
              (unsigned int)(*(_DWORD *)(*(_QWORD *)v11 + 76LL) - OemBitmapInfoForDpi[3]) >> 1,
              OemBitmapInfoForDpi[2],
              OemBitmapInfoForDpi[3],
              *OemBitmapInfoForDpi,
              OemBitmapInfoForDpi[1],
              1);
          }
          goto LABEL_104;
        }
        v25 = 18;
      }
      else
      {
        v25 = 22;
        v20 = v14 + 2;
      }
    }
    else
    {
      v25 = 26;
    }
    if ( (v18 & 0x80u) != 0 )
      ++v25;
    goto LABEL_38;
  }
  if ( v19 == -1LL )
  {
    xxxSendMenuDrawItemMessage((__int64)a1, 1, v122, v11, 1, v14, 0LL);
    goto LABEL_104;
  }
  if ( *(_WORD *)(gptiCurrent + 632LL) > 0x400u
    || (!*(_QWORD *)(*(_QWORD *)v11 + 56LL) || *(_QWORD *)(v11 + 24))
    && ((_DWORD)v13
     || v11 != *(_QWORD *)(*v122[0] + 88)
     || *(_DWORD *)(*(_QWORD *)(*v122[0] + 40) + 44LL) <= 1u
     || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v122[0] + 88) + 96LL) + 96LL)
     || !*(_QWORD *)(v11 + 16)) )
  {
LABEL_63:
    v38 = *(int **)v11;
    v39 = *(_DWORD *)(*(_QWORD *)v11 + 104LL);
    DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
    if ( (_DWORD)v13 )
    {
      v41 = (v38[19] - DpiDependentMetric) / 2;
      if ( v38[19] - DpiDependentMetric <= 0 )
        v41 = 0;
      v119 = v41;
    }
    else
    {
      v42 = GetDpiForSystem();
      if ( DpiDependentMetric <= (int)GetDpiDependentMetric(26LL, v42, v43) )
      {
        v46 = GetDpiForSystem();
        DpiDependentMetric = GetDpiDependentMetric(26LL, v46, v47);
      }
      else
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
      }
      v41 = 0;
      v119 = 0;
      if ( *(_QWORD *)(v11 + 24) )
        v14 += *(_DWORD *)(GetDPIMetrics(v45, v44) + 8);
    }
    v125 = GreSelectBitmap(ghdcMem2, *(_QWORD *)(*(_QWORD *)v11 + 96LL));
    if ( !v125 )
      goto LABEL_104;
    ObjectW = GreExtGetObjectW(*(HSURF *)(*(_QWORD *)v11 + 96LL), 104LL, v132);
    LODWORD(v51) = 0;
    if ( !a5 || **(_DWORD **)v11 == 4 )
    {
      if ( ObjectW != 104 || v135 != 32 || v136 || **(_DWORD **)v11 == 4 )
      {
        if ( v133 * v134 == 1 )
          v60 = 12060490;
        else
          v60 = (unsigned int)MNDrawHilite((__int64)v122, v11) != 0 ? 3342344 : 13369376;
        NtGdiBitBltInternal(
          (HDC)a1,
          v14 + v121,
          v41 + v121,
          v39,
          DpiDependentMetric,
          ghdcMem2,
          v51,
          v51,
          v60,
          0xFFFFFF,
          v51);
      }
      goto LABEL_103;
    }
    v52 = 0LL;
    v116 = 33488896;
    v53 = 0LL;
    if ( a6 )
    {
      v126 = 0LL;
      CompatibleDC = GreCreateCompatibleDC(a1, v49, v50);
      LODWORD(v51) = 0;
      v55 = (XLATEOBJ *)CompatibleDC;
      if ( !CompatibleDC )
      {
LABEL_88:
        if ( a6 != (_DWORD)v51 )
        {
          if ( v53 != -1 )
            GreSelectBitmap(v55, v53);
          if ( v52 )
          {
            GreDecBitmapExclusiveRefCnt(v52, v49);
            GreDeleteObject(v52);
          }
          if ( v55 )
            GreDeleteDC(v55);
        }
LABEL_103:
        GreSelectBitmap(ghdcMem2, v125);
        goto LABEL_104;
      }
      memset(v131, 0, 0x2CuLL);
      v131[0] = 40;
      v131[1] = v39;
      v131[2] = DpiDependentMetric;
      *(_QWORD *)&v131[3] = 2097153LL;
      v57 = GreCreateDIBitmapReal((HDC)v55, v56, 0LL, v131, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v126);
      LODWORD(v51) = 0;
      v52 = v57;
      if ( v57 )
      {
        v53 = GreSelectBitmap(v55, v57);
        if ( v53 == -1 )
        {
          LODWORD(v51) = 0;
        }
        else
        {
          NtGdiAlphaBlend(v55, 0, 0, v39, DpiDependentMetric, ghdcMem2, 0, 0, v39, DpiDependentMetric, 33488896);
          LODWORD(v51) = 0;
          if ( v39 * DpiDependentMetric > 0 )
          {
            v58 = (unsigned __int8 *)v126;
            v51 = (unsigned int)(v39 * DpiDependentMetric);
            do
            {
              v49 = 29 * v58[2] + 150 * (unsigned int)v58[1];
              v59 = ((unsigned int)v49 + 77 * *v58 + 129) >> 8;
              *(_DWORD *)v58 = v59 | ((v59 | ((v59 | (v58[3] << 8)) << 8)) << 8);
              v58 += 4;
              --v51;
            }
            while ( v51 );
            v11 = v124;
          }
          BYTE2(v116) = 102;
        }
      }
    }
    else
    {
      v55 = (XLATEOBJ *)ghdcMem2;
    }
    if ( v55 )
    {
      NtGdiAlphaBlend(
        a1,
        v14 + v121,
        v121 + v119,
        v39,
        DpiDependentMetric,
        (POINTL)v55,
        0,
        0,
        v39,
        DpiDependentMetric,
        v116);
      LODWORD(v51) = 0;
    }
    goto LABEL_88;
  }
  while ( 1 )
  {
LABEL_51:
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) && *(_QWORD *)(*v122[0] + 80) )
      SetupFakeMDIAppStuff((__int64)v122, (_QWORD *)v11);
    LOBYTE(v13) = 1;
    v30 = HMValidateHandleNoRip(*(_QWORD *)(*(_QWORD *)v11 + 56LL), v13);
    if ( v30 )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) )
      goto LABEL_58;
    *(_QWORD *)(*(_QWORD *)v11 + 56LL) = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
  v130[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v130;
  v130[1] = v30;
  _InterlockedAdd((volatile signed __int32 *)(v30 + 8), 1u);
  WindowSmIcon = xxxGetWindowSmIcon((__int64 *)v30, 0);
  ThreadUnlock1(v34, v33);
  if ( WindowSmIcon )
    goto LABEL_59;
LABEL_58:
  WindowSmIcon = qword_1C030E080;
LABEL_59:
  v35 = a3 - 4;
  v36 = v114;
  v37 = a4 - 2;
  if ( v114 && v37 < v35 )
    v35 = a4 - 2;
  DrawIconEx((HDC)a1, v14 + 4, 1, WindowSmIcon, v35, v37, 0, *(_QWORD *)(gpsi + 4728LL), 19);
LABEL_105:
  v61 = v123;
  if ( !v123 )
    v61 = *v122[0];
  if ( (unsigned int)MNGetpItemIndex(v61, v11) == -1 )
    goto LABEL_150;
  if ( a5 != (_DWORD)v64 )
    goto LABEL_150;
  v65 = *(const WCHAR **)(v11 + 24);
  if ( !v65 )
    goto LABEL_150;
  v66 = *(_DWORD *)(*(_QWORD *)v11 + 48LL);
  if ( !v66 )
    goto LABEL_150;
  v120 = *(_QWORD *)(v11 + 88);
  if ( !v36 || (v63 = *v122[0], *(_DWORD *)(*v122[0] + 72) == (_DWORD)v64) )
  {
    if ( *(_QWORD *)(*(_QWORD *)v11 + 96LL) != v64 )
      v14 += *(_DWORD *)(*(_QWORD *)v11 + 104LL) + 2;
  }
  else
  {
    v63 = *v122[0];
    v14 = *(_DWORD *)(*v122[0] + 72);
  }
  DPIMetrics = GetDPIMetrics(v63, v62);
  v68 = *(int **)v11;
  v69 = DPIMetrics;
  v124 = DPIMetrics;
  v70 = *(_DWORD *)(DPIMetrics + 20);
  v117 = v70;
  v71 = v68[19] - *(_DWORD *)(DPIMetrics + 12) - v70 - 1;
  if ( v71 > 0 )
  {
    v69 = v124;
    v117 = v71 / 2 + v70;
  }
  if ( !v36 && !*((_QWORD *)v68 + 12) )
    v14 += *(_DWORD *)(v69 + 8);
  if ( *v65 == 8 && !v36 )
  {
    ++v65;
    if ( !--v66 )
    {
      v88 = (HDC)a1;
      goto LABEL_151;
    }
  }
  CharPosition = (unsigned int)FindCharPosition(v65, 9LL);
  v74 = FindCharPosition(v65, v73);
  v76 = *(_DWORD *)(v75 + 72);
  v77 = v74;
  v78 = GetDpiForSystem();
  v79 = GetOemBitmapInfoForDpi(63LL, v78);
  v80 = 0;
  v81 = v76 - *((__int16 *)v79 + 2) - 2;
  if ( !(_DWORD)v77 || (_DWORD)v77 == v66 )
  {
    if ( (_DWORD)CharPosition && (_DWORD)v77 == v66 )
    {
      if ( (**(_DWORD **)v11 & 0x2000) != 0 )
      {
        v88 = (HDC)a1;
        v129 = 0LL;
        xxxPSMGetTextExtent((HDC)a1);
        v104 = v123;
        if ( !v123 )
          v104 = *v122[0];
        if ( (unsigned int)MNGetpItemIndex(v104, v11) == -1 )
          goto LABEL_151;
        v90 = v120;
        if ( v120 != *(_QWORD *)(v11 + 88) )
          goto LABEL_150;
        v106 = v81;
        v107 = v124;
        v14 = v106 - v129;
        if ( v114 == (_DWORD)v105 && *(_QWORD *)(*(_QWORD *)v11 + 96LL) == v105 )
          v14 += *(_DWORD *)(v124 + 8);
      }
      else
      {
        v90 = v120;
        v107 = v124;
      }
      xxxDrawMenuItemText(
        v122,
        v11,
        (HDC)a1,
        v14 + v121,
        v121 + v117,
        v65,
        CharPosition,
        *(_DWORD *)(*(_QWORD *)(*v122[0] + 40) + 40LL) & 4);
      v108 = v123;
      if ( !v123 )
        v108 = *v122[0];
      if ( (unsigned int)MNGetpItemIndex(v108, v11) == -1 || v90 != *(_QWORD *)(v11 + 88) )
        goto LABEL_150;
      goto LABEL_181;
    }
  }
  else
  {
    if ( (**(_DWORD **)v11 & 0x2000) != 0 && v114 )
    {
      v127 = 0LL;
      xxxPSMGetTextExtent((HDC)a1);
      v82 = v123;
      if ( !v123 )
        v82 = *v122[0];
      if ( (unsigned int)MNGetpItemIndex(v82, v11) == -1 || v120 != *(_QWORD *)(v11 + 88) )
        goto LABEL_150;
      v14 = v81 - v127;
    }
    xxxDrawMenuItemText(
      v122,
      v11,
      (HDC)a1,
      v14 + v121,
      v121 + v117,
      v65,
      v77,
      *(_DWORD *)(*(_QWORD *)(*v122[0] + 40) + 40LL) & 4);
    v83 = v123;
    if ( !v123 )
      v83 = *v122[0];
    if ( (unsigned int)MNGetpItemIndex(v83, v11) == -1 || v120 != *(_QWORD *)(v11 + 88) )
    {
LABEL_150:
      v88 = (HDC)a1;
      goto LABEL_151;
    }
    if ( (unsigned int)CharPosition > (int)v77 + 1 )
    {
      if ( (**(_DWORD **)v11 & 0x2000) == 0 || v114 == v80 )
      {
        v128 = 0LL;
        v85 = CharPosition - v77;
        xxxPSMGetTextExtent((HDC)a1);
        v86 = v123;
        if ( !v123 )
          v86 = *v122[0];
        if ( (unsigned int)MNGetpItemIndex(v86, v11) == -1 || v120 != *(_QWORD *)(v11 + 88) )
          goto LABEL_150;
        v84 = *(_DWORD *)(*(_QWORD *)v11 + 80LL) - v128;
      }
      else
      {
        v84 = v81 - *(_DWORD *)(*(_QWORD *)v11 + 80LL);
        v85 = CharPosition - v77;
      }
      v87 = &v65[v77 + 1];
      v88 = (HDC)a1;
      xxxPSMTextOut(
        (HDC)a1,
        v84,
        v117,
        v87,
        v85 - 1,
        ~(*(_DWORD *)(*(_QWORD *)(*v122[0] + 40) + 40LL) << 18) & 0x100000);
      v89 = v123;
      if ( !v123 )
        v89 = *v122[0];
      if ( (unsigned int)MNGetpItemIndex(v89, v11) == -1 )
        goto LABEL_151;
      v90 = v120;
      if ( v120 != *(_QWORD *)(v11 + 88) )
        goto LABEL_150;
      goto LABEL_180;
    }
  }
  v90 = v120;
LABEL_180:
  v107 = v124;
LABEL_181:
  if ( (unsigned int)CharPosition >= v66 - 1 )
    goto LABEL_150;
  if ( (**(_DWORD **)v11 & 0x2000) == 0 || v114 == v80 )
  {
    v110 = CharPosition;
    v112 = *(_DWORD *)(*(_QWORD *)v11 + 80LL) + *(_DWORD *)(v107 + 8);
    v109 = v66 - CharPosition;
  }
  else
  {
    v109 = v66 - CharPosition;
    v125 = 0LL;
    v110 = CharPosition;
    xxxPSMGetTextExtent((HDC)a1);
    v111 = v123;
    if ( !v123 )
      v111 = *v122[0];
    if ( (unsigned int)MNGetpItemIndex(v111, v11) == -1 || v90 != *(_QWORD *)(v11 + 88) )
      goto LABEL_150;
    v112 = *(_DWORD *)(*(_QWORD *)v11 + 72LL) - *(_DWORD *)(*(_QWORD *)v11 + 80LL) - v125;
  }
  v88 = (HDC)a1;
  xxxPSMTextOut(
    (HDC)a1,
    v112,
    v117,
    &v65[v110 + 1],
    v109 - 1,
    ~(*(_DWORD *)(*(_QWORD *)(*v122[0] + 40) + 40LL) << 18) & 0x100000);
LABEL_151:
  v91 = v123;
  if ( !v123 )
    v91 = *v122[0];
  if ( (unsigned int)MNGetpItemIndex(v91, v11) != -1
    && a5 == (_DWORD)v93
    && v114 != (_DWORD)v93
    && *(_QWORD *)(v11 + 16) != v93 )
  {
    v94 = (**(_DWORD **)v11 & 0x2000) != 0 ? 0x1E : 0;
    v95 = GetDpiForSystem();
    v96 = GetOemBitmapInfoForDpi((unsigned int)(v94 + 62), v95);
    v92 = *(int **)v11;
    v97 = (__int16 *)v96;
    if ( *(_DWORD *)(*(_QWORD *)v11 + 76LL) >= *((__int16 *)v96 + 3) )
    {
      v98 = (HDC)PrepareHDCBITSBitmap(0LL);
      if ( v98 )
      {
        v99 = *(int **)v11;
        v100 = v97[3];
        v101 = v97[2];
        v102 = (*(_DWORD *)(*(_QWORD *)v11 + 76LL) - v100 - 2) / 2;
        if ( v102 <= 0 )
          v102 = 0;
        if ( (*v99 & 0x2000) != 0 )
          v103 = v97[2];
        else
          v103 = v99[18] - v101;
        BltColor(v88, 0LL, v98, v103, v102, v101, v100, *v97, v97[1], 1);
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v122, (__int64)v92);
  return 1LL;
}
