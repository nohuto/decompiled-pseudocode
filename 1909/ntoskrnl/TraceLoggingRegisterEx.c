/*
 * XREFs of TraceLoggingRegisterEx @ 0x140747E64
 * Callers:
 *     IopInitializeSystemVariableService @ 0x14019D880 (IopInitializeSystemVariableService.c)
 *     IoInitializeLiveDump @ 0x14019E40C (IoInitializeLiveDump.c)
 *     BapdRecordFirmwareBootStats @ 0x14059ECB0 (BapdRecordFirmwareBootStats.c)
 *     TlgRegisterAggregateProviderEx @ 0x14074F5A0 (TlgRegisterAggregateProviderEx.c)
 *     TtmInit @ 0x14075FB60 (TtmInit.c)
 *     EtwpInitializeCoverage @ 0x14076FE10 (EtwpInitializeCoverage.c)
 *     VRegSetup @ 0x1407842A0 (VRegSetup.c)
 *     TraceLoggingRegister @ 0x140840870 (TraceLoggingRegister.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x1408D8790 (RtlpCapChkTelemetryRunOnce.c)
 *     PspInitPhase2 @ 0x1409FEB44 (PspInitPhase2.c)
 *     WheaInitialize @ 0x140A03340 (WheaInitialize.c)
 *     PopDiagInitialize @ 0x140A06520 (PopDiagInitialize.c)
 *     EtwpInitialize @ 0x140A15AEC (EtwpInitialize.c)
 *     SeRmInitPhase1 @ 0x140A18010 (SeRmInitPhase1.c)
 *     VslpIumInitializeTelemetry @ 0x140A219C0 (VslpIumInitializeTelemetry.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     EtwRegister @ 0x14071A330 (EtwRegister.c)
 *     EtwSetInformation @ 0x140739780 (EtwSetInformation.c)
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
