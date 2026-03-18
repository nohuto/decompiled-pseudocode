/*
 * XREFs of xxxMoveSize @ 0x1C01C7C58
 * Callers:
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0002458 (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C0006CF8 (SlowAppThreadInShellFrame.c)
 *     xxxInternalGetMessage @ 0x1C000DD88 (xxxInternalGetMessage.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     xxxDispatchMessage @ 0x1C0023E5C (xxxDispatchMessage.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C002DEDC (IsToplevelWindowDesktopComposed.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     bSetDevDragWidth @ 0x1C0055238 (bSetDevDragWidth.c)
 *     xxxCapture @ 0x1C00605D8 (xxxCapture.c)
 *     bSetDevDragRect @ 0x1C00BCB00 (bSetDevDragRect.c)
 *     xxxTranslateMessage @ 0x1C00F4EDC (xxxTranslateMessage.c)
 *     GetProcessDpiServerInfo @ 0x1C00FB044 (GetProcessDpiServerInfo.c)
 *     zzzShowCursor @ 0x1C010BEA4 (zzzShowCursor.c)
 *     xxxCallMsgFilter @ 0x1C0129564 (xxxCallMsgFilter.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ChangeComposableCursor @ 0x1C01976E4 (ChangeComposableCursor.c)
 *     TryDetachShellFrame @ 0x1C01AC074 (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01AC5FC (xxxWaitMessageEx.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01C0140 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01C4114 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01C416C (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C5264 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRect @ 0x1C01C6018 (xxxDrawDragRect.c)
 *     xxxInitializeMoveSizeData @ 0x1C01C7264 (xxxInitializeMoveSizeData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveSize(struct tagWND *a1, int a2, unsigned int a3)
{
  int v6; // r15d
  __int64 result; // rax
  __int64 v8; // r10
  ULONG_PTR v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  struct tagWND *v15; // rdx
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // edx
  __int64 v21; // rax
  struct tagTHREADINFO *v22; // rax
  int v23; // eax
  int v24; // ecx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  __int64 ProcessDpiServerInfo; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int128 v31; // [rsp+38h] [rbp-39h]
  __int128 v32; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v33[3]; // [rsp+58h] [rbp-19h] BYREF
  unsigned int v34[14]; // [rsp+70h] [rbp-1h] BYREF
  int v35; // [rsp+E0h] [rbp+6Fh] BYREF

  memset(v34, 0, 0x30uLL);
  v6 = 0;
  result = *((_QWORD *)a1 + 2);
  v8 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(result + 424) == v8 && !*(_QWORD *)(gptiCurrent + 664LL) )
  {
    v9 = *(_QWORD *)(v8 + 112);
    if ( v9 )
    {
      if ( (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x3FFF) != 0x2A2 )
      {
        v9 = *(_QWORD *)(v9 + 80);
        if ( !v9 || (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x3FFF) != 0x2A2 )
          v9 = 0LL;
      }
      if ( v9 )
      {
        v33[0] = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = v33;
        v33[1] = v9;
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
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
        __fastfail(3u);
      *(_QWORD *)(v13 + 8) = &gActiveMoveSizeDataList;
      *(_QWORD *)v13 = v14;
      *(_QWORD *)(v14 + 8) = v13;
      gActiveMoveSizeDataList = v13;
      *(_QWORD *)&v31 = v13 + 16;
      *((_QWORD *)&v31 + 1) = a1;
      v32 = v31;
      *(_QWORD *)(gptiCurrent + 664LL) = v13;
      HMAssignmentLock(&v32);
      *(_DWORD *)(v13 + 196) = *(_DWORD *)(v13 + 196) & 0xFFEC7FFF | 0x100000;
      *(_QWORD *)(v13 + 308) = *(_QWORD *)(gptiCurrent + 760LL);
      AdjustProcessPriorityForDrag((struct _MOVESIZEDATA *)v13);
      xxxInitializeMoveSizeData((__int64)a1, v13, a2, a3, 0);
      if ( (*(_DWORD *)(v13 + 196) & 0x20) != 0 )
        gdwPUDFlags |= 0x10000000u;
      else
        gdwPUDFlags &= ~0x10000000u;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
        bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), 2);
      xxxQueryShellForSizeCooperation((struct _MOVESIZEDATA *)v13);
      if ( gpqForeground )
      {
        v15 = *(struct tagWND **)(gpqForeground + 112LL);
        if ( v15 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
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
      xxxDrawDragRect((struct _MOVESIZEDATA *)v13);
      *(_DWORD *)(gptiCurrent + 480LL) |= 0x10u;
      *(_QWORD *)&v34[6] = (*(unsigned __int16 *)(v13 + 304) << 16) | *(unsigned __int16 *)(v13 + 300);
      xxxSendMessage((ULONG_PTR)a1);
      xxxCapture(gptiCurrent, (__int64 *)a1, 6);
      zzzShowCursor(1);
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        if ( gProtocolType || gbRemoteFxSession )
        {
          v17 = 0;
        }
        else
        {
          ChangeComposableCursor(1);
          v17 = 0x8000000;
        }
        v18 = v17 | *(_DWORD *)(v13 + 196) & 0xF7FFFFFF;
        *(_DWORD *)(v13 + 196) = v18;
      }
      else
      {
        v18 = *(_DWORD *)(v13 + 196);
      }
      if ( (v18 & 8) == 0 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) != a1 )
              goto LABEL_59;
            if ( (unsigned int)xxxInternalGetMessage((int)v34, 0, 0, 0, 1, 0) )
              break;
            if ( (*(_DWORD *)(v13 + 196) & 8) != 0 )
              goto LABEL_59;
            if ( (*(_DWORD *)(gptiCurrent + 1200LL) & 0x40000) == 0 || IsAdaptiveQueueDetachExempted(gptiCurrent) )
            {
              if ( !(unsigned int)xxxWaitMessageEx(0x3CFFu, 0, 0LL) )
                goto LABEL_59;
            }
            else
            {
              v20 = 200;
              if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 392LL) <= 1u )
                v20 = 5000;
              if ( (unsigned int)xxxWaitMessageEx(0x3C07u, v20, (enum SLEEP_STATUS *)&v35) || v35 )
              {
                if ( v35 )
                {
                  if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 392LL) > 1u )
                  {
                    v21 = *(_QWORD *)(gptiCurrent + 456LL);
                    if ( !*(_QWORD *)(v21 + 48) && !*(_QWORD *)(v21 + 56) )
                    {
                      v22 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                      if ( v22 )
                        TryDetachShellFrame(gptiCurrent, (__int64)v22, v35 == 2, 1);
                    }
                  }
                }
              }
              else
              {
LABEL_59:
                if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) != a1 )
                {
                  xxxMS_TrackMove((unsigned __int64 *)a1, 256, 0x1BuLL, 1u, (struct _MOVESIZEDATA *)v13);
                  goto LABEL_72;
                }
                v23 = *(_DWORD *)(v13 + 196);
                if ( (v23 & 8) != 0 )
                {
                  *(_DWORD *)(v13 + 196) = v23 & 0xFFFFFFF7;
                  goto LABEL_72;
                }
                LOBYTE(v24) = *(_DWORD *)(v13 + 196);
                if ( v34[2] == 35 )
                {
                  xxxCallHook(2u, 0LL, 0LL, 5);
                  v23 = *(_DWORD *)(v13 + 196);
                  LOBYTE(v24) = v23;
                }
                if ( (v23 & 1) != 0 )
                {
                  if ( !(unsigned int)xxxTrackInitSize(
                                        a1,
                                        v34[2],
                                        *(unsigned __int64 *)&v34[4],
                                        v34[6],
                                        (struct _MOVESIZEDATA *)v13) )
                    goto LABEL_72;
                  v24 = *(_DWORD *)(v13 + 196);
                }
                if ( (v24 & 1) == 0 )
                {
                  xxxMS_TrackMove(
                    (unsigned __int64 *)a1,
                    v34[2],
                    *(unsigned __int64 *)&v34[4],
                    (unsigned __int16)(LOWORD(v34[9]) + *(_WORD *)(v13 + 168)) | ((unsigned __int16)(LOWORD(v34[10]) + *(_WORD *)(v13 + 172)) << 16),
                    (struct _MOVESIZEDATA *)v13);
                  v24 = *(_DWORD *)(v13 + 196);
                }
                if ( (v24 & 8) != 0 )
                  goto LABEL_72;
              }
            }
          }
          if ( v34[2] - 256 <= 9 || v34[2] == 35 || v34[2] - 512 <= 0xE )
          {
            *(_QWORD *)(v13 + 308) = *(_QWORD *)(gptiCurrent + 760LL);
            if ( !v6 )
            {
              v6 = ((*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) & 0x1800000) != 0) + 1;
              if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) & 0x1800000) != 0 )
                *(_DWORD *)(v13 + 196) ^= (*(_DWORD *)(v13 + 196) ^ (*(_DWORD *)(v13 + 196) + 0x8000)) & 0x38000;
            }
            goto LABEL_59;
          }
          if ( !(unsigned int)xxxCallMsgFilter((__int64)v34, (unsigned int)(a2 != 9) + 3) )
          {
            xxxTranslateMessage((__int64)v34, 0LL);
            *(_DWORD *)(gptiCurrent + 480LL) |= 0x8000u;
            xxxDispatchMessage((__int64)v34, v19);
            *(_DWORD *)(gptiCurrent + 480LL) &= ~0x8000u;
          }
        }
      }
LABEL_72:
      if ( gpqForeground )
      {
        v25 = *(_QWORD *)(gpqForeground + 112LL);
        if ( v25 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
            xxxWindowEvent(0x80000005, v25, 0, 2, 33);
        }
      }
      xxxWindowEvent(0xBu, (__int64)a1, 0, 0, 0);
      xxxSendMessage((ULONG_PTR)a1);
      xxxReportMoveSizeCompletionToShell((struct _MOVESIZEDATA *)v13);
      v26 = *(_DWORD *)(v13 + 196);
      if ( (v26 & 0x8000000) != 0 )
      {
        ChangeComposableCursor(0);
        v26 = *(_DWORD *)(v13 + 196);
      }
      *(_DWORD *)(v13 + 196) = v26 & 0xF7EFFFFF;
      AdjustProcessPriorityForDrag((struct _MOVESIZEDATA *)v13);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
      {
        ProcessDpiServerInfo = GetProcessDpiServerInfo(v27);
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
      v29 = *(_QWORD *)v13;
      if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 || (v30 = *(_QWORD **)(v13 + 8), *v30 != v13) )
        __fastfail(3u);
      *v30 = v29;
      *(_QWORD *)(v29 + 8) = v30;
      Win32FreePool(v13);
      return zzzShowCursor(0);
    }
  }
  return result;
}
