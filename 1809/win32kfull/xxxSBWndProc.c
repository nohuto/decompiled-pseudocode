/*
 * XREFs of xxxSBWndProc @ 0x1C022A0D0
 * Callers:
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01D07D0 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxBeginPaint @ 0x1C001DEFC (xxxBeginPaint.c)
 *     xxxGetScrollBarInfo @ 0x1C001FD30 (xxxGetScrollBarInfo.c)
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ConstrainWindowSIZERECT @ 0x1C0072218 (ConstrainWindowSIZERECT.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00788C4 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     xxxEnableScrollBar @ 0x1C0078B70 (xxxEnableScrollBar.c)
 *     xxxDefWindowProc @ 0x1C00B4F70 (xxxDefWindowProc.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00CE0A8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     zzzDestroyCaret @ 0x1C00DD7F0 (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C00DDB70 (xxxCreateCaret.c)
 *     xxxEndPaint @ 0x1C00FD91C (xxxEndPaint.c)
 *     _FChildVisible @ 0x1C0102B1C (_FChildVisible.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C01061C8 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     DrawThumb2 @ 0x1C0106B08 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0106C88 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     _GetKeyState @ 0x1C0107788 (_GetKeyState.c)
 *     xxxMoveWindow @ 0x1C010B090 (xxxMoveWindow.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     xxxValidateClassAndSize @ 0x1C015D924 (xxxValidateClassAndSize.c)
 *     zzzHideCaret @ 0x1C0226E04 (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C0226E2C (zzzShowCaret.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0228A8C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0228C4C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C0229458 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 *     DrawSize @ 0x1C02294A8 (DrawSize.c)
 *     SBCtlSetup @ 0x1C02295E4 (SBCtlSetup.c)
 *     _SBGetParms @ 0x1C0229624 (_SBGetParms.c)
 *     xxxDoScrollMenu @ 0x1C02296AC (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0229BD0 (xxxSBTrackInit.c)
 *     _ClientToScreen @ 0x1C0241238 (_ClientToScreen.c)
 */

