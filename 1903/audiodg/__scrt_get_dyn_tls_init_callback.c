/*
 * XREFs of __scrt_get_dyn_tls_init_callback @ 0x140016310
 * Callers:
 *     __scrt_common_main_seh @ 0x1400158D0 (__scrt_common_main_seh.c)
 * Callees:
 *     <none>
 */

void *_scrt_get_dyn_tls_init_callback()
{
  return &_dyn_tls_init_callback;
}
