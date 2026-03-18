/*
 * XREFs of ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC
 * Callers:
 *     xxxMoveSize @ 0x1C0201A40 (xxxMoveSize.c)
 * Callees:
 *     CkptRestore @ 0x1C0014440 (CkptRestore.c)
 *     GetMonitorRect @ 0x1C00145DC (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C001461C (GetMonitorWorkRect.c)
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     SetMinimize @ 0x1C0014C84 (SetMinimize.c)
 *     xxxReleaseCapture @ 0x1C001D160 (xxxReleaseCapture.c)
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C008A0A0 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     RecreateRedirectionBitmap @ 0x1C00CC328 (RecreateRedirectionBitmap.c)
 *     _GetKeyState @ 0x1C00EBC40 (_GetKeyState.c)
 *     _GetMessagePos @ 0x1C00F1E60 (_GetMessagePos.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C00FD4A0 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     zzzLockWindowUpdate2 @ 0x1C0134CFC (zzzLockWindowUpdate2.c)
 *     bSetDevDragRect @ 0x1C0139C20 (bSetDevDragRect.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01E7694 (TransformRegionBetweenCoordinateSpaces.c)
 *     ?IsSizingLEFT@@YAEH@Z @ 0x1C01FA944 (-IsSizingLEFT@@YAEH@Z.c)
 *     ?IsSizingRIGHT@@YAEH@Z @ 0x1C01FA960 (-IsSizingRIGHT@@YAEH@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01FA97C (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C01FB614 (-TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FB934 (-UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FC9D4 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01FF9E4 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxDrawDragRect @ 0x1C02006B4 (xxxDrawDragRect.c)
 *     TransformVector @ 0x1C02061C0 (TransformVector.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0211E44 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 */

