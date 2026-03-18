/*
 * XREFs of xxxRealDrawMenuItem @ 0x1C024B514
 * Callers:
 *     xxxDrawState @ 0x1C0248F64 (xxxDrawState.c)
 * Callees:
 *     BitBltSysBmp @ 0x1C000B87C (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C000BAC8 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C000BBD8 (PrepareHDCBITSBitmap.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     _DrawIconEx @ 0x1C002CFB4 (_DrawIconEx.c)
 *     GreCreateDIBitmapReal @ 0x1C0030AC0 (GreCreateDIBitmapReal.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C0031BE0 (GreDecBitmapExclusiveRefCnt.c)
 *     GreExtGetObjectW @ 0x1C00338F8 (GreExtGetObjectW.c)
 *     xxxGetWindowSmIcon @ 0x1C00471A0 (xxxGetWindowSmIcon.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     NtGdiAlphaBlend @ 0x1C0069D70 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     GetDPIMetrics @ 0x1C00912E8 (GetDPIMetrics.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C00F9924 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00F9CC0 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C023CB9C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     BltColor @ 0x1C0248E1C (BltColor.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024963C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0249E08 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C0252D68 (xxxPSMTextOut.c)
 *     FindCharPosition @ 0x1C025A7FC (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C025CF40 (xxxPSMGetTextExtent.c)
 */

