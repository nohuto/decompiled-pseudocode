/*
 * XREFs of DllMain @ 0x18004F64C
 * Callers:
 *     __DllMainCRTStartup @ 0x18004F128 (__DllMainCRTStartup.c)
 * Callees:
 *     McGenEventRegister @ 0x18003D184 (McGenEventRegister.c)
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z @ 0x18003D1D0 (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z.c)
 *     McGenEventUnregister @ 0x180085480 (McGenEventUnregister.c)
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
