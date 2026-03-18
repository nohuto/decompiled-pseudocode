/*
 * XREFs of ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0139FEC
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     xxxMinimizeHungWindow @ 0x1C023C24C (xxxMinimizeHungWindow.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x1C001AECC (GetLastTopMostWindow.c)
 *     CanForceForeground @ 0x1C0021100 (CanForceForeground.c)
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     GetWindowCloakState @ 0x1C006A29C (GetWindowCloakState.c)
 *     GetThreadDesktopWindow @ 0x1C00E576C (GetThreadDesktopWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0133E20 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     SkipWindowOnMonitor @ 0x1C013A570 (SkipWindowOnMonitor.c)
 */

__int64 __fastcall xxxActivateOnMinimize(struct tagWND *a1, int a2)
{
  int v2; // r12d
  BOOL v4; // r14d
  int v5; // r13d
  __int64 LastTopMostWindow; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 ThreadDesktopWindow; // rax
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // edx
  __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v23; // [rsp+38h] [rbp-40h]
  __int64 v24; // [rsp+40h] [rbp-38h]

  v2 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 136LL) != 0LL;
  v5 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  LastTopMostWindow = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( v5 == 1 )
    LastTopMostWindow = GetLastTopMostWindow((__int64)a1);
  if ( !LastTopMostWindow )
  {
    ThreadDesktopWindow = *((_QWORD *)a1 + 13);
    goto LABEL_28;
  }
  v7 = *(_QWORD **)(LastTopMostWindow + 88);
  while ( 1 )
  {
    v8 = v4 ? *(_QWORD **)(*(_QWORD *)(gptiCurrent + 424LL) + 136LL) : v7;
    v9 = 0LL;
    if ( v8 )
    {
      do
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v8) + 25) & 1) == 0 )
        {
          v10 = v8[5];
          if ( (*(_BYTE *)(v10 + 27) & 8) == 0
            && (*(_BYTE *)(v10 + 31) & 0x18) == 0x10
            && !(unsigned int)GetWindowCloakState(v8) )
          {
            v11 = v8[5];
            if ( ((*(_BYTE *)(v11 + 31) & 0x20) == 0 || (*(_BYTE *)(v11 + 23) & 7) == 1)
              && (v5 != 1 || *(_DWORD *)(v11 + 236) == 1)
              && !(unsigned int)SkipWindowOnMonitor(v8) )
            {
              if ( *(char *)(v8[5] + 24LL) >= 0 )
                break;
              if ( !v9 )
                v9 = v8;
            }
          }
        }
        if ( v4 )
        {
          v4 = 0;
          v8 = v7;
        }
        else
        {
          v8 = (_QWORD *)v8[11];
        }
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
      ThreadDesktopWindow = v7[13];
      goto LABEL_28;
    }
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL, a2);
    if ( ThreadDesktopWindow )
LABEL_28:
      v7 = *(_QWORD **)(ThreadDesktopWindow + 112);
    else
      v7 = 0LL;
  }
  v22 = *(_QWORD *)(gptiCurrent + 408LL);
  v13 = 3;
  *(_QWORD *)(gptiCurrent + 408LL) = &v22;
  v23 = v8;
  HMLockObject(v8);
  v14 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v14 + 1224) & 0x40000) != 0 && *(struct tagWND **)(v14 + 1392) == a1 )
  {
    v19 = *(_QWORD *)(v14 + 424);
    if ( v19 == gpqForeground && *(struct tagWND **)(v19 + 128) == a1 )
    {
      v20 = *(_QWORD *)(v14 + 1400);
      if ( v20 )
      {
        if ( *(_QWORD *)(v20 + 16) == gptiForeground
          && *(_QWORD *)(v8[2] + 424LL) != gpqForeground
          && !CanForceForeground(*(_QWORD *)(v14 + 416)) )
        {
          v13 = 7;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              (unsigned int)&WPP_8163a11dcb983d49c90f7d29842d7cd6_Traceguids,
              v21,
              2,
              10,
              (__int64)&WPP_8163a11dcb983d49c90f7d29842d7cd6_Traceguids,
              gptiCurrent);
        }
      }
    }
  }
  xxxSetForegroundWindowWithOptions((__int64)v8, v13, 0, 0);
  ThreadUnlock1(v16, v15, v17);
  return 1LL;
}
