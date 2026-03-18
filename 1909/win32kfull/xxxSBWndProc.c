/*
 * XREFs of xxxSBWndProc @ 0x1C0242580
 * Callers:
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E54B0 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     _FChildVisible @ 0x1C0024018 (_FChildVisible.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C002DFD0 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     xxxEnableScrollBar @ 0x1C002E2A0 (xxxEnableScrollBar.c)
 *     xxxBeginPaint @ 0x1C0039480 (xxxBeginPaint.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     xxxGetScrollBarInfo @ 0x1C004BAF8 (xxxGetScrollBarInfo.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     xxxDefWindowProc @ 0x1C0054BB0 (xxxDefWindowProc.c)
 *     ConstrainWindowSIZERECT @ 0x1C006AAA8 (ConstrainWindowSIZERECT.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxEndPaint @ 0x1C00E01C0 (xxxEndPaint.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00EA6A4 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     DrawThumb2 @ 0x1C00EAF30 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C00EB0B8 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     _GetKeyState @ 0x1C00EBC40 (_GetKeyState.c)
 *     xxxMoveWindow @ 0x1C00ED66C (xxxMoveWindow.c)
 *     zzzDestroyCaret @ 0x1C00F5DE0 (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C00F5EF4 (xxxCreateCaret.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01326E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     xxxValidateClassAndSize @ 0x1C0165268 (xxxValidateClassAndSize.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     zzzHideCaret @ 0x1C023E494 (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C023E4BC (zzzShowCaret.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0240EEC (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C02410D0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C02418E4 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 *     DrawSize @ 0x1C0241934 (DrawSize.c)
 *     SBCtlSetup @ 0x1C0241A70 (SBCtlSetup.c)
 *     _SBGetParms @ 0x1C0241AB8 (_SBGetParms.c)
 *     xxxDoScrollMenu @ 0x1C0241B40 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0242078 (xxxSBTrackInit.c)
 *     _ClientToScreen @ 0x1C0259888 (_ClientToScreen.c)
 */

