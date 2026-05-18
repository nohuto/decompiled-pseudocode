/*
 * XREFs of _DllMainCRTStartup @ 0x180006318
 * Callers:
 *     _DllMainStartup @ 0x180004EA0 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x18000635C (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpvReserved);
}
