/*
 * XREFs of xxxMoveSize @ 0x1C0201A40
 * Callers:
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00027E0 (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C0009FA0 (SlowAppThreadInShellFrame.c)
 *     xxxInternalGetMessage @ 0x1C000DC44 (xxxInternalGetMessage.c)
 *     xxxCapture @ 0x1C001DF20 (xxxCapture.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00291F8 (IsToplevelWindowDesktopComposed.c)
 *     xxxDispatchMessage @ 0x1C002ADC8 (xxxDispatchMessage.c)
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxCallMsgFilter @ 0x1C00DD700 (xxxCallMsgFilter.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C0109C54 (-zzzShowCursor@@YAH_N@Z.c)
 *     GetProcessDpiServerInfo @ 0x1C012C194 (GetProcessDpiServerInfo.c)
 *     xxxTranslateMessage @ 0x1C0134F10 (xxxTranslateMessage.c)
 *     bSetDevDragRect @ 0x1C0139C20 (bSetDevDragRect.c)
 *     bSetDevDragWidth @ 0x1C0140734 (bSetDevDragWidth.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ChangeComposableCursor @ 0x1C01CC3EC (ChangeComposableCursor.c)
 *     TryDetachShellFrame @ 0x1C01E39D8 (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01E42E0 (xxxWaitMessageEx.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F9854 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FEC9C (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FED54 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FFE5C (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRect @ 0x1C02006B4 (xxxDrawDragRect.c)
 *     xxxInitializeMoveSizeData @ 0x1C0200FD8 (xxxInitializeMoveSizeData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveSize(struct tagWND *a1, int a2, int a3)
{
  int v6; // r15d
  __int64 result; // rax
  __int64 v8; // rbx
  ULONG_PTR v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  struct tagWND *v15; // rdx
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // r8
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  struct tagTHREADINFO *v26; // rax
  int v27; // eax
  int v28; // ecx
  struct tagWND *v29; // rdx
  __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 ProcessDpiServerInfo; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int128 v40; // [rsp+38h] [rbp-39h]
  __int128 v41; // [rsp+48h] [rbp-29h] BYREF
  __int64 v42; // [rsp+58h] [rbp-19h] BYREF
  ULONG_PTR v43; // [rsp+60h] [rbp-11h]
  __int64 v44; // [rsp+68h] [rbp-9h]
  __int64 v45[7]; // [rsp+70h] [rbp-1h] BYREF
  int v46; // [rsp+E0h] [rbp+6Fh] BYREF

  memset(v45, 0, 0x30uLL);
  v6 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  result = *((_QWORD *)a1 + 2);
  v8 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(result + 424) == v8 && !*(_QWORD *)(gptiCurrent + 664LL) )
  {
    v9 = *(_QWORD *)(v8 + 120);
    if ( v9 )
    {
      if ( (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x3FFF) != 0x2A2 )
      {
        v9 = *(_QWORD *)(v9 + 104);
        if ( !v9 || (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x3FFF) != 0x2A2 )
          v9 = 0LL;
      }
      if ( v9 )
      {
        v42 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v42;
        v43 = v9;
        HMLockObject(v9);
        xxxSendMessage(v9);
        ThreadUnlock1(v11, v10, v12);
      }
    }
    result = Win32AllocPoolWithQuotaZInit(344LL, 1936552789LL);
    v13 = result;
    if ( result )
    {
      v14 = gActiveMoveSizeDataList;
      if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
        goto LABEL_91;
      *(_QWORD *)(v13 + 8) = &gActiveMoveSizeDataList;
      *(_QWORD *)v13 = v14;
      *(_QWORD *)(v14 + 8) = v13;
      gActiveMoveSizeDataList = v13;
      *(_QWORD *)&v40 = v13 + 16;
      *((_QWORD *)&v40 + 1) = a1;
      v41 = v40;
      *(_QWORD *)(gptiCurrent + 664LL) = v13;
      HMAssignmentLock(&v41);
      *(_DWORD *)(v13 + 196) = *(_DWORD *)(v13 + 196) & 0xFFEC7FFF | 0x100000;
      *(_QWORD *)(v13 + 308) = *(_QWORD *)(gptiCurrent + 768LL);
      AdjustProcessPriorityForDrag((struct _MOVESIZEDATA *)v13);
      xxxInitializeMoveSizeData(a1, (struct _MOVESIZEDATA *)v13, a2, a3, 0);
      if ( (*(_DWORD *)(v13 + 196) & 0x20) != 0 )
        gdwPUDFlags |= 0x10000000u;
      else
        gdwPUDFlags &= ~0x10000000u;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
        bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), 2);
      xxxQueryShellForSizeCooperation((struct _MOVESIZEDATA *)v13);
      if ( gpqForeground )
      {
        v15 = *(struct tagWND **)(gpqForeground + 120LL);
        if ( v15 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
          {
            v16 = 33;
            if ( *((_QWORD *)v15 + 2) == gptiCurrent )
              v15 = a1;
            else
              v16 = 49;
            xxxWindowEvent(0x80000004, v15, 0LL, 2, v16);
          }
        }
      }
      xxxWindowEvent(0xAu, a1, 0LL, 0, 0);
      xxxWindowEvent(0x19u, a1, 0LL, a2, 0);
      xxxDrawDragRect((struct _MOVESIZEDATA *)v13);
      *(_DWORD *)(gptiCurrent + 480LL) |= 0x10u;
      v45[3] = (*(unsigned __int16 *)(v13 + 304) << 16) | *(unsigned __int16 *)(v13 + 300);
      xxxSendMessage((ULONG_PTR)a1);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          (unsigned int)&WPP_RECORDER_INITIALIZED,
          v17,
          1,
          17,
          (__int64)&WPP_c0d2aea0028b3d709fe1f4aa428b688d_Traceguids,
          a1);
      xxxCapture(gptiCurrent, a1, 6);
      CCursorClip::EnableSpeedBump(gpCursorClip, (*(_DWORD *)(v13 + 196) & 0xC00) != 0);
      zzzShowCursor(1);
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        if ( gProtocolType || gbRemoteFxSession )
        {
          v18 = 0;
        }
        else
        {
          ChangeComposableCursor(1LL);
          v18 = 0x8000000;
        }
        v19 = v18 | *(_DWORD *)(v13 + 196) & 0xF7FFFFFF;
        *(_DWORD *)(v13 + 196) = v19;
      }
      else
      {
        v19 = *(_DWORD *)(v13 + 196);
      }
      if ( (v19 & 8) == 0 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) != a1 )
              goto LABEL_61;
            if ( (unsigned int)xxxInternalGetMessage((int)v45, 0, 0, 0, 1, 0) )
              break;
            if ( (*(_DWORD *)(v13 + 196) & 8) != 0 )
              goto LABEL_61;
            if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) == 0 || IsAdaptiveQueueDetachExempted(gptiCurrent) )
            {
              if ( !(unsigned int)xxxWaitMessageEx(0x3CFFu, 0, 0LL) )
                goto LABEL_61;
            }
            else
            {
              v21 = 200;
              if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 400LL) <= 1u )
                v21 = 5000;
              if ( (unsigned int)xxxWaitMessageEx(0x3C07u, v21, (enum SLEEP_STATUS *)&v46) || v46 )
              {
                if ( v46 )
                {
                  if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 400LL) > 1u
                    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23) + 456)
                                  + 48LL)
                    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25) + 456)
                                  + 56LL) )
                  {
                    v26 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                    if ( v26 )
                      TryDetachShellFrame(gptiCurrent, (__int64)v26, v46 == 2, 1);
                  }
                }
              }
              else
              {
LABEL_61:
                if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) != a1 )
                {
                  xxxMS_TrackMove((unsigned __int64 *)a1, 256, 0x1BuLL, 1LL, (struct _MOVESIZEDATA *)v13);
                  goto LABEL_74;
                }
                v27 = *(_DWORD *)(v13 + 196);
                if ( (v27 & 8) != 0 )
                {
                  *(_DWORD *)(v13 + 196) = v27 & 0xFFFFFFF7;
                  goto LABEL_74;
                }
                LOBYTE(v28) = *(_DWORD *)(v13 + 196);
                if ( LODWORD(v45[1]) == 35 )
                {
                  xxxCallHook(2, 0LL, 0LL, 5);
                  v27 = *(_DWORD *)(v13 + 196);
                  LOBYTE(v28) = v27;
                }
                if ( (v27 & 1) != 0 )
                {
                  if ( !(unsigned int)xxxTrackInitSize(
                                        (__int64 *)a1,
                                        v45[1],
                                        v45[2],
                                        v45[3],
                                        (struct _MOVESIZEDATA *)v13) )
                    goto LABEL_74;
                  v28 = *(_DWORD *)(v13 + 196);
                }
                if ( (v28 & 1) == 0 )
                {
                  xxxMS_TrackMove(
                    (unsigned __int64 *)a1,
                    v45[1],
                    v45[2],
                    (unsigned __int16)(WORD2(v45[4]) + *(_WORD *)(v13 + 168)) | ((unsigned __int16)(LOWORD(v45[5])
                                                                                                  + *(_WORD *)(v13 + 172)) << 16),
                    (struct _MOVESIZEDATA *)v13);
                  v28 = *(_DWORD *)(v13 + 196);
                }
                if ( (v28 & 8) != 0 )
                  goto LABEL_74;
              }
            }
          }
          if ( (unsigned int)(LODWORD(v45[1]) - 256) <= 9
            || LODWORD(v45[1]) == 35
            || (unsigned int)(LODWORD(v45[1]) - 512) <= 0xE )
          {
            *(_QWORD *)(v13 + 308) = *(_QWORD *)(gptiCurrent + 768LL);
            if ( !v6 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) & 0x1800000) != 0 )
              {
                v6 = 2;
                *(_DWORD *)(v13 + 196) ^= (*(_DWORD *)(v13 + 196) ^ (*(_DWORD *)(v13 + 196) + 0x8000)) & 0x38000;
              }
              else
              {
                v6 = 1;
              }
            }
            goto LABEL_61;
          }
          if ( !(unsigned int)xxxCallMsgFilter((__int64)v45, (unsigned int)(a2 != 9) + 3) )
          {
            xxxTranslateMessage((__int64)v45, 0LL, v20);
            *(_DWORD *)(gptiCurrent + 480LL) |= 0x8000u;
            xxxDispatchMessage((__int64)v45);
            *(_DWORD *)(gptiCurrent + 480LL) &= ~0x8000u;
          }
        }
      }
LABEL_74:
      CCursorClip::EnableSpeedBump(gpCursorClip, 0);
      if ( gpqForeground )
      {
        v29 = *(struct tagWND **)(gpqForeground + 120LL);
        if ( v29 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
            xxxWindowEvent(0x80000005, v29, 0LL, 2, 33);
        }
      }
      xxxWindowEvent(0xBu, a1, 0LL, 0, 0);
      xxxSendMessage((ULONG_PTR)a1);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(v31, v30, 1, 18, (__int64)&WPP_c0d2aea0028b3d709fe1f4aa428b688d_Traceguids, a1);
      xxxReportMoveSizeCompletionToShell((struct _MOVESIZEDATA *)v13, v30, v32, v33);
      v34 = *(_DWORD *)(v13 + 196);
      if ( (v34 & 0x8000000) != 0 )
      {
        ChangeComposableCursor(0LL);
        v34 = *(_DWORD *)(v13 + 196);
      }
      *(_DWORD *)(v13 + 196) = v34 & 0xF7EFFFFF;
      AdjustProcessPriorityForDrag((struct _MOVESIZEDATA *)v13);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
      {
        ProcessDpiServerInfo = GetProcessDpiServerInfo(v36, v35);
        bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), *(_DWORD *)(ProcessDpiServerInfo + 4) + 3);
      }
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x10u;
      if ( (*(_DWORD *)(v13 + 196) & 0x20) != 0 && ghrgnUpdateSave )
      {
        GreDeleteObject(ghrgnUpdateSave);
        ghrgnUpdateSave = 0LL;
        gnUpdateSave = 0;
      }
      gdwPUDFlags &= ~0x10000000u;
      *(_QWORD *)(gptiCurrent + 664LL) = 0LL;
      HMAssignmentUnlock(v13 + 16);
      v38 = *(_QWORD *)v13;
      if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 || (v39 = *(_QWORD **)(v13 + 8), *v39 != v13) )
LABEL_91:
        __fastfail(3u);
      *v39 = v38;
      *(_QWORD *)(v38 + 8) = v39;
      Win32FreePool(v13);
      return zzzShowCursor(0);
    }
  }
  return result;
}
