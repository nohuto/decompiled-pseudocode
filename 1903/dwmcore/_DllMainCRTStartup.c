/*
 * XREFs of _DllMainCRTStartup @ 0x1800E7928
 * Callers:
 *     _DllMainStartup @ 0x1800D6C10 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x1800E7CA4 (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(CMagnifierRenderTarget *hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpvReserved);
}
