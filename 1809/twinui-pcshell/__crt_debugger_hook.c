/*
 * XREFs of __crt_debugger_hook @ 0x180084A1C
 * Callers:
 *     __raise_securityfailure @ 0x1800842A0 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x180084A2C (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
