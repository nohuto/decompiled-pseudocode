/*
 * XREFs of rimOnPnpRemoveCancelled @ 0x1C0152234
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C00A5F4C (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0067E40 (WPP_RECORDER_SF_qqd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveCancelled(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rbx
  char v5; // si
  unsigned int v6; // edi
  void *v8; // rcx
  NTSTATUS v9; // eax
  void *v10; // rcx

  v3 = *(_DWORD *)(a2 + 184);
  v4 = a2;
  v5 = a1;
  if ( (v3 & 4) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v3 = *(_DWORD *)(v4 + 184);
  }
  if ( (v3 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 32, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids);
  }
  *(_DWORD *)(v4 + 184) &= ~4u;
  if ( (*(_DWORD *)(v4 + 184) & 0x40) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        a2,
        1,
        33,
        (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
        v5,
        v4,
        0);
    }
    return 0LL;
  }
  else
  {
    v8 = *(void **)(v4 + 248);
    if ( v8 )
    {
      v9 = IoUnregisterPlugPlayNotification(v8);
      v10 = *(void **)(v4 + 32);
      v6 = v9;
      *(_QWORD *)(v4 + 248) = 0LL;
      ObfDereferenceObject(v10);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        a2,
        1,
        34,
        (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
        v5,
        v4,
        v6);
    }
    return v6;
  }
}
