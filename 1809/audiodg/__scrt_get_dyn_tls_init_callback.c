/*
 * XREFs of __scrt_get_dyn_tls_init_callback @ 0x14001C4D0
 * Callers:
 *     __scrt_common_main_seh @ 0x14001BA90 (__scrt_common_main_seh.c)
 * Callees:
 *     <none>
 */

void *_scrt_get_dyn_tls_init_callback()
{
  return &_dyn_tls_init_callback;
}
