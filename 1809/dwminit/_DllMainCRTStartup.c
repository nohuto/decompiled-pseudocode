/*
 * XREFs of _DllMainCRTStartup @ 0x18000635C
 * Callers:
 *     _DllMainStartup @ 0x180003E00 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x1800063AC (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpvReserved);
}
