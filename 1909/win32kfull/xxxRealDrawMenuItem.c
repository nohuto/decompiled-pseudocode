/*
 * XREFs of xxxRealDrawMenuItem @ 0x1C024ADD4
 * Callers:
 *     xxxDrawState @ 0x1C0248824 (xxxDrawState.c)
 * Callees:
 *     _DrawIconEx @ 0x1C00226D0 (_DrawIconEx.c)
 *     GreCreateDIBitmapReal @ 0x1C0026080 (GreCreateDIBitmapReal.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C00271A0 (GreDecBitmapExclusiveRefCnt.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     xxxGetWindowSmIcon @ 0x1C008BB70 (xxxGetWindowSmIcon.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     NtGdiAlphaBlend @ 0x1C00B4130 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GreExtGetObjectW @ 0x1C00BDB18 (GreExtGetObjectW.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     BitBltSysBmp @ 0x1C00EA9DC (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00EAC28 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00EAD38 (PrepareHDCBITSBitmap.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0129B1C (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0129B48 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     GetDPIMetrics @ 0x1C012C10C (GetDPIMetrics.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C023C57C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     BltColor @ 0x1C02486DC (BltColor.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0248EFC (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C02496C8 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C0252628 (xxxPSMTextOut.c)
 *     FindCharPosition @ 0x1C025A0BC (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C025C810 (xxxPSMGetTextExtent.c)
 */

