/*
 * XREFs of DllMain @ 0x180088ECC
 * Callers:
 *     dllmain_dispatch @ 0x180083DC0 (dllmain_dispatch.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x18007EF98 (TraceLoggingRegisterEx.c)
 *     ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@Z@Z @ 0x1800E13E0 (-SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@Z@Z.c)
 *     McGenEventRegister @ 0x1800E35F8 (McGenEventRegister.c)
 *     McGenEventUnregister @ 0x1800E3624 (McGenEventUnregister.c)
 *     TlgRegisterAggregateProviderEx @ 0x1800E43E4 (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x1800E44E8 (TlgUnregisterAggregateProvider.c)
 *     SHFusionUninitialize @ 0x1800E4788 (SHFusionUninitialize.c)
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
      dword_1805107A0 = 123;
      DisableThreadLibraryCalls(hinstDLL);
      wil::SetResultLoggingCallback((wil *)lambda_839b3495da8c2b40985e406279c6b361_::_lambda_invoker_cdecl_, v4);
    }
  }
  else
  {
    McGenEventUnregister(MICROSOFT_TWINUI_PUBLISHER_Context, fdwReason, lpvReserved);
    TlgUnregisterAggregateProvider();
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    hProvider = 0;
    SHFusionUninitialize();
  }
  return 1;
}
