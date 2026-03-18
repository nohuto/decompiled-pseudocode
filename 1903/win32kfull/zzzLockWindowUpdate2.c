/*
 * XREFs of zzzLockWindowUpdate2 @ 0x1C00139B8
 * Callers:
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00101A4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B1CC (xxxMakeWindowForegroundWithState.c)
 *     xxxFullScreenCleanup @ 0x1C0123E60 (xxxFullScreenCleanup.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     NtUserLockWindowUpdate @ 0x1C02311E0 (NtUserLockWindowUpdate.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0025520 (GetStyleWindow.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00C3604 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 *     CreateSpb @ 0x1C015D8BC (CreateSpb.c)
 *     FreeSpb @ 0x1C0208ED4 (FreeSpb.c)
 *     SpbCheck @ 0x1C020931C (SpbCheck.c)
 *     SpbCheckPwnd @ 0x1C0209394 (SpbCheckPwnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzLockWindowUpdate2(struct tagWND *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rcx
  struct tagWND *v6; // rdi
  __int64 v7; // r14
  __int64 *i; // rbx
  BOOL v9; // esi
  struct tagWND *StyleWindow; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  struct tagWND *v16; // [rsp+38h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp-10h]
  char v18; // [rsp+80h] [rbp+30h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( (gdwPUDFlags & 0x20000000) != 0 || gptiLockUpdate && gptiLockUpdate != gptiCurrent && !a2 )
  {
    v5 = 1440LL;
    goto LABEL_9;
  }
  if ( (a1 != 0LL) == (gptiLockUpdate != 0LL) )
  {
    if ( a2 )
      return 0LL;
    v5 = 87LL;
LABEL_9:
    UserSetLastError(v5);
    return 0LL;
  }
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), gptiLockUpdate, a3, a2);
  if ( a1 )
  {
    SpbCheckPwnd(a1);
    CreateSpb(a1);
    v14[1] = a1;
    v14[0] = &gspwndLockUpdate;
    HMAssignmentLock(v14);
    gptiLockUpdate = gptiCurrent;
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL, 0LL);
  }
  else
  {
    SpbCheck();
    v6 = gspwndLockUpdate;
    v15 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v15;
    v16 = v6;
    if ( v6 )
      HMLockObject(v6);
    gptiLockUpdate = 0LL;
    HMAssignmentUnlock(&gspwndLockUpdate);
    zzzLockDisplayAreaAndInvalidateDCCache(v6, 1LL, 0LL);
    v7 = 1LL;
    for ( i = *(__int64 **)(gpDispInfo + 32LL); ; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_24;
      if ( (i[6] & 2) != 0 )
        break;
    }
    if ( i[5] )
    {
      v7 = ghrgnSPB1;
      SetRectRgnIndirect(ghrgnSPB1, i + 3);
      v9 = GreCombineRgn(ghrgnSPB1, ghrgnSPB1, i[5], 4LL) != 1;
    }
    else
    {
      v9 = 0;
    }
    FreeSpb(i);
    if ( v9 )
    {
LABEL_24:
      StyleWindow = (struct tagWND *)GetStyleWindow(v6, 2568LL);
      if ( !StyleWindow )
        StyleWindow = (struct tagWND *)GetDesktopWindow(v6);
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v18);
      ++gdwDeferWinEvent;
      xxxInternalInvalidate(StyleWindow, (HRGN)v7, 0x10485u);
      zzzEndDeferWinEventNotify();
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v18);
    }
    SpbCheckPwnd(v6);
    ThreadUnlock1(v12, v11, v13);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
  return 1LL;
}