__int64 __fastcall xxxRealDrawMenuItem(HDC a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  __int64 v9; // rdx
  int v10; // r14d
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rcx
  bool v18; // zf
  unsigned int DpiForSystem; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  HDC v29; // r14
  __int64 v30; // rbx
  unsigned int v31; // eax
  __int16 *OemBitmapInfoForDpi; // rax
  __int64 v33; // rdx
  __int64 *v34; // rbx
  __int64 v35; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 WindowSmIcon; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // ecx
  unsigned int v42; // r14d
  unsigned int v43; // r8d
  __int64 v44; // rax
  int v45; // r12d
  int DpiDependentMetric; // r14d
  int v47; // ebx
  unsigned int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  unsigned int v52; // eax
  int ObjectW; // eax
  __int64 v54; // rdx
  __int64 v55; // r10
  __int64 v56; // r15
  __int64 v57; // r13
  HDC CompatibleDC; // rax
  HDC v59; // rbx
  __int64 v60; // rax
  unsigned __int8 *v61; // r9
  unsigned int v62; // r8d
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  const WCHAR *v69; // r15
  int v70; // ebx
  __int64 DPIMetrics; // rax
  __int64 v72; // r10
  __int64 v73; // rdx
  int v74; // r8d
  int v75; // eax
  __int64 CharPosition; // r12
  unsigned int v77; // r11d
  unsigned int v78; // eax
  __int64 v79; // r10
  int v80; // r13d
  __int64 v81; // r14
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  unsigned int v85; // eax
  char *v86; // rax
  __int64 v87; // r9
  int v88; // r13d
  __int64 v89; // rcx
  __int64 v90; // rcx
  int v91; // r13d
  int v92; // esi
  __int64 v93; // rcx
  const WCHAR *v94; // r9
  HDC v95; // r14
  __int64 v96; // rcx
  __int64 v97; // r14
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  int v102; // ebx
  unsigned int v103; // eax
  char *v104; // rax
  __int16 *v105; // rbx
  HDC v106; // r11
  _DWORD *v107; // r8
  int v108; // esi
  int v109; // r10d
  int v110; // eax
  int v111; // r9d
  __int64 v112; // rcx
  __int64 v113; // r9
  int v114; // esi
  __int64 v115; // r13
  __int64 v116; // rcx
  int v117; // ebx
  __int64 v118; // rsi
  __int64 v119; // rcx
  int v120; // edx
  unsigned int v122; // [rsp+70h] [rbp-90h]
  int v124; // [rsp+80h] [rbp-80h]
  int v125; // [rsp+80h] [rbp-80h]
  int v127; // [rsp+88h] [rbp-78h]
  __int64 v128; // [rsp+88h] [rbp-78h]
  BOOL v129; // [rsp+90h] [rbp-70h]
  __int64 *v130[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v131; // [rsp+A8h] [rbp-58h]
  __int64 v132; // [rsp+B0h] [rbp-50h]
  __int64 v133; // [rsp+B8h] [rbp-48h]
  __int64 v134; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v135; // [rsp+C8h] [rbp-38h]
  __int64 v136; // [rsp+D0h] [rbp-30h]
  __int64 v137; // [rsp+D8h] [rbp-28h]
  __int64 v138; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v139; // [rsp+E8h] [rbp-18h]
  __int64 v140; // [rsp+F0h] [rbp-10h]
  unsigned int v141[3]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v142; // [rsp+104h] [rbp+4h]
  __int128 v143; // [rsp+10Ch] [rbp+Ch]
  __int64 v144; // [rsp+11Ch] [rbp+1Ch]
  _DWORD v145[28]; // [rsp+130h] [rbp+30h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v130, 0LL);
  v9 = *a2;
  v138 = 0LL;
  v10 = 0;
  v139 = 0LL;
  v140 = 0LL;
  v131 = 0LL;
  v129 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v130, v9);
  v11 = a2[1];
  v132 = v11;
  v12 = 8LL;
  v13 = *(_QWORD *)(*v130[0] + 40);
  v14 = *(_DWORD *)(v13 + 40) & 1;
  v122 = *(_DWORD *)(v13 + 40) & 1;
  if ( v122 )
  {
    v15 = 2;
    v16 = *v130[0];
    if ( *(int *)(*(_QWORD *)(*v130[0] + 40) + 40LL) >= 0 )
    {
      if ( a5 )
      {
        v17 = *(_QWORD *)v11;
        if ( (*(_DWORD *)(*(_QWORD *)v11 + 4LL) & 8) != 0 )
          v18 = *(_QWORD *)(v17 + 24) == 0LL;
        else
          v18 = *(_QWORD *)(v17 + 32) == 0LL;
        LOBYTE(v10) = !v18;
      }
      else
      {
        v10 = DrawMenuItemCheckMark(a1, (struct tagITEM *)v11, 8LL);
      }
      v16 = *(_QWORD *)(*v130[0] + 40);
      if ( (*(_DWORD *)(v16 + 40) & 0x4000000) == 0
        || (v16 = *(_QWORD *)v11, !*(_QWORD *)(*(_QWORD *)v11 + 96LL))
        || v10 )
      {
        if ( (**(_DWORD **)v11 & 0x2000) != 0 )
        {
          v15 = 2;
        }
        else
        {
          DpiForSystem = GetDpiForSystem(v16, *v130[0], v12);
          v15 = *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2) + 4;
        }
      }
      v14 = v122;
    }
    else
    {
      v15 = 4;
    }
  }
  else
  {
    v15 = 0;
    v16 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
    if ( (_DWORD)v16 != -2147352576 )
      v129 = *(char *)(*(_QWORD *)v11 + 4LL) < 0;
  }
  if ( !*(_QWORD *)(*(_QWORD *)v11 + 96LL) )
    goto LABEL_104;
  if ( v10 )
  {
    v16 = *v130[0];
    if ( (*(_DWORD *)(*(_QWORD *)(*v130[0] + 40) + 40LL) & 0x4000000) != 0 )
      goto LABEL_104;
  }
  if ( a5 )
    goto LABEL_63;
  v16 = *(_QWORD *)v11;
  v12 = *(unsigned int *)(*(_QWORD *)v11 + 4LL);
  v20 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
  if ( (v12 & 0x20000000) != 0 )
  {
    if ( v20 == 1 )
      goto LABEL_51;
    v21 = v15;
    if ( v20 > 7 )
      goto LABEL_39;
    v22 = v20 - 2;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 2;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( !v25 )
          {
            v26 = 21;
            goto LABEL_38;
          }
          if ( v25 == 1 )
          {
            v26 = 25;
            v21 = v15 + 2;
LABEL_38:
            BitBltSysBmp((__int64)a1, v21, 2LL, v26, 1);
LABEL_104:
            v42 = v122;
            goto LABEL_105;
          }
LABEL_39:
          v29 = (HDC)PrepareHDCBITSBitmap(0LL, v15, v12);
          if ( v29 )
          {
            v30 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
            v31 = GetDpiForSystem(*(_QWORD *)v11, v27, v28);
            OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v30 + 79), v31);
            BltColor(
              a1,
              0LL,
              v29,
              v15,
              (unsigned int)(*(_DWORD *)(*(_QWORD *)v11 + 76LL) - OemBitmapInfoForDpi[3]) >> 1,
              OemBitmapInfoForDpi[2],
              OemBitmapInfoForDpi[3],
              *OemBitmapInfoForDpi,
              OemBitmapInfoForDpi[1],
              1);
          }
          goto LABEL_104;
        }
        v26 = 18;
      }
      else
      {
        v26 = 22;
        v21 = v15 + 2;
      }
    }
    else
    {
      v26 = 26;
    }
    if ( (v12 & 0x80u) != 0LL )
      ++v26;
    goto LABEL_38;
  }
  if ( v20 == -1LL )
  {
    xxxSendMenuDrawItemMessage((__int64)a1, 1, v130, (__int64 *)v11, 1, v15, 0LL);
    goto LABEL_104;
  }
  if ( *(_WORD *)(gptiCurrent + 624LL) > 0x400u
    || (!*(_QWORD *)(v16 + 56) || *(_QWORD *)(v11 + 24))
    && ((_DWORD)v14
     || (v16 = *v130[0], v11 != *(_QWORD *)(*v130[0] + 88))
     || (v16 = *v130[0], *(_DWORD *)(*(_QWORD *)(*v130[0] + 40) + 44LL) <= 1u)
     || (v16 = *(_QWORD *)(*(_QWORD *)(*v130[0] + 88) + 96LL), *(_QWORD *)(v16 + 96))
     || !*(_QWORD *)(v11 + 16)) )
  {
LABEL_63:
    v44 = *(_QWORD *)v11;
    v45 = *(_DWORD *)(*(_QWORD *)v11 + 104LL);
    DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
    if ( (_DWORD)v14 )
    {
      v47 = (*(_DWORD *)(v44 + 76) - DpiDependentMetric) / 2;
      if ( *(_DWORD *)(v44 + 76) - DpiDependentMetric <= 0 )
        v47 = 0;
      v127 = v47;
    }
    else
    {
      v48 = GetDpiForSystem(v16, v14, v12);
      if ( DpiDependentMetric <= (int)GetDpiDependentMetric(26LL, v48) )
      {
        v52 = GetDpiForSystem(v50, v49, v51);
        DpiDependentMetric = GetDpiDependentMetric(26LL, v52);
      }
      else
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
      }
      v47 = 0;
      v127 = 0;
      if ( *(_QWORD *)(v11 + 24) )
        v15 += *(_DWORD *)(GetDPIMetrics(v50, v49, v51) + 8);
    }
    v133 = GreSelectBitmap(ghdcMem2, *(_QWORD *)(*(_QWORD *)v11 + 96LL));
    if ( !v133 )
      goto LABEL_104;
    memset(v145, 0, 0x68uLL);
    ObjectW = GreExtGetObjectW(*(HBRUSH *)(*(_QWORD *)v11 + 96LL), 104LL, (char *)v145);
    LODWORD(v55) = 0;
    if ( !a5 || **(_DWORD **)v11 == 4 )
    {
      if ( ObjectW != 104 || HIWORD(v145[11]) != 32 || v145[12] || **(_DWORD **)v11 == 4 )
      {
        if ( LOWORD(v145[4]) * HIWORD(v145[4]) == 1 )
          v63 = 12060490;
        else
          v63 = (unsigned int)MNDrawHilite((__int64)v130, v11) != 0 ? 3342344 : 13369376;
        NtGdiBitBltInternal(a1, v15 + v129, v47 + v129, v45, DpiDependentMetric, ghdcMem2, v55, v55, v63, 0xFFFFFF, v55);
      }
      goto LABEL_103;
    }
    v56 = 0LL;
    v124 = 33488896;
    v57 = 0LL;
    if ( a6 )
    {
      v134 = 0LL;
      CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
      LODWORD(v55) = 0;
      v59 = CompatibleDC;
      if ( !CompatibleDC )
      {
LABEL_88:
        if ( a6 != (_DWORD)v55 )
        {
          if ( v57 != -1 )
            GreSelectBitmap(v59, v57);
          if ( v56 )
          {
            GreDecBitmapExclusiveRefCnt(v56, v54);
            GreDeleteObject(v56);
          }
          if ( v59 )
            GreDeleteDC(v59);
        }
LABEL_103:
        GreSelectBitmap(ghdcMem2, v133);
        goto LABEL_104;
      }
      v144 = 0LL;
      v143 = 0LL;
      v141[0] = 40;
      v141[1] = v45;
      v141[2] = DpiDependentMetric;
      v142 = 2097153LL;
      v60 = GreCreateDIBitmapReal(CompatibleDC, v54, 0LL, v141, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v134);
      LODWORD(v55) = 0;
      v56 = v60;
      if ( v60 )
      {
        v57 = GreSelectBitmap(v59, v60);
        if ( v57 == -1 )
        {
          LODWORD(v55) = 0;
        }
        else
        {
          NtGdiAlphaBlend(v59, 0, 0, v45, DpiDependentMetric, ghdcMem2, 0, 0, v45, DpiDependentMetric, 33488896);
          LODWORD(v55) = 0;
          if ( v45 * DpiDependentMetric > 0 )
          {
            v61 = (unsigned __int8 *)v134;
            v55 = (unsigned int)(v45 * DpiDependentMetric);
            do
            {
              v54 = 29 * v61[2] + 150 * (unsigned int)v61[1];
              v62 = ((unsigned int)v54 + 77 * *v61 + 129) >> 8;
              *(_DWORD *)v61 = v62 | ((v62 | ((v62 | (v61[3] << 8)) << 8)) << 8);
              v61 += 4;
              --v55;
            }
            while ( v55 );
            v11 = v132;
          }
          BYTE2(v124) = 102;
        }
      }
    }
    else
    {
      v59 = (HDC)ghdcMem2;
    }
    if ( v59 )
    {
      NtGdiAlphaBlend(a1, v15 + v129, v129 + v127, v45, DpiDependentMetric, v59, 0, 0, v45, DpiDependentMetric, v124);
      LODWORD(v55) = 0;
    }
    goto LABEL_88;
  }
  while ( 1 )
  {
LABEL_51:
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) && *(_QWORD *)(*v130[0] + 80) )
      SetupFakeMDIAppStuff((__int64)v130, (_QWORD *)v11);
    v34 = (__int64 *)HMValidateHandleNoRip(*(_QWORD *)(*(_QWORD *)v11 + 56LL), 1);
    if ( v34 )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) )
      goto LABEL_58;
    *(_QWORD *)(*(_QWORD *)v11 + 56LL) = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v35);
  v138 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v138;
  v139 = v34;
  HMLockObject(v34);
  WindowSmIcon = xxxGetWindowSmIcon(v34, 0);
  ThreadUnlock1(v39, v38, v40);
  if ( WindowSmIcon )
    goto LABEL_59;