__int64 __fastcall xxxRealDrawMenuItem(HDC a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  __int64 v9; // rdx
  int v10; // r14d
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // rcx
  bool v19; // zf
  int v20; // eax
  unsigned int DpiForSystem; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // r8
  HDC v31; // r14
  __int64 v32; // rbx
  unsigned int v33; // eax
  __int16 *OemBitmapInfoForDpi; // rax
  __int64 v35; // rax
  ULONG_PTR v36; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 WindowSmIcon; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned int v42; // ecx
  unsigned int v43; // r14d
  unsigned int v44; // r8d
  __int64 v45; // rax
  int v46; // r12d
  int DpiDependentMetric; // r14d
  int v48; // ebx
  unsigned int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned int v54; // eax
  int ObjectW; // eax
  __int64 v56; // rdx
  __int64 v57; // r10
  __int64 v58; // r15
  __int64 v59; // r13
  HDC CompatibleDC; // rax
  HDC v61; // rbx
  __int64 v62; // rax
  unsigned __int8 *v63; // r9
  unsigned int v64; // r8d
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // r9
  const WCHAR *v68; // r15
  int v69; // ebx
  __int64 DPIMetrics; // rax
  __int64 v71; // r10
  __int64 v72; // rdx
  int v73; // r8d
  int v74; // eax
  __int64 CharPosition; // r12
  unsigned int v76; // r11d
  unsigned int v77; // eax
  __int64 v78; // r10
  int v79; // r13d
  __int64 v80; // r14
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
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
  __int64 v106; // rax
  HDC v107; // r11
  _DWORD *v108; // r8
  int v109; // esi
  int v110; // r10d
  int v111; // eax
  int v112; // r9d
  __int64 v113; // rcx
  __int64 v114; // r9
  int v115; // esi
  __int64 v116; // r13
  __int64 v117; // rcx
  int v118; // ebx
  __int64 v119; // rsi
  __int64 v120; // rcx
  int v121; // edx
  unsigned int v123; // [rsp+70h] [rbp-90h]
  int v125; // [rsp+80h] [rbp-80h]
  int v126; // [rsp+80h] [rbp-80h]
  int v128; // [rsp+88h] [rbp-78h]
  __int64 v129; // [rsp+88h] [rbp-78h]
  BOOL v130; // [rsp+90h] [rbp-70h]
  __int64 *v131[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v132; // [rsp+A8h] [rbp-58h]
  __int64 v133; // [rsp+B0h] [rbp-50h]
  __int64 v134; // [rsp+B8h] [rbp-48h]
  __int64 v135; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v136; // [rsp+C8h] [rbp-38h]
  __int64 v137; // [rsp+D0h] [rbp-30h]
  __int64 v138; // [rsp+D8h] [rbp-28h]
  __int64 v139; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR v140; // [rsp+E8h] [rbp-18h]
  __int64 v141; // [rsp+F0h] [rbp-10h]
  unsigned int v142[3]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v143; // [rsp+104h] [rbp+4h]
  __int128 v144; // [rsp+10Ch] [rbp+Ch]
  __int64 v145; // [rsp+11Ch] [rbp+1Ch]
  _DWORD v146[28]; // [rsp+130h] [rbp+30h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v131, 0LL);
  v9 = *a2;
  v139 = 0LL;
  v10 = 0;
  v140 = 0LL;
  v141 = 0LL;
  v132 = 0LL;
  v130 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v131, v9);
  v11 = a2[1];
  v133 = v11;
  v12 = 8LL;
  v13 = *(_QWORD *)(*v131[0] + 40);
  v14 = *(_DWORD *)(v13 + 40) & 1;
  v123 = *(_DWORD *)(v13 + 40) & 1;
  if ( v123 )
  {
    v15 = 0LL;
    v16 = 2;
    v17 = *v131[0];
    if ( *(int *)(*(_QWORD *)(*v131[0] + 40) + 40LL) >= 0 )
    {
      if ( a5 )
      {
        v18 = *(_QWORD *)v11;
        if ( (*(_DWORD *)(*(_QWORD *)v11 + 4LL) & 8) != 0 )
          v19 = *(_QWORD *)(v18 + 24) == 0LL;
        else
          v19 = *(_QWORD *)(v18 + 32) == 0LL;
        LOBYTE(v10) = !v19;
      }
      else
      {
        v20 = DrawMenuItemCheckMark(a1, (struct tagITEM *)v11, 8LL, 0LL);
        v15 = 0LL;
        v10 = v20;
      }
      v17 = *(_QWORD *)(*v131[0] + 40);
      if ( (*(_DWORD *)(v17 + 40) & 0x4000000) == 0
        || (v17 = *(_QWORD *)v11, !*(_QWORD *)(*(_QWORD *)v11 + 96LL))
        || v10 )
      {
        if ( (**(_DWORD **)v11 & 0x2000) != 0 )
        {
          v16 = 2;
        }
        else
        {
          DpiForSystem = GetDpiForSystem(v17, *v131[0], v12, 0LL);
          v16 = *((__int16 *)GetOemBitmapInfoForDpi(63, DpiForSystem) + 2) + 4;
        }
        v15 = 0LL;
      }
      v14 = v123;
    }
    else
    {
      v16 = 4;
    }
  }
  else
  {
    v15 = 0LL;
    v16 = 0;
    v17 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
    if ( (_DWORD)v17 != -2147352576 )
      v130 = *(char *)(*(_QWORD *)v11 + 4LL) < 0;
  }
  if ( !*(_QWORD *)(*(_QWORD *)v11 + 96LL) )
    goto LABEL_105;
  if ( v10 )
  {
    v17 = *v131[0];
    if ( (*(_DWORD *)(*(_QWORD *)(*v131[0] + 40) + 40LL) & 0x4000000) != 0 )
      goto LABEL_105;
  }
  if ( a5 )
    goto LABEL_64;
  v17 = *(_QWORD *)v11;
  v12 = *(unsigned int *)(*(_QWORD *)v11 + 4LL);
  v22 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
  if ( (v12 & 0x20000000) != 0 )
  {
    if ( v22 == 1 )
      goto LABEL_52;
    v23 = v16;
    if ( v22 > 7 )
      goto LABEL_40;
    v24 = v22 - 2;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 2;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( !v27 )
          {
            v28 = 21;
            goto LABEL_39;
          }
          if ( v27 == 1 )
          {
            v28 = 25;
            v23 = v16 + 2;
LABEL_39:
            BitBltSysBmp(a1, v23, 2u, v28, 1);
LABEL_105:
            v43 = v123;
            goto LABEL_106;
          }
LABEL_40:
          v31 = (HDC)PrepareHDCBITSBitmap(0LL, v16);
          if ( v31 )
          {
            v32 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
            v33 = GetDpiForSystem(*(_QWORD *)v11, v29, v30, 0LL);
            OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((int)v32 + 79, v33);
            BltColor(
              a1,
              0LL,
              v31,
              v16,
              (unsigned int)(*(_DWORD *)(*(_QWORD *)v11 + 76LL) - OemBitmapInfoForDpi[3]) >> 1,
              OemBitmapInfoForDpi[2],
              OemBitmapInfoForDpi[3],
              *OemBitmapInfoForDpi,
              OemBitmapInfoForDpi[1],
              1);
          }
          goto LABEL_105;
        }
        v28 = 18;
      }
      else
      {
        v28 = 22;
        v23 = v16 + 2;
      }
    }
    else
    {
      v28 = 26;
    }
    if ( (v12 & 0x80u) != 0LL )
      ++v28;
    goto LABEL_39;
  }
  if ( v22 == -1LL )
  {
    xxxSendMenuDrawItemMessage((__int64)a1, 1, v131, v11, 1, v16, 0LL);
    goto LABEL_105;
  }
  if ( *(_WORD *)(gptiCurrent + 624LL) > 0x400u
    || (!*(_QWORD *)(v17 + 56) || *(_QWORD *)(v11 + 24))
    && ((_DWORD)v14
     || (v17 = *v131[0], v11 != *(_QWORD *)(*v131[0] + 88))
     || (v17 = *v131[0], *(_DWORD *)(*(_QWORD *)(*v131[0] + 40) + 44LL) <= 1u)
     || (v17 = *(_QWORD *)(*(_QWORD *)(*v131[0] + 88) + 96LL), *(_QWORD *)(v17 + 96))
     || !*(_QWORD *)(v11 + 16)) )
  {
LABEL_64:
    v45 = *(_QWORD *)v11;
    v46 = *(_DWORD *)(*(_QWORD *)v11 + 104LL);
    DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
    if ( (_DWORD)v14 )
    {
      v48 = (*(_DWORD *)(v45 + 76) - DpiDependentMetric) / 2;
      if ( *(_DWORD *)(v45 + 76) - DpiDependentMetric <= 0 )
        v48 = 0;
      v128 = v48;
    }
    else
    {
      v49 = GetDpiForSystem(v17, v14, v12, 0LL);
      if ( DpiDependentMetric <= (int)GetDpiDependentMetric(26LL, v49) )
      {
        v54 = GetDpiForSystem(v51, v50, v52, v53);
        DpiDependentMetric = GetDpiDependentMetric(26LL, v54);
      }
      else
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
      }
      v48 = 0;
      v128 = 0;
      if ( *(_QWORD *)(v11 + 24) )
        v16 += *(_DWORD *)(GetDPIMetrics() + 8);
    }
    v134 = GreSelectBitmap(ghdcMem2);
    if ( !v134 )
      goto LABEL_105;
    memset(v146, 0, 0x68uLL);
    ObjectW = GreExtGetObjectW(*(HBRUSH *)(*(_QWORD *)v11 + 96LL), 104LL, (char *)v146);
    LODWORD(v57) = 0;
    if ( !a5 || **(_DWORD **)v11 == 4 )
    {
      if ( ObjectW != 104 || HIWORD(v146[11]) != 32 || v146[12] || **(_DWORD **)v11 == 4 )
      {
        if ( LOWORD(v146[4]) * HIWORD(v146[4]) == 1 )
          v65 = 12060490;
        else
          v65 = (unsigned int)MNDrawHilite((__int64)v131, v11) != 0 ? 3342344 : 13369376;
        NtGdiBitBltInternal(a1, v16 + v130, v48 + v130, v46, DpiDependentMetric, ghdcMem2, v57, v57, v65, 0xFFFFFF, v57);
      }
      goto LABEL_104;
    }
    v58 = 0LL;
    v125 = 33488896;
    v59 = 0LL;
    if ( a6 )
    {
      v135 = 0LL;
      CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
      LODWORD(v57) = 0;
      v61 = CompatibleDC;
      if ( !CompatibleDC )
      {
LABEL_89:
        if ( a6 != (_DWORD)v57 )
        {
          if ( v59 != -1 )
            GreSelectBitmap(v61);
          if ( v58 )
          {
            GreDecBitmapExclusiveRefCnt(v58, v56);
            GreDeleteObject(v58);
          }
          if ( v61 )
            GreDeleteDC(v61);
        }
LABEL_104:
        GreSelectBitmap(ghdcMem2);
        goto LABEL_105;
      }
      v145 = 0LL;
      v144 = 0LL;
      v142[0] = 40;
      v142[1] = v46;
      v142[2] = DpiDependentMetric;
      v143 = 2097153LL;
      v62 = GreCreateDIBitmapReal(CompatibleDC, v56, 0LL, v142, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v135);
      LODWORD(v57) = 0;
      v58 = v62;
      if ( v62 )
      {
        v59 = GreSelectBitmap(v61);
        if ( v59 == -1 )
        {
          LODWORD(v57) = 0;
        }
        else
        {
          NtGdiAlphaBlend(v61, 0, 0, v46, DpiDependentMetric, ghdcMem2, 0, 0, v46, DpiDependentMetric, 33488896);
          LODWORD(v57) = 0;
          if ( v46 * DpiDependentMetric > 0 )
          {
            v63 = (unsigned __int8 *)v135;
            v57 = (unsigned int)(v46 * DpiDependentMetric);
            do
            {
              v56 = 29 * v63[2] + 150 * (unsigned int)v63[1];
              v64 = ((unsigned int)v56 + 77 * *v63 + 129) >> 8;
              *(_DWORD *)v63 = v64 | ((v64 | ((v64 | (v63[3] << 8)) << 8)) << 8);
              v63 += 4;
              --v57;
            }
            while ( v57 );
            v11 = v133;
          }
          BYTE2(v125) = 102;
        }
      }
    }
    else
    {
      v61 = (HDC)ghdcMem2;
    }
    if ( v61 )
    {
      NtGdiAlphaBlend(a1, v16 + v130, v130 + v128, v46, DpiDependentMetric, v61, 0, 0, v46, DpiDependentMetric, v125);
      LODWORD(v57) = 0;
    }
    goto LABEL_89;
  }
  while ( 1 )
  {
LABEL_52:
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) && *(_QWORD *)(*v131[0] + 80) )
      SetupFakeMDIAppStuff((__int64)v131, (_QWORD *)v11);
    LOBYTE(v14) = 1;
    v35 = HMValidateHandleNoRip(*(_QWORD *)(*(_QWORD *)v11 + 56LL), v14, v12, v15);
    v15 = 0LL;
    v36 = v35;
    if ( v35 )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) )
      goto LABEL_59;
    *(_QWORD *)(*(_QWORD *)v11 + 56LL) = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v12, 0LL);
  v139 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v139;
  v140 = v36;
  HMLockObject(v36);
  WindowSmIcon = xxxGetWindowSmIcon(v36, 0);
  ThreadUnlock1(v40, v39, v41);
  if ( WindowSmIcon )
    goto LABEL_60;
