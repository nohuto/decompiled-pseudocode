/*
 * XREFs of __crt_debugger_hook @ 0x140003770
 * Callers:
 *     __raise_securityfailure @ 0x140003460 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x140003780 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