LABEL_58:
  WindowSmIcon = qword_1C0320F90;
LABEL_59:
  v41 = a3 - 4;
  v42 = v122;
  v43 = a4 - 2;
  if ( v122 && v43 < v41 )
    v41 = a4 - 2;
  DrawIconEx(a1, v15 + 4, 1u, WindowSmIcon, v41, v43, 0, *(_QWORD *)(gpsi + 4728LL), 19);
LABEL_105:
  v64 = v131;
  if ( !v131 )
    v64 = *v130[0];
  if ( (unsigned int)MNGetpItemIndex(v64, v11) == -1 )
    goto LABEL_150;
  if ( a5 != (_DWORD)v68 )
    goto LABEL_150;
  v69 = *(const WCHAR **)(v11 + 24);
  if ( !v69 )
    goto LABEL_150;
  v70 = *(_DWORD *)(*(_QWORD *)v11 + 48LL);
  if ( !v70 )
    goto LABEL_150;
  v128 = *(_QWORD *)(v11 + 88);
  if ( !v42 || (v66 = *v130[0], *(_DWORD *)(*v130[0] + 72) == (_DWORD)v68) )
  {
    if ( *(_QWORD *)(*(_QWORD *)v11 + 96LL) != v68 )
      v15 += *(_DWORD *)(*(_QWORD *)v11 + 104LL) + 2;
  }
  else
  {
    v66 = *v130[0];
    v15 = *(_DWORD *)(*v130[0] + 72);
  }
  DPIMetrics = GetDPIMetrics(v66, v65, v67);
  v72 = *(_QWORD *)v11;
  v73 = DPIMetrics;
  v132 = DPIMetrics;
  v74 = *(_DWORD *)(DPIMetrics + 20);
  v125 = v74;
  v75 = *(_DWORD *)(v72 + 76) - *(_DWORD *)(DPIMetrics + 12) - v74 - 1;
  if ( v75 > 0 )
  {
    v73 = v132;
    v125 = v75 / 2 + v74;
  }
  if ( !v42 && !*(_QWORD *)(v72 + 96) )
    v15 += *(_DWORD *)(v73 + 8);
  if ( *v69 == 8 && !v42 )
  {
    ++v69;
    if ( !--v70 )
    {
      v95 = a1;
      goto LABEL_151;
    }
  }
  CharPosition = (unsigned int)FindCharPosition(v69, 9LL);
  v78 = FindCharPosition(v69, v77);
  v80 = *(_DWORD *)(v79 + 72);
  v81 = v78;
  v85 = GetDpiForSystem(v83, v82, v84);
  v86 = GetOemBitmapInfoForDpi(63LL, v85);
  v87 = 0LL;
  v88 = v80 - *((__int16 *)v86 + 2) - 2;
  if ( !(_DWORD)v81 || (_DWORD)v81 == v70 )
  {
    if ( (_DWORD)CharPosition && (_DWORD)v81 == v70 )
    {
      if ( (**(_DWORD **)v11 & 0x2000) != 0 )
      {
        v95 = a1;
        v137 = 0LL;
        xxxPSMGetTextExtent(a1);
        v112 = v131;
        if ( !v131 )
          v112 = *v130[0];
        if ( (unsigned int)MNGetpItemIndex(v112, v11) == -1 )
          goto LABEL_151;
        v97 = v128;
        if ( v128 != *(_QWORD *)(v11 + 88) )
          goto LABEL_150;
        v114 = v88;
        v115 = v132;
        v15 = v114 - v137;
        if ( v122 == (_DWORD)v113 && *(_QWORD *)(*(_QWORD *)v11 + 96LL) == v113 )
          v15 += *(_DWORD *)(v132 + 8);
      }
      else
      {
        v97 = v128;
        v115 = v132;
      }
      xxxDrawMenuItemText(
        v130,
        v11,
        a1,
        v15 + v129,
        v129 + v125,
        v69,
        CharPosition,
        *(_DWORD *)(*(_QWORD *)(*v130[0] + 40) + 40LL) & 4);
      v116 = v131;
      if ( !v131 )
        v116 = *v130[0];
      if ( (unsigned int)MNGetpItemIndex(v116, v11) == -1 || v97 != *(_QWORD *)(v11 + 88) )
        goto LABEL_150;
      goto LABEL_181;
    }
  }
  else
  {
    if ( (**(_DWORD **)v11 & 0x2000) != 0 && v122 )
    {
      v135 = 0LL;
      xxxPSMGetTextExtent(a1);
      v89 = v131;
      if ( !v131 )
        v89 = *v130[0];
      if ( (unsigned int)MNGetpItemIndex(v89, v11) == -1 || v128 != *(_QWORD *)(v11 + 88) )
        goto LABEL_150;
      v15 = v88 - v135;
    }
    xxxDrawMenuItemText(
      v130,
      v11,
      a1,
      v15 + v129,
      v129 + v125,
      v69,
      v81,
      *(_DWORD *)(*(_QWORD *)(*v130[0] + 40) + 40LL) & 4);
    v90 = v131;
    if ( !v131 )
      v90 = *v130[0];
    if ( (unsigned int)MNGetpItemIndex(v90, v11) == -1 || v128 != *(_QWORD *)(v11 + 88) )
    {
LABEL_150:
      v95 = a1;
      goto LABEL_151;
    }
    if ( (unsigned int)CharPosition > (int)v81 + 1 )
    {
      if ( (**(_DWORD **)v11 & 0x2000) == 0 || v122 == (_DWORD)v87 )
      {
        v136 = v87;
        v92 = CharPosition - v81;
        xxxPSMGetTextExtent(a1);
        v93 = v131;
        if ( !v131 )
          v93 = *v130[0];
        if ( (unsigned int)MNGetpItemIndex(v93, v11) == -1 || v128 != *(_QWORD *)(v11 + 88) )
          goto LABEL_150;
        v91 = *(_DWORD *)(*(_QWORD *)v11 + 80LL) - v136;
      }
      else
      {
        v91 = v88 - *(_DWORD *)(*(_QWORD *)v11 + 80LL);
        v92 = CharPosition - v81;
      }
      v94 = &v69[v81 + 1];
      v95 = a1;
      xxxPSMTextOut(a1, v91, v125, v94, v92 - 1, ~(*(_DWORD *)(*(_QWORD *)(*v130[0] + 40) + 40LL) << 18) & 0x100000);
      v96 = v131;
      if ( !v131 )
        v96 = *v130[0];
      if ( (unsigned int)MNGetpItemIndex(v96, v11) == -1 )
        goto LABEL_151;
      v97 = v128;
      if ( v128 != *(_QWORD *)(v11 + 88) )
        goto LABEL_150;
      goto LABEL_180;
    }
  }
  v97 = v128;
