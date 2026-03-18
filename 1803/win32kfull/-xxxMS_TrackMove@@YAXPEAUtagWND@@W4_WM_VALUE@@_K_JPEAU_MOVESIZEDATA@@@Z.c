/*
 * XREFs of ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590
 * Callers:
 *     xxxMoveSize @ 0x1C01C7C58 (xxxMoveSize.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     zzzLockWindowUpdate2 @ 0x1C0059870 (zzzLockWindowUpdate2.c)
 *     xxxReleaseCapture @ 0x1C0060450 (xxxReleaseCapture.c)
 *     CkptRestore @ 0x1C00669FC (CkptRestore.c)
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C0066BF8 (GetMonitorWorkRect.c)
 *     SetMinimize @ 0x1C0066E0C (SetMinimize.c)
 *     zzzInternalSetCursorPos @ 0x1C0067330 (zzzInternalSetCursorPos.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     bSetDevDragRect @ 0x1C00BCB00 (bSetDevDragRect.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     RecreateRedirectionBitmap @ 0x1C00E8330 (RecreateRedirectionBitmap.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C00E887C (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     _GetKeyState @ 0x1C00ECA24 (_GetKeyState.c)
 *     _GetMessagePos @ 0x1C00F5880 (_GetMessagePos.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01AFDFC (TransformRegionBetweenCoordinateSpaces.c)
 *     ?IsSizingLEFT@@YAEH@Z @ 0x1C01C10B0 (-IsSizingLEFT@@YAEH@Z.c)
 *     ?IsSizingRIGHT@@YAEH@Z @ 0x1C01C10CC (-IsSizingRIGHT@@YAEH@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01C10E8 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C01C1858 (-TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01C1B5C (-UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01C2948 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01C4E74 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxDrawDragRect @ 0x1C01C6018 (xxxDrawDragRect.c)
 *     TransformVector @ 0x1C01CBD34 (TransformVector.c)
 *     WindowArrangementAllowed @ 0x1C01D688C (WindowArrangementAllowed.c)
 */

