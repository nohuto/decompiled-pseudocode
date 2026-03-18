/*
 * XREFs of xxxRedrawWindow @ 0x1C00C7520
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     xxxSetWindowStyle @ 0x1C002C580 (xxxSetWindowStyle.c)
 *     xxxSetWindowPosAndBand @ 0x1C0071DE8 (xxxSetWindowPosAndBand.c)
 *     xxxScrollWindowEx @ 0x1C0079188 (xxxScrollWindowEx.c)
 *     xxxSetLayeredWindow @ 0x1C007BECC (xxxSetLayeredWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00B0710 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B4ADC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxDwmStopRedirection @ 0x1C00C6C60 (xxxDwmStopRedirection.c)
 *     xxxValidateRgn @ 0x1C00C70B0 (xxxValidateRgn.c)
 *     xxxValidateRect @ 0x1C00C71EC (xxxValidateRect.c)
 *     NtUserInvalidateRgn @ 0x1C00C7210 (NtUserInvalidateRgn.c)
 *     NtUserInvalidateRect @ 0x1C00C72D0 (NtUserInvalidateRect.c)
 *     _DwmLockScreenUpdates @ 0x1C0135E10 (_DwmLockScreenUpdates.c)
 *     xxxUserResetDisplayDevice @ 0x1C0159020 (xxxUserResetDisplayDevice.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E2B8C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EC780 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     RemoteRedrawRectangle @ 0x1C01F6EDC (RemoteRedrawRectangle.c)
 *     xxxInvalidateRect @ 0x1C0209CE0 (xxxInvalidateRect.c)
 *     xxxMinimizeHungWindow @ 0x1C02243EC (xxxMinimizeHungWindow.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C0039F20 (xxxInternalInvalidate.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     MirrorRegion @ 0x1C00C7908 (MirrorRegion.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
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
  _QWORD v23[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a3;
  v6 = (int *)a2;
  v7 = a1;
  if ( !a1 )
    v7 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  v8 = v7;
  if ( v7 )
  {
    while ( 1 )
    {
      a2 = *((_QWORD *)v8 + 5);
      v9 = *(_BYTE *)(a2 + 31);
      if ( (v9 & 0x10) == 0 || (v9 & 0x20) != 0 && v8 != v7 )
        break;
      if ( (*(_WORD *)(a2 + 42) & 0x2FFF) != 0x29D )
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
        if ( v7 != (struct tagWND *)GetDesktopWindow((__int64)v7) )
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
    v23[0] = *(_QWORD *)(v18 + 416);
    *(_QWORD *)(v18 + 416) = v23;
    v23[1] = v7;
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    xxxInternalInvalidate(v7, (HRGN)v5, a4 | 0x1000);
    ThreadUnlock1(v21, v20);
  }
  return 1LL;
}