LABEL_180:
  v115 = v132;
LABEL_181:
  if ( (unsigned int)CharPosition >= v70 - 1 )
    goto LABEL_150;
  if ( (**(_DWORD **)v11 & 0x2000) == 0 || v122 == (_DWORD)v87 )
  {
    v118 = CharPosition;
    v120 = *(_DWORD *)(*(_QWORD *)v11 + 80LL) + *(_DWORD *)(v115 + 8);
    v117 = v70 - CharPosition;
  }
  else
  {
    v133 = v87;
    v117 = v70 - CharPosition;
    v118 = CharPosition;
    xxxPSMGetTextExtent(a1);
    v119 = v131;
    if ( !v131 )
      v119 = *v130[0];
    if ( (unsigned int)MNGetpItemIndex(v119, v11) == -1 || v97 != *(_QWORD *)(v11 + 88) )
      goto LABEL_150;
    v120 = *(_DWORD *)(*(_QWORD *)v11 + 72LL) - *(_DWORD *)(*(_QWORD *)v11 + 80LL) - v133;
  }
  v95 = a1;
  xxxPSMTextOut(
    a1,
    v120,
    v125,
    &v69[v118 + 1],
    v117 - 1,
    ~(*(_DWORD *)(*(_QWORD *)(*v130[0] + 40) + 40LL) << 18) & 0x100000);
