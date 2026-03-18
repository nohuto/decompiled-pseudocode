/*
 * XREFs of _GetNextQueueWindow @ 0x1C01DF048
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C0006C70 (xxxSwitchToThisWindow.c)
 *     zzzReattachThreads @ 0x1C00D695C (zzzReattachThreads.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01DDE74 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     xxxNextWindow @ 0x1C01DF29C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01DFA50 (xxxOldNextWindow.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x1C000FEA0 (GetLastTopMostWindow.c)
 *     GetWindowCloakState @ 0x1C002BE10 (GetWindowCloakState.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C006F000 (IsWindowUnderActiveLockScreen.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006F324 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     GetAppCompatFlags @ 0x1C0115390 (GetAppCompatFlags.c)
 */

struct tagWND *__fastcall GetNextQueueWindow(__int64 a1, int a2, int a3)
{
  int v3; // r15d
  __int64 LastTopMostWindow; // rax
  ULONG_PTR v6; // r13
  const struct tagWND *TopLevelWindow; // rax
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  char *v11; // r9
  struct tagWND *v12; // rbx
  __int64 v13; // rsi
  struct tagWND *v14; // r12
  struct tagWND *v15; // rdi
  struct tagWND *i; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  struct tagWND *j; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  struct tagWND *v24; // rax
  struct tagWND *v25; // rcx

  v3 = 0;
  LastTopMostWindow = a1;
  if ( !a1 )
  {
    LastTopMostWindow = GetLastTopMostWindow(0LL);
    if ( !LastTopMostWindow )
      return 0LL;
  }
  v6 = gspwndAltTab;
  TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(LastTopMostWindow);
  CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(TopLevelWindow);
  v12 = CompositeAppFrameWindowOrSelf;
  if ( !CompositeAppFrameWindowOrSelf )
    return 0LL;
  v13 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 10);
  if ( !v13 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
    v12 = *(struct tagWND **)(v13 + 88);
  }
  v14 = v12;
  if ( !v12 )
    return 0LL;
  while ( 1 )
  {
    if ( (*(_WORD *)(*((_QWORD *)v12 + 5) + 42LL) & 0x2FFF) != 0x29D )
    {
      v15 = 0LL;
      if ( (a2 != 0) == -2 )
      {
        v17 = *((_QWORD *)v12 + 10);
        if ( v17 )
        {
          v15 = *(struct tagWND **)(v17 + 88);
          v18 = GetAppCompatFlags(0LL, v9) & 8;
          while ( v15 && v18 && (*(_BYTE *)(*((_QWORD *)v15 + 5) + 24LL) & 8) != 0 )
            v15 = (struct tagWND *)*((_QWORD *)v15 + 8);
        }
      }
      else if ( (a2 != 0) == -1 )
      {
        for ( i = *(struct tagWND **)(*((_QWORD *)v12 + 10) + 88LL); i; i = (struct tagWND *)*((_QWORD *)i + 8) )
          v15 = i;
      }
      else if ( a2 )
      {
        if ( a2 != 0 )
        {
          v15 = (struct tagWND *)*((_QWORD *)v12 + 9);
        }
        else if ( (a2 != 0) == 2 )
        {
          v15 = (struct tagWND *)*((_QWORD *)v12 + 12);
        }
        else
        {
          if ( (a2 != 0) != 3 )
          {
            UserSetLastError(1443LL, v9, v10, (__int64)v11);
            goto LABEL_30;
          }
          v15 = (struct tagWND *)*((_QWORD *)v12 + 11);
        }
      }
      else
      {
        v15 = (struct tagWND *)*((_QWORD *)v12 + 8);
      }
      v12 = v15;
      if ( v15 )
        goto LABEL_37;
    }
LABEL_30:
    v12 = *(struct tagWND **)(v13 + 88);
    if ( a2 )
    {
      v19 = *((_QWORD *)v12 + 5);
      v9 = *(_QWORD *)(v13 + 88);
      v12 = 0LL;
      if ( (*(_WORD *)(v19 + 42) & 0x2FFF) != 0x29D )
      {
        for ( j = *(struct tagWND **)(*(_QWORD *)(v9 + 80) + 88LL); j; j = (struct tagWND *)*((_QWORD *)j + 8) )
          v12 = j;
      }
    }
    if ( v3 )
      return 0LL;
    v3 = 1;
    if ( !v12 )
      return 0LL;
LABEL_37:
    if ( v12 == v14 )
      return 0LL;
    if ( v12 != (struct tagWND *)v6 )
    {
      v11 = (char *)*((_QWORD *)v12 + 5);
      if ( v11[24] >= 0
        && (v11[27] & 8) == 0
        && !(unsigned int)IsWindowUnderActiveLockScreen((__int64)v12)
        && (v11[31] & 0x10) != 0
        && !(unsigned int)GetWindowCloakState(v21) )
      {
        v22 = *((_QWORD *)v12 + 23);
        if ( !v22
          || (*(_BYTE *)(*(_QWORD *)(v22 + 40) + 31LL) & 8) == 0
          && (!a3 || (v23 = *((_QWORD *)v12 + 5), (*(_BYTE *)(v23 + 24) & 8) == 0) && (*(_BYTE *)(v23 + 20) & 0x20) == 0) )
        {
          v24 = (struct tagWND *)*((_QWORD *)v12 + 12);
          v25 = v12;
          while ( v24 )
          {
            v25 = v24;
            v24 = (struct tagWND *)*((_QWORD *)v24 + 12);
          }
          if ( v12 == *((struct tagWND **)v25 + 23) )
            return v12;
        }
      }
    }
    if ( !v12 )
      return 0LL;
  }
}
