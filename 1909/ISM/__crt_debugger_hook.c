/*
 * XREFs of __crt_debugger_hook @ 0x18002BC98
 * Callers:
 *     __scrt_fastfail @ 0x18002BCA8 (__scrt_fastfail.c)
 *     __raise_securityfailure @ 0x18002C228 (__raise_securityfailure.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