unsigned __int64 __fastcall xxxSBWndProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  struct tagWND *v4; // rbx
  int v5; // edi
  int *v6; // r12
  unsigned int v8; // esi
  unsigned __int64 result; // rax
  HDC v10; // r8
  struct tagWND **v11; // r14
  HDC v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int8 v15; // r10
  int v16; // r10d
  bool v17; // zf
  int v18; // r8d
  struct tagWND *v19; // r10
  int v20; // edx
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // r13d
  char v26; // cl
  int v27; // r9d
  int v28; // r15d
  int v29; // r8d
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  char v33; // r12
  __int64 DpiForSystem; // rdx
  __int64 v35; // r8
  int DpiDependentMetric; // ebx
  unsigned int v37; // eax
  __int64 v38; // r8
  int v39; // eax
  int v40; // r12d
  int v41; // eax
  unsigned int v42; // ecx
  int v43; // ecx
  unsigned int v44; // eax
  int v45; // eax
  int v46; // ecx
  int v47; // ebx
  __int64 v48; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  struct tagWND *v57; // r9
  unsigned int v58; // eax
  HDC DCEx; // rsi
  HBRUSH ColorObjects; // rbx
  __int64 v61; // rdi
  HDC v62; // r12
  __int64 v63; // rax
  struct tagWND *v64; // rcx
  __int64 v65; // rax
  int v66; // ebx
  __int64 v67; // r13
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r15
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // r12
  __int64 v75; // rax
  __int64 *v76; // rcx
  __int64 v77; // r8
  int v78; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v79; // [rsp+54h] [rbp-ACh]
  int v80; // [rsp+58h] [rbp-A8h] BYREF
  int v81; // [rsp+5Ch] [rbp-A4h]
  HDC v82; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v83; // [rsp+68h] [rbp-98h] BYREF
  int v84; // [rsp+70h] [rbp-90h]
  unsigned int v85; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v86; // [rsp+7Ch] [rbp-84h]
  unsigned int v87; // [rsp+80h] [rbp-80h]
  int v88; // [rsp+84h] [rbp-7Ch]
  int v89; // [rsp+88h] [rbp-78h]
  __int64 v90; // [rsp+90h] [rbp-70h] BYREF
  __int64 v91; // [rsp+98h] [rbp-68h]
  int v92; // [rsp+A8h] [rbp-58h] BYREF
  int v93; // [rsp+ACh] [rbp-54h]
  int v94; // [rsp+B0h] [rbp-50h]
  int v95; // [rsp+B4h] [rbp-4Ch]
  int v96; // [rsp+BCh] [rbp-44h]
  _QWORD v97[10]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = a1;
  v82 = (HDC)a3;
  v5 = 0;
  v6 = (int *)a4;
  v8 = 1;
  if ( !(unsigned int)xxxValidateClassAndSize(a1, a2, a3, a4, 666, 1, &v83) )
    return v83;
  v10 = v82;
  v11 = (struct tagWND **)*((_QWORD *)v4 + 33);
  v12 = v82;
  *v11 = v4;
  v13 = *((_QWORD *)v4 + 5);
  v14 = *(unsigned __int8 *)(v13 + 28);
  v15 = *(_BYTE *)(v13 + 28);
  v89 = v15;
  v16 = v15 & 0x18;
  v84 = v16;
  if ( !v16 )
    v12 = v10;
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
              if ( v6 )
              {
                v25 = v6[11];
                v26 = *(_BYTE *)(v13 + 31) & 0xC0;
                v27 = v6[9];
                v28 = v6[10];
                v29 = v6[8];
                LODWORD(v83) = v27;
                if ( v25 == 0x80000000 )
                {
                  if ( v26 )
                    v25 = 0;
                  else
                    v25 = *(_DWORD *)(v13 + 88);
                }
                LODWORD(v82) = v25;
                if ( v28 == 0x80000000 )
                {
                  if ( v26 )
                    v28 = 0;
                  else
                    v28 = *(_DWORD *)(v13 + 92);
                }
                v80 = v28;
                if ( v27 == 0x80000000 )
                {
                  if ( v26 )
                    v27 = 0;
                  else
                    v27 = *(_DWORD *)(v13 + 96) - *(_DWORD *)(v13 + 88);
                  LODWORD(v83) = v27;
                }
                if ( v29 == 0x80000000 )
                {
                  if ( v26 )
                    v29 = 0;
                  else
                    v29 = *(_DWORD *)(v13 + 100) - *(_DWORD *)(v13 + 92);
                }
                v17 = (*(_BYTE *)(v13 + 21) & 2) == 0;
                v79 = v27 + v25;
                v78 = v28 + v29;
                if ( v17 )
                {
                  *(_DWORD *)(v13 + 28) &= 0xFFCFFFFF;
                  v4 = *v11;
                }
                if ( !v16 )
                {
                  v30 = *v6;
                  v4 = *v11;
                  v31 = (unsigned __int16)*v6;
                  *((_DWORD *)v11 + 4) = v31;
                  *((_DWORD *)v11 + 7) = v31;
                  *((_DWORD *)v11 + 5) = HIWORD(v30);
                  v32 = *(_BYTE *)(*((_QWORD *)v4 + 5) + 28LL) & 1;
                  *((_DWORD *)v11 + 6) = 0;
                  *((_DWORD *)v11 + 2) = v32;
                }
                if ( (*(_DWORD *)(*((_QWORD *)v4 + 5) + 28LL) & 0x8000000) != 0 )
                  *((_DWORD *)v11 + 3) = 3;
                v33 = v89;
                if ( (v89 & 6) != 0 )
                {
                  DpiForSystem = (unsigned int)GetDpiForSystem();
                  if ( v84 )
                  {
                    DpiDependentMetric = GetDpiDependentMetric(0LL, DpiForSystem, v35);
                    v37 = GetDpiForSystem();
                    v39 = GetDpiDependentMetric(1LL, v37, v38);
                    v28 = v78 - v39;
                    v40 = v33 & 4;
                    if ( !v40 )
                      v28 = v80;
                    v25 = v79 - DpiDependentMetric;
                    if ( !v40 )
                      v25 = (unsigned int)v82;
                    v41 = v28 + v39;
                    v42 = DpiDependentMetric + v25;
                  }
                  else if ( (v33 & 1) != 0 )
                  {
                    v43 = GetDpiDependentMetric(0LL, DpiForSystem, v35);
                    v44 = v79 - v43;
                    if ( (v33 & 2) == 0 )
                    {
                      v43 = v83;
                      v25 = v44;
                    }
                    v42 = (_DWORD)v82 + v43;
                    v41 = v78;
                  }
                  else
                  {
                    v45 = GetDpiDependentMetric(1LL, DpiForSystem, v35);
                    v46 = v45;
                    if ( (v33 & 2) != 0 )
                    {
                      v41 = v28 + v45;
                    }
                    else
                    {
                      v41 = v78;
                      v28 = v78 - v46;
                    }
                    v42 = v79;
                  }
                  v85 = v25;
                  v87 = v42 - v25;
                  v86 = v28;
                  v88 = v41 - v28;
                  ConstrainWindowSIZERECT((int *)&v85);
                  xxxMoveWindow(*v11, v85, v86, v87, v88, 0);
                }
              }
              else
              {
                UserSetLastError(87LL, v13, (__int64)v10, v14);
              }
              return 0LL;
            case 5u:
              if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) != v4 )
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
                       (__int64 *)v4,
                       0xE4u,
                       -(__int64)(v10 == 0LL) & 3,
                       0LL,
                       0,
                       0,
                       0LL,
                       1,
                       1);
            default:
              v17 = a2 == 15;
              goto LABEL_114;
          }
          SBCtlSetup((__int64)v11);
          v18 = *((_DWORD *)v11 + 2);
          v19 = *v11;
          if ( v18 )
            v20 = *(_DWORD *)(*((_QWORD *)v19 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)v19 + 5) + 88LL);
          else
            v20 = *((_DWORD *)v11 + 12);
          if ( v18 )
            v21 = *((_DWORD *)v11 + 12);
          else
            v21 = *(_DWORD *)(*((_QWORD *)v19 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)v19 + 5) + 92LL);
          xxxCreateCaret((__int64)*v11, (HSURF)1, v20 - 4, v21 - 4);
          zzzSetSBCaretPos((struct tagSBWND *)v11);
          zzzShowCaret(*v11, v22, v23, v24);
          return 0LL;
        }
        return 1LL;
      }
      if ( a2 != 123 )
      {
        if ( a2 == 132 )
        {
          if ( (v14 & 0x10) != 0 )
            return (((unsigned __int8)~*(_BYTE *)(v13 + 26) ^ (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v4 + 10) + 40LL) + 25LL)) >> 6) & 1 | 0x10;
          return xxxDefWindowProc(v4, a2, (unsigned __int64)v10, (unsigned __int64)v6);
        }
        if ( a2 == 135 )
          return 1LL;
        if ( a2 != 224 )
        {
          if ( a2 == 225 )
            return *((int *)v11 + 7);
          return xxxDefWindowProc(v4, a2, (unsigned __int64)v10, (unsigned __int64)v6);
        }
        v47 = (int)v6;
        v93 = 4100;
        v96 = (int)v10;
        goto LABEL_93;
      }
      v48 = *((_QWORD *)v4 + 10);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
      v90 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v90;
      v91 = v48;
      if ( v48 )
        _InterlockedAdd((volatile signed __int32 *)(v48 + 8), 1u);
      xxxDoScrollMenu(*((struct tagWND **)*v11 + 10), *v11, *((_DWORD *)v11 + 2), (unsigned __int64)v6);
