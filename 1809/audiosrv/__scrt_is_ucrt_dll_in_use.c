/*
 * XREFs of __scrt_is_ucrt_dll_in_use @ 0x18006155C
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x18006084C (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x18006088C (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_exception_filter @ 0x180060930 (__scrt_dllmain_exception_filter.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180060998 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_initialize_onexit_tables @ 0x180060A3C (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x180060BBC (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 _scrt_is_ucrt_dll_in_use()
{
  return _scrt_ucrt_dll_is_in_use != 0;
}
