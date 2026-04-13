/*
 * XREFs of _DllMainCRTStartup @ 0x1800CA650
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x1800CB2F4 (__security_init_cookie.c)
 */

BOOL __stdcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return _DllMainCRTStartup(hinstDLL, fdwReason);
}
