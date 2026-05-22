/*
 * XREFs of ?__scrt_initialize_type_info@@YAXXZ @ 0x18002B7F4
 * Callers:
 *     dllmain_crt_process_attach @ 0x18002B3D8 (dllmain_crt_process_attach.c)
 * Callees:
 *     <none>
 */

void __scrt_initialize_type_info(void)
{
  InitializeSListHead(&__type_info_root_node);
}
