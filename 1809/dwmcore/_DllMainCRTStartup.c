/*
 * XREFs of _DllMainCRTStartup @ 0x1800ED67C
 * Callers:
 *     _DllMainStartup @ 0x1800773D0 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x1800ED6C0 (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(CMagnifierRenderTarget *hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpvReserved);
}
