/*
 * XREFs of ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00FB27C
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     xxxMinimizeHungWindow @ 0x1C01FBAB4 (xxxMinimizeHungWindow.c)
 * Callees:
 *     CanForceForeground @ 0x1C0012630 (CanForceForeground.c)
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 *     GetLastTopMostWindow @ 0x1C006E748 (GetLastTopMostWindow.c)
 *     GetWindowCloakState @ 0x1C0074700 (GetWindowCloakState.c)
 *     GetThreadDesktopWindow @ 0x1C00F06E0 (GetThreadDesktopWindow.c)
 *     SkipWindowOnMonitor @ 0x1C00FB434 (SkipWindowOnMonitor.c)
 */

__int64 __fastcall xxxActivateOnMinimize(struct tagWND *a1, __int64 a2)
{
  int v2; // r12d
  BOOL v4; // r15d
  int v5; // r13d
  __int64 LastTopMostWindow; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 ThreadDesktopWindow; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD v20[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL) != 0LL;
  v5 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  if ( v5 == 1 )
    LastTopMostWindow = GetLastTopMostWindow((__int64)a1);
  else
    LastTopMostWindow = 0LL;
  if ( !LastTopMostWindow )
  {
    ThreadDesktopWindow = *((_QWORD *)a1 + 10);
    goto LABEL_28;
  }
  v7 = *(_QWORD *)(LastTopMostWindow + 64);
  while ( 1 )
  {
    v8 = v4 ? *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL) : v7;
    v9 = 0LL;
    if ( v8 )
    {
      do
      {
        a2 = gSharedInfo[0];
        if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v8 + gSharedInfo[1] + 25LL) & 1) == 0 )
        {
          v10 = *(_QWORD *)(v8 + 40);
          if ( (*(_BYTE *)(v10 + 27) & 8) == 0
            && (*(_BYTE *)(v10 + 31) & 0x18) == 0x10
            && !(unsigned int)GetWindowCloakState((_QWORD *)v8) )
          {
            v11 = *(_QWORD *)(v8 + 40);
            if ( ((*(_BYTE *)(v11 + 31) & 0x20) == 0 || (*(_BYTE *)(v11 + 23) & 7) == 1)
              && (v5 != 1 || *(_DWORD *)(v11 + 236) == 1)
              && !(unsigned int)SkipWindowOnMonitor(v8) )
            {
              if ( *(char *)(*(_QWORD *)(v8 + 40) + 24LL) >= 0 )
                break;
              if ( !v9 )
                v9 = v8;
            }
          }
        }
        if ( v4 )
          v8 = v7;
        else
          v8 = *(_QWORD *)(v8 + 64);
        v4 = 0;
      }
      while ( v8 );
      if ( v8 )
        break;
    }
    if ( v2 )
    {
      v8 = v9;
      if ( !v9 )
        return 0LL;
      break;
    }
    v2 = 1;
    if ( v7 )
    {
      ThreadDesktopWindow = *(_QWORD *)(v7 + 80);
      goto LABEL_28;
    }
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL, a2);
    if ( ThreadDesktopWindow )
LABEL_28:
      v7 = *(_QWORD *)(ThreadDesktopWindow + 88);
    else
      v7 = 0LL;
  }
  v20[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v20;
  v20[1] = v8;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  v13 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v13 + 1200) & 0x40000) != 0 && *(struct tagWND **)(v13 + 1376) == a1 )
  {
    v18 = *(_QWORD *)(v13 + 424);
    if ( v18 == gpqForeground && *(struct tagWND **)(v18 + 120) == a1 )
    {
      v19 = *(_QWORD *)(v13 + 1384);
      if ( v19 )
      {
        if ( *(_QWORD *)(v19 + 16) == gptiForeground
          && *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL) != gpqForeground
          && !(unsigned int)CanForceForeground(*(_QWORD *)(v13 + 416)) )
        {
          *(_DWORD *)(gptiCurrent + 480LL) |= 0x20u;
        }
      }
    }
  }
  xxxSetForegroundWindow((struct tagWND *)v8, 0);
  ThreadUnlock1(v15, v14, v16);
  return 1LL;
}