void __fastcall xxxMS_TrackMove(
        unsigned __int64 *a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct _MOVESIZEDATA *a5)
{
  int v7; // r14d
  __int64 v8; // rdx
  int v9; // edx
  int v10; // eax
  __int128 v11; // xmm1
  unsigned int v12; // edx
  int v13; // r12d
  int v14; // r13d
  __int16 KeyState; // ax
  __int64 v16; // r8
  __int64 v17; // rdx
  _BOOL8 v18; // rcx
  __int64 v19; // r8
  bool v20; // zf
  unsigned int v21; // eax
  int v22; // eax
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  int v30; // r9d
  unsigned __int64 v31; // r15
  unsigned int MessagePos; // eax
  __int64 v33; // r8
  __int16 v34; // ax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // edi
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // ebx
  __int64 v43; // r8
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v45; // ecx
  LONG y; // edx
  int v47; // r9d
  int v48; // r8d
  __int64 v49; // r8
  int v50; // eax
  __int64 DesktopWindow; // rax
  __int64 v52; // rdx
  int v53; // r15d
  int v54; // r12d
  __int64 v55; // rax
  struct tagRECT *v56; // r13
  __int64 v57; // rcx
  char v58; // cl
  char v59; // al
  _DWORD *v60; // rax
  struct tagRECT v61; // xmm0
  __int64 *v62; // rbx
  __int64 v63; // rcx
  int v64; // eax
  int v65; // ecx
  int v66; // r15d
  bool v67; // al
  __int64 v68; // r8
  __int64 v69; // rcx
  char v70; // r12
  unsigned int v71; // eax
  int v72; // r12d
  unsigned int v73; // eax
  __int64 v74; // r14
  struct tagRECT v75; // xmm0
  unsigned __int64 v76; // r11
  int v77; // ecx
  int v78; // r9d
  int v79; // r11d
  int v80; // r9d
  int v81; // r11d
  __int64 v82; // rax
  __int64 v83; // r13
  unsigned __int64 v84; // r15
  int v85; // eax
  _OWORD *v86; // rax
  int v87; // ecx
  int v88; // eax
  _OWORD *MonitorWorkRect; // rax
  __int64 v90; // rcx
  unsigned __int64 v91; // rdx
  int v92; // ecx
  int v93; // eax
  _OWORD *MonitorRect; // rax
  int v95; // ecx
  __int64 v96; // rax
  int v97; // eax
  unsigned int v98; // ecx
  int v99; // ecx
  int v100; // [rsp+20h] [rbp-51h]
  int v101; // [rsp+20h] [rbp-51h]
  unsigned __int64 v102; // [rsp+30h] [rbp-41h] BYREF
  int v103; // [rsp+38h] [rbp-39h]
  unsigned __int64 v104; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 v105; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT v106; // [rsp+50h] [rbp-21h] BYREF
  __int128 v107; // [rsp+60h] [rbp-11h] BYREF
  __int64 v108; // [rsp+70h] [rbp-1h] BYREF
  __int64 v109; // [rsp+78h] [rbp+7h]

  *(_QWORD *)&v107 = a3;
  v102 = a4;
  v108 = 0LL;
  v109 = 0LL;
  LODWORD(v105) = (__int16)a4;
  HIDWORD(v105) = SWORD1(a4);
  v7 = 1;
  v8 = (unsigned int)(a2 - 256);
  if ( (_DWORD)v8 )
  {
    v8 = (unsigned int)(v8 - 4);
    if ( (_DWORD)v8 )
    {
      v9 = v8 - 252;
      if ( v9 )
      {
        if ( v9 != 2 )
          return;
        xxxTM_MoveDragRect(a5, a4);
        v10 = *((_DWORD *)a5 + 49);
        if ( (v10 & 0x2000000) != 0 )
        {
          v11 = *(_OWORD *)((char *)a5 + 56);
          *(_OWORD *)((char *)a5 + 40) = *(_OWORD *)((char *)a5 + 72);
          *(_OWORD *)((char *)a5 + 24) = v11;
        }
        *((_DWORD *)a5 + 49) = v10 & 0xFFFFFFFD;
        goto LABEL_69;
      }
      v12 = a4;
LABEL_9:
      xxxTM_MoveDragRect(a5, v12);
      return;
    }
  }
  v13 = 0;
  v14 = 0;
  KeyState = GetKeyState(0x11u, v8, a3, a4);
  v17 = 0LL;
  v18 = KeyState < 0;
  if ( a3 > 0x28 )
    return;
  if ( (_DWORD)a3 != 13 )
  {
    if ( (_DWORD)a3 == 27 )
    {
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
      if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x10) != 0 )
      {
        xxxDrawDragRect(a5, 0LL, 2LL);
        *(_DWORD *)(gptiCurrent + 480LL) &= ~0x10u;
      }
      UpdateMoveSizeDataForCancelation(a5);
      goto LABEL_74;
    }
    v19 = 0x1C0000000uLL;
    if ( (_DWORD)a3 != 37 )
    {
      if ( (_DWORD)a3 == 38 )
      {
LABEL_17:
        if ( !*((_DWORD *)a5 + 46) )
        {
          v20 = *((_DWORD *)a5 + 45) == 0;
          *((_DWORD *)a5 + 46) = dword_1C02EB654[a3];
LABEL_27:
          if ( !v20 )
          {
            v25 = *((_DWORD *)a5 + 49);
            *((_DWORD *)a5 + 70) &= ~2u;
            *((_DWORD *)a5 + 60) = 4;
            *((_DWORD *)a5 + 49) = v25 & 0xFFFFF8FF;
            MakeArrangedStateObservable(a5);
          }
          *((_QWORD *)a5 + 21) = 0LL;
          goto LABEL_36;
        }
        if ( KeyState < 0
          || (v21 = GetDpiForSystem(v18, 0LL, 0x1C0000000LL),
              v22 = GetDpiDependentMetric(13LL, v21),
              v17 = (unsigned int)(v22 >> 31),
              LODWORD(v17) = v22 % 2,
              v22 / 2 <= 1) )
        {
          v13 = 1;
        }
        else
        {
          DpiForSystem = GetDpiForSystem(v18, v17, v19);
          DpiDependentMetric = GetDpiDependentMetric(13LL, DpiForSystem);
          v17 = (unsigned int)(DpiDependentMetric >> 31);
          LODWORD(v17) = DpiDependentMetric % 2;
          v13 = DpiDependentMetric / 2;
        }
        if ( a3 == 38 )
          v13 = -v13;
        goto LABEL_36;
      }
      if ( (_DWORD)a3 != 39 )
      {
        if ( (_DWORD)a3 != 40 )
          return;
        goto LABEL_17;
      }
    }
    if ( !*((_DWORD *)a5 + 45) )
    {
      v20 = *((_DWORD *)a5 + 46) == 0;
      *((_DWORD *)a5 + 45) = dword_1C02EB654[a3];
      goto LABEL_27;
    }
    if ( KeyState < 0
      || (v26 = GetDpiForSystem(v18, 0LL, 0x1C0000000LL),
          v27 = GetDpiDependentMetric(12LL, v26),
          v17 = (unsigned int)(v27 >> 31),
          LODWORD(v17) = v27 % 2,
          v27 / 2 <= 1) )
    {
      v14 = 1;
    }
    else
    {
      v28 = GetDpiForSystem(v18, v17, v19);
      v29 = GetDpiDependentMetric(12LL, v28);
      v17 = (unsigned int)(v29 >> 31);
      LODWORD(v17) = v29 % 2;
      v14 = v29 / 2;
    }
    if ( a3 == 37 )
      v14 = -v14;
