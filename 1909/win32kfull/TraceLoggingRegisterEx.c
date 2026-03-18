/*
 * XREFs of TraceLoggingRegisterEx @ 0x1C0368384
 * Callers:
 *     ??0InteractiveControlManager@@AEAA@XZ @ 0x1C0079574 (--0InteractiveControlManager@@AEAA@XZ.c)
 *     EnableUserkTraceLogging @ 0x1C0113510 (EnableUserkTraceLogging.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C01172A4 (InitializeTelemetryAssertsKMByName.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C0118530 (--0InkProcessor@@AEAA@XZ.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C03682A0 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

TLG_STATUS __stdcall TraceLoggingRegisterEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  GUID v4; // xmm0
  TLG_STATUS v5; // edi
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(GUID *)(*((_QWORD *)hProvider + 1) - 16LL);
  *((_QWORD *)hProvider + 6) = pCallbackContext;
  *((_QWORD *)hProvider + 5) = pEnableCallback;
  ProviderId = v4;
  v5 = EtwRegister(&ProviderId, TlgEnableCallback, hProvider, (PREGHANDLE)hProvider + 4);
  if ( !v5 )
    EtwSetInformation(
      *((_QWORD *)hProvider + 4),
      EventProviderSetTraits,
      *((PVOID *)hProvider + 1),
      **((unsigned __int16 **)hProvider + 1));
  return v5;
}
