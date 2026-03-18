/*
 * XREFs of TraceLoggingRegisterEx @ 0x1C01D719C
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0161D74 (-CitpInitialize@@YAJPEBG@Z.c)
 *     CoreMsgInitialize @ 0x1C01653A8 (CoreMsgInitialize.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C01680B8 (InitializeTelemetryAssertsKMByName.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C01D803C (TlgRegisterAggregateProviderEx.c)
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
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
