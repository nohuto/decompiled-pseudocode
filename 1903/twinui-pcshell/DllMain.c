/*
 * XREFs of DllMain @ 0x18008BC28
 * Callers:
 *     dllmain_dispatch @ 0x1800869EC (dllmain_dispatch.c)
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1800808F8 (TlgUnregisterAggregateProvider.c)
 *     TraceLoggingRegisterEx @ 0x180081C14 (TraceLoggingRegisterEx.c)
 *     McGenEventUnregister @ 0x180083C4C (McGenEventUnregister.c)
 *     SHFusionUninitialize @ 0x180083CB0 (SHFusionUninitialize.c)
 *     ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@Z@Z @ 0x180103C54 (-SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@Z@Z.c)
 *     McGenEventRegister @ 0x180105CC8 (McGenEventRegister.c)
 *     TlgRegisterAggregateProviderEx @ 0x180106804 (TlgRegisterAggregateProviderEx.c)
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
      dword_18059AC14 = 123;
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
