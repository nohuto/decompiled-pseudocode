/*
 * XREFs of xxxSetForegroundWindow @ 0x1C006E2C4
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C0006F60 (xxxSwitchToThisWindow.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 *     xxxStubSetForegroundWindow @ 0x1C006E220 (xxxStubSetForegroundWindow.c)
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00FB27C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01BCDF8 (xxxOldNextWindow.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C01FCC08 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     IsTrayWindow @ 0x1C0044B0C (IsTrayWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxFlashWindow @ 0x1C006312C (xxxFlashWindow.c)
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 *     FRemoveForegroundActivate @ 0x1C006D5D4 (FRemoveForegroundActivate.c)
 *     PostIAMShellHookMessageEx @ 0x1C006D9B0 (PostIAMShellHookMessageEx.c)
 *     CheckForegroundRight @ 0x1C006DE0C (CheckForegroundRight.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 *     GetNonChildAncestor @ 0x1C0070A34 (GetNonChildAncestor.c)
 *     _GhostWindowFromHungWindow @ 0x1C00710D0 (_GhostWindowFromHungWindow.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C010A808 (IsImmersiveBandOrShellManaged.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C010F8B0 (DSW_GetTopLevelCreatorWindow.c)
 */

__int64 __fastcall xxxSetForegroundWindow(struct tagWND *a1, int a2)
{
  unsigned int v2; // esi
  int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  int v12; // edi
  int v14; // edx
  bool v15; // zf
  int v16; // eax
  __int64 NonChildAncestor; // rax
  __int64 *TopLevelCreatorWindow; // rax
  __int64 v19; // rax
  struct tagWND *v20; // rdi
  unsigned __int16 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rax
  _DWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 ThreadWin32Thread; // rax
  _QWORD v29[3]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v30[3]; // [rsp+58h] [rbp-40h] BYREF
  int v31; // [rsp+A0h] [rbp+8h] BYREF

  v2 = 1;
  v31 = 0;
  v5 = 1;
  v7 = GhostWindowFromHungWindow();
  if ( v7 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
    v29[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v29;
    v29[1] = v7;
    _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
    a1 = (struct tagWND *)v7;
  }
  if ( a1 && (v8 = *((_QWORD *)a1 + 2), v9 = gpqForeground, *(_QWORD *)(v8 + 424) == gpqForeground) )
  {
    v14 = 0;
    v15 = gpqForeground == *(_QWORD *)(gptiCurrent + 424LL);
  }
  else
  {
    if ( CheckForegroundRight(a1, &v31) )
    {
      FRemoveForegroundActivate(gptiCurrent);
      if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) && a1 )
        FRemoveForegroundActivate(*((_QWORD *)a1 + 2));
      v11 = xxxSetForegroundWindow2(a1, gptiCurrent, 0, 0);
      v12 = v11;
      if ( a1 )
      {
        if ( !v11 )
        {
          v10 = grpdeskRitInput;
          v9 = grpdeskRitInput;
          if ( *(_QWORD *)(gptiCurrent + 448LL) != grpdeskRitInput )
          {
            v10 = *(unsigned int *)a1;
            v9 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v10;
            if ( (*(_BYTE *)(v9 + gSharedInfo[1] + 25) & 1) == 0
              && !(unsigned int)IAMThreadAccessGranted(gptiCurrent)
              && *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != 15
              && (unsigned int)IsImmersiveBandOrShellManaged(a1) )
            {
              NonChildAncestor = GetNonChildAncestor(a1);
              TopLevelCreatorWindow = (__int64 *)DSW_GetTopLevelCreatorWindow(NonChildAncestor);
              PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x22u, *TopLevelCreatorWindow);
            }
          }
        }
      }
      goto LABEL_9;
    }
    v5 = 0;
    if ( !a1 )
      goto LABEL_36;
    if ( a2 )
    {
      v19 = GetNonChildAncestor(a1);
      v20 = (struct tagWND *)DSW_GetTopLevelCreatorWindow(v19);
      if ( (unsigned int)IsTrayWindow(v20) )
      {
        v21 = 2;
      }
      else
      {
        v20 = a1;
        v21 = 3;
      }
      if ( *(_DWORD *)(*((_QWORD *)v20 + 5) + 236LL) != 15 )
      {
        if ( (unsigned int)IsImmersiveBandOrShellManaged(v20) )
        {
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x22u, *(_QWORD *)v20);
        }
        else
        {
          v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
          v30[0] = *(_QWORD *)(v23 + 408);
          *(_QWORD *)(v23 + 408) = v30;
          v30[1] = v20;
          _InterlockedAdd((volatile signed __int32 *)v20 + 2, 1u);
          v24 = (_DWORD *)UPDWORDPointer(8196LL);
          xxxFlashWindow((unsigned __int64 *)v20, v21 | ((unsigned __int16)*v24 << 16) | 0xC, 0);
          ThreadUnlock1(v26, v25, v27);
        }
      }
    }
    if ( v31 )
    {
LABEL_36:
      v12 = 0;
      goto LABEL_9;
    }
    v8 = *((_QWORD *)a1 + 2);
    v14 = 0;
    v15 = *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(v8 + 424);
  }
  LOBYTE(v14) = v15;
  if ( v14 )
  {
    v16 = xxxActivateWindow(a1, 1, v9);
  }
  else
  {
    v10 = *(_QWORD *)(v8 + 424);
    if ( a1 == *(struct tagWND **)(v10 + 120) )
    {
      v12 = 1;
      goto LABEL_9;
    }
    v16 = PostEventMessageEx((struct tagTHREADINFO *)v8, v10, 6u, 0LL, 0, 0LL, *(_QWORD *)a1, 0LL);
  }
  v12 = v16;
LABEL_9:
  if ( v7 )
    ThreadUnlock1(v8, v10, v9);
  if ( !v5 || !v12 )
    return 0;
  return v2;
}
