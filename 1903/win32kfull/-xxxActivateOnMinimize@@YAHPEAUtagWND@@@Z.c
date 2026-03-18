/*
 * XREFs of ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0100D18
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     xxxMinimizeHungWindow @ 0x1C023C86C (xxxMinimizeHungWindow.c)
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     CanForceForeground @ 0x1C001ABA0 (CanForceForeground.c)
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     GetLastTopMostWindow @ 0x1C00895E4 (GetLastTopMostWindow.c)
 *     GetWindowCloakState @ 0x1C00C8BCC (GetWindowCloakState.c)
 *     SkipWindowOnMonitor @ 0x1C01012A0 (SkipWindowOnMonitor.c)
 *     GetThreadDesktopWindow @ 0x1C010B1CC (GetThreadDesktopWindow.c)
 */

__int64 __fastcall xxxActivateOnMinimize(struct tagWND *a1)
{
  int v1; // r12d
  BOOL v3; // r14d
  int v4; // r13d
  __int64 LastTopMostWindow; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 ThreadDesktopWindow; // rax
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-38h]

  v1 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 136LL) != 0LL;
  v4 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  LastTopMostWindow = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( v4 == 1 )
    LastTopMostWindow = GetLastTopMostWindow((__int64)a1);
  if ( !LastTopMostWindow )
  {
    ThreadDesktopWindow = *((_QWORD *)a1 + 13);
    goto LABEL_28;
  }
  v6 = *(_QWORD **)(LastTopMostWindow + 88);
  while ( 1 )
  {
    v7 = v3 ? *(_QWORD **)(*(_QWORD *)(gptiCurrent + 424LL) + 136LL) : v6;
    v8 = 0LL;
    if ( v7 )
    {
      do
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v7) + 25) & 1) == 0 )
        {
          v9 = v7[5];
          if ( (*(_BYTE *)(v9 + 27) & 8) == 0
            && (*(_BYTE *)(v9 + 31) & 0x18) == 0x10
            && !(unsigned int)GetWindowCloakState(v7) )
          {
            v10 = v7[5];
            if ( ((*(_BYTE *)(v10 + 31) & 0x20) == 0 || (*(_BYTE *)(v10 + 23) & 7) == 1)
              && (v4 != 1 || *(_DWORD *)(v10 + 236) == 1)
              && !(unsigned int)SkipWindowOnMonitor(v7) )
            {
              if ( *(char *)(v7[5] + 24LL) >= 0 )
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
          v7 = (_QWORD *)v7[11];
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
      ThreadDesktopWindow = v6[13];
      goto LABEL_28;
    }
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    if ( ThreadDesktopWindow )
LABEL_28:
      v6 = *(_QWORD **)(ThreadDesktopWindow + 112);
    else
      v6 = 0LL;
  }
  v21 = *(_QWORD *)(gptiCurrent + 408LL);
  v12 = 3;
  *(_QWORD *)(gptiCurrent + 408LL) = &v21;
  v22 = v7;
  HMLockObject(v7);
  v13 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v13 + 1224) & 0x40000) != 0 && *(struct tagWND **)(v13 + 1392) == a1 )
  {
    v18 = *(_QWORD *)(v13 + 424);
    if ( v18 == gpqForeground && *(struct tagWND **)(v18 + 128) == a1 )
    {
      v19 = *(_QWORD *)(v13 + 1400);
      if ( v19 )
      {
        if ( *(_QWORD *)(v19 + 16) == gptiForeground
          && *(_QWORD *)(v7[2] + 424LL) != gpqForeground
          && !CanForceForeground(*(_QWORD *)(v13 + 416)) )
        {
          v12 = 7;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              (unsigned int)&WPP_8163a11dcb983d49c90f7d29842d7cd6_Traceguids,
              v20,
              2u,
              0xAu,
              (__int64)&WPP_8163a11dcb983d49c90f7d29842d7cd6_Traceguids,
              gptiCurrent);
        }
      }
    }
  }
  xxxSetForegroundWindowWithOptions((__int64)v7, v12, 0, 0);
  ThreadUnlock1(v15, v14, v16);
  return 1LL;
}
