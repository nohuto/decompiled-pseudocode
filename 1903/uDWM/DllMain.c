/*
 * XREFs of DllMain @ 0x18004F77C
 * Callers:
 *     __DllMainCRTStartup @ 0x18004F278 (__DllMainCRTStartup.c)
 * Callees:
 *     McGenEventRegister @ 0x18003D8F4 (McGenEventRegister.c)
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z @ 0x18003D940 (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z.c)
 *     McGenEventUnregister @ 0x1800857E0 (McGenEventUnregister.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  void (*v3)(bool, const struct wil::FailureInfo *); // rdx
  wil *v4; // rcx

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      g_hInstance = hinstDLL;
      DisableThreadLibraryCalls(hinstDLL);
      wil::SetResultTelemetryFallback(v4, v3);
      McGenEventRegister();
    }
  }
  else
  {
    McGenEventUnregister(hinstDLL, fdwReason, lpvReserved);
  }
  return 1;
}
