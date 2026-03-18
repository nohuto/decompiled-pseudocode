/*
 * XREFs of ?__scrt_initialize_type_info@@YAXXZ @ 0x1400038F8
 * Callers:
 *     pre_c_initialization @ 0x140002D60 (pre_c_initialization.c)
 * Callees:
 *     <none>
 */

void __scrt_initialize_type_info(void)
{
  InitializeSListHead(&__type_info_root_node);
}
