/*
 * XREFs of xxxRealDrawMenuItem @ 0x1C02095E4
 * Callers:
 *     xxxDrawState @ 0x1C02071C8 (xxxDrawState.c)
 * Callees:
 *     BitBltSysBmp @ 0x1C000D26C (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C000D3C0 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C000D504 (PrepareHDCBITSBitmap.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0010A0C (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0010A38 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     _DrawIconEx @ 0x1C0012DE0 (_DrawIconEx.c)
 *     GreCreateDIBitmapReal @ 0x1C0016AA0 (GreCreateDIBitmapReal.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C001770C (GreDecBitmapExclusiveRefCnt.c)
 *     GreExtGetObjectW @ 0x1C0017838 (GreExtGetObjectW.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     GetDPIMetrics @ 0x1C0065818 (GetDPIMetrics.c)
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 *     NtGdiAlphaBlend @ 0x1C0095810 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     xxxGetWindowSmIcon @ 0x1C00C4A6C (xxxGetWindowSmIcon.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C01FBC8C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     BltColor @ 0x1C020708C (BltColor.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0207838 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0207FC0 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C0210A28 (xxxPSMTextOut.c)
 *     FindCharPosition @ 0x1C022BA90 (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C022E17C (xxxPSMGetTextExtent.c)
 */

