/*
 * XREFs of __scrt_initialize_default_local_stdio_options @ 0x18003A2AC
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180039388 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     sub_1800392AC @ 0x1800392AC (sub_1800392AC.c)
 *     sub_1800392E4 @ 0x1800392E4 (sub_1800392E4.c)
 */

_QWORD *_scrt_initialize_default_local_stdio_options()
{
  _QWORD *v0; // rax
  _QWORD *result; // rax

  v0 = sub_1800392AC();
  *v0 |= 4uLL;
  result = sub_1800392E4();
  *result |= 2uLL;
  return result;
}
