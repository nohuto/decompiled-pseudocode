/*
 * XREFs of EtwTraceInswapProcess @ 0x140310078
 * Callers:
 *     KiInSwapProcesses @ 0x14010B3C0 (KiInSwapProcesses.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall EtwTraceInswapProcess(__int64 a1)
{
  unsigned __int64 v1; // [rsp+30h] [rbp-38h] BYREF
  __int64 v2; // [rsp+38h] [rbp-30h]
  unsigned __int64 *v3; // [rsp+40h] [rbp-28h] BYREF
  int v4; // [rsp+48h] [rbp-20h]
  int v5; // [rsp+4Ch] [rbp-1Ch]

  v2 = 0LL;
  LODWORD(v2) = *(_DWORD *)(a1 + 736);
  v1 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFF000uLL;
  v3 = &v1;
  v5 = 0;
  v4 = 12;
  EtwTraceKernelEvent((__int64)&v3, 1u, 0x20000800u, 0x323u, 0x501902u);
}
