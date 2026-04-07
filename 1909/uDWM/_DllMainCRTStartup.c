/*
 * XREFs of _DllMainCRTStartup @ 0x18004F0E4
 * Callers:
 *     _DllMainStartup @ 0x18003B5E0 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x18004F484 (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return _DllMainCRTStartup(hinstDLL, fdwReason);
}
