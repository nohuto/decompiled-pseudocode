/*
 * XREFs of __scrt_dllmain_before_initialize_c @ 0x180042B98
 * Callers:
 *     dllmain_crt_process_attach @ 0x180042508 (dllmain_crt_process_attach.c)
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x180042D0C (__scrt_initialize_onexit_tables.c)
 */

bool _scrt_dllmain_before_initialize_c()
{
  return (unsigned __int8)_scrt_initialize_onexit_tables(0LL) != 0;
}
