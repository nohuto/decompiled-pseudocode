/*
 * XREFs of CheckForegroundRight @ 0x1C006DE0C
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C005F640 (IsNonImmersiveBand.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C006DC70 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     IsForegroundLocked @ 0x1C006DCE8 (IsForegroundLocked.c)
 *     ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C006DD10 (-CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     IsDebuggerAttached @ 0x1C006DFB4 (IsDebuggerAttached.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 */

// write access to const memory has been detected, the output may be wrong!
_BOOL8 __fastcall CheckForegroundRight(struct tagWND *a1, _DWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r8
  __int64 CurrentProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rcx

  *a2 = 0;
  v4 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_DWORD *)(gptiCurrent + 1200LL) &= ~0x40u;
  if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) == 15 )
  {
    *a2 = 1;
    return 0LL;
  }
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent)
    || (v6 = grpdeskRitInput, *(_QWORD *)(gptiCurrent + 448LL) != grpdeskRitInput) )
  {
    if ( *(int *)(v4 + 12) >= 0 && (v7 & 0x40) == 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v6, v5);
      if ( (unsigned int)IsProcessDwm(CurrentProcess)
        && **(_WORD **)(*((_QWORD *)a1 + 14) + 8LL) != *(_WORD *)(gpsi + 900LL) )
      {
        return 1LL;
      }
      if ( !gfDebugForegroundIgnoreDebugPort )
      {
        if ( (unsigned int)IsDebuggerAttached(v4) && IsNonImmersiveBand((__int64)a1) )
          return 1LL;
        if ( gpqForeground )
        {
          v9 = *(_QWORD *)(gpqForeground + 120LL);
          if ( v9 )
          {
            if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 416LL))
              && IsNonImmersiveBand((__int64)a1) )
            {
              return 1LL;
            }
          }
        }
      }
      if ( gptiCurrent == RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)gatomBrokeredForeground, 1LL) )
        return 1LL;
      if ( v4 == gppiScreenSaver )
        return 1LL;
      CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
      if ( !(unsigned int)IsForegroundLocked() )
      {
        if ( v10 )
        {
          v14 = *(_QWORD *)(gptiCurrent + 416LL);
          if ( *(_QWORD *)(v10 + 416) == v14 )
          {
            if ( (unsigned int)IsDesktopApp(v14) )
              return 1LL;
          }
        }
      }
      if ( CheckImmersiveForegroundAccess((struct tagPROCESSINFO *)v4, a1) )
        return CheckLegacyForegroundAccess(v12, v11);
      *a2 = 1;
      return 0LL;
    }
  }
  gppiLockSFW = 0LL;
  return 1LL;
}
