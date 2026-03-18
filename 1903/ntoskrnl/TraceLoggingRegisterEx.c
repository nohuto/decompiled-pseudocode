/*
 * XREFs of TraceLoggingRegisterEx @ 0x140745F64
 * Callers:
 *     IopInitializeSystemVariableService @ 0x14019D100 (IopInitializeSystemVariableService.c)
 *     IoInitializeLiveDump @ 0x14019DCEC (IoInitializeLiveDump.c)
 *     BapdRecordFirmwareBootStats @ 0x14059ECD0 (BapdRecordFirmwareBootStats.c)
 *     TlgRegisterAggregateProviderEx @ 0x14074EB10 (TlgRegisterAggregateProviderEx.c)
 *     TtmInit @ 0x14075B2D0 (TtmInit.c)
 *     EtwpInitializeCoverage @ 0x14076CFBC (EtwpInitializeCoverage.c)
 *     VRegSetup @ 0x140781F40 (VRegSetup.c)
 *     TraceLoggingRegister @ 0x140841210 (TraceLoggingRegister.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x1408D8E90 (RtlpCapChkTelemetryRunOnce.c)
 *     PspInitPhase2 @ 0x1409FE628 (PspInitPhase2.c)
 *     WheaInitialize @ 0x140A02E24 (WheaInitialize.c)
 *     PopDiagInitialize @ 0x140A06004 (PopDiagInitialize.c)
 *     EtwpInitialize @ 0x140A1590C (EtwpInitialize.c)
 *     SeRmInitPhase1 @ 0x140A17B50 (SeRmInitPhase1.c)
 *     VslpIumInitializeTelemetry @ 0x140A218E0 (VslpIumInitializeTelemetry.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     EtwRegister @ 0x140718540 (EtwRegister.c)
 *     EtwSetInformation @ 0x140737550 (EtwSetInformation.c)
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
