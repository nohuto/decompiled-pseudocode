/*
 * XREFs of ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC
 * Callers:
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 * Callees:
 *     zzzLockWindowUpdate2 @ 0x1C00139B8 (zzzLockWindowUpdate2.c)
 *     xxxReleaseCapture @ 0x1C001C460 (xxxReleaseCapture.c)
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00456D0 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     bSetDevDragRect @ 0x1C00816E0 (bSetDevDragRect.c)
 *     SetMinimize @ 0x1C0084C28 (SetMinimize.c)
 *     CkptRestore @ 0x1C0090C80 (CkptRestore.c)
 *     GetMonitorRect @ 0x1C0090E1C (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C0090E5C (GetMonitorWorkRect.c)
 *     _MonitorFromRect @ 0x1C0091E40 (_MonitorFromRect.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00ED748 (RecreateRedirectionBitmap.c)
 *     _GetKeyState @ 0x1C0110D00 (_GetKeyState.c)
 *     _GetMessagePos @ 0x1C0117EA0 (_GetMessagePos.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C01224A0 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01E7814 (TransformRegionBetweenCoordinateSpaces.c)
 *     ?IsSizingLEFT@@YAEH@Z @ 0x1C01FABF4 (-IsSizingLEFT@@YAEH@Z.c)
 *     ?IsSizingRIGHT@@YAEH@Z @ 0x1C01FAC10 (-IsSizingRIGHT@@YAEH@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01FAC2C (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C01FB8C4 (-TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FBBE4 (-UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FCC84 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01FFC94 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxDrawDragRect @ 0x1C0200964 (xxxDrawDragRect.c)
 *     TransformVector @ 0x1C0206470 (TransformVector.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0212384 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
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
  __int64 v17; // r9
  __int64 v18; // rdx
  _BOOL8 v19; // rcx
  __int64 v20; // r8
  bool v21; // zf
  unsigned int v22; // eax
  int v23; // eax
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  int v26; // eax
  unsigned int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  int v31; // r9d
  unsigned __int64 v32; // r15
  unsigned int MessagePos; // eax
  __int64 v34; // r8
  __int16 v35; // ax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // rax
  int v40; // edi
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // ebx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v47; // ecx
  LONG y; // edx
  int v49; // r9d
  int v50; // r8d
  __int64 v51; // r8
  int v52; // eax
  __int64 DesktopWindow; // rax
  __int64 v54; // rdx
  int v55; // r15d
  int v56; // r12d
  __int64 v57; // rax
  struct tagRECT *v58; // r13
  __int64 v59; // rcx
  char v60; // cl
  char v61; // al
  _DWORD *v62; // rax
  struct tagRECT v63; // xmm0
  __int64 *v64; // rbx
  __int64 v65; // rcx
  int v66; // eax
  int v67; // ecx
  int v68; // r15d
  bool v69; // al
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  char v73; // r12
  unsigned int v74; // eax
  int v75; // r12d
  unsigned int v76; // eax
  __int64 v77; // r14
  struct tagRECT v78; // xmm0
  unsigned __int64 v79; // r11
  int v80; // ecx
  int v81; // r9d
  int v82; // r11d
  int v83; // r9d
  int v84; // r11d
  __int64 v85; // rax
  __int64 v86; // r13
  unsigned __int64 v87; // r15
  int v88; // eax
  _OWORD *v89; // rax
  int v90; // ecx
  int v91; // eax
  _OWORD *MonitorWorkRect; // rax
  __int64 v93; // rcx
  unsigned __int64 v94; // rdx
  int v95; // ecx
  int v96; // eax
  _OWORD *MonitorRect; // rax
  int v98; // ecx
  __int64 v99; // rax
  int v100; // eax
  unsigned int v101; // ecx
  int v102; // ecx
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  int v106; // [rsp+20h] [rbp-51h]
  int v107; // [rsp+20h] [rbp-51h]
  unsigned __int64 v108; // [rsp+30h] [rbp-41h] BYREF
  int v109; // [rsp+38h] [rbp-39h]
  unsigned __int64 v110; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 v111; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT v112; // [rsp+50h] [rbp-21h] BYREF
  __int128 v113; // [rsp+60h] [rbp-11h] BYREF
  __int64 v114; // [rsp+70h] [rbp-1h] BYREF
  __int64 v115; // [rsp+78h] [rbp+7h]

  *(_QWORD *)&v113 = a3;
  v108 = a4;
  v114 = 0LL;
  v115 = 0LL;
  LODWORD(v111) = (__int16)a4;
  HIDWORD(v111) = SWORD1(a4);
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
  v18 = 0LL;
  v19 = KeyState < 0;
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
    v20 = 0x1C0000000uLL;
    if ( (_DWORD)a3 != 37 )
    {
      if ( (_DWORD)a3 == 38 )
      {
LABEL_17:
        if ( !*((_DWORD *)a5 + 46) )
        {
          v21 = *((_DWORD *)a5 + 45) == 0;
          *((_DWORD *)a5 + 46) = dword_1C02EC024[a3];
LABEL_27:
          if ( !v21 )
          {
            v26 = *((_DWORD *)a5 + 49);
            *((_DWORD *)a5 + 70) &= ~2u;
            *((_DWORD *)a5 + 60) = 4;
            *((_DWORD *)a5 + 49) = v26 & 0xFFFFF8FF;
            MakeArrangedStateObservable(a5);
          }
          *((_QWORD *)a5 + 21) = 0LL;
          goto LABEL_36;
        }
        if ( KeyState < 0
          || (v22 = GetDpiForSystem(v19, 0LL, 0x1C0000000LL, v17),
              v23 = GetDpiDependentMetric(13LL, v22),
              v18 = (unsigned int)(v23 >> 31),
              LODWORD(v18) = v23 % 2,
              v23 / 2 <= 1) )
        {
          v13 = 1;
        }
        else
        {
          DpiForSystem = GetDpiForSystem(v19, v18, v20, v17);
          DpiDependentMetric = GetDpiDependentMetric(13LL, DpiForSystem);
          v18 = (unsigned int)(DpiDependentMetric >> 31);
          LODWORD(v18) = DpiDependentMetric % 2;
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
      v21 = *((_DWORD *)a5 + 46) == 0;
      *((_DWORD *)a5 + 45) = dword_1C02EC024[a3];
      goto LABEL_27;
    }
    if ( KeyState < 0
      || (v27 = GetDpiForSystem(v19, 0LL, 0x1C0000000LL, v17),
          v28 = GetDpiDependentMetric(12LL, v27),
          v18 = (unsigned int)(v28 >> 31),
          LODWORD(v18) = v28 % 2,
          v28 / 2 <= 1) )
    {
      v14 = 1;
    }
    else
    {
      v29 = GetDpiForSystem(v19, v18, v20, v17);
      v30 = GetDpiDependentMetric(12LL, v29);
      v18 = (unsigned int)(v30 >> 31);
      LODWORD(v18) = v30 % 2;
      v14 = v30 / 2;
    }
    if ( a3 == 37 )
      v14 = -v14;
LABEL_36:
    if ( *((_DWORD *)a5 + 44) == 9 )
    {
      v31 = 9;
      v32 = *((unsigned __int16 *)a5 + 12) | ((unsigned __int64)*((unsigned __int16 *)a5 + 14) << 16);
    }
    else
    {
      MessagePos = GetMessagePos(v19, v18, v20, v17);
      v31 = *((_DWORD *)a5 + 44);
      v32 = MessagePos;
    }
    v34 = *((int *)a5 + 45);
    v108 = v32;
    if ( (_DWORD)v34 )
    {
      v35 = v14 + *((_WORD *)a5 + 2 * dword_1C02EC088[v34] + 20);
      LOWORD(v108) = v35;
      LODWORD(v32) = v108;
    }
    else
    {
      v35 = v108;
    }
    v36 = *((int *)a5 + 46);
    LOWORD(v109) = v35;
    if ( (_DWORD)v36 )
    {
      WORD1(v108) = v13 + *((_WORD *)a5 + 2 * dword_1C02EC058[v36] + 20);
      LODWORD(v32) = v108;
    }
    if ( v31 != 9 )
    {
      *((_DWORD *)a5 + 44) = v34 + v36;
      xxxSendMessage((ULONG_PTR)a1);
    }
    LODWORD(v111) = (__int16)v109 - *((_DWORD *)a5 + 42);
    HIDWORD(v111) = SWORD1(v32) - *((_DWORD *)a5 + 43);
    v37 = a1[13];
    v38 = v111;
    v110 = v111;
    v39 = *(_QWORD *)(v37 + 40);
    if ( *(_QWORD *)(v39 + 168) )
    {
      v108 = *(_QWORD *)(v39 + 168);
      v40 = TransformRegionBetweenCoordinateSpaces((__int64)a1, v37, (__int64 *)&v108);
      v43 = GrePtInRegion(v108, (unsigned int)v38, HIDWORD(v110));
      if ( v40 )
        GreDeleteObject(v108);
      if ( !v43 )
        goto LABEL_64;
      v38 = v111;
    }
    else if ( !PtInRect((_DWORD *)a5 + 22, v111) )
    {
LABEL_64:
      v12 = v32;
      goto LABEL_9;
    }
    v110 = *((_QWORD *)a5 + 26);
    v108 = v38;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v42, v41, v44, v45);
    LogicalToPhysicalDPIPoint(&v108, &v111, CurrentThreadDpiAwarenessContext, &v110);
    if ( (((_QWORD)v113 - 38LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      v47 = v108;
      if ( (((_QWORD)v113 - 37LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
      {
        y = HIDWORD(v108);
      }
      else
      {
        y = gptCursorAsync->y;
        HIDWORD(v108) = y;
        if ( (_DWORD)v108 == (_DWORD)gptCursorAsync )
        {
          if ( v14 <= 0 )
            v7 = -1;
          v47 = v7 + v108;
          LODWORD(v108) = v7 + v108;
        }
      }
    }
    else
    {
      y = HIDWORD(v108);
      v47 = (unsigned int)gptCursorAsync;
      LODWORD(v108) = (_DWORD)gptCursorAsync;
      if ( HIDWORD(v108) == gptCursorAsync->y )
      {
        if ( v13 <= 0 )
          v7 = -1;
        y = v7 + HIDWORD(v108);
        HIDWORD(v108) += v7;
      }
    }
    zzzInternalSetCursorPos(v47, y, 2, 0);
    goto LABEL_64;
  }
  GetMessagePos(v19, 0LL, v16, v17);
LABEL_69:
  bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
  v49 = *(_DWORD *)(gptiCurrent + 480LL);
  if ( (v49 & 0x10) != 0 )
  {
    v50 = *((_DWORD *)a5 + 49);
    if ( (v50 & 0x800) == 0 || (((v50 & 0x20) != 0) & *(_BYTE *)(a1[5] + 31)) == 0 )
    {
      xxxDrawDragRect(a5, 0LL, ((v50 & 0xFE000000) << 6) | 1);
      v49 = *(_DWORD *)(gptiCurrent + 480LL);
    }
    *(_DWORD *)(gptiCurrent + 480LL) = v49 & 0xFFFFFFEF;
  }
LABEL_74:
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1u, v51);
  xxxReleaseCapture();
  v52 = *((_DWORD *)a5 + 49) | 8;
  *((_DWORD *)a5 + 49) = v52;
  if ( (v52 & 2) != 0 )
    zzzInternalSetCursorPos(*(_QWORD *)((char *)a5 + 188), HIDWORD(*(_QWORD *)((char *)a5 + 188)), 1, 0);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v54 == DesktopWindow )
  {
    v55 = 0;
    v56 = 0;
  }
  else
  {
    v57 = *(_QWORD *)(v54 + 40);
    v56 = *(_DWORD *)(v57 + 104);
    v55 = *(_DWORD *)(v57 + 108);
  }
  v58 = (struct tagRECT *)((char *)a5 + 24);
  v59 = *((_QWORD *)a5 + 3) - *((_QWORD *)a5 + 17);
  if ( !v59 )
    v59 = *((_QWORD *)a5 + 4) - *((_QWORD *)a5 + 18);
  if ( v59 )
  {
    if ( (unsigned int)xxxCallHook(0, *a1, (__int64)a5 + 24, 5) )
    {
      v63 = *(struct tagRECT *)((char *)a5 + 136);
      *((_QWORD *)a5 + 26) = *((_QWORD *)a5 + 27);
      *v58 = v63;
    }
    else
    {
      v113 = 0uLL;
      v60 = *(_BYTE *)(a1[5] + 31);
      v61 = v60 & 0x20;
      if ( *((_DWORD *)a5 + 44) == 9 )
      {
        if ( v61 )
        {
          LODWORD(v113) = *((_DWORD *)a5 + 34) - v56;
          DWORD2(v113) = *((_DWORD *)a5 + 36) - v56;
          DWORD1(v113) = *((_DWORD *)a5 + 35) - v55;
          HIDWORD(v113) = *((_DWORD *)a5 + 37) - v55;
          v62 = CkptRestore((__int64)a1, &v113);
          if ( v62 )
            v62[12] |= 1u;
        }
      }
      else if ( v61 )
      {
        LODWORD(v113) = *((_DWORD *)a5 + 34) - v56;
        DWORD2(v113) = *((_DWORD *)a5 + 36) - v56;
        DWORD1(v113) = *((_DWORD *)a5 + 35) - v55;
        HIDWORD(v113) = *((_DWORD *)a5 + 37) - v55;
        CkptRestore((__int64)a1, &v113);
        SetMinimize((__int64)a1, 0);
      }
      else if ( (v60 & 1) != 0 )
      {
        SetOrClrWF(0, (__int64)a1, 0xF01u, 1);
      }
    }
  }
  v64 = (__int64 *)((char *)a5 + 24);
  v65 = *(_QWORD *)(a1[13] + 40);
  if ( (*(_BYTE *)(v65 + 26) & 0x40) != 0 )
  {
    v66 = *(_DWORD *)(v65 + 112);
    *(_DWORD *)v64 -= v66;
    *((_DWORD *)a5 + 8) -= v66;
    *((_DWORD *)a5 + 9) -= v55;
    *((_DWORD *)a5 + 7) -= v55;
    v67 = -*(_DWORD *)v64;
    v58->left = -*((_DWORD *)a5 + 8);
    *((_DWORD *)a5 + 8) = v67;
  }
  else
  {
    *(_DWORD *)v64 -= v56;
    *((_DWORD *)a5 + 8) -= v56;
    *((_DWORD *)a5 + 9) -= v55;
    *((_DWORD *)a5 + 7) -= v55;
  }
  if ( a1[13] == GetDesktopWindow((__int64)a1) )
  {
    v68 = *(_BYTE *)(a1[5] + 24) & 0x88;
    v109 = v68;
    v69 = WindowArrangementAllowed((struct tagWND *)a1);
    v72 = a1[5];
    v73 = *(_BYTE *)(v72 + 24);
    if ( v69 )
    {
      if ( v73 >= 0 )
      {
        v75 = 0;
      }
      else
      {
        v76 = GetDpiForSystem(v72, 0LL, v70, v71);
        v75 = GetDpiDependentMetric(22LL, v76);
      }
    }
    else
    {
      v74 = GetDpiForSystem(v72, 0LL, v70, v71);
      v75 = GetDpiDependentMetric(((v73 >> 7) & 0x14u) + 2, v74) - 1;
    }
    *(_QWORD *)&v113 = gpDispInfo;
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v78 = *v58;
      v79 = a1[27];
      v80 = v75 + *((_DWORD *)a5 + 7);
      LODWORD(v110) = v80;
      v112 = v78;
      if ( v79 )
      {
        LODWORD(v108) = 0;
        TransformVector(v79, (unsigned int)&v108, (unsigned int)&v110, 0, 0);
        TransformVector(v82, (unsigned int)&v112, (unsigned int)&v112.top, v81, v81 & v106);
        TransformVector(v84, (unsigned int)&v112.right, (unsigned int)&v112.bottom, v83, v83 & v107);
        v80 = v110;
      }
      v85 = *(_QWORD *)(v113 + 104);
      v108 = v85;
      if ( v85 )
      {
        do
        {
          v86 = *(_QWORD *)(v85 + 40);
          if ( (*(_DWORD *)(v86 + 24) & 1) != 0 )
          {
            v87 = -(__int64)(v68 != 0) & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v80 >= *(_DWORD *)(v87 + v86 + 48) && v80 < *(_DWORD *)(v87 + v86 + 56) )
            {
              if ( !WindowArrangementAllowed((struct tagWND *)a1) )
                goto LABEL_134;
              v88 = *(_DWORD *)(v87 + v86 + 44);
              if ( v112.right >= v88 && v112.right < *(_DWORD *)(v87 + v86 + 52) )
                goto LABEL_134;
              if ( v112.left >= v88 && v112.left < *(_DWORD *)(v87 + v86 + 52) )
                goto LABEL_134;
            }
            v68 = v109;
          }
          v80 = v110;
          v85 = *(_QWORD *)(v108 + 56);
          v108 = v85;
        }
        while ( v85 );
        v58 = (struct tagRECT *)((char *)a5 + 24);
      }
      v77 = MonitorFromRect(v58, 2u, 0);
    }
    else
    {
      v77 = *(_QWORD *)(GetDispInfo(v72, 0LL) + 96);
    }
    if ( WindowArrangementAllowed((struct tagWND *)a1) )
    {
      v93 = *(_QWORD *)(a1[5] + 168);
      if ( v93 && (unsigned int)GreGetRgnBox(v93, &v114) )
      {
        v94 = a1[5];
        v64 = &v114;
        v95 = *((_DWORD *)a5 + 7);
        LODWORD(v114) = v58->left;
        v96 = *((_DWORD *)a5 + 8);
        HIDWORD(v114) += v95 - *(_DWORD *)(v94 + 92);
        LODWORD(v115) = v96;
        HIDWORD(v115) = *((_DWORD *)a5 + 9) + *(_DWORD *)(v94 + 100) - HIDWORD(v115);
      }
      if ( v68 )
        MonitorRect = GetMonitorRect(&v112, v77);
      else
        MonitorRect = GetMonitorWorkRect(&v112, v77);
      v98 = *((_DWORD *)v64 + 1);
      v99 = HIDWORD(*(_QWORD *)MonitorRect);
      if ( v98 < (int)v99 )
      {
        v100 = v99 - v98;
        *((_DWORD *)a5 + 7) += v100;
        *((_DWORD *)a5 + 9) += v100;
      }
    }
    else
    {
      if ( v68 )
      {
        v89 = GetMonitorRect(&v112, v77);
        v90 = *((_DWORD *)a5 + 7);
        v91 = HIDWORD(*(_QWORD *)v89) - v75;
        if ( v90 <= v91 )
          v90 = v91;
      }
      else
      {
        MonitorWorkRect = GetMonitorWorkRect(&v112, v77);
        v90 = *((_DWORD *)a5 + 7);
        if ( v90 <= (int)(HIDWORD(*(_QWORD *)MonitorWorkRect) - v75) )
          v90 = HIDWORD(*(_QWORD *)GetMonitorWorkRect(&v113, v77)) - v75;
      }
      *((_DWORD *)a5 + 7) = v90;
    }
  }
LABEL_134:
  if ( IsSizingLEFT(*((_DWORD *)a5 + 44)) || v101 - 3 <= 2 || IsSizingRIGHT(v101) || (unsigned int)(v102 - 6) <= 2 )
    TraceWindowResizeTelemetry((HWND *)a1);
  xxxCommitMoveSize((struct tagWND *)a1, a5);
  if ( !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter((HWND *)a1) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v103, v104, v105);
    *(_DWORD *)(a1[5] + 232) &= ~0x80000u;
    RecreateRedirectionBitmap((struct tagWND *)a1, 0, 0, 0, 0, 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
}