void __fastcall xxxMS_TrackMove(
        unsigned __int64 *a1,
        int a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct _MOVESIZEDATA *a5)
{
  __int64 v7; // rdx
  int v8; // edx
  int v9; // eax
  __int128 v10; // xmm1
  unsigned int v11; // edx
  int v12; // r12d
  int v13; // r13d
  __int16 KeyState; // ax
  __int64 v15; // rdx
  _BOOL8 v16; // rcx
  bool v17; // zf
  unsigned int v18; // eax
  int v19; // eax
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  int v27; // r9d
  unsigned __int64 v28; // r15
  unsigned int MessagePos; // eax
  __int64 v30; // r8
  __int16 v31; // ax
  __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned __int64 v34; // rbx
  __int64 v35; // rax
  int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v41; // ecx
  unsigned int v42; // edx
  int v43; // eax
  int v44; // eax
  int v45; // r9d
  int v46; // r8d
  int v47; // eax
  __int64 DesktopWindow; // rax
  __int64 v49; // rdx
  int v50; // r15d
  int v51; // r12d
  __int64 v52; // rax
  struct tagRECT *v53; // r13
  __int64 v54; // rcx
  char v55; // cl
  char v56; // al
  _DWORD *v57; // rax
  struct tagRECT v58; // xmm0
  LONG *v59; // rbx
  int v60; // r15d
  __int64 v61; // rcx
  int v62; // eax
  int v63; // eax
  int v64; // ecx
  int v65; // r12d
  int v66; // eax
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned __int64 v69; // rcx
  char v70; // r15
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
  int v100; // [rsp+20h] [rbp-60h]
  int v101; // [rsp+20h] [rbp-60h]
  int v102; // [rsp+30h] [rbp-50h] BYREF
  __int128 v103; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v104; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v105; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v106; // [rsp+58h] [rbp-28h] BYREF
  LONG left; // [rsp+68h] [rbp-18h] BYREF
  int v108; // [rsp+6Ch] [rbp-14h]
  int v109; // [rsp+70h] [rbp-10h]
  int v110; // [rsp+74h] [rbp-Ch]

  *(_QWORD *)&v106.left = a3;
  LODWORD(v105) = (__int16)a4;
  HIDWORD(v105) = SHIWORD(a4);
  v7 = (unsigned int)(a2 - 256);
  if ( (_DWORD)v7 )
  {
    v7 = (unsigned int)(v7 - 4);
    if ( (_DWORD)v7 )
    {
      v8 = v7 - 252;
      if ( v8 )
      {
        if ( v8 != 2 )
          return;
        xxxTM_MoveDragRect(a5, a4);
        v9 = *((_DWORD *)a5 + 49);
        if ( (v9 & 0x2000000) != 0 )
        {
          v10 = *(_OWORD *)((char *)a5 + 56);
          *(_OWORD *)((char *)a5 + 40) = *(_OWORD *)((char *)a5 + 72);
          *(_OWORD *)((char *)a5 + 24) = v10;
        }
        *((_DWORD *)a5 + 49) = v9 & 0xFFFFFFFD;
        goto LABEL_69;
      }
      v11 = a4;
LABEL_9:
      xxxTM_MoveDragRect(a5, v11);
      return;
    }
  }
  v12 = 0;
  v13 = 0;
  KeyState = GetKeyState(0x11u, v7);
  v15 = 0LL;
  v16 = KeyState < 0;
  if ( a3 > 0x28 )
    return;
  if ( (_DWORD)a3 == 13 )
  {
    GetMessagePos(v16, 0LL);
LABEL_69:
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
    v45 = *(_DWORD *)(gptiCurrent + 480LL);
    if ( (v45 & 0x10) != 0 )
    {
      v46 = *((_DWORD *)a5 + 49);
      if ( (v46 & 0x800) == 0 || (((v46 & 0x20) != 0) & *(_BYTE *)(a1[5] + 31)) == 0 )
      {
        xxxDrawDragRect(a5, 0LL, ((v46 & 0xFE000000) << 6) | 1);
        v45 = *(_DWORD *)(gptiCurrent + 480LL);
      }
      *(_DWORD *)(gptiCurrent + 480LL) = v45 & 0xFFFFFFEF;
    }
    goto LABEL_74;
  }
  if ( (_DWORD)a3 != 27 )
  {
    if ( (_DWORD)a3 != 37 )
    {
      if ( (_DWORD)a3 == 38 )
      {
LABEL_17:
        if ( !*((_DWORD *)a5 + 46) )
        {
          v17 = *((_DWORD *)a5 + 45) == 0;
          *((_DWORD *)a5 + 46) = dword_1C02E62D4[a3];
LABEL_27:
          if ( !v17 )
          {
            v22 = *((_DWORD *)a5 + 49);
            *((_DWORD *)a5 + 70) &= ~2u;
            *((_DWORD *)a5 + 60) = 4;
            *((_DWORD *)a5 + 49) = v22 & 0xFFFFF8FF;
            MakeArrangedStateObservable(a5);
          }
          *((_QWORD *)a5 + 21) = 0LL;
          goto LABEL_36;
        }
        if ( KeyState < 0
          || (v18 = GetDpiForSystem(),
              v19 = GetDpiDependentMetric(13LL, v18),
              v15 = (unsigned int)(v19 >> 31),
              LODWORD(v15) = v19 % 2,
              v19 / 2 <= 1) )
        {
          v12 = 1;
        }
        else
        {
          DpiForSystem = GetDpiForSystem();
          DpiDependentMetric = GetDpiDependentMetric(13LL, DpiForSystem);
          v15 = (unsigned int)(DpiDependentMetric >> 31);
          LODWORD(v15) = DpiDependentMetric % 2;
          v12 = DpiDependentMetric / 2;
        }
        if ( a3 == 38 )
          v12 = -v12;
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
      v17 = *((_DWORD *)a5 + 46) == 0;
      *((_DWORD *)a5 + 45) = dword_1C02E62D4[a3];
      goto LABEL_27;
    }
    if ( KeyState < 0
      || (v23 = GetDpiForSystem(),
          v24 = GetDpiDependentMetric(12LL, v23),
          v15 = (unsigned int)(v24 >> 31),
          LODWORD(v15) = v24 % 2,
          v24 / 2 <= 1) )
    {
      v13 = 1;
    }
    else
    {
      v25 = GetDpiForSystem();
      v26 = GetDpiDependentMetric(12LL, v25);
      v15 = (unsigned int)(v26 >> 31);
      LODWORD(v15) = v26 % 2;
      v13 = v26 / 2;
    }
    if ( a3 == 37 )
      v13 = -v13;
LABEL_36:
    if ( *((_DWORD *)a5 + 44) == 9 )
    {
      v27 = 9;
      v28 = *((unsigned __int16 *)a5 + 12) | (unsigned __int64)(*((unsigned __int16 *)a5 + 14) << 16);
    }
    else
    {
      MessagePos = GetMessagePos(v16, v15);
      v27 = *((_DWORD *)a5 + 44);
      v28 = MessagePos;
    }
    v30 = *((int *)a5 + 45);
    *(_QWORD *)&v103 = v28;
    if ( (_DWORD)v30 )
    {
      v31 = v13 + *((_WORD *)a5 + 2 * dword_1C02E6338[v30] + 20);
      LOWORD(v103) = v31;
      LODWORD(v28) = v103;
    }
    else
    {
      v31 = v103;
    }
    v32 = *((int *)a5 + 46);
    LOWORD(v102) = v31;
    if ( (_DWORD)v32 )
    {
      WORD1(v103) = v12 + *((_WORD *)a5 + 2 * dword_1C02E6308[v32] + 20);
      LODWORD(v28) = v103;
    }
    if ( v27 != 9 )
    {
      *((_DWORD *)a5 + 44) = v30 + v32;
      xxxSendMessage((ULONG_PTR)a1);
    }
    LODWORD(v105) = (__int16)v102 - *((_DWORD *)a5 + 42);
    HIDWORD(v105) = SWORD1(v28) - *((_DWORD *)a5 + 43);
    v33 = a1[10];
    v34 = v105;
    v104 = v105;
    v35 = *(_QWORD *)(v33 + 40);
    if ( *(_QWORD *)(v35 + 168) )
    {
      *(_QWORD *)&v103 = *(_QWORD *)(v35 + 168);
      v36 = TransformRegionBetweenCoordinateSpaces((__int64)a1, v33, (__int64 *)&v103);
      v39 = GrePtInRegion(v103, (unsigned int)v34, HIDWORD(v104));
      if ( v36 )
        GreDeleteObject(v103);
      if ( !v39 )
        goto LABEL_64;
      v34 = v105;
    }
    else if ( !PtInRect((_DWORD *)a5 + 22, v105) )
    {
LABEL_64:
      v11 = v28;
      goto LABEL_9;
    }
    v104 = *((_QWORD *)a5 + 26);
    *(_QWORD *)&v103 = v34;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v38, v37);
    LogicalToPhysicalDPIPoint(&v103, &v105, CurrentThreadDpiAwarenessContext, &v104);
    if ( ((*(_QWORD *)&v106.left - 38LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      v41 = v103;
      if ( ((*(_QWORD *)&v106.left - 37LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
      {
        v42 = DWORD1(v103);
      }
      else
      {
        v42 = gptCursorAsync[1];
        DWORD1(v103) = v42;
        if ( (_DWORD)v103 == gptCursorAsync[0] )
        {
          v43 = -1;
          if ( v13 > 0 )
            v43 = 1;
          v41 = v43 + v103;
          LODWORD(v103) = v43 + v103;
        }
      }
    }
    else
    {
      v42 = DWORD1(v103);
      v41 = gptCursorAsync[0];
      LODWORD(v103) = gptCursorAsync[0];
      if ( DWORD1(v103) == gptCursorAsync[1] )
      {
        v44 = -1;
        if ( v12 > 0 )
          v44 = 1;
        v42 = v44 + DWORD1(v103);
        DWORD1(v103) += v44;
      }
    }
    zzzInternalSetCursorPos(v41, v42, 2, 0);
    goto LABEL_64;
  }
  bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x10) != 0 )
  {
    xxxDrawDragRect(a5, 0LL, 2LL);
    *(_DWORD *)(gptiCurrent + 480LL) &= ~0x10u;
  }
  UpdateMoveSizeDataForCancelation(a5);
LABEL_74:
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1LL);
  xxxReleaseCapture();
  v47 = *((_DWORD *)a5 + 49) | 8;
  *((_DWORD *)a5 + 49) = v47;
  if ( (v47 & 2) != 0 )
    zzzInternalSetCursorPos(*(_QWORD *)((char *)a5 + 188), HIDWORD(*(_QWORD *)((char *)a5 + 188)), 1, 0);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v49 == DesktopWindow )
  {
    v50 = 0;
    v51 = 0;
  }
  else
  {
    v52 = *(_QWORD *)(v49 + 40);
    v51 = *(_DWORD *)(v52 + 104);
    v50 = *(_DWORD *)(v52 + 108);
  }
  v53 = (struct tagRECT *)((char *)a5 + 24);
  v54 = *((_QWORD *)a5 + 3) - *((_QWORD *)a5 + 17);
  if ( !v54 )
    v54 = *((_QWORD *)a5 + 4) - *((_QWORD *)a5 + 18);
  if ( v54 )
  {
    if ( (unsigned int)xxxCallHook(0, *a1, (unsigned int *)a5 + 6, 5) )
    {
      v58 = *(struct tagRECT *)((char *)a5 + 136);
      *((_QWORD *)a5 + 26) = *((_QWORD *)a5 + 27);
      *v53 = v58;
    }
    else
    {
      v55 = *(_BYTE *)(a1[5] + 31);
      v56 = v55 & 0x20;
      if ( *((_DWORD *)a5 + 44) == 9 )
      {
        if ( v56 )
        {
          v106.left = *((_DWORD *)a5 + 34) - v51;
          v106.right = *((_DWORD *)a5 + 36) - v51;
          v106.top = *((_DWORD *)a5 + 35) - v50;
          v106.bottom = *((_DWORD *)a5 + 37) - v50;
          v57 = CkptRestore((__int64)a1, &v106);
          if ( v57 )
            v57[12] |= 1u;
        }
      }
      else if ( v56 )
      {
        v106.left = *((_DWORD *)a5 + 34) - v51;
        v106.right = *((_DWORD *)a5 + 36) - v51;
        v106.top = *((_DWORD *)a5 + 35) - v50;
        v106.bottom = *((_DWORD *)a5 + 37) - v50;
        CkptRestore((__int64)a1, &v106);
        SetMinimize((__int64)a1, 0);
      }
      else if ( (v55 & 1) != 0 )
      {
        SetOrClrWF(0, (__int64)a1, 3841, 1);
      }
    }
  }
  v59 = (LONG *)((char *)a5 + 24);
  v60 = -v50;
  v61 = *(_QWORD *)(a1[10] + 40);
  if ( (*(_BYTE *)(v61 + 26) & 0x40) != 0 )
  {
    v62 = *(_DWORD *)(v61 + 112);
    *((_DWORD *)a5 + 9) += v60;
    v63 = -v62;
    *v59 += v63;
    *((_DWORD *)a5 + 8) += v63;
    *((_DWORD *)a5 + 7) += v60;
    v64 = -*v59;
    v53->left = -*((_DWORD *)a5 + 8);
    *((_DWORD *)a5 + 8) = v64;
  }
  else
  {
    *((_DWORD *)a5 + 9) += v60;
    v65 = -v51;
    *v59 += v65;
    *((_DWORD *)a5 + 8) += v65;
    *((_DWORD *)a5 + 7) += v60;
  }
  if ( a1[10] == GetDesktopWindow((__int64)a1) )
  {
    LODWORD(v104) = *(_BYTE *)(a1[5] + 24) & 0x88;
    v66 = WindowArrangementAllowed(a1);
    v69 = a1[5];
    v70 = *(_BYTE *)(v69 + 24);
    if ( v66 )
    {
      if ( v70 >= 0 )
      {
        v72 = 0;
      }
      else
      {
        v73 = GetDpiForSystem();
        v72 = GetDpiDependentMetric(22LL, v73);
      }
    }
    else
    {
      v71 = GetDpiForSystem();
      v72 = GetDpiDependentMetric(v70 < 0 ? 22 : 2, v71) - 1;
    }
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v75 = *v53;
      v76 = a1[25];
      v77 = v72 + *((_DWORD *)a5 + 7);
      v102 = v77;
      v106 = v75;
      if ( v76 )
      {
        LODWORD(v103) = 0;
        TransformVector(v76, (unsigned int)&v103, (unsigned int)&v102, 0, 0);
        TransformVector(v79, (unsigned int)&v106, (unsigned int)&v106.top, v78, v78 & v100);
        TransformVector(v81, (unsigned int)&v106.right, (unsigned int)&v106.bottom, v80, v80 & v101);
        v77 = v102;
      }
      v82 = *(_QWORD *)(gpDispInfo + 104LL);
      *(_QWORD *)&v103 = v82;
      if ( v82 )
      {
        while ( 1 )
        {
          v83 = *(_QWORD *)(v82 + 40);
          if ( (*(_DWORD *)(v83 + 24) & 1) != 0 )
          {
            v84 = -(__int64)((_DWORD)v104 != 0) & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v77 >= *(_DWORD *)(v84 + v83 + 48) && v77 < *(_DWORD *)(v84 + v83 + 56) )
            {
              if ( !(unsigned int)WindowArrangementAllowed(a1) )
                goto LABEL_133;
              v85 = *(_DWORD *)(v84 + v83 + 44);
              if ( v106.right >= v85 && v106.right < *(_DWORD *)(v84 + v83 + 52) )
                goto LABEL_133;
              if ( v106.left >= v85 && v106.left < *(_DWORD *)(v84 + v83 + 52) )
                goto LABEL_133;
            }
          }
          v77 = v102;
          v82 = *(_QWORD *)(v103 + 56);
          *(_QWORD *)&v103 = v82;
          if ( !v82 )
          {
            v53 = (struct tagRECT *)((char *)a5 + 24);
            break;
          }
        }
      }
      v74 = MonitorFromRect(v53, 2LL, 0LL, v68);
    }
    else
    {
      v74 = *(_QWORD *)(GetDispInfo(v69, 0LL, v67, v68) + 96);
    }
    if ( (unsigned int)WindowArrangementAllowed(a1) )
    {
      v90 = *(_QWORD *)(a1[5] + 168);
      if ( v90 && (unsigned int)GreGetRgnBox(v90, &left) )
      {
        v91 = a1[5];
        v59 = &left;
        v92 = *((_DWORD *)a5 + 7);
        left = v53->left;
        v93 = *((_DWORD *)a5 + 8);
        v108 += v92 - *(_DWORD *)(v91 + 92);
        v109 = v93;
        v110 = *((_DWORD *)a5 + 9) + *(_DWORD *)(v91 + 100) - v110;
      }
      if ( (_DWORD)v104 )
        MonitorRect = GetMonitorRect(&v106, v74);
      else
        MonitorRect = GetMonitorWorkRect(&v106, v74);
      v95 = v59[1];
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
      if ( (_DWORD)v104 )
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
          v87 = HIDWORD(*(_QWORD *)GetMonitorWorkRect(&v103, v74)) - v72;
      }
      *((_DWORD *)a5 + 7) = v87;
    }
  }
LABEL_133:
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
