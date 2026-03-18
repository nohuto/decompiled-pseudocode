/*
 * XREFs of TraceLoggingRegisterEx @ 0x1C036740C
 * Callers:
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C00E48A0 (--0InkProcessor@@AEAA@XZ.c)
 *     ??0InteractiveControlManager@@AEAA@XZ @ 0x1C0103B10 (--0InteractiveControlManager@@AEAA@XZ.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C010F524 (InitializeTelemetryAssertsKMByName.c)
 *     EnableUserkTraceLogging @ 0x1C0113AC0 (EnableUserkTraceLogging.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
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
  *((_QWORD *)hProvider + 5) = 0LL;
  *((_QWORD *)hProvider + 6) = 0LL;
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