LABEL_151:
  v98 = v131;
  if ( !v131 )
    v98 = *v130[0];
  if ( (unsigned int)MNGetpItemIndex(v98, v11) != -1
    && a5 == (_DWORD)v101
    && v122 != (_DWORD)v101
    && *(_QWORD *)(v11 + 16) != v101 )
  {
    v102 = (**(_DWORD **)v11 & 0x2000) != 0 ? 0x1E : 0;
    v103 = GetDpiForSystem(-(**(_DWORD **)v11 & 0x2000), v99, v100);
    v104 = GetOemBitmapInfoForDpi((unsigned int)(v102 + 62), v103);
    v99 = *(_QWORD *)v11;
    v105 = (__int16 *)v104;
    if ( *(_DWORD *)(*(_QWORD *)v11 + 76LL) >= *((__int16 *)v104 + 3) )
    {
      v106 = (HDC)PrepareHDCBITSBitmap(0LL, v99, v100);
      if ( v106 )
      {
        v107 = *(_DWORD **)v11;
        v108 = v105[3];
        v109 = v105[2];
        v110 = (*(_DWORD *)(*(_QWORD *)v11 + 76LL) - v108 - 2) / 2;
        if ( v110 <= 0 )
          v110 = 0;
        if ( (*v107 & 0x2000) != 0 )
          v111 = v105[2];
        else
          v111 = v107[18] - v109;
        BltColor(v95, 0LL, v106, v111, v110, v109, v108, *v105, v105[1], 1);
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v130, v99, v100);
  return 1LL;
}
