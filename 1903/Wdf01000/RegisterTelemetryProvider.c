/*
 * XREFs of RegisterTelemetryProvider @ 0x1C0062DCC
 * Callers:
 *     FxLibraryCommonCommission @ 0x1C0042A10 (FxLibraryCommonCommission.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C0092A04 (InitializeTelemetryAssertsKMByName.c)
 *     TraceLoggingSetInformation @ 0x1C00C80A0 (TraceLoggingSetInformation.c)
 */

NTSTATUS __fastcall RegisterTelemetryProvider(const char *a1)
{
  _GUID v1; // xmm0
  NTSTATUS result; // eax
  _EVENT_INFO_CLASS v3; // edx
  _GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  InitializeTelemetryAssertsKMByName(a1);
  v1 = (_GUID)*((_OWORD *)Tlgg_TelemetryProviderProv.ProviderMetadataPtr - 1);
  *(_OWORD *)&Tlgg_TelemetryProviderProv.EnableCallback = 0LL;
  ProviderId = v1;
  result = EtwRegister(
             &ProviderId,
             TlgEnableCallback,
             &Tlgg_TelemetryProviderProv,
             &Tlgg_TelemetryProviderProv.RegHandle);
  if ( !result )
    return TraceLoggingSetInformation(
             &Tlgg_TelemetryProviderProv,
             v3,
             (void *)Tlgg_TelemetryProviderProv.ProviderMetadataPtr,
             *Tlgg_TelemetryProviderProv.ProviderMetadataPtr);
  return result;
}
