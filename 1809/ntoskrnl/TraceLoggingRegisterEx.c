/*
 * XREFs of TraceLoggingRegisterEx @ 0x14071EED8
 * Callers:
 *     IopInitializeSystemVariableService @ 0x14019302C (IopInitializeSystemVariableService.c)
 *     IoInitializeLiveDump @ 0x14019385C (IoInitializeLiveDump.c)
 *     BapdRecordFirmwareBootStats @ 0x1405702A0 (BapdRecordFirmwareBootStats.c)
 *     EtwpInitializeCoverage @ 0x14074416C (EtwpInitializeCoverage.c)
 *     TlgRegisterAggregateProviderEx @ 0x1407441C4 (TlgRegisterAggregateProviderEx.c)
 *     VRegSetup @ 0x14075BFF0 (VRegSetup.c)
 *     TtmInit @ 0x140763590 (TtmInit.c)
 *     TraceLoggingRegister @ 0x140808B6C (TraceLoggingRegister.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x14089B5A0 (RtlpCapChkTelemetryRunOnce.c)
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 *     SeRmInitPhase1 @ 0x1409C71C4 (SeRmInitPhase1.c)
 *     EtwpInitialize @ 0x1409D1620 (EtwpInitialize.c)
 *     PopDiagInitialize @ 0x1409D1B90 (PopDiagInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x1409DF60C (VslpIumInitializeTelemetry.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 *     EtwSetInformation @ 0x14070D050 (EtwSetInformation.c)
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
