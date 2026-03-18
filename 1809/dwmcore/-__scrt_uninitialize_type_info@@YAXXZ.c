/*
 * XREFs of ?__scrt_uninitialize_type_info@@YAXXZ @ 0x1800ED788
 * Callers:
 *     dllmain_crt_process_detach @ 0x1800ED4B4 (dllmain_crt_process_detach.c)
 * Callees:
 *     <none>
 */

void __scrt_uninitialize_type_info(void)
{
  _std_type_info_destroy_list();
}
