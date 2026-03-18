/*
 * XREFs of xxxRedrawWindow @ 0x1C00C3908
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C001B1CC (xxxMakeWindowForegroundWithState.c)
 *     xxxScrollWindowEx @ 0x1C0028484 (xxxScrollWindowEx.c)
 *     xxxSetLayeredWindow @ 0x1C0048844 (xxxSetLayeredWindow.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B387C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserRedrawWindow @ 0x1C00C3170 (NtUserRedrawWindow.c)
 *     NtUserInvalidateRect @ 0x1C00C3350 (NtUserInvalidateRect.c)
 *     xxxSetWindowPosAndBand @ 0x1C00CB2A0 (xxxSetWindowPosAndBand.c)
 *     NtUserInvalidateRgn @ 0x1C011D410 (NtUserInvalidateRgn.c)
 *     xxxValidateRect @ 0x1C012B424 (xxxValidateRect.c)
 *     xxxValidateRgn @ 0x1C012F210 (xxxValidateRgn.c)
 *     _DwmLockScreenUpdates @ 0x1C013FE10 (_DwmLockScreenUpdates.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxDwmStopRedirection @ 0x1C015E1B0 (xxxDwmStopRedirection.c)
 *     xxxUserResetDisplayDevice @ 0x1C0160850 (xxxUserResetDisplayDevice.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0202630 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     RemoteRedrawRectangle @ 0x1C020D198 (RemoteRedrawRectangle.c)
 *     xxxInvalidateRect @ 0x1C0221780 (xxxInvalidateRect.c)
 *     xxxMinimizeHungWindow @ 0x1C023C86C (xxxMinimizeHungWindow.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     MirrorRegion @ 0x1C01118F8 (MirrorRegion.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxRedrawWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
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
  __int64 v24; // [rsp+30h] [rbp-28h] BYREF
  struct tagWND *v25; // [rsp+38h] [rbp-20h]
  __int64 v26; // [rsp+40h] [rbp-18h]

  v4 = a4;
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
        v8 = (struct tagWND *)*((_QWORD *)v8 + 13);
        if ( v8 )
          continue;
      }
      goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
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
          GreOffsetRgn(v5, *(unsigned int *)(*((_QWORD *)v7 + 5) + 104LL));
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
    if ( !(unsigned int)IsThreadCrossSessionAttached(v8, a2, a3, a4) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v18 = *ThreadWin32Thread;
    }
    v24 = *(_QWORD *)(v18 + 408);
    *(_QWORD *)(v18 + 408) = &v24;
    v25 = v7;
    if ( v7 )
      HMLockObject(v7);
    xxxInternalInvalidate(v7, (HRGN)v5, v4 | 0x1000);
    ThreadUnlock1(v21, v20, v22);
  }
  return 1LL;
}