LABEL_59:
  WindowSmIcon = qword_1C0322F90;
LABEL_60:
  v42 = a3 - 4;
  v43 = v123;
  v44 = a4 - 2;
  if ( v123 && v44 < v42 )
    v42 = a4 - 2;
  DrawIconEx(a1, v16 + 4, 1u, WindowSmIcon, v42, v44, 0, *(_QWORD *)(gpsi + 4728LL), 19);
LABEL_106:
  v66 = v132;
  if ( !v132 )
    v66 = *v131[0];
  if ( (unsigned int)MNGetpItemIndex(v66, v11) == -1 )
    goto LABEL_151;
  if ( a5 != (_DWORD)v67 )
    goto LABEL_151;
  v68 = *(const WCHAR **)(v11 + 24);
  if ( !v68 )
    goto LABEL_151;
  v69 = *(_DWORD *)(*(_QWORD *)v11 + 48LL);
  if ( !v69 )
    goto LABEL_151;
  v129 = *(_QWORD *)(v11 + 88);
  if ( !v43 || *(_DWORD *)(*v131[0] + 72) == (_DWORD)v67 )
  {
    if ( *(_QWORD *)(*(_QWORD *)v11 + 96LL) != v67 )
      v16 += *(_DWORD *)(*(_QWORD *)v11 + 104LL) + 2;
  }
  else
  {
    v16 = *(_DWORD *)(*v131[0] + 72);
  }
  DPIMetrics = GetDPIMetrics();
  v71 = *(_QWORD *)v11;
  v72 = DPIMetrics;
  v133 = DPIMetrics;
  v73 = *(_DWORD *)(DPIMetrics + 20);
  v126 = v73;
  v74 = *(_DWORD *)(v71 + 76) - *(_DWORD *)(DPIMetrics + 12) - v73 - 1;
  if ( v74 > 0 )
  {
    v72 = v133;
    v126 = v74 / 2 + v73;
  }
  if ( !v43 && !*(_QWORD *)(v71 + 96) )
    v16 += *(_DWORD *)(v72 + 8);
  if ( *v68 == 8 && !v43 )
  {
    ++v68;
    if ( !--v69 )
    {
      v95 = a1;
      goto LABEL_152;
    }
  }
  CharPosition = (unsigned int)FindCharPosition(v68, 9LL);
  v77 = FindCharPosition(v68, v76);
  v79 = *(_DWORD *)(v78 + 72);
  v80 = v77;
  v85 = GetDpiForSystem(v82, v81, v83, v84);
  v86 = GetOemBitmapInfoForDpi(63, v85);
  v87 = 0LL;
  v88 = v79 - *((__int16 *)v86 + 2) - 2;
  if ( !(_DWORD)v80 || (_DWORD)v80 == v69 )
  {
    if ( (_DWORD)CharPosition && (_DWORD)v80 == v69 )
    {
      if ( (**(_DWORD **)v11 & 0x2000) != 0 )
      {
        v95 = a1;
        v138 = 0LL;
        xxxPSMGetTextExtent(a1);
        v113 = v132;
        if ( !v132 )
          v113 = *v131[0];
        if ( (unsigned int)MNGetpItemIndex(v113, v11) == -1 )
          goto LABEL_152;
        v97 = v129;
        if ( v129 != *(_QWORD *)(v11 + 88) )
          goto LABEL_151;
        v115 = v88;
        v116 = v133;
        v16 = v115 - v138;
        if ( v123 == (_DWORD)v114 && *(_QWORD *)(*(_QWORD *)v11 + 96LL) == v114 )
          v16 += *(_DWORD *)(v133 + 8);
      }
      else
      {
        v97 = v129;
        v116 = v133;
      }
      xxxDrawMenuItemText(
        v131,
        v11,
        a1,
        v16 + v130,
        v130 + v126,
        v68,
        CharPosition,
        *(_DWORD *)(*(_QWORD *)(*v131[0] + 40) + 40LL) & 4);
      v117 = v132;
      if ( !v132 )
        v117 = *v131[0];
      if ( (unsigned int)MNGetpItemIndex(v117, v11) == -1 || v97 != *(_QWORD *)(v11 + 88) )
        goto LABEL_151;
      goto LABEL_182;
    }
  }
  else
  {
    if ( (**(_DWORD **)v11 & 0x2000) != 0 && v123 )
    {
      v136 = 0LL;
      xxxPSMGetTextExtent(a1);
      v89 = v132;
      if ( !v132 )
        v89 = *v131[0];
      if ( (unsigned int)MNGetpItemIndex(v89, v11) == -1 || v129 != *(_QWORD *)(v11 + 88) )
        goto LABEL_151;
      v16 = v88 - v136;
    }
    xxxDrawMenuItemText(
      v131,
      v11,
      a1,
      v16 + v130,
      v130 + v126,
      v68,
      v80,
      *(_DWORD *)(*(_QWORD *)(*v131[0] + 40) + 40LL) & 4);
    v90 = v132;
    if ( !v132 )
      v90 = *v131[0];
    if ( (unsigned int)MNGetpItemIndex(v90, v11) == -1 || v129 != *(_QWORD *)(v11 + 88) )
    {
LABEL_151:
      v95 = a1;
      goto LABEL_152;
    }
    if ( (unsigned int)CharPosition > (int)v80 + 1 )
    {
      if ( (**(_DWORD **)v11 & 0x2000) == 0 || v123 == (_DWORD)v87 )
      {
        v137 = v87;
        v92 = CharPosition - v80;
        xxxPSMGetTextExtent(a1);
        v93 = v132;
        if ( !v132 )
          v93 = *v131[0];
        if ( (unsigned int)MNGetpItemIndex(v93, v11) == -1 || v129 != *(_QWORD *)(v11 + 88) )
          goto LABEL_151;
        v91 = *(_DWORD *)(*(_QWORD *)v11 + 80LL) - v137;
      }
      else
      {
        v91 = v88 - *(_DWORD *)(*(_QWORD *)v11 + 80LL);
        v92 = CharPosition - v80;
      }
      v94 = &v68[v80 + 1];
      v95 = a1;
      xxxPSMTextOut(a1, v91, v126, v94, v92 - 1, ~(*(_DWORD *)(*(_QWORD *)(*v131[0] + 40) + 40LL) << 18) & 0x100000);
      v96 = v132;
      if ( !v132 )
        v96 = *v131[0];
      if ( (unsigned int)MNGetpItemIndex(v96, v11) == -1 )
        goto LABEL_152;
      v97 = v129;
      if ( v129 != *(_QWORD *)(v11 + 88) )
        goto LABEL_151;
      goto LABEL_181;
    }
  }
  v97 = v129;
