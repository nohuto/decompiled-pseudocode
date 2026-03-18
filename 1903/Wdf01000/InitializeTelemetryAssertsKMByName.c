/*
 * XREFs of InitializeTelemetryAssertsKMByName @ 0x1C0092A04
 * Callers:
 *     RegisterTelemetryProvider @ 0x1C0062DCC (RegisterTelemetryProvider.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     TraceLoggingSetInformation @ 0x1C00C80A0 (TraceLoggingSetInformation.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKMByName(const char *ModuleName)
{
  _GUID v1; // xmm0
  _EVENT_INFO_CLASS v2; // edx
  _GUID v3; // xmm0
  _EVENT_INFO_CLASS v4; // edx
  _GUID v5; // xmm0
  _EVENT_INFO_CLASS v6; // edx
  _DWORD *PoolWithTag; // rax
  _GUID ProviderId; // [rsp+20h] [rbp-48h] BYREF
  _GUID v10; // [rsp+30h] [rbp-38h] BYREF
  _GUID v11; // [rsp+40h] [rbp-28h] BYREF

  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
  {
    KeInitializeSpinLock(&g_AssertSpinLock);
    g_MicrosoftTelemetryAssertsTriggeredList.Blink = &g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList.Flink = &g_MicrosoftTelemetryAssertsTriggeredList;
    v1 = (_GUID)*((_OWORD *)Tlgmtakm_hTelemetryAssertProv.ProviderMetadataPtr - 1);
    *(_OWORD *)&Tlgmtakm_hTelemetryAssertProv.EnableCallback = 0LL;
    ProviderId = v1;
    if ( !EtwRegister(
            &ProviderId,
            TlgEnableCallback,
            &Tlgmtakm_hTelemetryAssertProv,
            &Tlgmtakm_hTelemetryAssertProv.RegHandle) )
      TraceLoggingSetInformation(
        &Tlgmtakm_hTelemetryAssertProv,
        v2,
        (void *)Tlgmtakm_hTelemetryAssertProv.ProviderMetadataPtr,
        *Tlgmtakm_hTelemetryAssertProv.ProviderMetadataPtr);
    v3 = (_GUID)*((_OWORD *)Tlgmtakm_hTelemetryAssertDiagTrackProv.ProviderMetadataPtr - 1);
    *(_OWORD *)&Tlgmtakm_hTelemetryAssertDiagTrackProv.EnableCallback = 0LL;
    v10 = v3;
    if ( !EtwRegister(
            &v10,
            TlgEnableCallback,
            &Tlgmtakm_hTelemetryAssertDiagTrackProv,
            &Tlgmtakm_hTelemetryAssertDiagTrackProv.RegHandle) )
      TraceLoggingSetInformation(
        &Tlgmtakm_hTelemetryAssertDiagTrackProv,
        v4,
        (void *)Tlgmtakm_hTelemetryAssertDiagTrackProv.ProviderMetadataPtr,
        *Tlgmtakm_hTelemetryAssertDiagTrackProv.ProviderMetadataPtr);
    v5 = (_GUID)*((_OWORD *)Tlgmtakm_hTelemetryAssertDiagTrack_KMProv.ProviderMetadataPtr - 1);
    *(_OWORD *)&Tlgmtakm_hTelemetryAssertDiagTrack_KMProv.EnableCallback = 0LL;
    v11 = v5;
    if ( !EtwRegister(
            &v11,
            TlgEnableCallback,
            &Tlgmtakm_hTelemetryAssertDiagTrack_KMProv,
            &Tlgmtakm_hTelemetryAssertDiagTrack_KMProv.RegHandle) )
      TraceLoggingSetInformation(
        &Tlgmtakm_hTelemetryAssertDiagTrack_KMProv,
        v6,
        (void *)Tlgmtakm_hTelemetryAssertDiagTrack_KMProv.ProviderMetadataPtr,
        *Tlgmtakm_hTelemetryAssertDiagTrack_KMProv.ProviderMetadataPtr);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xDuLL, 0x74727341u);
    g_ModuleName = PoolWithTag;
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag[2] = 0;
    strcpy((char *)PoolWithTag, "wdf01000.sys");
    _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
  }
  return 0LL;
}
