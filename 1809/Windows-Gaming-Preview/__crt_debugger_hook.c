/*
 * XREFs of __crt_debugger_hook @ 0x180042FDC
 * Callers:
 *     __raise_securityfailure @ 0x1800423A4 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x180042FEC (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
