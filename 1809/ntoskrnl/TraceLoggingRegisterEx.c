/*
 * XREFs of TraceLoggingRegisterEx @ 0x14071DC38
 * Callers:
 *     IopInitializeSystemVariableService @ 0x140192EEC (IopInitializeSystemVariableService.c)
 *     IoInitializeLiveDump @ 0x14019371C (IoInitializeLiveDump.c)
 *     BapdRecordFirmwareBootStats @ 0x14056F2A0 (BapdRecordFirmwareBootStats.c)
 *     EtwpInitializeCoverage @ 0x140742F7C (EtwpInitializeCoverage.c)
 *     TlgRegisterAggregateProviderEx @ 0x140742FD4 (TlgRegisterAggregateProviderEx.c)
 *     VRegSetup @ 0x14075AE00 (VRegSetup.c)
 *     TtmInit @ 0x1407623A0 (TtmInit.c)
 *     TraceLoggingRegister @ 0x14080796C (TraceLoggingRegister.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x14089A340 (RtlpCapChkTelemetryRunOnce.c)
 *     MiInitSystem @ 0x1409BC5A8 (MiInitSystem.c)
 *     SeRmInitPhase1 @ 0x1409C61C4 (SeRmInitPhase1.c)
 *     EtwpInitialize @ 0x1409D0620 (EtwpInitialize.c)
 *     PopDiagInitialize @ 0x1409D0B90 (PopDiagInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x1409DE60C (VslpIumInitializeTelemetry.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     EtwRegister @ 0x1406BE540 (EtwRegister.c)
 *     EtwSetInformation @ 0x14070BDB0 (EtwSetInformation.c)
 */

TLG_STATUS __stdcall TraceLoggingRegisterEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  GUID v4; // xmm0
  TLG_STATUS v5; // edi
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v4 = (GUID)*((_OWORD *)hProvider->ProviderMetadataPtr - 1);
  hProvider->CallbackContext = pCallbackContext;
  hProvider->EnableCallback = (void (__fastcall *)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))pEnableCallback;
  ProviderId = v4;
  v5 = EtwRegister(&ProviderId, TlgEnableCallback, (PVOID)hProvider, &hProvider->RegHandle);
  if ( !v5 )
    EtwSetInformation(
      hProvider->RegHandle,
      EventProviderSetTraits,
      (PVOID)hProvider->ProviderMetadataPtr,
      *hProvider->ProviderMetadataPtr);
  return v5;
}
