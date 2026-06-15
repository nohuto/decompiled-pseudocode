/*
 * XREFs of __crt_debugger_hook @ 0x180064820
 * Callers:
 *     __raise_securityfailure @ 0x180063BF8 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x180064830 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