LABEL_181:
  v116 = v133;
LABEL_182:
  if ( (unsigned int)CharPosition >= v69 - 1 )
    goto LABEL_151;
  if ( (**(_DWORD **)v11 & 0x2000) == 0 || v123 == (_DWORD)v87 )
  {
    v119 = CharPosition;
    v121 = *(_DWORD *)(*(_QWORD *)v11 + 80LL) + *(_DWORD *)(v116 + 8);
    v118 = v69 - CharPosition;
  }
  else
  {
    v134 = v87;
    v118 = v69 - CharPosition;
    v119 = CharPosition;
    xxxPSMGetTextExtent(a1);
    v120 = v132;
    if ( !v132 )
      v120 = *v131[0];
    if ( (unsigned int)MNGetpItemIndex(v120, v11) == -1 || v97 != *(_QWORD *)(v11 + 88) )
      goto LABEL_151;
    v121 = *(_DWORD *)(*(_QWORD *)v11 + 72LL) - *(_DWORD *)(*(_QWORD *)v11 + 80LL) - v134;
  }
  v95 = a1;
  xxxPSMTextOut(
    a1,
    v121,
    v126,
    &v68[v119 + 1],
    v118 - 1,
    ~(*(_DWORD *)(*(_QWORD *)(*v131[0] + 40) + 40LL) << 18) & 0x100000);