__int64 __fastcall xxxSBWndProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, HICON a4)
{
  int v4; // edi
  unsigned int v9; // esi
  __int64 result; // rax
  HDC v11; // r8
  _QWORD *v12; // r14
  HDC v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r9
  unsigned __int8 v17; // r10
  int v18; // r10d
  bool v19; // zf
  int v20; // r8d
  struct tagWND *v21; // r10
  int v22; // edx
  int v23; // r9d
  unsigned int v24; // r13d
  int v25; // r9d
  unsigned int v26; // r15d
  __int64 v27; // r8
  int v28; // ecx
  int v29; // eax
  char v30; // r12
  unsigned int DpiForSystem; // edx
  int DpiDependentMetric; // ebx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int v36; // eax
  int v37; // eax
  int v38; // r12d
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  unsigned int v43; // edx
  int v44; // eax
  int v45; // ecx
  int v46; // ebx
  __int64 v47; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  struct tagWND *v52; // r9
  unsigned int v53; // eax
  HDC DCEx; // rsi
  HBRUSH ColorObjects; // rbx
  __int64 v56; // rdi
  HDC v57; // r12
  __int64 v58; // rax
  struct tagWND *v59; // rcx
  __int64 v60; // rax
  int v61; // ebx
  __int64 v62; // r15
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r13
  __int64 v67; // rdx
  __int64 v68; // rax
  struct _LARGE_STRING *v69; // r12
  __int64 v70; // r8
  __int64 v71; // rax
  __int64 *v72; // rcx
  __int64 v73; // r8
  int v74; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v75; // [rsp+58h] [rbp-A8h] BYREF
  HDC v76; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v77; // [rsp+68h] [rbp-98h]
  __int64 v78; // [rsp+70h] [rbp-90h] BYREF
  int v79; // [rsp+78h] [rbp-88h]
  unsigned int v80; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v81; // [rsp+84h] [rbp-7Ch]
  unsigned int v82; // [rsp+88h] [rbp-78h]
  int v83; // [rsp+8Ch] [rbp-74h]
  int v84; // [rsp+90h] [rbp-70h]
  __int64 v85; // [rsp+98h] [rbp-68h] BYREF
  __int64 v86; // [rsp+A0h] [rbp-60h]
  __int64 v87; // [rsp+A8h] [rbp-58h]
  __int64 v88; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v89; // [rsp+B8h] [rbp-48h]
  __int64 v90; // [rsp+C0h] [rbp-40h]
  int v91; // [rsp+C8h] [rbp-38h]
  _QWORD v92[10]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = 0;
  v76 = (HDC)a3;
  v75 = 0LL;
  memset(v92, 0, 0x48uLL);
  v9 = 1;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0;
  if ( !(unsigned int)xxxValidateClassAndSize((__int64)a1, a2, a3, a4, 666, 1, &v78) )
    return v78;
  v11 = v76;
  v12 = (_QWORD *)*((_QWORD *)a1 + 35);
  v13 = v76;
  v14 = 3LL;
  *v12 = a1;
  v15 = *((_QWORD *)a1 + 5);
  v16 = *(unsigned __int8 *)(v15 + 28);
  v17 = *(_BYTE *)(v15 + 28);
  v84 = v17;
  v18 = v17 & 0x18;
  v79 = v18;
  if ( !v18 )
    v13 = v11;
  if ( a2 <= 0xE2 )
  {
    if ( a2 != 226 )
    {
      if ( a2 <= 0x14 )
      {
        if ( a2 != 20 )
        {
          switch ( a2 )
          {
            case 1u:
              if ( a4 )
              {
                v24 = *((_DWORD *)a4 + 11);
                LOBYTE(v14) = *(_BYTE *)(v15 + 31) & 0xC0;
                v25 = *((_DWORD *)a4 + 9);
                v26 = *((_DWORD *)a4 + 10);
                v27 = *((unsigned int *)a4 + 8);
                LODWORD(v75) = v25;
                if ( v24 == 0x80000000 )
                {
                  if ( (_BYTE)v14 )
                    v24 = 0;
                  else
                    v24 = *(_DWORD *)(v15 + 88);
                }
                LODWORD(v76) = v24;
                if ( v26 == 0x80000000 )
                {
                  if ( (_BYTE)v14 )
                    v26 = 0;
                  else
                    v26 = *(_DWORD *)(v15 + 92);
                }
                v77 = v26;
                if ( v25 == 0x80000000 )
                {
                  if ( (_BYTE)v14 )
                    v25 = 0;
                  else
                    v25 = *(_DWORD *)(v15 + 96) - *(_DWORD *)(v15 + 88);
                  LODWORD(v75) = v25;
                }
                if ( (_DWORD)v27 == 0x80000000 )
                {
                  if ( (_BYTE)v14 )
                    v27 = 0LL;
                  else
                    v27 = (unsigned int)(*(_DWORD *)(v15 + 100) - *(_DWORD *)(v15 + 92));
                }
                v19 = (*(_BYTE *)(v15 + 21) & 2) == 0;
                LODWORD(v78) = v25 + v24;
                v74 = v26 + v27;
                if ( v19 )
                {
                  *(_DWORD *)(v15 + 28) &= 0xFFCFFFFF;
                  a1 = (struct tagWND *)*v12;
                }
                if ( !v18 )
                {
                  v28 = *(_DWORD *)a4;
                  a1 = (struct tagWND *)*v12;
                  v29 = (unsigned __int16)*(_DWORD *)a4;
                  *((_DWORD *)v12 + 4) = v29;
                  *((_DWORD *)v12 + 7) = v29;
                  *((_DWORD *)v12 + 5) = HIWORD(v28);
                  v14 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 28LL) & 1;
                  *((_DWORD *)v12 + 6) = 0;
                  *((_DWORD *)v12 + 2) = v14;
                }
                if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL) & 0x8000000) != 0 )
                  *((_DWORD *)v12 + 3) = 3;
                v30 = v84;
                if ( (v84 & 6) != 0 )
                {
                  DpiForSystem = GetDpiForSystem(v14, v15, v27);
                  if ( v79 )
                  {
                    DpiDependentMetric = GetDpiDependentMetric(0LL, DpiForSystem);
                    v36 = GetDpiForSystem(v34, v33, v35);
                    v37 = GetDpiDependentMetric(1LL, v36);
                    v24 = v78 - DpiDependentMetric;
                    v38 = v30 & 4;
                    if ( !v38 )
                      v24 = (unsigned int)v76;
                    v26 = v74 - v37;
                    if ( !v38 )
                      v26 = v77;
                    v39 = v26 + v37;
                    v40 = DpiDependentMetric + v24;
                  }
                  else if ( (v30 & 1) != 0 )
                  {
                    v41 = GetDpiDependentMetric(0LL, DpiForSystem);
                    v42 = v41;
                    if ( (v30 & 2) == 0 )
                      v42 = v75;
                    v43 = v78 - v41;
                    v39 = v74;
                    v40 = v24 + v42;
                    if ( (v30 & 2) == 0 )
                      v24 = v43;
                  }
                  else
                  {
                    v44 = GetDpiDependentMetric(1LL, DpiForSystem);
                    v45 = v44;
                    if ( (v30 & 2) != 0 )
                    {
                      v39 = v26 + v44;
                    }
                    else
                    {
                      v39 = v74;
                      v26 = v74 - v45;
                    }
                    v40 = v78;
                  }
                  v80 = v24;
                  v82 = v40 - v24;
                  v81 = v26;
                  v83 = v39 - v26;
                  ConstrainWindowSIZERECT((int *)&v80);
                  xxxMoveWindow((struct tagWND *)*v12, v80, v81, v82, v83, 0);
                }
              }
              else
              {
                UserSetLastError(87LL, v15, (__int64)v11, v16);
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
                       -(__int64)(v11 == 0LL) & 3,
                       0LL,
                       0,
                       0,
                       0LL,
                       1u,
                       1);
            default:
              v19 = a2 == 15;
              goto LABEL_116;
          }
          SBCtlSetup((__int64)v12);
          v20 = *((_DWORD *)v12 + 2);
          v21 = (struct tagWND *)*v12;
          if ( v20 )
            v22 = *(_DWORD *)(*((_QWORD *)v21 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)v21 + 5) + 88LL);
          else
            v22 = *((_DWORD *)v12 + 12);
          if ( v20 )
            v23 = *((_DWORD *)v12 + 12);
          else
            v23 = *(_DWORD *)(*((_QWORD *)v21 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)v21 + 5) + 92LL);
          xxxCreateCaret(*v12, (HBRUSH)1, v22 - 4, v23 - 4);
          zzzSetSBCaretPos((struct tagSBWND *)v12);
          zzzShowCaret((struct tagWND *)*v12);
          return 0LL;
        }
        return 1LL;
      }
      if ( a2 != 123 )
      {
        if ( a2 == 132 )
        {
          if ( (v16 & 0x10) != 0 )
            return (((unsigned __int8)~*(_BYTE *)(v15 + 26) ^ (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 25LL)) >> 6) & 1 | 0x10;
          return xxxDefWindowProc(a1, a2, (unsigned __int64)v11, a4);
        }
        if ( a2 == 135 )
          return 1LL;
        if ( a2 != 224 )
        {
          if ( a2 == 225 )
            return *((int *)v12 + 7);
          return xxxDefWindowProc(a1, a2, (unsigned __int64)v11, a4);
        }
        v46 = (int)a4;
        HIDWORD(v88) = 4100;
        HIDWORD(v90) = (_DWORD)v11;
        goto LABEL_95;
      }
      v47 = *((_QWORD *)a1 + 13);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, (__int64)v11);
      v85 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v85;
      v86 = v47;
      if ( v47 )
        HMLockObject(v47);
      xxxDoScrollMenu(
        *(struct tagWND **)(*v12 + 104LL),
        (struct tagWND *)*v12,
        *((_DWORD *)v12 + 2),
        (unsigned __int64)a4);
