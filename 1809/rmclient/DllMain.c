/*
 * XREFs of DllMain @ 0x180009A48
 * Callers:
 *     __DllMainCRTStartup @ 0x180009094 (__DllMainCRTStartup.c)
 * Callees:
 *     RmpClientInitializeCoreApi @ 0x180006950 (RmpClientInitializeCoreApi.c)
 *     ?FreeResourceManagerProxy@@YAXXZ @ 0x180006C30 (-FreeResourceManagerProxy@@YAXXZ.c)
 *     TraceLoggingRegisterEx @ 0x18000C1A8 (TraceLoggingRegisterEx.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      TraceLoggingRegisterEx((TraceLoggingHProvider)hinstDLL, *(TLG_PENABLECALLBACK *)&fdwReason, lpvReserved);
      RmpClientInitializeCoreApi();
      DisableThreadLibraryCalls(hinstDLL);
    }
  }
  else
  {
    FreeResourceManagerProxy();
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    dword_180022000 = 0;
  }
  return 1;
}
