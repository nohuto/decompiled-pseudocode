/*
 * XREFs of __crt_debugger_hook @ 0x1800E796C
 * Callers:
 *     __raise_securityfailure @ 0x1800E6FD8 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x1800E797C (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
