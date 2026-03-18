/*
 * XREFs of xxxSBWndProc @ 0x1C0201660
 * Callers:
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01AD740 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxBeginPaint @ 0x1C0037D64 (xxxBeginPaint.c)
 *     xxxGetScrollBarInfo @ 0x1C003891C (xxxGetScrollBarInfo.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetFocus @ 0x1C005E8B0 (xxxSetFocus.c)
 *     zzzDestroyCaret @ 0x1C0063850 (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C0063BA8 (xxxCreateCaret.c)
 *     xxxDefWindowProc @ 0x1C006CD90 (xxxDefWindowProc.c)
 *     _FChildVisible @ 0x1C0075BA0 (_FChildVisible.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00D96B4 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     xxxEnableScrollBar @ 0x1C00D9948 (xxxEnableScrollBar.c)
 *     xxxEndPaint @ 0x1C00E2444 (xxxEndPaint.c)
 *     _GetKeyState @ 0x1C00ECA24 (_GetKeyState.c)
 *     xxxMoveWindow @ 0x1C00F21C8 (xxxMoveWindow.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C012F608 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     DrawThumb2 @ 0x1C012F804 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012F984 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ConstrainWindowSIZERECT @ 0x1C019EDEC (ConstrainWindowSIZERECT.c)
 *     zzzHideCaret @ 0x1C01FE0AC (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C01FE0D4 (zzzShowCaret.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0200084 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0200224 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C0200A20 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 *     DrawSize @ 0x1C0200A70 (DrawSize.c)
 *     SBCtlSetup @ 0x1C0200BAC (SBCtlSetup.c)
 *     _SBGetParms @ 0x1C0200BEC (_SBGetParms.c)
 *     xxxDoScrollMenu @ 0x1C0200C74 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C020117C (xxxSBTrackInit.c)
 *     _ClientToScreen @ 0x1C022B2DC (_ClientToScreen.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall xxxSBWndProc(struct tagWND *a1, __int64 a2, HDC a3, unsigned __int64 a4)
{
  struct tagSCROLLINFO *v5; // r11
  __int64 v6; // r8
  int v7; // edi
  struct tagSCROLLINFO *v8; // r12
  unsigned int v9; // r13d
  struct tagWND *v10; // rbx
  __int16 v11; // ax
  unsigned int v12; // esi
  unsigned __int64 result; // rax
  unsigned int v14; // edx
  unsigned int v15; // r9d
  unsigned int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // r8
  __int64 v22; // rcx
  struct tagWND **v23; // r14
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int8 v26; // r10
  int v27; // r10d
  bool v28; // zf
  int v29; // r8d
  struct tagWND *v30; // r10
  int v31; // edx
  int v32; // r9d
  __int64 v33; // rdx
  int v34; // r13d
  char v35; // cl
  int v36; // r9d
  unsigned int v37; // r15d
  int v38; // r8d
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  unsigned int DpiForSystem; // edx
  int DpiDependentMetric; // ebx
  unsigned int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  int v49; // ecx
  int v50; // edx
  int v51; // eax
  int v52; // ecx
  int v53; // ebx
  __int64 v54; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rdx
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
  unsigned int v71; // r13d
  __int64 v72; // rdx
  __int64 v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // r12
  __int64 v77; // rax
  __int64 *v78; // rcx
  __int64 v79; // r8
  int v80; // [rsp+50h] [rbp-B0h] BYREF
  int v81; // [rsp+54h] [rbp-ACh] BYREF
  int v82; // [rsp+58h] [rbp-A8h]
  unsigned int v83; // [rsp+60h] [rbp-A0h] BYREF
  int v84; // [rsp+64h] [rbp-9Ch]
  int *v85; // [rsp+68h] [rbp-98h]
  unsigned __int64 v86; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v87; // [rsp+78h] [rbp-88h]
  int v88; // [rsp+7Ch] [rbp-84h]
  int v89; // [rsp+80h] [rbp-80h]
  __int64 v90; // [rsp+88h] [rbp-78h] BYREF
  __int64 v91; // [rsp+90h] [rbp-70h]
  int v92; // [rsp+A0h] [rbp-60h] BYREF
  int v93; // [rsp+A4h] [rbp-5Ch]
  int v94; // [rsp+A8h] [rbp-58h]
  int v95; // [rsp+ACh] [rbp-54h]
  int v96; // [rsp+B4h] [rbp-4Ch]
  _QWORD v97[10]; // [rsp+C0h] [rbp-40h] BYREF

  v5 = (struct tagSCROLLINFO *)&v92;
  v6 = *((_QWORD *)a1 + 5);
  v7 = 0;
  v8 = (struct tagSCROLLINFO *)a4;
  v85 = &v92;
  v9 = a2;
  v10 = a1;
  if ( (*(_DWORD *)(v6 + 232) & 0x800) != 0 )
    return 0LL;
  v11 = *(_WORD *)(v6 + 42);
  v12 = 1;
  if ( v11 != 666 )
  {
    if ( v11 )
      return 0LL;
    if ( (_DWORD)a2 != 1 )
      return xxxDefWindowProc(v10, a2, (__int64)a3, a4);
    v14 = *(_DWORD *)(v6 + 252);
    v15 = *(unsigned __int16 *)(gpsi + 328LL);
    if ( v14 + 312 >= v15 )
    {
      v21 = *((_QWORD *)a1 + 34);
      if ( !v21 )
      {
LABEL_25:
        *(_WORD *)(*((_QWORD *)v10 + 5) + 42LL) = 666;
        goto LABEL_26;
      }
      v22 = 0LL;
      if ( v14 )
      {
        while ( !*(_BYTE *)((unsigned int)v22 + v21) )
        {
          v22 = (unsigned int)(v22 + 1);
          if ( (unsigned int)v22 >= v14 )
            goto LABEL_23;
        }
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
      }
LABEL_23:
      memset(*((void **)v10 + 34), 0, *(unsigned int *)(*((_QWORD *)v10 + 5) + 252LL));
    }
    else
    {
      if ( *(_DWORD *)(v6 + 200) + v14 + 312 < v15 )
        return 0LL;
      v16 = v15 - 312;
      v17 = Win32AllocPoolZInit(v15 - 312, 1937208149LL);
      v86 = v17;
      if ( !v17 )
        return 0LL;
      v18 = *((_QWORD *)v10 + 34);
      if ( v18 )
      {
        v19 = 0LL;
        v20 = *(_DWORD *)(*((_QWORD *)v10 + 5) + 252LL);
        if ( v20 )
        {
          while ( !*(_BYTE *)((unsigned int)v19 + v18) )
          {
            v19 = (unsigned int)(v19 + 1);
            if ( (unsigned int)v19 >= v20 )
              goto LABEL_15;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
        }
LABEL_15:
        Win32FreePool(*((_QWORD *)v10 + 34));
        v17 = v86;
      }
      *((_QWORD *)v10 + 34) = v17;
      *(_DWORD *)(*((_QWORD *)v10 + 5) + 252LL) = v16;
    }
    v5 = (struct tagSCROLLINFO *)&v92;
    goto LABEL_25;
  }
LABEL_26:
  v23 = (struct tagWND **)*((_QWORD *)v10 + 34);
  *v23 = v10;
  v24 = *((_QWORD *)v10 + 5);
  v25 = *(unsigned __int8 *)(v24 + 28);
  v26 = *(_BYTE *)(v24 + 28);
  LODWORD(v86) = v26;
  v27 = v26 & 0x18;
  v89 = v27;
  if ( v9 <= 0xE2 )
  {
    if ( v9 != 226 )
    {
      if ( v9 <= 0x14 )
      {
        if ( v9 != 20 )
        {
          switch ( v9 )
          {
            case 1u:
              if ( v8 )
              {
                v34 = *((_DWORD *)v8 + 11);
                v35 = *(_BYTE *)(v24 + 31) & 0xC0;
                v36 = *((_DWORD *)v8 + 9);
                v37 = *((_DWORD *)v8 + 10);
                v38 = *((_DWORD *)v8 + 8);
                LODWORD(v85) = v36;
                if ( v34 == 0x80000000 )
                {
                  if ( v35 )
                    v34 = 0;
                  else
                    v34 = *(_DWORD *)(v24 + 88);
                }
                v81 = v34;
                if ( v37 == 0x80000000 )
                {
                  if ( v35 )
                    v37 = 0;
                  else
                    v37 = *(_DWORD *)(v24 + 92);
                }
                v83 = v37;
                if ( v36 == 0x80000000 )
                {
                  if ( v35 )
                    v36 = 0;
                  else
                    v36 = *(_DWORD *)(v24 + 96) - *(_DWORD *)(v24 + 88);
                  LODWORD(v85) = v36;
                }
                if ( v38 == 0x80000000 )
                {
                  if ( v35 )
                    v38 = 0;
                  else
                    v38 = *(_DWORD *)(v24 + 100) - *(_DWORD *)(v24 + 92);
                }
                v28 = (*(_BYTE *)(v24 + 21) & 2) == 0;
                v82 = v36 + v34;
                v80 = v37 + v38;
                if ( v28 )
                {
                  *(_DWORD *)(v24 + 28) &= 0xFFCFFFFF;
                  v10 = *v23;
                }
                if ( !v27 )
                {
                  v39 = *(_DWORD *)v8;
                  v40 = (unsigned __int16)*(_DWORD *)v8;
                  *((_DWORD *)v23 + 4) = v40;
                  *((_DWORD *)v23 + 7) = v40;
                  *((_DWORD *)v23 + 5) = HIWORD(v39);
                  v41 = *(_BYTE *)(*((_QWORD *)v10 + 5) + 28LL) & 1;
                  *((_DWORD *)v23 + 6) = 0;
                  *((_DWORD *)v23 + 2) = v41;
                }
                if ( (*(_DWORD *)(*((_QWORD *)v10 + 5) + 28LL) & 0x8000000) != 0 )
                  *((_DWORD *)v23 + 3) = 3;
                if ( (v86 & 6) != 0 )
                {
                  DpiForSystem = GetDpiForSystem();
                  if ( v89 )
                  {
                    DpiDependentMetric = GetDpiDependentMetric(0LL, DpiForSystem);
                    v44 = GetDpiForSystem();
                    v45 = GetDpiDependentMetric(1LL, v44);
                    v34 = v82 - DpiDependentMetric;
                    if ( (v86 & 4) == 0 )
                      v34 = v81;
                    v37 = v80 - v45;
                    if ( (v86 & 4) == 0 )
                      v37 = v83;
                    v46 = v37 + v45;
                    v47 = DpiDependentMetric + v34;
                  }
                  else if ( (v86 & 1) != 0 )
                  {
                    v48 = GetDpiDependentMetric(0LL, DpiForSystem);
                    v49 = v48;
                    if ( (v86 & 2) == 0 )
                      v49 = (int)v85;
                    v50 = v82 - v48;
                    v46 = v80;
                    v47 = v34 + v49;
                    if ( (v86 & 2) == 0 )
                      v34 = v50;
                  }
                  else
                  {
                    v51 = GetDpiDependentMetric(1LL, DpiForSystem);
                    v52 = v51;
                    if ( (v86 & 2) != 0 )
                    {
                      v46 = v37 + v51;
                    }
                    else
                    {
                      v46 = v80;
                      v37 = v80 - v52;
                    }
                    v47 = v82;
                  }
                  v86 = __PAIR64__(v37, v34);
                  v87 = v47 - v34;
                  v88 = v46 - v37;
                  ConstrainWindowSIZERECT((int *)&v86);
                  xxxMoveWindow(*v23, (unsigned int)v86, HIDWORD(v86), v87, v88, 0);
                }
              }
              else
              {
                UserSetLastError(87LL, v24);
              }
              return 0LL;
            case 5u:
              if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) != v10 )
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
                       (__int64 *)v10,
                       0xE4u,
                       (HWND)(-(__int64)(a3 == 0LL) & 3),
                       0LL,
                       0,
                       0,
                       0LL,
                       1,
                       1);
            default:
              v28 = v9 == 15;
              goto LABEL_137;
          }
          SBCtlSetup((__int64)v23);
          v29 = *((_DWORD *)v23 + 2);
          v30 = *v23;
          if ( v29 )
            v31 = *(_DWORD *)(*((_QWORD *)v30 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)v30 + 5) + 88LL);
          else
            v31 = *((_DWORD *)v23 + 12);
          if ( v29 )
            v32 = *((_DWORD *)v23 + 12);
          else
            v32 = *(_DWORD *)(*((_QWORD *)v30 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)v30 + 5) + 92LL);
          xxxCreateCaret((__int64)*v23, (HBRUSH)1, v31 - 4, v32 - 4);
          zzzSetSBCaretPos((struct tagSBWND *)v23);
          zzzShowCaret(*v23, v33);
          return 0LL;
        }
        return 1LL;
      }
      if ( v9 != 123 )
      {
        if ( v9 == 132 )
        {
          if ( (v25 & 0x10) != 0 )
            return (((unsigned __int8)~*(_BYTE *)(v24 + 26) ^ (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v10 + 10) + 40LL) + 25LL)) >> 6) & 1 | 0x10;
LABEL_138:
          a4 = (unsigned __int64)v8;
          a2 = v9;
          return xxxDefWindowProc(v10, a2, (__int64)a3, a4);
        }
        if ( v9 == 135 )
          return 1LL;
        if ( v9 != 224 )
        {
          if ( v9 == 225 )
            return *((int *)v23 + 7);
          goto LABEL_138;
        }
        v53 = (int)v8;
        v93 = 4100;
        v96 = (int)a3;
        goto LABEL_116;
      }
      v54 = *((_QWORD *)v10 + 10);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24);
      v90 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v90;
      v91 = v54;
      if ( v54 )
        _InterlockedAdd((volatile signed __int32 *)(v54 + 8), 1u);
      xxxDoScrollMenu(*((struct tagWND **)*v23 + 10), *v23, *((_DWORD *)v23 + 2), (unsigned __int64)v8);
LABEL_103:
      ThreadUnlock1(v57, v56, v58);
      return 0LL;
    }
    v53 = 0;
LABEL_115:
    v94 = (int)a3;
    v95 = (int)v8;
    v93 = 4097;
LABEL_116:
    v92 = 28;
    goto LABEL_117;
  }
  if ( v9 > 0xEB )
  {
    switch ( v9 )
    {
      case 0x100u:
        if ( a3 == (HDC)33 )
        {
          v12 = 2;
        }
        else if ( a3 == (HDC)34 )
        {
          v12 = 3;
        }
        else if ( a3 == (HDC)35 )
        {
          v12 = 7;
        }
        else if ( a3 == (HDC)36 )
        {
          v12 = 6;
        }
        else
        {
          if ( (unsigned __int64)a3 <= 0x24 )
            return 0LL;
          if ( (unsigned __int64)a3 <= 0x26 )
          {
            v12 = 0;
          }
          else if ( (unsigned __int64)a3 > 0x28 )
          {
            return 0LL;
          }
        }
        v79 = v12;
        break;
      case 0x101u:
        if ( (unsigned __int64)a3 - 33 > 7 )
          return 0LL;
        v79 = 8LL;
        break;
      case 0x201u:
        goto LABEL_150;
      case 0x203u:
        v71 = 61488;
        if ( !v27 )
        {
LABEL_150:
          if ( !v27 )
          {
            if ( (*(_BYTE *)(v24 + 30) & 1) != 0 )
            {
              xxxSetFocus(v10, 0LL, v25);
              v10 = *v23;
            }
            zzzHideCaret(v10, v24);
            SBCtlSetup((__int64)v23);
            LOBYTE(v7) = (GetKeyState(0x10u, v72) & 0x8000u) != 0LL;
            xxxSBTrackInit(*v23, (__int64)v8, 0, v7);
            return 0LL;
          }
          v71 = 61440;
        }
        v83 = (__int16)v8;
        v84 = SWORD1(v8);
        ClientToScreen(v10, &v83);
        v73 = *((_QWORD *)v10 + 10);
        v74 = (unsigned __int16)v83 | ((unsigned __int16)v84 << 16);
        v75 = *(_QWORD *)(v73 + 40);
        v76 = (int)v74;
        LOBYTE(a3) = ~*(_BYTE *)(v75 + 26);
        LODWORD(a3) = ((*(unsigned __int8 *)(v75 + 25) ^ (unsigned int)a3) >> 6) & 1;
        v77 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v74);
        v90 = *(_QWORD *)(v77 + 408);
        *(_QWORD *)(v77 + 408) = &v90;
        v91 = v73;
        if ( v73 )
          _InterlockedAdd((volatile signed __int32 *)(v73 + 8), 1u);
        v78 = (__int64 *)*((_QWORD *)*v23 + 10);
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(
          v78,
          0x112u,
          (HWND)(v71 | (unsigned __int64)(unsigned int)((_DWORD)a3 + 7)),
          v76,
          0,
          0,
          0LL,
          1,
          1);
        goto LABEL_103;
      default:
        v28 = v9 == 792;
LABEL_137:
        if ( !v28 )
          goto LABEL_138;
        v66 = a3;
        if ( !a3 )
        {
          v67 = xxxBeginPaint(v10, (__int64)v97);
          v27 = v89;
          a3 = (HDC)v67;
        }
        if ( v27 )
        {
          v68 = *v23;
          v69 = *((_QWORD *)*v23 + 5);
          v70 = *(_BYTE *)(v69 + 30) & 4;
          if ( (*(_BYTE *)(v69 + 30) & 4) == 0 )
          {
            SetOrClrWF(1, (__int64)v68, 3588, 1);
            v68 = *v23;
          }
          DrawSize((__int64)v68, a3, 0, 0);
          if ( !v70 )
            SetOrClrWF(0, (__int64)*v23, 3588, 1);
        }
        else
        {
          SBCtlSetup((__int64)v23);
          xxxDrawSB2(*v23, (struct tagSBCALC *)(v23 + 2), a3, *((_DWORD *)v23 + 2), *((_DWORD *)v23 + 3));
        }
        if ( !v66 )
          xxxEndPaint(*v23, v97);
        return 0LL;
    }
    xxxDoScroll(v10, *((struct tagWND **)v10 + 10), v79, 0LL, *((_DWORD *)v23 + 2));
    return 0LL;
  }
  switch ( v9 )
  {
    case 0xEBu:
      LODWORD(result) = xxxGetScrollBarInfo(v10, -4, (__int64)v8);
      return (int)result;
    case 0xE3u:
      *(_DWORD *)a3 = (struct HDC__)v23[2];
      *(_DWORD *)v8 = *((_DWORD *)v23 + 5);
      return *((unsigned __int16 *)v23 + 8) | (unsigned __int64)(*((unsigned __int16 *)v23 + 10) << 16);
    case 0xE4u:
      LODWORD(result) = xxxEnableSBCtlArrows(v10);
      return (int)result;
    case 0xE6u:
      v53 = 1;
      goto LABEL_115;
  }
  if ( v9 != 233 )
  {
    if ( v9 != 234 )
      goto LABEL_138;
    LODWORD(result) = SBGetParms((__int64)v10, 2, (_DWORD *)v23 + 4, v8);
    return (int)result;
  }
  v5 = v8;
  v85 = (int *)v8;
  v53 = (int)a3;
LABEL_117:
  v81 = 1;
  if ( (unsigned int)SBSetParms((struct tagSBDATA *)(v23 + 2), v5, &v81, &v80) )
    xxxWindowEvent(0x800Eu, (__int64)*v23, -4, 0, 1);
  if ( v53 )
  {
    zzzHideCaret(*v23, v59);
    SBCtlSetup((__int64)v23);
    zzzSetSBCaretPos((struct tagSBWND *)v23);
    if ( (unsigned int)FChildVisible((__int64)*v23) )
    {
      if ( v81 || (v85[1] & 8) == 0 )
        v62 = 0;
      else
        v62 = 3;
      xxxEnableScrollBar((ULONG_PTR)v61, 2LL, v62);
      DCEx = (HDC)_GetDCEx(*v23, 0LL, 65537LL);
      ColorObjects = (HBRUSH)xxxGetColorObjects(*v23, (__int64)DCEx);
      v65 = GreSelectBrush(DCEx, ColorObjects);
      DrawThumb2((__int64)*v23, (_DWORD *)v23 + 4, DCEx, ColorObjects, *((_DWORD *)v23 + 2), *((_DWORD *)v23 + 3));
      GreSelectBrush(DCEx, v65);
      _ReleaseDC(DCEx);
      v61 = *v23;
    }
    zzzShowCaret(v61, v60);
  }
  return v80;
}