LABEL_152:
  v98 = v132;
  if ( !v132 )
    v98 = *v131[0];
  if ( (unsigned int)MNGetpItemIndex(v98, v11) != -1
    && a5 == (_DWORD)v101
    && v123 != (_DWORD)v101
    && *(_QWORD *)(v11 + 16) != v101 )
  {
    v102 = (**(_DWORD **)v11 & 0x2000) != 0 ? 0x1E : 0;
    v103 = GetDpiForSystem(-(**(_DWORD **)v11 & 0x2000), v99, v100, v101);
    v104 = GetOemBitmapInfoForDpi(v102 + 62, v103);
    v99 = *(_QWORD *)v11;
    v105 = (__int16 *)v104;
    if ( *(_DWORD *)(*(_QWORD *)v11 + 76LL) >= *((__int16 *)v104 + 3) )
    {
      v106 = PrepareHDCBITSBitmap(0LL, v99);
      v101 = 0LL;
      v107 = (HDC)v106;
      if ( v106 )
      {
        v108 = *(_DWORD **)v11;
        v109 = v105[3];
        v110 = v105[2];
        v111 = (*(_DWORD *)(*(_QWORD *)v11 + 76LL) - v109 - 2) / 2;
        if ( v111 <= 0 )
          v111 = 0;
        if ( (*v108 & 0x2000) != 0 )
          v112 = v105[2];
        else
          v112 = v108[18] - v110;
        BltColor(v95, 0LL, v107, v112, v111, v110, v109, *v105, v105[1], 1);
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v131, v99, v100, v101);
  return 1LL;
}