__int64 __fastcall xxxRealDrawMenuItem(HDC a1, __int64 *a2, int a3, int a4, int a5, int a6)
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
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  HDC v25; // r14
  __int64 v26; // rbx
  unsigned int v27; // eax
  __int16 *OemBitmapInfoForDpi; // rax
  unsigned int v29; // ebx
  __int64 v30; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 WindowSmIcon; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int v36; // ecx
  unsigned int v37; // r14d
  unsigned int v38; // r8d
  int v39; // r13d
  int DpiDependentMetric; // r14d
  int v41; // eax
  int v42; // ebx
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // eax
  int ObjectW; // eax
  __int64 v48; // rdx
  __int64 v49; // r10
  __int64 v50; // r15
  __int64 v51; // r12
  __int64 CompatibleDC; // rax
  HDC v53; // rbx
  int v54; // edx
  __int64 v55; // rax
  unsigned __int8 *v56; // r9
  unsigned int v57; // r8d
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r9
  _WORD *v63; // r15
  int v64; // ebx
  __int64 DPIMetrics; // rax
  int *v66; // r10
  __int64 v67; // rdx
  int v68; // r8d
  int v69; // eax
  unsigned int CharPosition; // r12d
  unsigned int v71; // r11d
  int v72; // eax
  __int64 v73; // r10
  int v74; // r13d
  int v75; // r14d
  unsigned int v76; // eax
  char *v77; // rax
  int v78; // r9d
  int v79; // r13d
  __int64 v80; // rcx
  __int64 v81; // rcx
  unsigned int v82; // esi
  __int64 v83; // rcx
  HDC v84; // r14
  __int64 v85; // rcx
  __int64 v86; // r14
  __int64 v87; // rcx
  int *v88; // rdx
  __int64 v89; // r9
  int v90; // ebx
  unsigned int v91; // eax
  char *v92; // rax
  __int16 *v93; // rbx
  HDC v94; // r11
  int *v95; // r8
  int v96; // esi
  int v97; // r10d
  int v98; // eax
  int v99; // r9d
  __int64 v100; // rcx
  __int64 v101; // r9
  __int64 v102; // rcx
  int v103; // ebx
  __int64 v104; // rcx
  unsigned int v106; // [rsp+70h] [rbp-90h]
  int v107; // [rsp+74h] [rbp-8Ch]
  int v108; // [rsp+74h] [rbp-8Ch]
  int v111; // [rsp+80h] [rbp-80h]
  __int64 v112; // [rsp+80h] [rbp-80h]
  BOOL v113; // [rsp+88h] [rbp-78h]
  __int64 *v114[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v115; // [rsp+A0h] [rbp-60h]
  __int64 v116; // [rsp+A8h] [rbp-58h]
  __int64 v117; // [rsp+B0h] [rbp-50h]
  __int64 v118; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v119; // [rsp+C0h] [rbp-40h]
  __int64 v120; // [rsp+C8h] [rbp-38h]
  __int64 v121; // [rsp+D0h] [rbp-30h]
  _QWORD v122[3]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v123[12]; // [rsp+F0h] [rbp-10h] BYREF
  char v124[16]; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int16 v125; // [rsp+130h] [rbp+30h]
  unsigned __int16 v126; // [rsp+132h] [rbp+32h]
  __int16 v127; // [rsp+14Eh] [rbp+4Eh]
  int v128; // [rsp+150h] [rbp+50h]

  SmartObjStackRefBase<tagMENU>::Init(v114, 0LL);
  v9 = *a2;
  v115 = 0LL;
  v10 = 0;
  v113 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v114, v9);
  v11 = a2[1];
  v116 = v11;
  v12 = *(_QWORD *)(*v114[0] + 40);
  v13 = *(_DWORD *)(v12 + 40) & 1;
  v106 = *(_DWORD *)(v12 + 40) & 1;
  if ( v106 )
  {
    v14 = 2;
    if ( *(int *)(*(_QWORD *)(*v114[0] + 40) + 40LL) >= 0 )
    {
      if ( a5 )
      {
        v15 = *(_QWORD *)v11;
        if ( (*(_DWORD *)(*(_QWORD *)v11 + 4LL) & 8) != 0 )
          v16 = *(_QWORD *)(v15 + 24) == 0LL;
        else
          v16 = *(_QWORD *)(v15 + 32) == 0LL;
        v10 = !v16;
      }
      else
      {
        v10 = DrawMenuItemCheckMark(a1, (int **)v11);
      }
      if ( ((*(_DWORD *)(*(_QWORD *)(*v114[0] + 40) + 40LL) & 0x4000000) == 0
         || !*(_QWORD *)(*(_QWORD *)v11 + 96LL)
         || v10)
        && (**(_DWORD **)v11 & 0x2000) == 0 )
      {
        DpiForSystem = GetDpiForSystem();
        v14 = *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2) + 4;
      }
      v13 = v106;
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
      v113 = *(char *)(*(_QWORD *)v11 + 4LL) < 0;
  }
  if ( !*(_QWORD *)(*(_QWORD *)v11 + 96LL) || v10 && (*(_DWORD *)(*(_QWORD *)(*v114[0] + 40) + 40LL) & 0x4000000) != 0 )
    goto LABEL_102;
  if ( a5 )
    goto LABEL_61;
  v18 = *(_DWORD *)(*(_QWORD *)v11 + 4LL);
  v19 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
  if ( (v18 & 0x20000000) != 0 )
  {
    if ( v19 == 1 )
      goto LABEL_49;
    v20 = v14;
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
          if ( v24 )
          {
            if ( v24 != 1 )
            {
              v25 = (HDC)PrepareHDCBITSBitmap(0LL);
              if ( v25 )
              {
                v26 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
                v27 = GetDpiForSystem();
                OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v26 + 79), v27);
                BltColor(
                  a1,
                  0LL,
                  v25,
                  v14,
                  (unsigned int)(*(_DWORD *)(*(_QWORD *)v11 + 76LL) - OemBitmapInfoForDpi[3]) >> 1,
                  OemBitmapInfoForDpi[2],
                  OemBitmapInfoForDpi[3],
                  *OemBitmapInfoForDpi,
                  OemBitmapInfoForDpi[1],
                  1);
              }
              goto LABEL_102;
            }
            v29 = 25;
            v20 = v14 + 2;
          }
          else
          {
            v29 = 21;
          }
          goto LABEL_38;
        }
        v29 = 18;
      }
      else
      {
        v29 = 22;
        v20 = v14 + 2;
      }
    }
    else
    {
      v29 = 26;
    }
    if ( (v18 & 0x80u) != 0 )
      ++v29;
LABEL_38:
    BitBltSysBmp(a1, v20, 2u, v29, 1);
