/*
 * XREFs of xxxMoveSize @ 0x1C0201CF0
 * Callers:
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00027E0 (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C0009FB0 (SlowAppThreadInShellFrame.c)
 *     xxxInternalGetMessage @ 0x1C000E4C4 (xxxInternalGetMessage.c)
 *     xxxTranslateMessage @ 0x1C00136B0 (xxxTranslateMessage.c)
 *     xxxCapture @ 0x1C001E090 (xxxCapture.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0022D88 (IsToplevelWindowDesktopComposed.c)
 *     xxxDispatchMessage @ 0x1C0024958 (xxxDispatchMessage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     bSetDevDragRect @ 0x1C00816E0 (bSetDevDragRect.c)
 *     GetProcessDpiServerInfo @ 0x1C0091370 (GetProcessDpiServerInfo.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     bSetDevDragWidth @ 0x1C00E6964 (bSetDevDragWidth.c)
 *     xxxCallMsgFilter @ 0x1C0101B80 (xxxCallMsgFilter.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C012EB14 (-zzzShowCursor@@YAH_N@Z.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ChangeComposableCursor @ 0x1C01CC57C (ChangeComposableCursor.c)
 *     TryDetachShellFrame @ 0x1C01E3B58 (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01E4460 (xxxWaitMessageEx.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F9B04 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FEF4C (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF004 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020010C (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRect @ 0x1C0200964 (xxxDrawDragRect.c)
 *     xxxInitializeMoveSizeData @ 0x1C0201288 (xxxInitializeMoveSizeData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveSize(struct tagWND *a1, unsigned int a2, int a3)
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
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // edx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  struct tagTHREADINFO *v34; // rax
  int v35; // eax
  int v36; // ecx
  struct tagWND *v37; // rdx
  int v38; // edx
  int v39; // ecx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 ProcessDpiServerInfo; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int128 v49; // [rsp+38h] [rbp-39h]
  __int128 v50; // [rsp+48h] [rbp-29h] BYREF
  __int64 v51; // [rsp+58h] [rbp-19h] BYREF
  ULONG_PTR v52; // [rsp+60h] [rbp-11h]
  __int64 v53; // [rsp+68h] [rbp-9h]
  __int64 v54[7]; // [rsp+70h] [rbp-1h] BYREF
  int v55; // [rsp+E0h] [rbp+6Fh] BYREF

  memset(v54, 0, 0x30uLL);
  v6 = 0;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
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
        v51 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v51;
        v52 = v9;
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
      *(_QWORD *)&v49 = v13 + 16;
      *((_QWORD *)&v49 + 1) = a1;
      v50 = v49;
      *(_QWORD *)(gptiCurrent + 664LL) = v13;
      HMAssignmentLock(&v50);
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
            xxxWindowEvent(0x80000004, v15, 0LL, 2LL, v16);
          }
        }
      }
      xxxWindowEvent(0xAu, a1, 0LL, 0LL, 0);
      xxxWindowEvent(0x19u, a1, 0LL, a2, 0);
      xxxDrawDragRect((struct _MOVESIZEDATA *)v13);
      *(_DWORD *)(gptiCurrent + 480LL) |= 0x10u;
      v54[3] = (*(unsigned __int16 *)(v13 + 304) << 16) | *(unsigned __int16 *)(v13 + 300);
      xxxSendMessage((ULONG_PTR)a1);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          (unsigned int)&WPP_RECORDER_INITIALIZED,
          v17,
          1u,
          0x11u,
          (__int64)&WPP_c0d2aea0028b3d709fe1f4aa428b688d_Traceguids,
          a1);
      xxxCapture(gptiCurrent, a1, 6);
      CCursorClip::EnableSpeedBump(gpCursorClip, (*(_DWORD *)(v13 + 196) & 0xC00) != 0);
      LOBYTE(v18) = 1;
      zzzShowCursor(v18, v19, v20, v21);
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        if ( gProtocolType || gbRemoteFxSession )
        {
          v22 = 0;
        }
        else
        {
          ChangeComposableCursor(1LL);
          v22 = 0x8000000;
        }
        v23 = v22 | *(_DWORD *)(v13 + 196) & 0xF7FFFFFF;
        *(_DWORD *)(v13 + 196) = v23;
      }
      else
      {
        v23 = *(_DWORD *)(v13 + 196);
      }
      if ( (v23 & 8) == 0 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) != a1 )
              goto LABEL_61;
            if ( (unsigned int)xxxInternalGetMessage((int)v54, 0, 0, 0, 1, 0) )
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
              v27 = 200;
              if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 400LL) <= 1u )
                v27 = 5000;
              if ( (unsigned int)xxxWaitMessageEx(0x3C07u, v27, (enum SLEEP_STATUS *)&v55) || v55 )
              {
                if ( v55 )
                {
                  if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 400LL) > 1u
                    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30)
                                              + 456)
                                  + 48LL)
                    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33)
                                              + 456)
                                  + 56LL) )
                  {
                    v34 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                    if ( v34 )
                      TryDetachShellFrame(gptiCurrent, (__int64)v34, v55 == 2, 1);
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
                v35 = *(_DWORD *)(v13 + 196);
                if ( (v35 & 8) != 0 )
                {
                  *(_DWORD *)(v13 + 196) = v35 & 0xFFFFFFF7;
                  goto LABEL_74;
                }
                LOBYTE(v36) = *(_DWORD *)(v13 + 196);
                if ( LODWORD(v54[1]) == 35 )
                {
                  xxxCallHook(2, 0LL, 0LL, 5);
                  v35 = *(_DWORD *)(v13 + 196);
                  LOBYTE(v36) = v35;
                }
                if ( (v35 & 1) != 0 )
                {
                  if ( !(unsigned int)xxxTrackInitSize(
                                        (__int64 *)a1,
                                        v54[1],
                                        v54[2],
                                        v54[3],
                                        (struct _MOVESIZEDATA *)v13) )
                    goto LABEL_74;
                  v36 = *(_DWORD *)(v13 + 196);
                }
                if ( (v36 & 1) == 0 )
                {
                  xxxMS_TrackMove(
                    (unsigned __int64 *)a1,
                    v54[1],
                    v54[2],
                    (unsigned __int16)(WORD2(v54[4]) + *(_WORD *)(v13 + 168)) | ((unsigned __int16)(LOWORD(v54[5])
                                                                                                  + *(_WORD *)(v13 + 172)) << 16),
                    (struct _MOVESIZEDATA *)v13);
                  v36 = *(_DWORD *)(v13 + 196);
                }
                if ( (v36 & 8) != 0 )
                  goto LABEL_74;
              }
            }
          }
          if ( (unsigned int)(LODWORD(v54[1]) - 256) <= 9
            || LODWORD(v54[1]) == 35
            || (unsigned int)(LODWORD(v54[1]) - 512) <= 0xE )
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
          if ( !(unsigned int)xxxCallMsgFilter((__int64)v54, (unsigned int)(a2 != 9) + 3) )
          {
            xxxTranslateMessage((__int64)v54, 0);
            *(_DWORD *)(gptiCurrent + 480LL) |= 0x8000u;
            xxxDispatchMessage((__int64)v54, v24, v25, v26);
            *(_DWORD *)(gptiCurrent + 480LL) &= ~0x8000u;
          }
        }
      }
LABEL_74:
      CCursorClip::EnableSpeedBump(gpCursorClip, 0);
      if ( gpqForeground )
      {
        v37 = *(struct tagWND **)(gpqForeground + 120LL);
        if ( v37 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
            xxxWindowEvent(0x80000005, v37, 0LL, 2LL, 33);
        }
      }
      xxxWindowEvent(0xBu, a1, 0LL, 0LL, 0);
      xxxSendMessage((ULONG_PTR)a1);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(v39, v38, 1u, 0x12u, (__int64)&WPP_c0d2aea0028b3d709fe1f4aa428b688d_Traceguids, a1);
      xxxReportMoveSizeCompletionToShell((struct _MOVESIZEDATA *)v13);
      v40 = *(_DWORD *)(v13 + 196);
      if ( (v40 & 0x8000000) != 0 )
      {
        ChangeComposableCursor(0LL);
        v40 = *(_DWORD *)(v13 + 196);
      }
      *(_DWORD *)(v13 + 196) = v40 & 0xF7EFFFFF;
      AdjustProcessPriorityForDrag((struct _MOVESIZEDATA *)v13);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
      {
        ProcessDpiServerInfo = GetProcessDpiServerInfo(v42, v41);
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
      v44 = *(_QWORD *)v13;
      if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 || (v45 = *(_QWORD **)(v13 + 8), *v45 != v13) )
LABEL_91:
        __fastfail(3u);
      *v45 = v44;
      *(_QWORD *)(v44 + 8) = v45;
      Win32FreePool(v13);
      return zzzShowCursor(0LL, v46, v47, v48);
    }
  }
  return result;
}
