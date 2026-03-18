/*
 * XREFs of EtwTraceRetpolineExit @ 0x14032E340
 * Callers:
 *     __guard_retpoline_exit_indirect_rax @ 0x1403533A0 (__guard_retpoline_exit_indirect_rax.c)
 *     __guard_retpoline_import_r10_log_event @ 0x140353500 (__guard_retpoline_import_r10_log_event.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void __fastcall EtwTraceRetpolineExit(__int64 a1)
{
  __int64 v1; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v2; // [rsp+38h] [rbp-20h] BYREF
  int v3; // [rsp+40h] [rbp-18h]
  int v4; // [rsp+44h] [rbp-14h]

  v1 = a1;
  v2 = &v1;
  v4 = 0;
  v3 = 8;
  EtwTraceKernelEvent((__int64)&v2, 1u, 0xA0000002, 0xF6Eu, 0x400A02u);
}