LABEL_36:
    if ( *((_DWORD *)a5 + 44) == 9 )
    {
      v30 = 9;
      v31 = *((unsigned __int16 *)a5 + 12) | ((unsigned __int64)*((unsigned __int16 *)a5 + 14) << 16);
    }
    else
    {
      MessagePos = GetMessagePos(v18, v17, v19);
      v30 = *((_DWORD *)a5 + 44);
      v31 = MessagePos;
    }
    v33 = *((int *)a5 + 45);
    v102 = v31;
    if ( (_DWORD)v33 )
    {
      v34 = v14 + *((_WORD *)a5 + 2 * dword_1C02EB6B8[v33] + 20);
      LOWORD(v102) = v34;
      LODWORD(v31) = v102;
    }
    else
    {
      v34 = v102;
    }
    v35 = *((int *)a5 + 46);
    LOWORD(v103) = v34;
    if ( (_DWORD)v35 )
    {
      WORD1(v102) = v13 + *((_WORD *)a5 + 2 * dword_1C02EB688[v35] + 20);
      LODWORD(v31) = v102;
    }
    if ( v30 != 9 )
    {
      *((_DWORD *)a5 + 44) = v33 + v35;
      xxxSendMessage((ULONG_PTR)a1);
    }
    LODWORD(v105) = (__int16)v103 - *((_DWORD *)a5 + 42);
    HIDWORD(v105) = SWORD1(v31) - *((_DWORD *)a5 + 43);
    v36 = a1[13];
    v37 = v105;
    v104 = v105;
    v38 = *(_QWORD *)(v36 + 40);
    if ( *(_QWORD *)(v38 + 168) )
    {
      v102 = *(_QWORD *)(v38 + 168);
      v39 = TransformRegionBetweenCoordinateSpaces((__int64)a1, v36, (__int64 *)&v102);
      v42 = GrePtInRegion(v102, (unsigned int)v37, HIDWORD(v104));
      if ( v39 )
        GreDeleteObject(v102);
      if ( !v42 )
        goto LABEL_64;
      v37 = v105;
    }
    else if ( !PtInRect((_DWORD *)a5 + 22, v105) )
    {
LABEL_64:
      v12 = v31;
      goto LABEL_9;
    }
    v104 = *((_QWORD *)a5 + 26);
    v102 = v37;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v41, v40, v43);
    LogicalToPhysicalDPIPoint(&v102, &v105, CurrentThreadDpiAwarenessContext, &v104);
    if ( (((_QWORD)v107 - 38LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      v45 = v102;
      if ( (((_QWORD)v107 - 37LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
      {
        y = HIDWORD(v102);
      }
      else
      {
        y = gptCursorAsync->y;
        HIDWORD(v102) = y;
        if ( (_DWORD)v102 == (_DWORD)gptCursorAsync )
        {
          if ( v14 <= 0 )
            v7 = -1;
          v45 = v7 + v102;
          LODWORD(v102) = v7 + v102;
        }
      }
    }
    else
    {
      y = HIDWORD(v102);
      v45 = (unsigned int)gptCursorAsync;
      LODWORD(v102) = (_DWORD)gptCursorAsync;
      if ( HIDWORD(v102) == gptCursorAsync->y )
      {
        if ( v13 <= 0 )
          v7 = -1;
        y = v7 + HIDWORD(v102);
        HIDWORD(v102) += v7;
      }
    }
    zzzInternalSetCursorPos(v45, y, 2, 0);
    goto LABEL_64;
  }
  GetMessagePos(v18, 0LL, v16);
LABEL_69:
  bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
  v47 = *(_DWORD *)(gptiCurrent + 480LL);
  if ( (v47 & 0x10) != 0 )
  {
    v48 = *((_DWORD *)a5 + 49);
    if ( (v48 & 0x800) == 0 || (((v48 & 0x20) != 0) & *(_BYTE *)(a1[5] + 31)) == 0 )
    {
      xxxDrawDragRect(a5, 0LL, ((v48 & 0xFE000000) << 6) | 1);
      v47 = *(_DWORD *)(gptiCurrent + 480LL);
    }
    *(_DWORD *)(gptiCurrent + 480LL) = v47 & 0xFFFFFFEF;
  }
LABEL_74:
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1LL, v49);
  xxxReleaseCapture();
  v50 = *((_DWORD *)a5 + 49) | 8;
  *((_DWORD *)a5 + 49) = v50;
  if ( (v50 & 2) != 0 )
    zzzInternalSetCursorPos(*(_QWORD *)((char *)a5 + 188), HIDWORD(*(_QWORD *)((char *)a5 + 188)), 1, 0);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v52 == DesktopWindow )
  {
    v53 = 0;
    v54 = 0;
  }
  else
  {
    v55 = *(_QWORD *)(v52 + 40);
    v54 = *(_DWORD *)(v55 + 104);
    v53 = *(_DWORD *)(v55 + 108);
  }
  v56 = (struct tagRECT *)((char *)a5 + 24);
  v57 = *((_QWORD *)a5 + 3) - *((_QWORD *)a5 + 17);
  if ( !v57 )
    v57 = *((_QWORD *)a5 + 4) - *((_QWORD *)a5 + 18);
  if ( v57 )
  {
    if ( (unsigned int)xxxCallHook(0, *a1, (__int64)a5 + 24, 5) )
    {
      v61 = *(struct tagRECT *)((char *)a5 + 136);
      *((_QWORD *)a5 + 26) = *((_QWORD *)a5 + 27);
      *v56 = v61;
    }
    else
    {
      v107 = 0uLL;
      v58 = *(_BYTE *)(a1[5] + 31);
      v59 = v58 & 0x20;
      if ( *((_DWORD *)a5 + 44) == 9 )
      {
        if ( v59 )
        {
          LODWORD(v107) = *((_DWORD *)a5 + 34) - v54;
          DWORD2(v107) = *((_DWORD *)a5 + 36) - v54;
          DWORD1(v107) = *((_DWORD *)a5 + 35) - v53;
          HIDWORD(v107) = *((_DWORD *)a5 + 37) - v53;
          v60 = CkptRestore((__int64)a1, &v107);
          if ( v60 )
            v60[12] |= 1u;
        }
      }
      else if ( v59 )
      {
        LODWORD(v107) = *((_DWORD *)a5 + 34) - v54;
        DWORD2(v107) = *((_DWORD *)a5 + 36) - v54;
        DWORD1(v107) = *((_DWORD *)a5 + 35) - v53;
        HIDWORD(v107) = *((_DWORD *)a5 + 37) - v53;
        CkptRestore((__int64)a1, &v107);
        SetMinimize((__int64)a1, 0);
      }
      else if ( (v58 & 1) != 0 )
      {
        SetOrClrWF(0, (__int64)a1, 0xF01u, 1);
      }
    }
  }
  v62 = (__int64 *)((char *)a5 + 24);
  v63 = *(_QWORD *)(a1[13] + 40);
  if ( (*(_BYTE *)(v63 + 26) & 0x40) != 0 )
  {
    v64 = *(_DWORD *)(v63 + 112);
    *(_DWORD *)v62 -= v64;
    *((_DWORD *)a5 + 8) -= v64;
    *((_DWORD *)a5 + 9) -= v53;
    *((_DWORD *)a5 + 7) -= v53;
    v65 = -*(_DWORD *)v62;
    v56->left = -*((_DWORD *)a5 + 8);
    *((_DWORD *)a5 + 8) = v65;
  }
  else
  {
    *(_DWORD *)v62 -= v54;
    *((_DWORD *)a5 + 8) -= v54;
    *((_DWORD *)a5 + 9) -= v53;
    *((_DWORD *)a5 + 7) -= v53;
  }
  if ( a1[13] == GetDesktopWindow((__int64)a1) )
  {
    v66 = *(_BYTE *)(a1[5] + 24) & 0x88;
    v103 = v66;
    v67 = WindowArrangementAllowed((struct tagWND *)a1);
    v69 = a1[5];
    v70 = *(_BYTE *)(v69 + 24);
    if ( v67 )
    {
      if ( v70 >= 0 )
      {
        v72 = 0;
      }
      else
      {
        v73 = GetDpiForSystem(v69, 0LL, v68);
        v72 = GetDpiDependentMetric(22LL, v73);
      }
    }
    else
    {
      v71 = GetDpiForSystem(v69, 0LL, v68);
      v72 = GetDpiDependentMetric(((v70 >> 7) & 0x14u) + 2, v71) - 1;
    }
    *(_QWORD *)&v107 = gpDispInfo;
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v75 = *v56;
      v76 = a1[27];
      v77 = v72 + *((_DWORD *)a5 + 7);
      LODWORD(v104) = v77;
      v106 = v75;
      if ( v76 )
      {
        LODWORD(v102) = 0;
        TransformVector(v76, (unsigned int)&v102, (unsigned int)&v104, 0, 0);
        TransformVector(v79, (unsigned int)&v106, (unsigned int)&v106.top, v78, v78 & v100);
        TransformVector(v81, (unsigned int)&v106.right, (unsigned int)&v106.bottom, v80, v80 & v101);
        v77 = v104;
      }
      v82 = *(_QWORD *)(v107 + 104);
      v102 = v82;
      if ( v82 )
      {
        do
        {
          v83 = *(_QWORD *)(v82 + 40);
          if ( (*(_DWORD *)(v83 + 24) & 1) != 0 )
          {
            v84 = -(__int64)(v66 != 0) & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v77 >= *(_DWORD *)(v84 + v83 + 48) && v77 < *(_DWORD *)(v84 + v83 + 56) )
            {
              if ( !WindowArrangementAllowed((struct tagWND *)a1) )
                goto LABEL_134;
              v85 = *(_DWORD *)(v84 + v83 + 44);
              if ( v106.right >= v85 && v106.right < *(_DWORD *)(v84 + v83 + 52) )
                goto LABEL_134;
              if ( v106.left >= v85 && v106.left < *(_DWORD *)(v84 + v83 + 52) )
                goto LABEL_134;
            }
            v66 = v103;
          }
          v77 = v104;
          v82 = *(_QWORD *)(v102 + 56);
          v102 = v82;
        }
        while ( v82 );
        v56 = (struct tagRECT *)((char *)a5 + 24);
      }
      v74 = MonitorFromRect(v56, 2u, 0);
    }
    else
    {
      v74 = *(_QWORD *)(GetDispInfo(v69, 0LL) + 96);
    }
    if ( WindowArrangementAllowed((struct tagWND *)a1) )
    {
      v90 = *(_QWORD *)(a1[5] + 168);
      if ( v90 && (unsigned int)GreGetRgnBox(v90, &v108) )
      {
        v91 = a1[5];
        v62 = &v108;
        v92 = *((_DWORD *)a5 + 7);
        LODWORD(v108) = v56->left;
        v93 = *((_DWORD *)a5 + 8);
        HIDWORD(v108) += v92 - *(_DWORD *)(v91 + 92);
        LODWORD(v109) = v93;
        HIDWORD(v109) = *((_DWORD *)a5 + 9) + *(_DWORD *)(v91 + 100) - HIDWORD(v109);
      }
      if ( v66 )
        MonitorRect = GetMonitorRect(&v106, v74);
      else
        MonitorRect = GetMonitorWorkRect(&v106, v74);
      v95 = *((_DWORD *)v62 + 1);
      v96 = HIDWORD(*(_QWORD *)MonitorRect);
      if ( v95 < (int)v96 )
      {
        v97 = v96 - v95;
        *((_DWORD *)a5 + 7) += v97;
        *((_DWORD *)a5 + 9) += v97;
      }
    }
    else
    {
      if ( v66 )
      {
        v86 = GetMonitorRect(&v106, v74);
        v87 = *((_DWORD *)a5 + 7);
        v88 = HIDWORD(*(_QWORD *)v86) - v72;
        if ( v87 <= v88 )
          v87 = v88;
      }
      else
      {
        MonitorWorkRect = GetMonitorWorkRect(&v106, v74);
        v87 = *((_DWORD *)a5 + 7);
        if ( v87 <= (int)(HIDWORD(*(_QWORD *)MonitorWorkRect) - v72) )
          v87 = HIDWORD(*(_QWORD *)GetMonitorWorkRect(&v107, v74)) - v72;
      }
      *((_DWORD *)a5 + 7) = v87;
    }
  }
LABEL_134:
  if ( IsSizingLEFT(*((_DWORD *)a5 + 44)) || v98 - 3 <= 2 || IsSizingRIGHT(v98) || (unsigned int)(v99 - 6) <= 2 )
    TraceWindowResizeTelemetry((HWND *)a1);
  xxxCommitMoveSize((struct tagWND *)a1, a5);
  if ( !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter((HWND *)a1) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    *(_DWORD *)(a1[5] + 232) &= ~0x80000u;
    RecreateRedirectionBitmap((struct tagWND *)a1, 0, 0, 0, 0, 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
}