LABEL_102:
    v37 = v106;
    goto LABEL_103;
  }
  if ( v19 == -1 )
  {
    xxxSendMenuDrawItemMessage((__int64)a1, 1, (__int64 ***)v114, (__int64 *)v11, 1, v14, 0LL);
    goto LABEL_102;
  }
  if ( *(_WORD *)(gptiCurrent + 624LL) > 0x400u
    || (!*(_QWORD *)(*(_QWORD *)v11 + 56LL) || *(_QWORD *)(v11 + 24))
    && ((_DWORD)v13
     || v11 != *(_QWORD *)(*v114[0] + 88)
     || *(_DWORD *)(*(_QWORD *)(*v114[0] + 40) + 44LL) <= 1u
     || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v114[0] + 88) + 96LL) + 96LL)
     || !*(_QWORD *)(v11 + 16)) )
  {
LABEL_61:
    v39 = *(_DWORD *)(*(_QWORD *)v11 + 104LL);
    DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
    if ( (_DWORD)v13 )
    {
      v41 = *(_DWORD *)(*(_QWORD *)v11 + 76LL) - DpiDependentMetric;
      if ( v41 <= 0 )
      {
        v42 = 0;
        v111 = 0;
      }
      else
      {
        v42 = v41 / 2;
        v111 = v41 / 2;
      }
    }
    else
    {
      v43 = GetDpiForSystem();
      if ( DpiDependentMetric <= (int)GetDpiDependentMetric(26LL, v43) )
      {
        v46 = GetDpiForSystem();
        DpiDependentMetric = GetDpiDependentMetric(26LL, v46);
      }
      else
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
      }
      v42 = 0;
      v111 = 0;
      if ( *(_QWORD *)(v11 + 24) )
        v14 += *(_DWORD *)(GetDPIMetrics(v45, v44) + 8);
    }
    v117 = GreSelectBitmap(ghdcMem2, *(_QWORD *)(*(_QWORD *)v11 + 96LL));
    if ( !v117 )
      goto LABEL_102;
    ObjectW = GreExtGetObjectW(*(HBRUSH *)(*(_QWORD *)v11 + 96LL), 104LL, v124);
    LODWORD(v49) = 0;
    if ( !a5 || **(_DWORD **)v11 == 4 )
    {
      if ( ObjectW != 104 || v127 != 32 || v128 || **(_DWORD **)v11 == 4 )
      {
        if ( v125 * v126 == 1 )
          v58 = 12060490;
        else
          v58 = (unsigned int)MNDrawHilite(v114, v11) != 0 ? 3342344 : 13369376;
        NtGdiBitBltInternal(a1, v14 + v113, v42 + v113, v39, DpiDependentMetric, ghdcMem2, v49, v49, v58, 0xFFFFFF, v49);
      }
      goto LABEL_101;
    }
    v50 = 0LL;
    v107 = 33488896;
    v51 = 0LL;
    if ( a6 )
    {
      v118 = 0LL;
      CompatibleDC = GreCreateCompatibleDC(a1);
      LODWORD(v49) = 0;
      v53 = (HDC)CompatibleDC;
      if ( !CompatibleDC )
      {
LABEL_86:
        if ( a6 != (_DWORD)v49 )
        {
          if ( v51 != -1 )
            GreSelectBitmap(v53, v51);
          if ( v50 )
          {
            GreDecBitmapExclusiveRefCnt(v50, v48);
            GreDeleteObject(v50);
          }
          if ( v53 )
            GreDeleteDC(v53);
        }
LABEL_101:
        GreSelectBitmap(ghdcMem2, v117);
        goto LABEL_102;
      }
      memset(v123, 0, 0x2CuLL);
      v123[0] = 40;
      v123[1] = v39;
      v123[2] = DpiDependentMetric;
      *(_QWORD *)&v123[3] = 2097153LL;
      v55 = GreCreateDIBitmapReal(v53, v54, 0LL, v123, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v118);
      LODWORD(v49) = 0;
      v50 = v55;
      if ( v55 )
      {
        v51 = GreSelectBitmap(v53, v55);
        if ( v51 == -1 )
        {
          LODWORD(v49) = 0;
        }
        else
        {
          NtGdiAlphaBlend(v53, 0, 0, v39, DpiDependentMetric, ghdcMem2, 0, 0, v39, DpiDependentMetric, 33488896);
          LODWORD(v49) = 0;
          if ( v39 * DpiDependentMetric > 0 )
          {
            v56 = (unsigned __int8 *)v118;
            v49 = (unsigned int)(v39 * DpiDependentMetric);
            do
            {
              v48 = 29 * v56[2] + 150 * (unsigned int)v56[1];
              v57 = ((unsigned int)v48 + 77 * *v56 + 129) >> 8;
              *(_DWORD *)v56 = v57 | ((v57 | ((v57 | (v56[3] << 8)) << 8)) << 8);
              v56 += 4;
              --v49;
            }
            while ( v49 );
            v11 = v116;
          }
          BYTE2(v107) = 102;
        }
      }
    }
    else
    {
      v53 = (HDC)ghdcMem2;
    }
    if ( v53 )
    {
      NtGdiAlphaBlend(a1, v14 + v113, v113 + v111, v39, DpiDependentMetric, v53, 0, 0, v39, DpiDependentMetric, v107);
      LODWORD(v49) = 0;
    }
    goto LABEL_86;
  }
  while ( 1 )
  {
LABEL_49:
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) && *(_QWORD *)(*v114[0] + 80) )
      SetupFakeMDIAppStuff((__int64)v114, (_QWORD *)v11);
    LOBYTE(v13) = 1;
    v30 = HMValidateHandleNoRip(*(_QWORD *)(*(_QWORD *)v11 + 56LL), v13);
    if ( v30 )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) )
      goto LABEL_56;
    *(_QWORD *)(*(_QWORD *)v11 + 56LL) = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
  v122[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v122;
  v122[1] = v30;
  _InterlockedAdd((volatile signed __int32 *)(v30 + 8), 1u);
  WindowSmIcon = xxxGetWindowSmIcon((__int64 *)v30, 0);
  ThreadUnlock1(v34, v33, v35);
  if ( WindowSmIcon )
    goto LABEL_57;
LABEL_56:
  WindowSmIcon = qword_1C031D8E8;
LABEL_57:
  v36 = a3 - 4;
  v37 = v106;
  v38 = a4 - 2;
  if ( v106 && v38 < v36 )
    v36 = a4 - 2;
  DrawIconEx(a1, v14 + 4, 1u, WindowSmIcon, v36, v38, 0, *(_QWORD *)(gpsi + 4728LL), 19);
LABEL_103:
  v59 = v115;
  if ( !v115 )
    v59 = *v114[0];
  if ( (unsigned int)MNGetpItemIndex(v59, v11) == -1 )
    goto LABEL_147;
  if ( a5 != (_DWORD)v62 )
    goto LABEL_147;
  v63 = *(_WORD **)(v11 + 24);
  if ( !v63 )
    goto LABEL_147;
  v64 = *(_DWORD *)(*(_QWORD *)v11 + 48LL);
  if ( !v64 )
    goto LABEL_147;
  v112 = *(_QWORD *)(v11 + 88);
  if ( !v37 || (v61 = *v114[0], *(_DWORD *)(*v114[0] + 72) == (_DWORD)v62) )
  {
    if ( *(_QWORD *)(*(_QWORD *)v11 + 96LL) != v62 )
      v14 += *(_DWORD *)(*(_QWORD *)v11 + 104LL) + 2;
  }
  else
  {
    v61 = *v114[0];
    v14 = *(_DWORD *)(*v114[0] + 72);
  }
  DPIMetrics = GetDPIMetrics(v61, v60);
  v66 = *(int **)v11;
  v67 = DPIMetrics;
  v116 = DPIMetrics;
  v68 = *(_DWORD *)(DPIMetrics + 20);
  v108 = v68;
  v69 = v66[19] - *(_DWORD *)(DPIMetrics + 12) - v68 - 1;
  if ( v69 > 0 )
  {
    v67 = v116;
    v108 = v69 / 2 + v68;
  }
  if ( !v37 && !*((_QWORD *)v66 + 12) )
    v14 += *(_DWORD *)(v67 + 8);
  if ( *v63 == 8 && !v37 )
  {
    ++v63;
    if ( !--v64 )
    {
      v84 = a1;
      goto LABEL_148;
    }
  }
  CharPosition = FindCharPosition(v63, 9LL);
  v72 = FindCharPosition(v63, v71);
  v74 = *(_DWORD *)(v73 + 72);
  v75 = v72;
  v76 = GetDpiForSystem();
  v77 = GetOemBitmapInfoForDpi(63LL, v76);
  v78 = 0;
  v79 = v74 - *((__int16 *)v77 + 2) - 2;
  if ( !v75 || v75 == v64 )
  {
    if ( CharPosition && v75 == v64 )
    {
      if ( (**(_DWORD **)v11 & 0x2000) != 0 )
      {
        v84 = a1;
        v121 = 0LL;
        xxxPSMGetTextExtent(a1);
        v100 = v115;
        if ( !v115 )
          v100 = *v114[0];
        if ( (unsigned int)MNGetpItemIndex(v100, v11) == -1 )
          goto LABEL_148;
        v86 = v112;
        if ( v112 != *(_QWORD *)(v11 + 88) )
          goto LABEL_147;
        v14 = v79 - v121;
        if ( v106 == (_DWORD)v101 && *(_QWORD *)(*(_QWORD *)v11 + 96LL) == v101 )
          v14 += *(_DWORD *)(v116 + 8);
      }
      else
      {
        v86 = v112;
      }
      xxxDrawMenuItemText(
        v114,
        v11,
        a1,
        v14 + v113,
        v113 + v108,
        (__int64)v63,
        CharPosition,
        *(_DWORD *)(*(_QWORD *)(*v114[0] + 40) + 40LL) & 4);
      v102 = v115;
      if ( !v115 )
        v102 = *v114[0];
      if ( (unsigned int)MNGetpItemIndex(v102, v11) == -1 || v86 != *(_QWORD *)(v11 + 88) )
        goto LABEL_147;
      goto LABEL_177;
    }
    goto LABEL_176;
  }
  if ( (**(_DWORD **)v11 & 0x2000) != 0 && v106 )
  {
    v119 = 0LL;
    xxxPSMGetTextExtent(a1);
    v80 = v115;
    if ( !v115 )
      v80 = *v114[0];
    if ( (unsigned int)MNGetpItemIndex(v80, v11) == -1 || v112 != *(_QWORD *)(v11 + 88) )
      goto LABEL_147;
    v14 = v79 - v119;
  }
  xxxDrawMenuItemText(
    v114,
    v11,
    a1,
    v14 + v113,
    v113 + v108,
    (__int64)v63,
    v75,
    *(_DWORD *)(*(_QWORD *)(*v114[0] + 40) + 40LL) & 4);
  v81 = v115;
  if ( !v115 )
    v81 = *v114[0];
  if ( (unsigned int)MNGetpItemIndex(v81, v11) == -1 || v112 != *(_QWORD *)(v11 + 88) )
  {
LABEL_147:
    v84 = a1;
    goto LABEL_148;
  }
  if ( CharPosition <= v75 + 1 )
  {
LABEL_176:
    v86 = v112;
    goto LABEL_177;
  }
  if ( (**(_DWORD **)v11 & 0x2000) == 0 || v106 == v78 )
  {
    v120 = 0LL;
    v82 = CharPosition - v75;
    xxxPSMGetTextExtent(a1);
    v83 = v115;
    if ( !v115 )
      v83 = *v114[0];
    if ( (unsigned int)MNGetpItemIndex(v83, v11) == -1 || v112 != *(_QWORD *)(v11 + 88) )
      goto LABEL_147;
  }
  else
  {
    v82 = CharPosition - v75;
  }
  v84 = a1;
  xxxPSMTextOut(a1, v82 - 1, ~(*(_DWORD *)(*(_QWORD *)(*v114[0] + 40) + 40LL) << 18) & 0x100000);
  v85 = v115;
  if ( !v115 )
    v85 = *v114[0];
  if ( (unsigned int)MNGetpItemIndex(v85, v11) == -1 )
    goto LABEL_148;
  v86 = v112;
  if ( v112 != *(_QWORD *)(v11 + 88) )
    goto LABEL_147;
LABEL_177:
  if ( CharPosition >= v64 - 1 )
    goto LABEL_147;
  if ( (**(_DWORD **)v11 & 0x2000) == 0 || v106 == v78 )
  {
    v103 = v64 - CharPosition;
  }
  else
  {
    v103 = v64 - CharPosition;
    v117 = 0LL;
    xxxPSMGetTextExtent(a1);
    v104 = v115;
    if ( !v115 )
      v104 = *v114[0];
    if ( (unsigned int)MNGetpItemIndex(v104, v11) == -1 || v86 != *(_QWORD *)(v11 + 88) )
      goto LABEL_147;
  }
  v84 = a1;
  xxxPSMTextOut(a1, v103 - 1, ~(*(_DWORD *)(*(_QWORD *)(*v114[0] + 40) + 40LL) << 18) & 0x100000);
LABEL_148:
  v87 = v115;
  if ( !v115 )
    v87 = *v114[0];
  if ( (unsigned int)MNGetpItemIndex(v87, v11) != -1
    && a5 == (_DWORD)v89
    && v106 != (_DWORD)v89
    && *(_QWORD *)(v11 + 16) != v89 )
  {
    v90 = (**(_DWORD **)v11 & 0x2000) != 0 ? 0x1E : 0;
    v91 = GetDpiForSystem();
    v92 = GetOemBitmapInfoForDpi((unsigned int)(v90 + 62), v91);
    v88 = *(int **)v11;
    v93 = (__int16 *)v92;
    if ( *(_DWORD *)(*(_QWORD *)v11 + 76LL) >= *((__int16 *)v92 + 3) )
    {
      v94 = (HDC)PrepareHDCBITSBitmap(0LL);
      if ( v94 )
      {
        v95 = *(int **)v11;
        v96 = v93[3];
        v97 = v93[2];
        v98 = (*(_DWORD *)(*(_QWORD *)v11 + 76LL) - v96 - 2) / 2;
        if ( v98 <= 0 )
          v98 = 0;
        if ( (*v95 & 0x2000) != 0 )
          v99 = v93[2];
        else
          v99 = v95[18] - v97;
        BltColor(v84, 0LL, v94, v99, v98, v97, v96, *v93, v93[1], 1);
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v114, (__int64)v88);
  return 1LL;
}