LABEL_80:
      ThreadUnlock1(v51, v50);
      return 0LL;
    }
    v47 = 0;
LABEL_92:
    v94 = (int)v10;
    v95 = (int)v6;
    v93 = 4097;
LABEL_93:
    v6 = &v92;
    v92 = 28;
    goto LABEL_94;
  }
  if ( a2 > 0xEB )
  {
    switch ( a2 )
    {
      case 0x100u:
        if ( v12 == (HDC)33 )
        {
          v8 = 2;
        }
        else if ( v12 == (HDC)34 )
        {
          v8 = 3;
        }
        else if ( v12 == (HDC)35 )
        {
          v8 = 7;
        }
        else if ( v12 == (HDC)36 )
        {
          v8 = 6;
        }
        else
        {
          if ( (unsigned __int64)v12 <= 0x24 )
            return 0LL;
          if ( (unsigned __int64)v12 <= 0x26 )
          {
            v8 = 0;
          }
          else if ( (unsigned __int64)v12 > 0x28 )
          {
            return 0LL;
          }
        }
        v77 = v8;
        break;
      case 0x101u:
        if ( (unsigned __int64)v12 - 33 > 7 )
          return 0LL;
        v77 = 8LL;
        break;
      case 0x201u:
        goto LABEL_127;
      case 0x203u:
        v67 = 61488LL;
        if ( !v16 )
        {
LABEL_127:
          if ( !v16 )
          {
            if ( (*(_BYTE *)(v13 + 30) & 1) != 0 )
            {
              xxxSetFocus(v4, v13, (__int64)v10, v14);
              v4 = *v11;
            }
            zzzHideCaret(v4, v13, (__int64)v10, v14);
            SBCtlSetup((__int64)v11);
            LOBYTE(v5) = GetKeyState(0x10u, v68, v69, v70) < 0;
            xxxSBTrackInit(*v11, (unsigned __int64)v6, 0, v5);
            return 0LL;
          }
          v67 = 61440LL;
        }
        v80 = (__int16)v6;
        v81 = SWORD1(v6);
        ClientToScreen(v4, &v80);
        v71 = *((_QWORD *)v4 + 10);
        v72 = (unsigned __int16)v80 | ((unsigned __int16)v81 << 16);
        v73 = *(_QWORD *)(v71 + 40);
        v74 = (int)v72;
        LOBYTE(v4) = ~*(_BYTE *)(v73 + 26);
        LODWORD(v4) = ((*(unsigned __int8 *)(v73 + 25) ^ (unsigned int)v4) >> 6) & 1;
        v75 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v72);
        v90 = *(_QWORD *)(v75 + 416);
        *(_QWORD *)(v75 + 416) = &v90;
        v91 = v71;
        if ( v71 )
          _InterlockedAdd((volatile signed __int32 *)(v71 + 8), 1u);
        v76 = (__int64 *)*((_QWORD *)*v11 + 10);
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(v76, 0x112u, v67 | (unsigned int)((_DWORD)v4 + 7), v74, 0, 0, 0LL, 1, 1);
        goto LABEL_80;
      default:
        v17 = a2 == 792;
LABEL_114:
        if ( !v17 )
          return xxxDefWindowProc(v4, a2, (unsigned __int64)v10, (unsigned __int64)v6);
        v62 = v12;
        if ( !v12 )
        {
          v63 = xxxBeginPaint(v4, (__int64)v97);
          v16 = v84;
          v12 = (HDC)v63;
          v62 = 0LL;
        }
        if ( v16 )
        {
          v64 = *v11;
          v65 = *((_QWORD *)*v11 + 5);
          v66 = *(_BYTE *)(v65 + 30) & 4;
          if ( (*(_BYTE *)(v65 + 30) & 4) == 0 )
          {
            SetOrClrWF(1, (__int64)v64, 0xE04u, 1);
            v64 = *v11;
          }
          DrawSize((__int64)v64, v12, 0, 0);
          if ( !v66 )
            SetOrClrWF(0, (__int64)*v11, 0xE04u, 1);
        }
        else
        {
          SBCtlSetup((__int64)v11);
          xxxDrawSB2(*v11, (struct tagSBCALC *)(v11 + 2), v12, *((_DWORD *)v11 + 2), *((_DWORD *)v11 + 3));
        }
        if ( !v62 )
          xxxEndPaint(*v11, v97);
        return 0LL;
    }
    xxxDoScroll(v4, *((struct tagWND **)v4 + 10), v77, 0LL, *((_DWORD *)v11 + 2));
    return 0LL;
  }
  switch ( a2 )
  {
    case 0xEBu:
      LODWORD(result) = xxxGetScrollBarInfo((ULONG_PTR)v4, -4, (__int64)v6);
      return (int)result;
    case 0xE3u:
      *(_DWORD *)v10 = (struct HDC__)v11[2];
      *v6 = *((_DWORD *)v11 + 5);
      return *((unsigned __int16 *)v11 + 8) | ((unsigned __int64)*((unsigned __int16 *)v11 + 10) << 16);
    case 0xE4u:
      LODWORD(result) = xxxEnableSBCtlArrows(v4);
      return (int)result;
    case 0xE6u:
      v47 = 1;
      goto LABEL_92;
  }
  if ( a2 != 233 )
  {
    if ( a2 != 234 )
      return xxxDefWindowProc(v4, a2, (unsigned __int64)v10, (unsigned __int64)v6);
    LODWORD(result) = SBGetParms((__int64)v4, 2, (_DWORD *)v11 + 4, v6);
    return (int)result;
  }
  v47 = (int)v10;
