/*
 * XREFs of ?CanSetForegroundWindow@@YA?AW4ForegroundRightCheck@@PEBUtagWND@@@Z @ 0x1C00D7AF4
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC (-xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     IsNonImmersiveBand @ 0x1C00CEDF0 (IsNonImmersiveBand.c)
 *     IsDebuggerAttached @ 0x1C00D7D60 (IsDebuggerAttached.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C00D7DC0 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NXZ @ 0x1C00D7EC8 (-CheckCanonicalForegroundAccess@@YA_NXZ.c)
 *     IsForegroundLocked @ 0x1C00D7F44 (IsForegroundLocked.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CanSetForegroundWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 v9; // rcx
  struct tagTHREADINFO *PtiLastWokenHotKey; // rax
  __int64 v12; // rdx

  v5 = *(unsigned int *)(gptiCurrent + 1208LL);
  v6 = *(_QWORD *)(gptiCurrent + 424LL);
  *(_DWORD *)(gptiCurrent + 1208LL) &= ~0x40u;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 15 )
  {
    if ( *(int *)(v6 + 12) < 0
      || (v7 = grpdeskRitInput, *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput)
      && ((v5 & 0x40) != 0 || IAMThreadAccessGranted(gptiCurrent)) )
    {
      gppiLockSFW = 0LL;
      return 2LL;
    }
    CurrentProcess = PsGetCurrentProcess(v7, v5, a3, a4);
    if ( (unsigned int)IsProcessDwm(CurrentProcess)
      && **(_WORD **)(*(_QWORD *)(a1 + 112) + 8LL) != *(_WORD *)(gpsi + 900LL) )
    {
      return 2LL;
    }
    if ( !gfDebugForegroundIgnoreDebugPort )
    {
      if ( (unsigned int)IsDebuggerAttached(v6) && IsNonImmersiveBand(a1) )
        return 2LL;
      if ( gpqForeground )
      {
        v9 = *(_QWORD *)(gpqForeground + 120LL);
        if ( v9 )
        {
          if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL)) && IsNonImmersiveBand(a1) )
            return 2LL;
        }
      }
    }
    if ( gptiCurrent == GetProp(a1, (unsigned __int16)gatomBrokeredForeground, 1LL) )
      return 2LL;
    if ( v6 == gppiScreenSaver )
      return 2LL;
    PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
    if ( PtiLastWokenHotKey )
    {
      if ( *((_QWORD *)PtiLastWokenHotKey + 53) == *(_QWORD *)(gptiCurrent + 424LL)
        && !(unsigned int)IsForegroundLocked()
        && (unsigned int)IsDesktopApp(v12) )
      {
        return 2LL;
      }
    }
    if ( (unsigned __int8)anonymous_namespace_::CheckImmersiveForegroundAccess(v6, a1) )
      return CheckCanonicalForegroundAccess() ? 2 : 0;
  }
  return 1LL;
}
