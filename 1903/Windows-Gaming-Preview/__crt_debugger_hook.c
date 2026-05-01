/*
 * XREFs of __crt_debugger_hook @ 0x18004336C
 * Callers:
 *     __raise_securityfailure @ 0x180042704 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x18004337C (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
