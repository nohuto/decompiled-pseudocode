/*
 * XREFs of __crt_debugger_hook @ 0x140016740
 * Callers:
 *     __raise_securityfailure @ 0x140015ECC (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x140016750 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
