/*
 * XREFs of _anonymous_namespace_::CanSetForegroundWindow @ 0x1C0017840
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00168A0 (IsNonImmersiveBand.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C0017788 (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     IsForegroundLocked @ 0x1C0017818 (IsForegroundLocked.c)
 *     IsDebuggerAttached @ 0x1C0017AC8 (IsDebuggerAttached.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C0018040 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     WPP_RECORDER_SF_s @ 0x1C0019388 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     IAMThreadAccessGranted @ 0x1C008AAEC (IAMThreadAccessGranted.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall anonymous_namespace_::CanSetForegroundWindow(__int64 a1, _WORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 v9; // rcx
  struct tagTHREADINFO *PtiLastWokenHotKey; // rax
  int v11; // edx
  bool v12; // di
  const char *v13; // rcx
  int v15; // r9d
  __int64 v16; // rdx
  int v17; // r9d

  v4 = (unsigned int)a2;
  v5 = a1;
  v6 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) == 15 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1LL;
    v15 = 24;
    goto LABEL_23;
  }
  if ( *(int *)(v6 + 12) < 0 )
  {
    gppiLockSFW = 0LL;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v17 = 25;
    goto LABEL_32;
  }
  v7 = grpdeskRitInput;
  if ( *(_QWORD *)(gptiCurrent + 448LL) == grpdeskRitInput
    && ((_DWORD)a2 == 31 || (unsigned int)IAMThreadAccessGranted(gptiCurrent)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(v7, (_DWORD)a2, 2, 26, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
    }
    gppiLockSFW = 0LL;
    return 2LL;
  }
  CurrentProcess = PsGetCurrentProcess(v7, a2, a3, a4);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    a2 = *(_WORD **)(*(_QWORD *)(v5 + 136) + 8LL);
    LODWORD(a1) = gpsi;
    if ( *a2 != *(_WORD *)(gpsi + 900LL) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 2LL;
      v17 = 27;
LABEL_32:
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(a1, (_DWORD)a2, 2, v17, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
      return 2LL;
    }
  }
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
  {
    if ( (unsigned int)IsDebuggerAttached(v6) && IsNonImmersiveBand(v5) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 2LL;
      v17 = 28;
      goto LABEL_32;
    }
    if ( gpqForeground )
    {
      v9 = *(_QWORD *)(gpqForeground + 128LL);
      if ( v9 )
      {
        if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 416LL)) && IsNonImmersiveBand(v5) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 2LL;
          v17 = 29;
          goto LABEL_32;
        }
      }
    }
  }
  if ( gptiCurrent == GetProp(v5, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v17 = 30;
    goto LABEL_32;
  }
  if ( v6 == gppiScreenSaver )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v17 = 31;
    goto LABEL_32;
  }
  PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
  if ( PtiLastWokenHotKey
    && *((_QWORD *)PtiLastWokenHotKey + 52) == *(_QWORD *)(gptiCurrent + 416LL)
    && !(unsigned int)IsForegroundLocked()
    && (unsigned int)IsDesktopApp(v16) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v17 = 32;
    goto LABEL_32;
  }
  if ( !(unsigned __int8)anonymous_namespace_::CheckImmersiveForegroundAccess(v5, v4) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1LL;
    v15 = 33;
LABEL_23:
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(a1, (_DWORD)a2, 2, v15, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
    return 1LL;
  }
  v12 = CheckCanonicalForegroundAccess(v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = "HasRight";
    if ( !v12 )
      v13 = "NoRights";
    WPP_RECORDER_SF_s((_DWORD)v13, v11, 2, 34, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids, (__int64)v13);
  }
  return v12 ? 2 : 0;
}
