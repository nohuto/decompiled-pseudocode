/*
 * XREFs of __crt_debugger_hook @ 0x14001C4F0
 * Callers:
 *     __raise_securityfailure @ 0x14001BC7C (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x14001C500 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
