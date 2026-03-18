/*
 * XREFs of IsShellProcess @ 0x1C001ACA8
 * Callers:
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C0010090 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0018644 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     CheckAllowForeground @ 0x1C001A910 (CheckAllowForeground.c)
 *     _RegisterHotKey @ 0x1C00882EC (_RegisterHotKey.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C012D160 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserRegisterShellPTPListener @ 0x1C013DEE0 (NtUserRegisterShellPTPListener.c)
 *     NtUserRegisterEdgy @ 0x1C0233580 (NtUserRegisterEdgy.c)
 *     NtUserSetInteractiveControlFocus @ 0x1C0234B30 (NtUserSetInteractiveControlFocus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellProcess(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 336);
  v2 = 0;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 176LL) == a1;
  return v2;
}
