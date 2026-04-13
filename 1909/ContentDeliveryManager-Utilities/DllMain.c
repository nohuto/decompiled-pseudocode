/*
 * XREFs of DllMain @ 0x1800203E4
 * Callers:
 *     __DllMainCRTStartup @ 0x1800CA824 (__DllMainCRTStartup.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    DisableThreadLibraryCalls(hinstDLL);
  return 1;
}