LABEL_82:
      ThreadUnlock1(v50, v49, v51);
      return 0LL;
    }
    v46 = 0;
LABEL_94:
    v89 = __PAIR64__((unsigned int)a4, (unsigned int)v11);
    HIDWORD(v88) = 4097;
LABEL_95:
    a4 = (HICON)&v88;
    LODWORD(v88) = 28;
    goto LABEL_96;
  }
  if ( a2 > 0xEB )
  {
    switch ( a2 )
    {
      case 0x100u:
        if ( v13 == (HDC)33 )
        {
          v9 = 2;
        }
        else if ( v13 == (HDC)34 )
        {
          v9 = 3;
        }
        else if ( v13 == (HDC)35 )
        {
          v9 = 7;
        }
        else if ( v13 == (HDC)36 )
        {
          v9 = 6;
        }
        else
        {
          if ( (unsigned __int64)v13 <= 0x24 )
            return 0LL;
          if ( (unsigned __int64)v13 <= 0x26 )
          {
            v9 = 0;
          }
          else if ( (unsigned __int64)v13 > 0x28 )
          {
            return 0LL;
          }
        }
        v73 = v9;
        break;
      case 0x101u:
        if ( (unsigned __int64)v13 - 33 > 7 )
          return 0LL;
        v73 = 8LL;
        break;
      case 0x201u:
        goto LABEL_129;
      case 0x203u:
        v62 = 61488LL;
        if ( !v18 )
        {
LABEL_129:
          if ( !v18 )
          {
            if ( (*(_BYTE *)(v15 + 30) & 1) != 0 )
            {
              xxxSetFocus(a1, v15, (__int64)v11, v16);
              a1 = (struct tagWND *)*v12;
            }
            zzzHideCaret(a1);
            SBCtlSetup((__int64)v12);
            LOBYTE(v4) = GetKeyState(0x10u, v63, v64, v65) < 0;
            xxxSBTrackInit((struct tagWND *)*v12, (unsigned __int64)a4, 0, v4);
            return 0LL;
          }
          v62 = 61440LL;
        }
        LODWORD(v75) = (__int16)a4;
        HIDWORD(v75) = SWORD1(a4);
        ClientToScreen(a1, &v75);
        v66 = *((_QWORD *)a1 + 13);
        v67 = (unsigned __int16)v75 | (WORD2(v75) << 16);
        v68 = *(_QWORD *)(v66 + 40);
        v69 = (struct _LARGE_STRING *)(int)v67;
        LOBYTE(a1) = ~*(_BYTE *)(v68 + 26);
        LODWORD(a1) = ((*(unsigned __int8 *)(v68 + 25) ^ (unsigned int)a1) >> 6) & 1;
        v71 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v70);
        v85 = *(_QWORD *)(v71 + 408);
        *(_QWORD *)(v71 + 408) = &v85;
        v86 = v66;
        if ( v66 )
          HMLockObject(v66);
        v72 = *(__int64 **)(*v12 + 104LL);
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(v72, 0x112u, v62 | (unsigned int)((_DWORD)a1 + 7), v69, 0, 0, 0LL, 1u, 1);
        goto LABEL_82;
      default:
        v19 = a2 == 792;
LABEL_116:
        if ( !v19 )
          return xxxDefWindowProc(a1, a2, (unsigned __int64)v11, a4);
        v57 = v13;
        if ( !v13 )
        {
          v58 = xxxBeginPaint(a1, (__int64)v92);
          v18 = v79;
          v13 = (HDC)v58;
          v57 = 0LL;
        }
        if ( v18 )
        {
          v59 = (struct tagWND *)*v12;
          v60 = *(_QWORD *)(*v12 + 40LL);
          v61 = *(_BYTE *)(v60 + 30) & 4;
          if ( (*(_BYTE *)(v60 + 30) & 4) == 0 )
          {
            SetOrClrWF(1, (__int64)v59, 0xE04u, 1);
            v59 = (struct tagWND *)*v12;
          }
          DrawSize((__int64)v59, v13, 0LL, 0);
          if ( !v61 )
            SetOrClrWF(0, *v12, 0xE04u, 1);
        }
        else
        {
          SBCtlSetup((__int64)v12);
          xxxDrawSB2(
            (struct tagWND *)*v12,
            (struct tagSBCALC *)(v12 + 2),
            v13,
            *((_DWORD *)v12 + 2),
            *((_DWORD *)v12 + 3));
        }
        if ( !v57 )
          xxxEndPaint((struct tagWND *)*v12, v92);
        return 0LL;
    }
    xxxDoScroll(a1, *((struct tagWND **)a1 + 13), v73, 0LL, *((_DWORD *)v12 + 2));
    return 0LL;
  }
  switch ( a2 )
  {
    case 0xEBu:
      LODWORD(result) = xxxGetScrollBarInfo((__int64 *)a1, -4, (__int64)a4);
      return (int)result;
    case 0xE3u:
      *(_DWORD *)v11 = (struct HDC__)v12[2];
      *(_DWORD *)a4 = *(_DWORD *)(HICON)((int)v12 + 20);
      return *((unsigned __int16 *)v12 + 8) | ((unsigned __int64)*((unsigned __int16 *)v12 + 10) << 16);
    case 0xE4u:
      LODWORD(result) = xxxEnableSBCtlArrows(a1);
      return (int)result;
    case 0xE6u:
      v46 = 1;
      goto LABEL_94;
  }
  if ( a2 != 233 )
  {
    if ( a2 != 234 )
      return xxxDefWindowProc(a1, a2, (unsigned __int64)v11, a4);
    LODWORD(result) = SBGetParms((__int64)a1, 2, (_DWORD *)v12 + 4, a4);
    return (int)result;
  }
  v46 = (int)v11;