LABEL_94:
  LODWORD(v82) = 1;
  if ( (unsigned int)SBSetParms((struct tagSBDATA *)(v11 + 2), (struct tagSCROLLINFO *)v6, (int *)&v82, &v78) )
    xxxWindowEvent(0x800Eu, (__int64)*v11, -4, 0, 1u);
  if ( v47 )
  {
    zzzHideCaret(*v11, v52, v53, v54);
    SBCtlSetup((__int64)v11);
    zzzSetSBCaretPos((struct tagSBWND *)v11);
    if ( (unsigned int)FChildVisible((__int64)*v11) )
    {
      if ( (_DWORD)v82 || (v6[1] & 8) == 0 )
        v58 = 0;
      else
        v58 = 3;
      xxxEnableScrollBar((ULONG_PTR)v57, 2LL, v58);
      DCEx = (HDC)_GetDCEx(*v11, 0LL, 65537LL);
      ColorObjects = (HBRUSH)xxxGetColorObjects(*v11, (unsigned __int64)DCEx);
      v61 = GreSelectBrush(DCEx, ColorObjects);
      DrawThumb2((__int64)*v11, (_DWORD *)v11 + 4, DCEx, ColorObjects, *((_DWORD *)v11 + 2), *((_DWORD *)v11 + 3));
      GreSelectBrush(DCEx, v61);
      _ReleaseDC(DCEx);
      v57 = *v11;
    }
    zzzShowCaret(v57, v55, v56, (__int64)v57);
  }
  return v78;
}
