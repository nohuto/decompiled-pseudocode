/*
 * XREFs of ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C000B40C
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     xxxMinimizeHungWindow @ 0x1C02243EC (xxxMinimizeHungWindow.c)
 * Callees:
 *     ?xxxSetForegroundWindow@@YAHPEAUtagWND@@H@Z @ 0x1C0009FEC (-xxxSetForegroundWindow@@YAHPEAUtagWND@@H@Z.c)
 *     SkipWindowOnMonitor @ 0x1C000B5C4 (SkipWindowOnMonitor.c)
 *     GetLastTopMostWindow @ 0x1C000FEA0 (GetLastTopMostWindow.c)
 *     GetWindowCloakState @ 0x1C002BE10 (GetWindowCloakState.c)
 *     CanForceForeground @ 0x1C00B3040 (CanForceForeground.c)
 *     GetThreadDesktopWindow @ 0x1C0109EB8 (GetThreadDesktopWindow.c)
 */

__int64 __fastcall xxxActivateOnMinimize(struct tagWND *a1)
{
  int v1; // r12d
  BOOL v3; // r15d
  int v4; // r13d
  __int64 LastTopMostWindow; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 ThreadDesktopWindow; // rax
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD v16[4]; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) != 0LL;
  v4 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  if ( v4 == 1 )
    LastTopMostWindow = GetLastTopMostWindow();
  else
    LastTopMostWindow = 0LL;
  if ( !LastTopMostWindow )
  {
    ThreadDesktopWindow = *((_QWORD *)a1 + 10);
    goto LABEL_28;
  }
  v6 = *(_QWORD *)(LastTopMostWindow + 64);
  while ( 1 )
  {
    v7 = v3 ? *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) : v6;
    v8 = 0LL;
    if ( v7 )
    {
      do
      {
        if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)v7
                       + *((_QWORD *)&gSharedInfo + 1)
                       + 25LL) & 1) == 0 )
        {
          v9 = *(_QWORD *)(v7 + 40);
          if ( (*(_BYTE *)(v9 + 27) & 8) == 0
            && (*(_BYTE *)(v9 + 31) & 0x18) == 0x10
            && !(unsigned int)GetWindowCloakState(v7) )
          {
            v10 = *(_QWORD *)(v7 + 40);
            if ( ((*(_BYTE *)(v10 + 31) & 0x20) == 0 || (*(_BYTE *)(v10 + 23) & 7) == 1)
              && (v4 != 1 || *(_DWORD *)(v10 + 236) == 1)
              && !(unsigned int)SkipWindowOnMonitor(v7) )
            {
              if ( *(char *)(*(_QWORD *)(v7 + 40) + 24LL) >= 0 )
                break;
              if ( !v8 )
                v8 = v7;
            }
          }
        }
        if ( v3 )
        {
          v3 = 0;
          v7 = v6;
        }
        else
        {
          v7 = *(_QWORD *)(v7 + 64);
        }
      }
      while ( v7 );
      if ( v7 )
        break;
    }
    if ( v1 )
    {
      v7 = v8;
      if ( !v8 )
        return 0LL;
      break;
    }
    v1 = 1;
    if ( v6 )
    {
      ThreadDesktopWindow = *(_QWORD *)(v6 + 80);
      goto LABEL_28;
    }
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    if ( ThreadDesktopWindow )
LABEL_28:
      v6 = *(_QWORD *)(ThreadDesktopWindow + 88);
    else
      v6 = 0LL;
  }
  v16[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v16;
  v16[1] = v7;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  v12 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v12 + 1208) & 0x40000) != 0 && *(struct tagWND **)(v12 + 1368) == a1 )
  {
    v14 = *(_QWORD *)(v12 + 432);
    if ( v14 == gpqForeground && *(struct tagWND **)(v14 + 120) == a1 )
    {
      v15 = *(_QWORD *)(v12 + 1376);
      if ( v15 )
      {
        if ( *(_QWORD *)(v15 + 16) == gptiForeground
          && *(_QWORD *)(*(_QWORD *)(v7 + 16) + 432LL) != gpqForeground
          && !(unsigned int)CanForceForeground(*(_QWORD *)(v12 + 424)) )
        {
          *(_DWORD *)(gptiCurrent + 488LL) |= 0x20u;
        }
      }
    }
  }
  xxxSetForegroundWindow((struct tagWND *)v7, 0);
  ThreadUnlock1();
  return 1LL;
}
