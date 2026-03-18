/*
 * XREFs of _DllMainCRTStartup @ 0x1800E87D8
 * Callers:
 *     _DllMainStartup @ 0x1800D7000 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x1800E8B54 (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(CMagnifierRenderTarget *hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpvReserved);
}
