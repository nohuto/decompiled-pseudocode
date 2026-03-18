/*
 * XREFs of _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C01338AC
 * Callers:
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C01335E4 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C0135164 (_anonymous_namespace_--FAllowForegroundActivate.c)
 * Callees:
 *     PtiKbdFromQ @ 0x1C002BD30 (PtiKbdFromQ.c)
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     IsNonImmersiveBand @ 0x1C012FC10 (IsNonImmersiveBand.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::CheckImmersiveForegroundAccess(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 CurrentProcessWin32Process; // rdi
  int v5; // edx
  bool v6; // bp
  __int64 v7; // rcx
  int v9; // r9d
  char v10; // cl
  char v11; // al
  char v12; // bl
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx

  v2 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v6 = (unsigned int)IsDesktopApp(CurrentProcessWin32Process) != 0;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 812) & 0x100) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v5,
        2,
        12,
        (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids,
        CurrentProcessWin32Process);
    return 1;
  }
  if ( *(_DWORD *)(CurrentProcessWin32Process + 876) )
  {
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
    {
      v10 = v2;
      v11 = v2 | 1;
      v12 = v2 & 0xFE;
      if ( (v10 & 8) != 0 )
        v12 = v11;
      if ( (v12 & 0x10) != 0 )
        v2 = v12 | 2;
      else
        v2 = v12 & 0xFD;
    }
    if ( (v2 & 1) == 0 )
    {
      v5 = *(_DWORD *)(CurrentProcessWin32Process + 876);
      if ( v5 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 876LL)
        && !(unsigned __int8)SeIsParentOfChildAppContainer((unsigned int)gSessionId) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0;
        v9 = 13;
        goto LABEL_12;
      }
    }
    if ( (v2 & 2) != 0 )
    {
      if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
      v6 = 1;
    }
    else if ( gpqForeground )
    {
      v13 = PtiKbdFromQ(gpqForeground);
      if ( *(_DWORD *)(*(_QWORD *)(v13 + 416) + 876LL) != v5 )
      {
        PtiKbdFromQ(v14);
        if ( !(unsigned __int8)SeIsParentOfChildAppContainer((unsigned int)gSessionId) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0;
          v9 = 14;
          goto LABEL_12;
        }
      }
    }
  }
  if ( !v6 || !gpqForeground || (v7 = *(_QWORD *)(gpqForeground + 128LL)) == 0 || IsNonImmersiveBand(v7) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v5,
        2,
        16,
        (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
    }
    return 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 15;
LABEL_12:
    WPP_RECORDER_SF_q(
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v5,
      2,
      v9,
      (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids,
      CurrentProcessWin32Process);
  }
  return 0;
}
