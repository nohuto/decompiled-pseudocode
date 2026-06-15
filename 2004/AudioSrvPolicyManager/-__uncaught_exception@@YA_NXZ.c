/*
 * XREFs of ?__uncaught_exception@@YA_NXZ @ 0x18003A66C
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x18003997C (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x1800399BC (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_exception_filter @ 0x180039A60 (__scrt_dllmain_exception_filter.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180039AC8 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_initialize_onexit_tables @ 0x180039B6C (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x180039CC4 (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 __uncaught_exception(void)
{
  return dword_18004F570 != 0;
}
