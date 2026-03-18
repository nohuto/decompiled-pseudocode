/*
 * XREFs of xxxMoveSize @ 0x1C01EBF38
 * Callers:
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     xxxDispatchMessage @ 0x1C002DDC0 (xxxDispatchMessage.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00431A8 (IsToplevelWindowDesktopComposed.c)
 *     GetProcessDpiServerInfo @ 0x1C00ABA24 (GetProcessDpiServerInfo.c)
 *     xxxInternalGetMessage @ 0x1C00BC3F0 (xxxInternalGetMessage.c)
 *     bSetDevDragWidth @ 0x1C00C0E1C (bSetDevDragWidth.c)
 *     xxxCapture @ 0x1C00D1D64 (xxxCapture.c)
 *     xxxCallMsgFilter @ 0x1C00D2880 (xxxCallMsgFilter.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C00D7CEC (IsAdaptiveQueueDetachExempted.c)
 *     xxxTranslateMessage @ 0x1C0110150 (xxxTranslateMessage.c)
 *     bSetDevDragRect @ 0x1C0125040 (bSetDevDragRect.c)
 *     SlowAppThreadInShellFrame @ 0x1C012AEEC (SlowAppThreadInShellFrame.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C012C4E4 (-zzzShowCursor@@YAH_N@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ChangeComposableCursor @ 0x1C01B871C (ChangeComposableCursor.c)
 *     TryDetachShellFrame @ 0x1C01CF278 (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01CF7DC (xxxWaitMessageEx.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E4278 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E956C (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E95E8 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01EA5F8 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRect @ 0x1C01EABFC (xxxDrawDragRect.c)
 *     xxxInitializeMoveSizeData @ 0x1C01EB504 (xxxInitializeMoveSizeData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveSize(struct tagWND *a1, int a2, int a3)
{
  int v6; // r15d
  __int64 result; // rax
  __int64 v8; // r10
  ULONG_PTR v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int128 v14; // xmm0
  struct tagWND *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned int v24; // edx
  __int64 v25; // rax
  struct tagTHREADINFO *v26; // rax
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  __int64 ProcessDpiServerInfo; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int128 v36; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v37[3]; // [rsp+48h] [rbp-19h] BYREF
  unsigned int v38[14]; // [rsp+60h] [rbp-1h] BYREF
  int v39; // [rsp+D0h] [rbp+6Fh] BYREF

  memset(v38, 0, 0x30uLL);
  v6 = 0;
  result = *((_QWORD *)a1 + 2);
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(result + 432) == v8 && !*(_QWORD *)(gptiCurrent + 672LL) )
  {
    v9 = *(_QWORD *)(v8 + 112);
    if ( v9 )
    {
      if ( (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) != 0x2A2 )
      {
        v9 = *(_QWORD *)(v9 + 80);
        if ( !v9 || (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) != 0x2A2 )
          v9 = 0LL;
      }
      if ( v9 )
      {
        v37[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v37;
        v37[1] = v9;
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        xxxSendMessage(v9);
        ThreadUnlock1(v11, v10);
      }
    }
    result = Win32AllocPoolWithQuotaZInit(344LL, 1936552789LL);
    v12 = result;
    if ( result )
    {
      v13 = gActiveMoveSizeDataList;
      if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
        goto LABEL_86;
      *(_QWORD *)(v12 + 8) = &gActiveMoveSizeDataList;
      *(_QWORD *)v12 = v13;
      *(_QWORD *)&v36 = v12 + 16;
      *((_QWORD *)&v36 + 1) = a1;
      v14 = v36;
      *(_QWORD *)(v13 + 8) = v12;
      gActiveMoveSizeDataList = v12;
      v36 = v14;
      *(_QWORD *)(gptiCurrent + 672LL) = v12;
      HMAssignmentLock(&v36);
      *(_DWORD *)(v12 + 196) = *(_DWORD *)(v12 + 196) & 0xFFEC7FFF | 0x100000;
      *(_QWORD *)(v12 + 308) = *(_QWORD *)(gptiCurrent + 776LL);
      AdjustProcessPriorityForDrag((struct _MOVESIZEDATA *)v12);
      xxxInitializeMoveSizeData(a1, (struct _MOVESIZEDATA *)v12, a2, a3, 0);
      if ( (*(_DWORD *)(v12 + 196) & 0x20) != 0 )
        gdwPUDFlags |= 0x10000000u;
      else
        gdwPUDFlags &= ~0x10000000u;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
        bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), 2);
      xxxQueryShellForSizeCooperation((struct _MOVESIZEDATA *)v12);
      if ( gpqForeground )
      {
        v15 = *(struct tagWND **)(gpqForeground + 112LL);
        if ( v15 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
          {
            v16 = 33;
            if ( *((_QWORD *)v15 + 2) == gptiCurrent )
              v15 = a1;
            else
              v16 = 49;
            xxxWindowEvent(0x80000004, (__int64)v15, 0, 2, v16);
          }
        }
      }
      xxxWindowEvent(0xAu, (__int64)a1, 0, 0, 0);
      xxxWindowEvent(0x19u, (__int64)a1, 0, a2, 0);
      xxxDrawDragRect((struct _MOVESIZEDATA *)v12);
      *(_DWORD *)(gptiCurrent + 488LL) |= 0x10u;
      *(_QWORD *)&v38[6] = (*(unsigned __int16 *)(v12 + 304) << 16) | *(unsigned __int16 *)(v12 + 300);
      xxxSendMessage((ULONG_PTR)a1);
      xxxCapture(gptiCurrent, (__int64 *)a1, 6);
      CCursorClip::EnableSpeedBump(gpCursorClip, (*(_DWORD *)(v12 + 196) & 0xC00) != 0);
      LOBYTE(v17) = 1;
      zzzShowCursor(v17, v18);
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        if ( gProtocolType || gbRemoteFxSession )
        {
          v19 = 0;
        }
        else
        {
          ChangeComposableCursor(1);
          v19 = 0x8000000;
        }
        v20 = v19 | *(_DWORD *)(v12 + 196) & 0xF7FFFFFF;
        *(_DWORD *)(v12 + 196) = v20;
      }
      else
      {
        v20 = *(_DWORD *)(v12 + 196);
      }
      if ( (v20 & 8) == 0 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a1 )
              goto LABEL_58;
            if ( (unsigned int)xxxInternalGetMessage((__int64)v38, 0LL, 0, 0, 1, 0) )
              break;
            if ( (*(_DWORD *)(v12 + 196) & 8) != 0 )
              goto LABEL_58;
            if ( (*(_DWORD *)(gptiCurrent + 1208LL) & 0x40000) == 0
              || IsAdaptiveQueueDetachExempted(gptiCurrent, v21, v22) )
            {
              if ( !(unsigned int)xxxWaitMessageEx(0x3CFFu, 0, 0LL) )
                goto LABEL_58;
            }
            else
            {
              v24 = 200;
              if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 392LL) <= 1u )
                v24 = 5000;
              if ( (unsigned int)xxxWaitMessageEx(0x3C07u, v24, (enum SLEEP_STATUS *)&v39) || v39 )
              {
                if ( v39 )
                {
                  if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 392LL) > 1u )
                  {
                    v25 = *(_QWORD *)(gptiCurrent + 464LL);
                    if ( !*(_QWORD *)(v25 + 48) && !*(_QWORD *)(v25 + 56) )
                    {
                      v26 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                      if ( v26 )
                        TryDetachShellFrame(gptiCurrent, (__int64)v26, v39 == 2, 1);
                    }
                  }
                }
              }
              else
              {
LABEL_58:
                if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a1 )
                {
                  xxxMS_TrackMove((unsigned __int64 *)a1, 256, 0x1BuLL, 1LL, (struct _MOVESIZEDATA *)v12);
                  goto LABEL_71;
                }
                v27 = *(_DWORD *)(v12 + 196);
                if ( (v27 & 8) != 0 )
                {
                  *(_DWORD *)(v12 + 196) = v27 & 0xFFFFFFF7;
                  goto LABEL_71;
                }
                LOBYTE(v28) = *(_DWORD *)(v12 + 196);
                if ( v38[2] == 35 )
                {
                  xxxCallHook(2u, 0LL, 0LL, 5);
                  v27 = *(_DWORD *)(v12 + 196);
                  LOBYTE(v28) = v27;
                }
                if ( (v27 & 1) != 0 )
                {
                  if ( !(unsigned int)xxxTrackInitSize(
                                        a1,
                                        v38[2],
                                        *(unsigned __int64 *)&v38[4],
                                        v38[6],
                                        (struct _MOVESIZEDATA *)v12) )
                    goto LABEL_71;
                  v28 = *(_DWORD *)(v12 + 196);
                }
                if ( (v28 & 1) == 0 )
                {
                  xxxMS_TrackMove(
                    (unsigned __int64 *)a1,
                    v38[2],
                    *(unsigned __int64 *)&v38[4],
                    (unsigned __int16)(LOWORD(v38[9]) + *(_WORD *)(v12 + 168)) | ((unsigned __int16)(LOWORD(v38[10]) + *(_WORD *)(v12 + 172)) << 16),
                    (struct _MOVESIZEDATA *)v12);
                  v28 = *(_DWORD *)(v12 + 196);
                }
                if ( (v28 & 8) != 0 )
                  goto LABEL_71;
              }
            }
          }
          if ( v38[2] - 256 <= 9 || v38[2] == 35 || v38[2] - 512 <= 0xE )
          {
            *(_QWORD *)(v12 + 308) = *(_QWORD *)(gptiCurrent + 776LL);
            if ( !v6 )
            {
              v6 = ((*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) & 0x1800000) != 0) + 1;
              if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) & 0x1800000) != 0 )
                *(_DWORD *)(v12 + 196) ^= (*(_DWORD *)(v12 + 196) ^ (*(_DWORD *)(v12 + 196) + 0x8000)) & 0x38000;
            }
            goto LABEL_58;
          }
          if ( !(unsigned int)xxxCallMsgFilter((__int64)v38, (unsigned int)(a2 != 9) + 3) )
          {
            xxxTranslateMessage((__int64)v38, 0LL);
            *(_DWORD *)(gptiCurrent + 488LL) |= 0x8000u;
            xxxDispatchMessage((__int64)v38, v23);
            *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000u;
          }
        }
      }
LABEL_71:
      CCursorClip::EnableSpeedBump(gpCursorClip, 0);
      if ( gpqForeground )
      {
        v29 = *(_QWORD *)(gpqForeground + 112LL);
        if ( v29 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
            xxxWindowEvent(0x80000005, v29, 0, 2, 0x21u);
        }
      }
      xxxWindowEvent(0xBu, (__int64)a1, 0, 0, 0);
      xxxSendMessage((ULONG_PTR)a1);
      xxxReportMoveSizeCompletionToShell((struct _MOVESIZEDATA *)v12);
      v30 = *(_DWORD *)(v12 + 196);
      if ( (v30 & 0x8000000) != 0 )
      {
        ChangeComposableCursor(0);
        v30 = *(_DWORD *)(v12 + 196);
      }
      *(_DWORD *)(v12 + 196) = v30 & 0xF7EFFFFF;
      AdjustProcessPriorityForDrag((struct _MOVESIZEDATA *)v12);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
      {
        ProcessDpiServerInfo = GetProcessDpiServerInfo(v31);
        bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), *(_DWORD *)(ProcessDpiServerInfo + 4) + 3);
      }
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x10u;
      if ( (*(_DWORD *)(v12 + 196) & 0x20) != 0 && ghrgnUpdateSave )
      {
        GreDeleteObject(ghrgnUpdateSave);
        ghrgnUpdateSave = 0LL;
        gnUpdateSave = 0;
      }
      gdwPUDFlags &= ~0x10000000u;
      *(_QWORD *)(gptiCurrent + 672LL) = 0LL;
      HMAssignmentUnlock(v12 + 16);
      v33 = *(_QWORD *)v12;
      if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 || (v34 = *(_QWORD **)(v12 + 8), *v34 != v12) )
LABEL_86:
        __fastfail(3u);
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
      Win32FreePool(v12);
      return zzzShowCursor(0LL, v35);
    }
  }
  return result;
}
