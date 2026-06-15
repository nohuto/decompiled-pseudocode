/*
 * XREFs of wWinMainCRTStartup @ 0x140015E60
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x140016628 (__security_init_cookie.c)
 */

__int64 wWinMainCRTStartup()
{
  _security_init_cookie();
  return _scrt_common_main_seh();
}
