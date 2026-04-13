/*
 * XREFs of DllMain @ 0x18001FD94
 * Callers:
 *     __DllMainCRTStartup @ 0x1800C6794 (__DllMainCRTStartup.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    DisableThreadLibraryCalls(hinstDLL);
  return 1;
}
