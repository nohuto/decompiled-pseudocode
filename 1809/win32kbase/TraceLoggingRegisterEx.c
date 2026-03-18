/*
 * XREFs of TraceLoggingRegisterEx @ 0x1C02003AC
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0076DA4 (-CitpInitialize@@YAJPEBG@Z.c)
 *     CoreMsgInitialize @ 0x1C008432C (CoreMsgInitialize.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C0091400 (InitializeTelemetryAssertsKMByName.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C02002C8 (TlgRegisterAggregateProviderEx.c)
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
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