LABEL_96:
  LODWORD(v76) = 1;
  if ( (unsigned int)SBSetParms((struct tagSBDATA *)(v12 + 2), (struct tagSCROLLINFO *)a4, (int *)&v76, &v74) )
    xxxWindowEvent(0x800Eu, (struct tagWND *)*v12, 4294967292LL, 0, 1);
  if ( v46 )
  {
    zzzHideCaret((struct tagWND *)*v12);
    SBCtlSetup((__int64)v12);
    zzzSetSBCaretPos((struct tagSBWND *)v12);
    if ( (unsigned int)FChildVisible(*v12) )
    {
      if ( (_DWORD)v76 || ((_DWORD)a4[1] & 8) == 0 )
        v53 = 0;
      else
        v53 = 3;
      xxxEnableScrollBar((ULONG_PTR)v52, 2LL, v53);
      DCEx = (HDC)_GetDCEx(*v12, 0LL, 65537LL);
      ColorObjects = (HBRUSH)xxxGetColorObjects((struct tagWND *)*v12, (unsigned __int64)DCEx);
      v56 = GreSelectBrush(DCEx, ColorObjects);
      DrawThumb2(*v12, (_DWORD *)v12 + 4, DCEx, ColorObjects, *((_DWORD *)v12 + 2), *((_DWORD *)v12 + 3));
      GreSelectBrush(DCEx, v56);
      _ReleaseDC(DCEx);
      v52 = (struct tagWND *)*v12;
    }
    zzzShowCaret(v52);
  }
  return v74;
}
