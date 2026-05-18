/*
 * XREFs of ?__uncaught_exception@@YA_NXZ @ 0x180126DDC
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x180125CB0 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x180125CEC (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_exception_filter @ 0x180125D78 (__scrt_dllmain_exception_filter.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180125DD8 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_initialize_onexit_tables @ 0x180125E68 (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x180125FDC (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 __uncaught_exception(void)
{
  return dword_18025F290 != 0;
}
