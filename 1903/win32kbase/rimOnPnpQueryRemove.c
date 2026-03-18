/*
 * XREFs of rimOnPnpQueryRemove @ 0x1C0152114
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C00A5F4C (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMCloseDev @ 0x1C0067DAC (RIMCloseDev.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0067E40 (WPP_RECORDER_SF_qqd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpQueryRemove(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rbx
  char v5; // si
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // edi

  v3 = *(_DWORD *)(a2 + 184);
  v4 = a2;
  v5 = a1;
  if ( (v3 & 2) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v3 = *(_DWORD *)(v4 + 184);
  }
  if ( (v3 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 23, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids);
  }
  *(_DWORD *)(v4 + 184) &= ~2u;
  if ( (*(_DWORD *)(v4 + 184) & 0x40) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        a2,
        1,
        24,
        (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
        v5,
        v4,
        0);
    }
    return 0LL;
  }
  else
  {
    v7 = RIMCloseDev(v4);
    v9 = v7;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        v8,
        1,
        25,
        (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
        v5,
        v4,
        v7);
    }
    return v9;
  }
}
