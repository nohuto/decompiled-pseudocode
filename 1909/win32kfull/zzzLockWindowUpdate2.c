/*
 * XREFs of zzzLockWindowUpdate2 @ 0x1C0134CFC
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C001B8F4 (xxxMakeWindowForegroundWithState.c)
 *     xxxFullScreenCleanup @ 0x1C00FE790 (xxxFullScreenCleanup.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C01043B8 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     NtUserLockWindowUpdate @ 0x1C0230BC0 (NtUserLockWindowUpdate.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     GetStyleWindow @ 0x1C002B990 (GetStyleWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0064CD4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxInternalInvalidate @ 0x1C0065240 (xxxInternalInvalidate.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 *     CreateSpb @ 0x1C015E86C (CreateSpb.c)
 *     FreeSpb @ 0x1C0208C24 (FreeSpb.c)
 *     SpbCheck @ 0x1C020906C (SpbCheck.c)
 *     SpbCheckPwnd @ 0x1C02090E4 (SpbCheckPwnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzLockWindowUpdate2(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v6; // rcx
  struct tagWND *v7; // rdi
  __int64 v8; // r14
  __int64 *i; // rbx
  BOOL v10; // esi
  struct tagWND *StyleWindow; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD v15[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  struct tagWND *v17; // [rsp+38h] [rbp-18h]
  __int64 v18; // [rsp+40h] [rbp-10h]
  char v19; // [rsp+80h] [rbp+30h] BYREF

  v3 = (unsigned int)a2;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( (gdwPUDFlags & 0x20000000) != 0 || (a2 = gptiLockUpdate) != 0 && gptiLockUpdate != gptiCurrent && !(_DWORD)v3 )
  {
    v6 = 1440LL;
    goto LABEL_9;
  }
  if ( (a1 != 0LL) == (gptiLockUpdate != 0LL) )
  {
    if ( (_DWORD)v3 )
      return 0LL;
    v6 = 87LL;
LABEL_9:
    UserSetLastError(v6, a2, a3, v3);
    return 0LL;
  }
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( a1 )
  {
    SpbCheckPwnd(a1);
    CreateSpb(a1);
    v15[1] = a1;
    v15[0] = &gspwndLockUpdate;
    HMAssignmentLock(v15);
    gptiLockUpdate = gptiCurrent;
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
  else
  {
    SpbCheck();
    v7 = gspwndLockUpdate;
    v16 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v16;
    v17 = v7;
    if ( v7 )
      HMLockObject(v7);
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
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v19);
      ++gdwDeferWinEvent;
      xxxInternalInvalidate(StyleWindow, (HRGN)v8, 0x10485u);
      zzzEndDeferWinEventNotify();
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v19);
    }
    SpbCheckPwnd(v7);
    ThreadUnlock1(v13, v12, v14);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
  return 1LL;
}
