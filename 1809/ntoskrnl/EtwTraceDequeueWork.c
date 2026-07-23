/*
 * XREFs of EtwTraceDequeueWork @ 0x14030FE60
 * Callers:
 *     KeRemoveQueueEx @ 0x140058D60 (KeRemoveQueueEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall EtwTraceDequeueWork(__int64 a1, __int64 a2, int a3)
{
  _DWORD v3[4]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD *v4; // [rsp+40h] [rbp-38h] BYREF
  int v5; // [rsp+48h] [rbp-30h]
  int v6; // [rsp+4Ch] [rbp-2Ch]
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v3[0] = *(_DWORD *)(a1 + 1600);
  v3[1] = a3;
  v4 = v3;
  v6 = 0;
  v5 = 8;
  v7 = a2;
  v9 = 0;
  v8 = 8 * a3;
  EtwTraceKernelEvent((__int64)&v4, 2u, 0x21000000u, 0x53Fu, 0x1501E02u);
}
