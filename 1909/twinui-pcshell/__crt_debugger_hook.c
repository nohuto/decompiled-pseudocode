/*
 * XREFs of __crt_debugger_hook @ 0x18008A1EC
 * Callers:
 *     __raise_securityfailure @ 0x180089948 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x18008A1FC (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
