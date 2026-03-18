/*
 * XREFs of IsShellProcess @ 0x1C0012718
 * Callers:
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C000EB34 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     CheckAllowForeground @ 0x1C00123D0 (CheckAllowForeground.c)
 *     _GetWindowTrackInfoAsync @ 0x1C0062BC0 (_GetWindowTrackInfoAsync.c)
 *     _RegisterHotKey @ 0x1C006A3D4 (_RegisterHotKey.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00F1C80 (_RegisterWindowArrangementCallout.c)
 *     NtUserRegisterShellPTPListener @ 0x1C010FDF0 (NtUserRegisterShellPTPListener.c)
 *     NtUserRegisterEdgy @ 0x1C01F3D60 (NtUserRegisterEdgy.c)
 *     NtUserSetInteractiveControlFocus @ 0x1C01F51C0 (NtUserSetInteractiveControlFocus.c)
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
