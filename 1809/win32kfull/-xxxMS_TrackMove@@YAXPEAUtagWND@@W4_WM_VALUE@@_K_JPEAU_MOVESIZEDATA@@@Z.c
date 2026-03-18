/*
 * XREFs of ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8
 * Callers:
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     RecreateRedirectionBitmap @ 0x1C00107D4 (RecreateRedirectionBitmap.c)
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00A2BBC (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     CkptRestore @ 0x1C00B6EB0 (CkptRestore.c)
 *     GetMonitorWorkRect @ 0x1C00B7058 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C00B709C (GetMonitorRect.c)
 *     SetMinimize @ 0x1C00B8C08 (SetMinimize.c)
 *     xxxReleaseCapture @ 0x1C00D0F20 (xxxReleaseCapture.c)
 *     zzzLockWindowUpdate2 @ 0x1C00D817C (zzzLockWindowUpdate2.c)
 *     _GetMessagePos @ 0x1C00E0550 (_GetMessagePos.c)
 *     _GetKeyState @ 0x1C0107788 (_GetKeyState.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C011A70C (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     bSetDevDragRect @ 0x1C0125040 (bSetDevDragRect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01D2C24 (TransformRegionBetweenCoordinateSpaces.c)
 *     ?IsSizingLEFT@@YAEH@Z @ 0x1C01E5300 (-IsSizingLEFT@@YAEH@Z.c)
 *     ?IsSizingRIGHT@@YAEH@Z @ 0x1C01E531C (-IsSizingRIGHT@@YAEH@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01E5338 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C01E5FEC (-TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E630C (-UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01E7350 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01EA210 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxDrawDragRect @ 0x1C01EABFC (xxxDrawDragRect.c)
 *     TransformVector @ 0x1C01F00F8 (TransformVector.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C01FB410 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
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
  __int64 v16; // rdx
  _BOOL8 v17; // rcx
  bool v18; // zf
  unsigned int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  unsigned int DpiForSystem; // eax
  __int64 v23; // r8
  int DpiDependentMetric; // eax
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // r8
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // r8
  int v31; // eax
  int v32; // r9d
  unsigned __int64 v33; // r15
  unsigned int MessagePos; // eax
  __int64 v35; // r8
  __int16 v36; // bx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // rax
  int v41; // edi
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v46; // ecx
  LONG y; // edx
  int v48; // r9d
  int v49; // r8d
  __int64 v50; // r8
  __int64 v51; // r9
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
  LONG *v64; // rbx
  __int64 v65; // rcx
  int v66; // eax
  int v67; // ecx
  int v68; // r15d
  bool v69; // al
  unsigned __int64 v70; // rcx
  char v71; // r12
  unsigned int v72; // eax
  __int64 v73; // r8
  int v74; // r12d
  unsigned int v75; // eax
  __int64 v76; // r8
  __int64 v77; // r14
  __m128i v78; // xmm0
  unsigned __int64 v79; // r11
  int v80; // ecx
  int v81; // r9d
  int v82; // r11d
  int v83; // r9d
  int v84; // r11d
  __int64 v85; // rax
  __int64 v86; // r13
  unsigned __int64 v87; // r15
  __int32 v88; // eax
  __m128i *v89; // rax
  int v90; // ecx
  int v91; // eax
  __m128i *MonitorWorkRect; // rax
  __int64 v93; // rcx
  unsigned __int64 v94; // rdx
  int v95; // ecx
  int v96; // eax
  __m128i *MonitorRect; // rax
  int v98; // ecx
  unsigned __int64 v99; // rax
  int v100; // eax
  unsigned int v101; // ecx
  int v102; // ecx
  int v103; // [rsp+20h] [rbp-51h]
  int v104; // [rsp+20h] [rbp-51h]
  unsigned __int64 v105; // [rsp+30h] [rbp-41h] BYREF
  unsigned __int64 v106; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v107; // [rsp+40h] [rbp-31h]
  unsigned __int64 v108; // [rsp+48h] [rbp-29h] BYREF
  __m128i v109; // [rsp+50h] [rbp-21h] BYREF
  __m128i v110; // [rsp+60h] [rbp-11h] BYREF
  LONG left; // [rsp+70h] [rbp-1h] BYREF
  int v112; // [rsp+74h] [rbp+3h]
  int v113; // [rsp+78h] [rbp+7h]
  int v114; // [rsp+7Ch] [rbp+Bh]

  v107 = a3;
  LODWORD(v108) = (__int16)a4;
  HIDWORD(v108) = SWORD1(a4);
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
  v16 = 0LL;
  v17 = KeyState < 0;
  if ( a3 > 0x28 )
    return;
  if ( (_DWORD)a3 != 13 )
  {
    if ( (_DWORD)a3 == 27 )
    {
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x10) != 0 )
      {
        xxxDrawDragRect(a5, 0LL, 2LL);
        *(_DWORD *)(gptiCurrent + 488LL) &= ~0x10u;
      }
      UpdateMoveSizeDataForCancelation(a5);
      goto LABEL_74;
    }
    if ( (_DWORD)a3 != 37 )
    {
      if ( (_DWORD)a3 == 38 )
      {
LABEL_17:
        if ( !*((_DWORD *)a5 + 46) )
        {
          v18 = *((_DWORD *)a5 + 45) == 0;
          *((_DWORD *)a5 + 46) = dword_1C02D9914[a3];
LABEL_27:
          if ( !v18 )
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
          || (v19 = GetDpiForSystem(),
              v21 = GetDpiDependentMetric(13LL, v19, v20),
              v16 = (unsigned int)(v21 >> 31),
              LODWORD(v16) = v21 % 2,
              v21 / 2 <= 1) )
        {
          v13 = 1;
        }
        else
        {
          DpiForSystem = GetDpiForSystem();
          DpiDependentMetric = GetDpiDependentMetric(13LL, DpiForSystem, v23);
          v16 = (unsigned int)(DpiDependentMetric >> 31);
          LODWORD(v16) = DpiDependentMetric % 2;
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
      v18 = *((_DWORD *)a5 + 46) == 0;
      *((_DWORD *)a5 + 45) = dword_1C02D9914[a3];
      goto LABEL_27;
    }
    if ( KeyState < 0
      || (v26 = GetDpiForSystem(),
          v28 = GetDpiDependentMetric(12LL, v26, v27),
          v16 = (unsigned int)(v28 >> 31),
          LODWORD(v16) = v28 % 2,
          v28 / 2 <= 1) )
    {
      v14 = 1;
    }
    else
    {
      v29 = GetDpiForSystem();
      v31 = GetDpiDependentMetric(12LL, v29, v30);
      v16 = (unsigned int)(v31 >> 31);
      LODWORD(v16) = v31 % 2;
      v14 = v31 / 2;
    }
    if ( a3 == 37 )
      v14 = -v14;
LABEL_36:
    if ( *((_DWORD *)a5 + 44) == 9 )
    {
      v32 = 9;
      v33 = *((unsigned __int16 *)a5 + 12) | ((unsigned __int64)*((unsigned __int16 *)a5 + 14) << 16);
    }
    else
    {
      MessagePos = GetMessagePos(v17, v16);
      v32 = *((_DWORD *)a5 + 44);
      v33 = MessagePos;
    }
    v35 = *((int *)a5 + 45);
    v105 = v33;
    if ( (_DWORD)v35 )
    {
      v36 = v14 + *((_WORD *)a5 + 2 * dword_1C02D9978[v35] + 20);
      LOWORD(v105) = v36;
      LODWORD(v33) = v105;
    }
    else
    {
      v36 = v105;
    }
    v37 = *((int *)a5 + 46);
    if ( (_DWORD)v37 )
    {
      WORD1(v105) = v13 + *((_WORD *)a5 + 2 * dword_1C02D9948[v37] + 20);
      LODWORD(v33) = v105;
    }
    if ( v32 != 9 )
    {
      *((_DWORD *)a5 + 44) = v35 + v37;
      xxxSendMessage((ULONG_PTR)a1);
    }
    LODWORD(v108) = v36 - *((_DWORD *)a5 + 42);
    HIDWORD(v108) = SWORD1(v33) - *((_DWORD *)a5 + 43);
    v38 = a1[10];
    v39 = v108;
    v106 = v108;
    v40 = *(_QWORD *)(v38 + 40);
    if ( *(_QWORD *)(v40 + 168) )
    {
      v105 = *(_QWORD *)(v40 + 168);
      v41 = TransformRegionBetweenCoordinateSpaces((__int64)a1, v38, (__int64 *)&v105);
      v44 = GrePtInRegion(v105, (unsigned int)v39, HIDWORD(v106));
      if ( v41 )
        GreDeleteObject(v105);
      if ( !v44 )
        goto LABEL_64;
      v39 = v108;
    }
    else if ( !PtInRect((_DWORD *)a5 + 22, v108) )
    {
LABEL_64:
      v12 = v33;
      goto LABEL_9;
    }
    v106 = *((_QWORD *)a5 + 26);
    v105 = v39;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v43, v42);
    LogicalToPhysicalDPIPoint(&v105, &v108, CurrentThreadDpiAwarenessContext, &v106);
    if ( ((v107 - 38) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      v46 = v105;
      if ( ((v107 - 37) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
      {
        y = HIDWORD(v105);
      }
      else
      {
        y = gptCursorAsync->y;
        HIDWORD(v105) = y;
        if ( (_DWORD)v105 == (_DWORD)gptCursorAsync )
        {
          if ( v14 <= 0 )
            v7 = -1;
          v46 = v7 + v105;
          LODWORD(v105) = v7 + v105;
        }
      }
    }
    else
    {
      y = HIDWORD(v105);
      v46 = (unsigned int)gptCursorAsync;
      LODWORD(v105) = (_DWORD)gptCursorAsync;
      if ( HIDWORD(v105) == gptCursorAsync->y )
      {
        if ( v13 <= 0 )
          v7 = -1;
        y = v7 + HIDWORD(v105);
        HIDWORD(v105) += v7;
      }
    }
    zzzInternalSetCursorPos(v46, y, 2, 0);
    goto LABEL_64;
  }
  GetMessagePos(v17, 0LL);
LABEL_69:
  bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
  v48 = *(_DWORD *)(gptiCurrent + 488LL);
  if ( (v48 & 0x10) != 0 )
  {
    v49 = *((_DWORD *)a5 + 49);
    if ( (v49 & 0x800) == 0 || (((v49 & 0x20) != 0) & *(_BYTE *)(a1[5] + 31)) == 0 )
    {
      xxxDrawDragRect(a5, 0LL, ((v49 & 0xFE000000) << 6) | 1);
      v48 = *(_DWORD *)(gptiCurrent + 488LL);
    }
    *(_DWORD *)(gptiCurrent + 488LL) = v48 & 0xFFFFFFEF;
  }
LABEL_74:
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1LL, v50, v51);
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
    if ( (unsigned int)xxxCallHook(0, *a1, (unsigned int *)a5 + 6, 5) )
    {
      v63 = *(struct tagRECT *)((char *)a5 + 136);
      *((_QWORD *)a5 + 26) = *((_QWORD *)a5 + 27);
      *v58 = v63;
    }
    else
    {
      v60 = *(_BYTE *)(a1[5] + 31);
      v61 = v60 & 0x20;
      if ( *((_DWORD *)a5 + 44) == 9 )
      {
        if ( v61 )
        {
          v110.m128i_i32[0] = *((_DWORD *)a5 + 34) - v56;
          v110.m128i_i32[2] = *((_DWORD *)a5 + 36) - v56;
          v110.m128i_i32[1] = *((_DWORD *)a5 + 35) - v55;
          v110.m128i_i32[3] = *((_DWORD *)a5 + 37) - v55;
          v62 = CkptRestore((__int64)a1, &v110);
          if ( v62 )
            v62[12] |= 1u;
        }
      }
      else if ( v61 )
      {
        v110.m128i_i32[0] = *((_DWORD *)a5 + 34) - v56;
        v110.m128i_i32[2] = *((_DWORD *)a5 + 36) - v56;
        v110.m128i_i32[1] = *((_DWORD *)a5 + 35) - v55;
        v110.m128i_i32[3] = *((_DWORD *)a5 + 37) - v55;
        CkptRestore((__int64)a1, &v110);
        SetMinimize((__int64)a1, 0);
      }
      else if ( (v60 & 1) != 0 )
      {
        SetOrClrWF(0, (__int64)a1, 0xF01u, 1);
      }
    }
  }
  v64 = (LONG *)((char *)a5 + 24);
  v65 = *(_QWORD *)(a1[10] + 40);
  if ( (*(_BYTE *)(v65 + 26) & 0x40) != 0 )
  {
    v66 = *(_DWORD *)(v65 + 112);
    *v64 -= v66;
    *((_DWORD *)a5 + 8) -= v66;
    *((_DWORD *)a5 + 9) -= v55;
    *((_DWORD *)a5 + 7) -= v55;
    v67 = -*v64;
    v58->left = -*((_DWORD *)a5 + 8);
    *((_DWORD *)a5 + 8) = v67;
  }
  else
  {
    *v64 -= v56;
    *((_DWORD *)a5 + 8) -= v56;
    *((_DWORD *)a5 + 9) -= v55;
    *((_DWORD *)a5 + 7) -= v55;
  }
  if ( a1[10] == GetDesktopWindow((__int64)a1) )
  {
    v68 = *(_BYTE *)(a1[5] + 24) & 0x88;
    LODWORD(v107) = v68;
    v69 = WindowArrangementAllowed((struct tagWND *)a1);
    v70 = a1[5];
    v71 = *(_BYTE *)(v70 + 24);
    if ( v69 )
    {
      if ( v71 >= 0 )
      {
        v74 = 0;
      }
      else
      {
        v75 = GetDpiForSystem();
        v74 = GetDpiDependentMetric(22LL, v75, v76);
      }
    }
    else
    {
      v72 = GetDpiForSystem();
      v74 = GetDpiDependentMetric(((v71 >> 7) & 0x14u) + 2, v72, v73) - 1;
    }
    v110.m128i_i64[0] = gpDispInfo;
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v78 = *(__m128i *)v58;
      v79 = a1[25];
      v80 = v74 + *((_DWORD *)a5 + 7);
      LODWORD(v106) = v80;
      v109 = v78;
      if ( v79 )
      {
        LODWORD(v105) = 0;
        TransformVector(v79, (unsigned int)&v105, (unsigned int)&v106, 0, 0);
        TransformVector(v82, (unsigned int)&v109, (unsigned int)&v109.m128i_u32[1], v81, v81 & v103);
        TransformVector(v84, (unsigned int)&v109.m128i_u32[2], (unsigned int)&v109.m128i_u32[3], v83, v83 & v104);
        v80 = v106;
      }
      v85 = *(_QWORD *)(v110.m128i_i64[0] + 104);
      v105 = v85;
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
              if ( v109.m128i_i32[2] >= v88 && v109.m128i_i32[2] < *(_DWORD *)(v87 + v86 + 52) )
                goto LABEL_134;
              if ( v109.m128i_i32[0] >= v88 && v109.m128i_i32[0] < *(_DWORD *)(v87 + v86 + 52) )
                goto LABEL_134;
            }
            v68 = v107;
          }
          v80 = v106;
          v85 = *(_QWORD *)(v105 + 56);
          v105 = v85;
        }
        while ( v85 );
        v58 = (struct tagRECT *)((char *)a5 + 24);
      }
      v77 = MonitorFromRect(v58, 2u, 0);
    }
    else
    {
      v77 = *(_QWORD *)(GetDispInfo(v70, 0LL) + 96);
    }
    if ( WindowArrangementAllowed((struct tagWND *)a1) )
    {
      v93 = *(_QWORD *)(a1[5] + 168);
      if ( v93 && (unsigned int)GreGetRgnBox(v93, &left) )
      {
        v94 = a1[5];
        v64 = &left;
        v95 = *((_DWORD *)a5 + 7);
        left = v58->left;
        v96 = *((_DWORD *)a5 + 8);
        v112 += v95 - *(_DWORD *)(v94 + 92);
        v113 = v96;
        v114 = *((_DWORD *)a5 + 9) + *(_DWORD *)(v94 + 100) - v114;
      }
      if ( v68 )
        MonitorRect = GetMonitorRect(&v109, v77);
      else
        MonitorRect = GetMonitorWorkRect(&v109, v77);
      v98 = v64[1];
      v99 = HIDWORD(MonitorRect->m128i_i64[0]);
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
        v89 = GetMonitorRect(&v109, v77);
        v90 = *((_DWORD *)a5 + 7);
        v91 = HIDWORD(v89->m128i_i64[0]) - v74;
        if ( v90 <= v91 )
          v90 = v91;
      }
      else
      {
        MonitorWorkRect = GetMonitorWorkRect(&v109, v77);
        v90 = *((_DWORD *)a5 + 7);
        if ( v90 <= (int)(HIDWORD(MonitorWorkRect->m128i_i64[0]) - v74) )
          v90 = HIDWORD(GetMonitorWorkRect(&v110, v77)->m128i_i64[0]) - v74;
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
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    *(_DWORD *)(a1[5] + 232) &= ~0x80000u;
    RecreateRedirectionBitmap((struct tagWND *)a1, 0, 0, 0, 0, 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
}
