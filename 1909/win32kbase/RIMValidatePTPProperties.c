/*
 * XREFs of RIMValidatePTPProperties @ 0x1C015B15C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C013B548 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C013F7E0 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMValidatePTPProperties(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // esi
  unsigned int v5; // edi

  v3 = a2;
  v4 = a1;
  v5 = -1073741668;
  if ( *(_DWORD *)(a2 + 24) != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( v4 == 3 && (*(_DWORD *)(v3 + 312) & 0x80u) != 0 && *(_DWORD *)(v3 + 720) <= 6u )
  {
    return 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 10, (__int64)&WPP_22c64a88e7383c76adeac9d441829d05_Traceguids);
  }
  return v5;
}
