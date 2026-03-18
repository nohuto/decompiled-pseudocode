/*
 * XREFs of xxxRedrawWindow @ 0x1C002AA30
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C0008660 (xxxDwmStopRedirection.c)
 *     NtUserRedrawWindow @ 0x1C002A700 (NtUserRedrawWindow.c)
 *     NtUserInvalidateRect @ 0x1C002A820 (NtUserInvalidateRect.c)
 *     xxxScrollWindowEx @ 0x1C002F500 (xxxScrollWindowEx.c)
 *     xxxSetWindowPosAndBand @ 0x1C0034E48 (xxxSetWindowPosAndBand.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C005AD04 (xxxMakeWindowForegroundWithState.c)
 *     xxxValidateRgn @ 0x1C0062E20 (xxxValidateRgn.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006C68C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00C433C (xxxSetLayeredWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     NtUserInvalidateRgn @ 0x1C00F9B10 (NtUserInvalidateRgn.c)
 *     xxxValidateRect @ 0x1C01031D0 (xxxValidateRect.c)
 *     _DwmLockScreenUpdates @ 0x1C0112960 (_DwmLockScreenUpdates.c)
 *     xxxUserResetDisplayDevice @ 0x1C0138980 (xxxUserResetDisplayDevice.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01C8440 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     RemoteRedrawRectangle @ 0x1C01D255C (RemoteRedrawRectangle.c)
 *     xxxInvalidateRect @ 0x1C01E3E10 (xxxInvalidateRect.c)
 *     xxxMinimizeHungWindow @ 0x1C01FBAB4 (xxxMinimizeHungWindow.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     MirrorRegion @ 0x1C00F5E18 (MirrorRegion.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxRedrawWindow(struct tagWND *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rdi
  int *v6; // r11
  struct tagWND *v7; // rbx
  struct tagWND *v8; // rcx
  char v9; // al
  __int64 v10; // rcx
  int v11; // edx
  int v12; // eax
  int v13; // edx
  __int64 v14; // rcx
  struct tagWND *v15; // rax
  __int64 v16; // rdx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v18; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD v24[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a3;
  v6 = (int *)a2;
  v7 = a1;
  if ( !a1 )
    v7 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
  v8 = v7;
  if ( v7 )
  {
    while ( 1 )
    {
      a2 = *((_QWORD *)v8 + 5);
      v9 = *(_BYTE *)(a2 + 31);
      if ( (v9 & 0x10) == 0 || (v9 & 0x20) != 0 && v8 != v7 )
        break;
      if ( (*(_WORD *)(a2 + 42) & 0x3FFF) != 0x29D )
      {
        v8 = (struct tagWND *)*((_QWORD *)v8 + 10);
        if ( v8 )
          continue;
      }
      goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    if ( (a4 & 9) != 0 )
    {
      if ( a3 )
      {
        if ( a3 != 1 )
        {
          GreCombineRgn(ghrgnInv0, a3, 0LL, 5LL);
          MirrorRegion(v7, ghrgnInv0, 1LL);
          v5 = ghrgnInv0;
        }
        if ( v7 != (struct tagWND *)GetDesktopWindow(v7) )
          GreOffsetRgn(
            v5,
            *(unsigned int *)(*((_QWORD *)v7 + 5) + 104LL),
            *(unsigned int *)(*((_QWORD *)v7 + 5) + 108LL));
      }
      else if ( v6 )
      {
        v10 = *((_QWORD *)v7 + 5);
        v5 = ghrgnInv0;
        if ( (*(_BYTE *)(v10 + 26) & 0x40) != 0 )
        {
          v11 = *(_DWORD *)(v10 + 112) - *(_DWORD *)(v10 + 104);
          v12 = v11 - v6[2];
          v13 = v11 - *v6;
          *v6 = v12;
          v6[2] = v13;
        }
        v14 = *((_QWORD *)v7 + 3);
        v15 = 0LL;
        if ( v14 )
        {
          v16 = *(_QWORD *)(v14 + 8);
          if ( v16 )
            v15 = *(struct tagWND **)(v16 + 24);
        }
        if ( v7 == v15 )
          SetRectRgnIndirect(ghrgnInv0, v6);
        else
          GreSetRectRgn(
            ghrgnInv0,
            (unsigned int)(*v6 + *(_DWORD *)(*((_QWORD *)v7 + 5) + 104LL)),
            (unsigned int)(*(_DWORD *)(*((_QWORD *)v7 + 5) + 108LL) + v6[1]),
            (unsigned int)(*(_DWORD *)(*((_QWORD *)v7 + 5) + 104LL) + v6[2]),
            *(_DWORD *)(*((_QWORD *)v7 + 5) + 108LL) + v6[3]);
      }
      else
      {
        v5 = 1LL;
      }
    }
    CurrentThread = KeGetCurrentThread();
    v18 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v8, a2) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v18 = *ThreadWin32Thread;
    }
    v24[0] = *(_QWORD *)(v18 + 408);
    *(_QWORD *)(v18 + 408) = v24;
    v24[1] = v7;
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    xxxInternalInvalidate(v7, (HRGN)v5, a4 | 0x1000);
    ThreadUnlock1(v21, v20, v22);
  }
  return 1LL;
}
