/*
 * XREFs of DllMain @ 0x18008E868
 * Callers:
 *     dllmain_dispatch @ 0x1800893FC (dllmain_dispatch.c)
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x180082FB8 (TlgUnregisterAggregateProvider.c)
 *     TraceLoggingRegisterEx @ 0x1800848C8 (TraceLoggingRegisterEx.c)
 *     McGenEventUnregister @ 0x18008692C (McGenEventUnregister.c)
 *     SHFusionUninitialize @ 0x180086990 (SHFusionUninitialize.c)
 *     ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@Z@Z @ 0x180122C64 (-SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@Z@Z.c)
 *     McGenEventRegister @ 0x180124CD8 (McGenEventRegister.c)
 *     TlgRegisterAggregateProviderEx @ 0x180125814 (TlgRegisterAggregateProviderEx.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  void (*v4)(const struct wil::FailureInfo *); // rdx

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      McGenEventRegister(hinstDLL, fdwReason, MICROSOFT_TWINUI_PUBLISHER_Context, MICROSOFT_TWINUI_PUBLISHER_Context);
      TlgRegisterAggregateProviderEx();
      EventSetInformation(
        MICROSOFT_TWINUI_PUBLISHER_Context[0],
        2LL,
        &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
      TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, 0LL, 0LL);
      hModule = hinstDLL;
      dword_1805C30EC = 123;
      DisableThreadLibraryCalls(hinstDLL);
      wil::SetResultLoggingCallback((wil *)lambda_99d7090729a749b2bb9407656ad0ea17_::_lambda_invoker_cdecl_, v4);
    }
  }
  else
  {
    McGenEventUnregister(MICROSOFT_TWINUI_PUBLISHER_Context);
    TlgUnregisterAggregateProvider();
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    hProvider = 0;
    SHFusionUninitialize();
  }
  return 1;
}
