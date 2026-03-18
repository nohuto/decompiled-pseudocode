/*
 * XREFs of rimOnPnpRemoveComplete @ 0x1C0069434
 * Callers:
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C006A0B0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMOnPnpNotification @ 0x1C006B250 (RIMOnPnpNotification.c)
 *     RIMRemoveDevOfInputType @ 0x1C006EF3C (RIMRemoveDevOfInputType.c)
 *     RIMDoOnPnpNotification @ 0x1C00A5F4C (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMCloseDev @ 0x1C0067DAC (RIMCloseDev.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0067E40 (WPP_RECORDER_SF_qqd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveComplete(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rbx
  char v5; // si
  unsigned int v6; // eax
  int v7; // edx
  void *v8; // rcx
  unsigned int v9; // edi
  NTSTATUS v10; // eax
  int v11; // eax
  void *v12; // rcx

  v3 = *(_DWORD *)(a2 + 184);
  v4 = a2;
  v5 = a1;
  if ( (v3 & 8) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v3 = *(_DWORD *)(v4 + 184);
  }
  if ( (v3 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 26, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids);
  }
  *(_DWORD *)(v4 + 184) &= ~8u;
  if ( (*(_DWORD *)(v4 + 184) & 0x40) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        a2,
        1,
        27,
        (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
        v5,
        v4,
        0);
    }
    return 0LL;
  }
  else
  {
    v6 = RIMCloseDev(v4);
    v8 = *(void **)(v4 + 248);
    v9 = v6;
    if ( v8 )
    {
      v10 = IoUnregisterPlugPlayNotification(v8);
      *(_QWORD *)(v4 + 248) = 0LL;
      v9 = v10;
      v11 = *(_DWORD *)(v4 + 184);
      *(_DWORD *)(v4 + 200) &= ~0x20u;
      v12 = *(void **)(v4 + 32);
      *(_DWORD *)(v4 + 184) = v11 & 0xFFFFFB7F | 0x400;
      ObfDereferenceObject(v12);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        v7,
        1,
        28,
        (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
        v5,
        v4,
        v9);
    }
    return v9;
  }
}
