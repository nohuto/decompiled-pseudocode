/*
 * XREFs of zzzLockWindowUpdate2 @ 0x1C00D817C
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C00B0710 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     xxxFullScreenCleanup @ 0x1C011A6E0 (xxxFullScreenCleanup.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120D28 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     NtUserLockWindowUpdate @ 0x1C0219380 (NtUserLockWindowUpdate.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0039EC0 (GetStyleWindow.c)
 *     xxxInternalInvalidate @ 0x1C0039F20 (xxxInternalInvalidate.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C003AB88 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CreateSpb @ 0x1C0157150 (CreateSpb.c)
 *     FreeSpb @ 0x1C01F2C24 (FreeSpb.c)
 *     SpbCheck @ 0x1C01F306C (SpbCheck.c)
 *     SpbCheckPwnd @ 0x1C01F30E4 (SpbCheckPwnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzLockWindowUpdate2(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  struct tagWND *v7; // rbx
  __int64 v8; // rbp
  __int64 *i; // rdi
  BOOL v10; // esi
  struct tagWND *StyleWindow; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v15[7]; // [rsp+30h] [rbp-38h] BYREF
  char v16; // [rsp+80h] [rbp+18h] BYREF

  if ( (gdwPUDFlags & 0x20000000) != 0 || (a3 = gptiLockUpdate) != 0 && gptiLockUpdate != gptiCurrent && !(_DWORD)a2 )
  {
    v6 = 1440LL;
    goto LABEL_9;
  }
  if ( (a1 != 0LL) == (gptiLockUpdate != 0LL) )
  {
    if ( (_DWORD)a2 )
      return 0LL;
    v6 = 87LL;
LABEL_9:
    UserSetLastError(v6, a2, a3, a4);
    return 0LL;
  }
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( a1 )
  {
    SpbCheckPwnd(a1);
    CreateSpb(a1);
    v14[1] = a1;
    v14[0] = &gspwndLockUpdate;
    HMAssignmentLock(v14);
    gptiLockUpdate = gptiCurrent;
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
  else
  {
    SpbCheck();
    v7 = gspwndLockUpdate;
    v15[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v15;
    v15[1] = v7;
    if ( v7 )
      _InterlockedAdd((volatile signed __int32 *)v7 + 2, 1u);
    gptiLockUpdate = 0LL;
    HMAssignmentUnlock(&gspwndLockUpdate);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v7, 1, 0LL);
    v8 = 1LL;
    for ( i = *(__int64 **)(gpDispInfo + 32LL); ; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_24;
      if ( (i[6] & 2) != 0 )
        break;
    }
    if ( i[5] )
    {
      v8 = ghrgnSPB1;
      SetRectRgnIndirect(ghrgnSPB1, i + 3);
      v10 = GreCombineRgn(ghrgnSPB1, ghrgnSPB1, i[5], 4LL) != 1;
    }
    else
    {
      v10 = 0;
    }
    FreeSpb(i);
    if ( v10 )
    {
LABEL_24:
      StyleWindow = (struct tagWND *)GetStyleWindow((__int64)v7, 2568);
      if ( !StyleWindow )
        StyleWindow = (struct tagWND *)GetDesktopWindow((__int64)v7);
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
      ++gdwDeferWinEvent;
      xxxInternalInvalidate(StyleWindow, (HRGN)v8, 0x10485u);
      zzzEndDeferWinEventNotify();
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
    }
    SpbCheckPwnd(v7);
    ThreadUnlock1(v13, v12);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
  return 1LL;
}
