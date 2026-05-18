/*
 * XREFs of __scrt_initialize_default_local_stdio_options @ 0x18012712C
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180126220 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     sub_180125980 @ 0x180125980 (sub_180125980.c)
 *     sub_180125988 @ 0x180125988 (sub_180125988.c)
 */

_QWORD *_scrt_initialize_default_local_stdio_options()
{
  _QWORD *v0; // rax
  _QWORD *result; // rax

  v0 = sub_180125980();
  *v0 |= 4uLL;
  result = sub_180125988();
  *result |= 2uLL;
  return result;
}
