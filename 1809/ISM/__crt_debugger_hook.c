/*
 * XREFs of __crt_debugger_hook @ 0x18012BA18
 * Callers:
 *     __scrt_fastfail @ 0x18012BA28 (__scrt_fastfail.c)
 *     __raise_securityfailure @ 0x18012BF98 (__raise_securityfailure.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
