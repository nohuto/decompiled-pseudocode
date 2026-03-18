/*
 * XREFs of DllMain @ 0x1800E964C
 * Callers:
 *     dllmain_dispatch @ 0x1800E77EC (dllmain_dispatch.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return DwmCoreDllMain(hinstDLL, fdwReason);
}
