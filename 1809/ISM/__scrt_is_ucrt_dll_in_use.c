/*
 * XREFs of __scrt_is_ucrt_dll_in_use @ 0x18012BDC4
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x18012B5C0 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x18012B600 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_exception_filter @ 0x18012B6A4 (__scrt_dllmain_exception_filter.c)
 *     __scrt_dllmain_uninitialize_c @ 0x18012B70C (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_initialize_onexit_tables @ 0x18012B7B0 (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x18012B930 (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 _scrt_is_ucrt_dll_in_use()
{
  return _scrt_ucrt_dll_is_in_use != 0;
}
