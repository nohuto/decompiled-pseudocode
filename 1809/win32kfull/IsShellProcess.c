/*
 * XREFs of IsShellProcess @ 0x1C00B3148
 * Callers:
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C0009580 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     _RegisterHotKey @ 0x1C00A50DC (_RegisterHotKey.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C00B0E48 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     CheckAllowForeground @ 0x1C00B2DC0 (CheckAllowForeground.c)
 *     NtUserGetWindowProcessHandle @ 0x1C01210A0 (NtUserGetWindowProcessHandle.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0123390 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserRegisterShellPTPListener @ 0x1C0132950 (NtUserRegisterShellPTPListener.c)
 *     NtUserRegisterEdgy @ 0x1C021B490 (NtUserRegisterEdgy.c)
 *     NtUserSetInteractiveControlFocus @ 0x1C021CA10 (NtUserSetInteractiveControlFocus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellProcess(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 344);
  v2 = 0;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 176LL) == a1;
  return v2;
}
