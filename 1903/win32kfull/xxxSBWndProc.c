/*
 * XREFs of xxxSBWndProc @ 0x1C0242BA0
 * Callers:
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E5630 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C000B548 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     DrawThumb2 @ 0x1C000BDD0 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C000BF58 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0013B80 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C0027B60 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     xxxEnableScrollBar @ 0x1C0027E30 (xxxEnableScrollBar.c)
 *     _FChildVisible @ 0x1C002E8F8 (_FChildVisible.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     zzzDestroyCaret @ 0x1C00868C0 (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C0086A94 (xxxCreateCaret.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxBeginPaint @ 0x1C00986B0 (xxxBeginPaint.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     xxxGetScrollBarInfo @ 0x1C00AAD18 (xxxGetScrollBarInfo.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     xxxDefWindowProc @ 0x1C00B3E60 (xxxDefWindowProc.c)
 *     ConstrainWindowSIZERECT @ 0x1C00C93D8 (ConstrainWindowSIZERECT.c)
 *     xxxEndPaint @ 0x1C01040B0 (xxxEndPaint.c)
 *     _GetKeyState @ 0x1C0110D00 (_GetKeyState.c)
 *     xxxMoveWindow @ 0x1C0112A4C (xxxMoveWindow.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     zzzHideCaret @ 0x1C023EAB4 (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C023EADC (zzzShowCaret.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C024150C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C02416F0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C0241F04 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 *     DrawSize @ 0x1C0241F54 (DrawSize.c)
 *     SBCtlSetup @ 0x1C0242090 (SBCtlSetup.c)
 *     _SBGetParms @ 0x1C02420D8 (_SBGetParms.c)
 *     xxxDoScrollMenu @ 0x1C0242160 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0242698 (xxxSBTrackInit.c)
 *     _ClientToScreen @ 0x1C0259FC8 (_ClientToScreen.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall xxxSBWndProc(struct tagWND *a1, unsigned int a2, HDC a3, struct tagSCROLLINFO *a4)
{
  int v4; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  struct tagSCROLLINFO *v11; // r11
  __int16 v12; // ax
  unsigned int v13; // esi
  unsigned __int64 result; // rax
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  unsigned int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned int v21; // edx
  unsigned int v22; // r9d
  __int64 v23; // rcx
  _QWORD *v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int8 v28; // r10
  int v29; // r10d
  bool v30; // zf
  int v31; // r8d
  struct tagWND *v32; // r10
  int v33; // edx
  int v34; // r9d
  int v35; // r13d
  __int64 v36; // r9
  unsigned int v37; // r15d
  __int64 v38; // r8
  int v39; // ecx
  int v40; // eax
  unsigned int DpiForSystem; // edx
  int DpiDependentMetric; // ebx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  int v51; // ecx
  int v52; // eax
  int v53; // eax
  int v54; // ecx
  int v55; // ebx
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  struct tagWND *v61; // r9
  unsigned int v62; // eax
  HDC DCEx; // rsi
  HBRUSH ColorObjects; // rbx
  __int64 v65; // rdi
  HDC v66; // r12
  __int64 v67; // rax
  struct tagWND *v68; // rcx
  __int64 v69; // rax
  int v70; // ebx
  __int64 v71; // r15
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r13
  __int64 v76; // rdx
  __int64 v77; // rax
  struct _LARGE_STRING *v78; // r12
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 *v82; // rcx
  __int64 v83; // r8
  int v84; // [rsp+50h] [rbp-B0h] BYREF
  int v85; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v86; // [rsp+58h] [rbp-A8h] BYREF
  struct tagSCROLLINFO *v87; // [rsp+60h] [rbp-A0h]
  unsigned int v88; // [rsp+68h] [rbp-98h]
  unsigned __int64 v89; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v90; // [rsp+78h] [rbp-88h]
  int v91; // [rsp+7Ch] [rbp-84h]
  int v92; // [rsp+80h] [rbp-80h]
  __int64 v93; // [rsp+88h] [rbp-78h] BYREF
  __int64 v94; // [rsp+90h] [rbp-70h]
  __int64 v95; // [rsp+98h] [rbp-68h]
  __int64 v96; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v97; // [rsp+A8h] [rbp-58h]
  __int64 v98; // [rsp+B0h] [rbp-50h]
  int v99; // [rsp+B8h] [rbp-48h]
  _QWORD v100[10]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0;
  v86 = 0LL;
  memset(v100, 0, 0x48uLL);
  v10 = *((_QWORD *)a1 + 5);
  v11 = (struct tagSCROLLINFO *)&v96;
  v87 = (struct tagSCROLLINFO *)&v96;
  v93 = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  v99 = 0;
  if ( (*(_DWORD *)(v10 + 232) & 0x800) != 0 )
    return 0LL;
  v12 = *(_WORD *)(v10 + 42);
  v13 = 1;
  if ( v12 != 666 )
  {
    if ( v12 )
      return 0LL;
    if ( a2 != 1 )
      return xxxDefWindowProc(a1, a2, (HWND)a3, (unsigned __int64)a4);
    v15 = *(_DWORD *)(v10 + 252);
    v16 = *(unsigned __int16 *)(gpsi + 328LL);
    if ( v15 + 320 >= v16 )
    {
      v9 = *((_QWORD *)a1 + 35);
      if ( !v9 )
      {
LABEL_25:
        *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) = 666;
        goto LABEL_26;
      }
      v23 = 0LL;
      if ( v15 )
      {
        while ( !*(_BYTE *)((unsigned int)v23 + v9) )
        {
          v23 = (unsigned int)(v23 + 1);
          if ( (unsigned int)v23 >= v15 )
            goto LABEL_23;
        }
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
        v10 = *((_QWORD *)a1 + 5);
      }
LABEL_23:
      memset(*((void **)a1 + 35), 0, *(unsigned int *)(v10 + 252));
    }
    else
    {
      if ( *(_DWORD *)(v10 + 200) + v15 + 320 < v16 )
        return 0LL;
      v17 = v16 - 320;
      v18 = Win32AllocPoolZInit(v16 - 320, 1937208149LL);
      v89 = v18;
      if ( !v18 )
        return 0LL;
      v19 = *((_QWORD *)a1 + 35);
      if ( v19 )
      {
        v20 = *((_QWORD *)a1 + 5);
        v21 = 0;
        v22 = *(_DWORD *)(v20 + 252);
        if ( v22 )
        {
          while ( !*(_BYTE *)(v21 + v19) )
          {
            if ( ++v21 >= v22 )
              goto LABEL_15;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
        }
LABEL_15:
        Win32FreePool(*((_QWORD *)a1 + 35));
        v18 = v89;
      }
      *((_QWORD *)a1 + 35) = v18;
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 252LL) = v17;
    }
    v11 = (struct tagSCROLLINFO *)&v96;
    goto LABEL_25;
  }
LABEL_26:
  v24 = (_QWORD *)*((_QWORD *)a1 + 35);
  v25 = 3LL;
  *v24 = a1;
  v26 = *((_QWORD *)a1 + 5);
  v27 = *(unsigned __int8 *)(v26 + 28);
  v28 = *(_BYTE *)(v26 + 28);
  LODWORD(v89) = v28;
  v29 = v28 & 0x18;
  v92 = v29;
  if ( a2 > 0xE2 )
  {
    if ( a2 > 0xEB )
    {
      switch ( a2 )
      {
        case 0x100u:
          if ( a3 == (HDC)33 )
          {
            v13 = 2;
          }
          else if ( a3 == (HDC)34 )
          {
            v13 = 3;
          }
          else if ( a3 == (HDC)35 )
          {
            v13 = 7;
          }
          else if ( a3 == (HDC)36 )
          {
            v13 = 6;
          }
          else
          {
            if ( (unsigned __int64)a3 <= 0x24 )
              return 0LL;
            if ( (unsigned __int64)a3 <= 0x26 )
            {
              v13 = 0;
            }
            else if ( (unsigned __int64)a3 > 0x28 )
            {
              return 0LL;
            }
          }
          v83 = v13;
          break;
        case 0x101u:
          if ( (unsigned __int64)a3 - 33 > 7 )
            return 0LL;
          v83 = 8LL;
          break;
        case 0x201u:
          goto LABEL_147;
        case 0x203u:
          v71 = 61488LL;
          if ( !v29 )
          {
LABEL_147:
            if ( !v29 )
            {
              if ( (*(_BYTE *)(v26 + 30) & 1) != 0 )
              {
                xxxSetFocus(a1, v26, v27);
                a1 = (struct tagWND *)*v24;
              }
              zzzHideCaret(a1);
              SBCtlSetup((__int64)v24);
              LOBYTE(v4) = GetKeyState(0x10u, v72, v73, v74) < 0;
              xxxSBTrackInit((struct tagWND *)*v24, (unsigned __int64)a4, 0, v4);
              return 0LL;
            }
            v71 = 61440LL;
          }
          LODWORD(v86) = (__int16)a4;
          HIDWORD(v86) = SWORD1(a4);
          ClientToScreen(a1, &v86);
          v75 = *((_QWORD *)a1 + 13);
          v76 = (unsigned __int16)v86 | (WORD2(v86) << 16);
          v77 = *(_QWORD *)(v75 + 40);
          v78 = (struct _LARGE_STRING *)(int)v76;
          LOBYTE(a1) = ~*(_BYTE *)(v77 + 26);
          LODWORD(a1) = ((*(unsigned __int8 *)(v77 + 25) ^ (unsigned int)a1) >> 6) & 1;
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v76, v79, v80);
          v93 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v93;
          v94 = v75;
          if ( v75 )
            HMLockObject(v75);
          v82 = *(__int64 **)(*v24 + 104LL);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(
            v82,
            0x112u,
            (HWND)(v71 | (unsigned int)((_DWORD)a1 + 7)),
            v78,
            0,
            0,
            0LL,
            1u,
            1);
          goto LABEL_101;
        default:
          v30 = a2 == 792;
LABEL_135:
          if ( !v30 )
            return xxxDefWindowProc(a1, a2, (HWND)a3, (unsigned __int64)a4);
          v66 = a3;
          if ( !a3 )
          {
            v67 = xxxBeginPaint(a1, (__int64)v100);
            v29 = v92;
            a3 = (HDC)v67;
          }
          if ( v29 )
          {
            v68 = (struct tagWND *)*v24;
            v69 = *(_QWORD *)(*v24 + 40LL);
            v70 = *(_BYTE *)(v69 + 30) & 4;
            if ( (*(_BYTE *)(v69 + 30) & 4) == 0 )
            {
              SetOrClrWF(1, (__int64)v68, 0xE04u, 1);
              v68 = (struct tagWND *)*v24;
            }
            DrawSize((__int64)v68, a3, 0LL, 0LL);
            if ( !v70 )
              SetOrClrWF(0, *v24, 0xE04u, 1);
          }
          else
          {
            SBCtlSetup((__int64)v24);
            xxxDrawSB2(
              (struct tagWND *)*v24,
              (struct tagSBCALC *)(v24 + 2),
              a3,
              *((_DWORD *)v24 + 2),
              *((_DWORD *)v24 + 3));
          }
          if ( !v66 )
            xxxEndPaint((struct tagWND *)*v24, v100);
          return 0LL;
      }
      xxxDoScroll(a1, *((struct tagWND **)a1 + 13), v83, 0LL, *((_DWORD *)v24 + 2));
      return 0LL;
    }
    switch ( a2 )
    {
      case 0xEBu:
        LODWORD(result) = xxxGetScrollBarInfo((__int64 *)a1, -4, (__int64)a4);
        break;
      case 0xE3u:
        *(_DWORD *)a3 = (struct HDC__)v24[2];
        *(_DWORD *)a4 = *((_DWORD *)v24 + 5);
        return *((unsigned __int16 *)v24 + 8) | ((unsigned __int64)*((unsigned __int16 *)v24 + 10) << 16);
      case 0xE4u:
        LODWORD(result) = xxxEnableSBCtlArrows(a1);
        break;
      case 0xE6u:
        v55 = 1;
LABEL_113:
        v97 = __PAIR64__((unsigned int)a4, (unsigned int)a3);
        HIDWORD(v96) = 4097;
        goto LABEL_114;
      case 0xE9u:
        v11 = a4;
        v87 = a4;
        v55 = (int)a3;
LABEL_115:
        v85 = 1;
        if ( (unsigned int)SBSetParms((struct tagSBDATA *)(v24 + 2), v11, &v85, &v84) )
          xxxWindowEvent(0x800Eu, (struct tagWND *)*v24, 4294967292LL, 0LL, 1);
        if ( v55 )
        {
          zzzHideCaret((struct tagWND *)*v24);
          SBCtlSetup((__int64)v24);
          zzzSetSBCaretPos((struct tagSBWND *)v24);
          if ( (unsigned int)FChildVisible(*v24) )
          {
            if ( v85 || (*((_DWORD *)v87 + 1) & 8) == 0 )
              v62 = 0;
            else
              v62 = 3;
            xxxEnableScrollBar((ULONG_PTR)v61, 2LL, v62);
            DCEx = (HDC)_GetDCEx(*v24, 0LL, 65537LL);
            ColorObjects = (HBRUSH)xxxGetColorObjects((struct tagWND *)*v24, (HWND)DCEx);
            v65 = GreSelectBrush(DCEx, ColorObjects);
            DrawThumb2(*v24, (_DWORD *)v24 + 4, DCEx, ColorObjects, *((_DWORD *)v24 + 2), *((_DWORD *)v24 + 3));
            GreSelectBrush(DCEx, v65);
            _ReleaseDC(DCEx);
            v61 = (struct tagWND *)*v24;
          }
          zzzShowCaret(v61);
        }
        return v84;
      case 0xEAu:
        LODWORD(result) = SBGetParms((__int64)a1, 2, (_DWORD *)v24 + 4, a4);
        break;
      default:
        return xxxDefWindowProc(a1, a2, (HWND)a3, (unsigned __int64)a4);
    }
    return (int)result;
  }
  if ( a2 == 226 )
  {
    v55 = 0;
    goto LABEL_113;
  }
  if ( a2 <= 0x14 )
  {
    if ( a2 != 20 )
    {
      switch ( a2 )
      {
        case 1u:
          if ( a4 )
          {
            v35 = *((_DWORD *)a4 + 11);
            LOBYTE(v25) = *(_BYTE *)(v26 + 31) & 0xC0;
            v36 = *((unsigned int *)a4 + 9);
            v37 = *((_DWORD *)a4 + 10);
            v38 = *((unsigned int *)a4 + 8);
            LODWORD(v86) = *((_DWORD *)a4 + 9);
            if ( v35 == 0x80000000 )
            {
              if ( (_BYTE)v25 )
                v35 = 0;
              else
                v35 = *(_DWORD *)(v26 + 88);
            }
            v85 = v35;
            if ( v37 == 0x80000000 )
            {
              if ( (_BYTE)v25 )
                v37 = 0;
              else
                v37 = *(_DWORD *)(v26 + 92);
            }
            v88 = v37;
            if ( (_DWORD)v36 == 0x80000000 )
            {
              if ( (_BYTE)v25 )
                v36 = 0LL;
              else
                v36 = (unsigned int)(*(_DWORD *)(v26 + 96) - *(_DWORD *)(v26 + 88));
              LODWORD(v86) = v36;
            }
            if ( (_DWORD)v38 == 0x80000000 )
            {
              if ( (_BYTE)v25 )
                v38 = 0LL;
              else
                v38 = (unsigned int)(*(_DWORD *)(v26 + 100) - *(_DWORD *)(v26 + 92));
            }
            v30 = (*(_BYTE *)(v26 + 21) & 2) == 0;
            LODWORD(v87) = v36 + v35;
            v84 = v37 + v38;
            if ( v30 )
            {
              *(_DWORD *)(v26 + 28) &= 0xFFCFFFFF;
              a1 = (struct tagWND *)*v24;
            }
            if ( !v29 )
            {
              v39 = *(_DWORD *)a4;
              v40 = (unsigned __int16)*(_DWORD *)a4;
              *((_DWORD *)v24 + 4) = v40;
              *((_DWORD *)v24 + 7) = v40;
              *((_DWORD *)v24 + 5) = HIWORD(v39);
              v25 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 28LL) & 1;
              *((_DWORD *)v24 + 6) = 0;
              *((_DWORD *)v24 + 2) = v25;
            }
            if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL) & 0x8000000) != 0 )
              *((_DWORD *)v24 + 3) = 3;
            if ( (v89 & 6) != 0 )
            {
              DpiForSystem = GetDpiForSystem(v25, v26, v38, v36);
              if ( v92 )
              {
                DpiDependentMetric = GetDpiDependentMetric(0LL, DpiForSystem);
                v47 = GetDpiForSystem(v44, v43, v45, v46);
                v48 = GetDpiDependentMetric(1LL, v47);
                v37 = v84 - v48;
                if ( (v89 & 4) == 0 )
                  v37 = v88;
                v35 = (_DWORD)v87 - DpiDependentMetric;
                if ( (v89 & 4) == 0 )
                  v35 = v85;
                v49 = v37 + v48;
                v50 = DpiDependentMetric + v35;
              }
              else if ( (v89 & 1) != 0 )
              {
                v51 = GetDpiDependentMetric(0LL, DpiForSystem);
                v52 = (_DWORD)v87 - v51;
                if ( (v89 & 2) == 0 )
                {
                  v51 = v86;
                  v35 = v52;
                }
                v50 = v85 + v51;
                v49 = v84;
              }
              else
              {
                v53 = GetDpiDependentMetric(1LL, DpiForSystem);
                v54 = v53;
                if ( (v89 & 2) != 0 )
                {
                  v49 = v37 + v53;
                }
                else
                {
                  v49 = v84;
                  v37 = v84 - v54;
                }
                v50 = (int)v87;
              }
              v89 = __PAIR64__(v37, v35);
              v90 = v50 - v35;
              v91 = v49 - v37;
              ConstrainWindowSIZERECT((int *)&v89);
              xxxMoveWindow((struct tagWND *)*v24, (unsigned int)v89, HIDWORD(v89), v90, v91, 0);
            }
          }
          else
          {
            UserSetLastError(87LL, v26, v27, v9);
          }
          return 0LL;
        case 5u:
          if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL) != a1 )
            return 0LL;
          zzzDestroyCaret();
          break;
        case 7u:
          break;
        case 8u:
          zzzDestroyCaret();
          return 0LL;
        case 0xAu:
          _InterlockedAdd(&glSendMessage, 1u);
          return xxxSendTransformableMessageTimeout(
                   (__int64 *)a1,
                   0xE4u,
                   (HWND)(-(__int64)(a3 == 0LL) & 3),
                   0LL,
                   0,
                   0,
                   0LL,
                   1u,
                   1);
        default:
          v30 = a2 == 15;
          goto LABEL_135;
      }
      SBCtlSetup((__int64)v24);
      v31 = *((_DWORD *)v24 + 2);
      v32 = (struct tagWND *)*v24;
      if ( v31 )
        v33 = *(_DWORD *)(*((_QWORD *)v32 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)v32 + 5) + 88LL);
      else
        v33 = *((_DWORD *)v24 + 12);
      if ( v31 )
        v34 = *((_DWORD *)v24 + 12);
      else
        v34 = *(_DWORD *)(*((_QWORD *)v32 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)v32 + 5) + 92LL);
      xxxCreateCaret(*v24, (HBRUSH)1, v33 - 4, v34 - 4);
      zzzSetSBCaretPos((struct tagSBWND *)v24);
      zzzShowCaret((struct tagWND *)*v24);
      return 0LL;
    }
    return 1LL;
  }
  switch ( a2 )
  {
    case 0x7Bu:
      v56 = *((_QWORD *)a1 + 13);
      v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v9);
      v93 = *(_QWORD *)(v57 + 408);
      *(_QWORD *)(v57 + 408) = &v93;
      v94 = v56;
      if ( v56 )
        HMLockObject(v56);
      xxxDoScrollMenu(
        *(struct tagWND **)(*v24 + 104LL),
        (struct tagWND *)*v24,
        *((_DWORD *)v24 + 2),
        (unsigned __int64)a4);
LABEL_101:
      ThreadUnlock1(v59, v58, v60);
      return 0LL;
    case 0x84u:
      if ( (v27 & 0x10) == 0 )
        return xxxDefWindowProc(a1, a2, (HWND)a3, (unsigned __int64)a4);
      return (((unsigned __int8)~*(_BYTE *)(v26 + 26) ^ (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL)
                                                                                             + 25LL)) >> 6) & 1 | 0x10;
    case 0x87u:
      return 1LL;
    case 0xE0u:
      v55 = (int)a4;
      HIDWORD(v96) = 4100;
      HIDWORD(v98) = (_DWORD)a3;
LABEL_114:
      LODWORD(v96) = 28;
      goto LABEL_115;
  }
  if ( a2 != 225 )
    return xxxDefWindowProc(a1, a2, (HWND)a3, (unsigned __int64)a4);
  return *((int *)v24 + 7);
}
