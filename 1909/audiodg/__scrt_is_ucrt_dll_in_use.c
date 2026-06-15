/*
 * XREFs of __scrt_is_ucrt_dll_in_use @ 0x140016BF4
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x140016290 (__scrt_acquire_startup_lock.c)
 *     __scrt_initialize_onexit_tables @ 0x140016320 (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x1400164A0 (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 _scrt_is_ucrt_dll_in_use()
{
  return _scrt_ucrt_dll_is_in_use != 0;
}
