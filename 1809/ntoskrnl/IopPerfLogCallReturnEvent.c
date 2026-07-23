/*
 * XREFs of IopPerfLogCallReturnEvent @ 0x140285A94
 * Callers:
 *     IopPerfCallDriver @ 0x140285568 (IopPerfCallDriver.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall IopPerfLogCallReturnEvent(__int64 a1, int a2)
{
  __int64 v2; // [rsp+30h] [rbp-38h] BYREF
  int v3; // [rsp+38h] [rbp-30h]
  __int64 *v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  v2 = a1;
  v4 = &v2;
  v6 = 0;
  v3 = a2;
  v5 = 12;
  EtwTraceKernelEvent((__int64)&v4, 1u, 0x20000010u, 0x123u, 0x401802u);
}
