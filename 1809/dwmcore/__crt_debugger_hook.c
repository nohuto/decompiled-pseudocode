/*
 * XREFs of __crt_debugger_hook @ 0x1800EC1DC
 * Callers:
 *     __raise_securityfailure @ 0x1800EB898 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x1800EC1EC (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
