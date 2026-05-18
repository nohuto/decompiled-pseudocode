/*
 * XREFs of __scrt_initialize_default_local_stdio_options @ 0x18012723C
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180126330 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     sub_180125A90 @ 0x180125A90 (sub_180125A90.c)
 *     sub_180125A98 @ 0x180125A98 (sub_180125A98.c)
 */

_QWORD *_scrt_initialize_default_local_stdio_options()
{
  _QWORD *v0; // rax
  _QWORD *result; // rax

  v0 = sub_180125A90();
  *v0 |= 4uLL;
  result = sub_180125A98();
  *result |= 2uLL;
  return result;
}
