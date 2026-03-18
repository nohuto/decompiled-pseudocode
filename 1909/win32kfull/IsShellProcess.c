/*
 * XREFs of IsShellProcess @ 0x1C0021208
 * Callers:
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C000B7E0 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C001B57C (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     CheckAllowForeground @ 0x1C0020E70 (CheckAllowForeground.c)
 *     _RegisterHotKey @ 0x1C008817C (_RegisterHotKey.c)
 *     NtUserGetWindowProcessHandle @ 0x1C0104140 (NtUserGetWindowProcessHandle.c)
 *     NtUserRegisterShellPTPListener @ 0x1C0117F10 (NtUserRegisterShellPTPListener.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0137190 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserRegisterEdgy @ 0x1C0232F60 (NtUserRegisterEdgy.c)
 *     NtUserSetInteractiveControlFocus @ 0x1C0234510 (NtUserSetInteractiveControlFocus.c)
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
