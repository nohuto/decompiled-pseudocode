/*
 * XREFs of EtwTraceJobRemoveProcess @ 0x1408B88CC
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x140601410 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall EtwTraceJobRemoveProcess(__int64 a1, int a2, int a3)
{
  int v3; // r9d
  __int64 v4; // rax
  char v5; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+40h] [rbp-38h]
  int v7; // [rsp+44h] [rbp-34h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  char *v10; // [rsp+50h] [rbp-28h] BYREF
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  v3 = 0;
  if ( a1 && (v4 = *(_QWORD *)(a1 + 944), v3 = *(_DWORD *)(a1 + 736), v4) )
    v6 = *(_DWORD *)(v4 + 1220);
  else
    v6 = 0;
  v12 = 0;
  v7 = v3;
  v8 = a2;
  v9 = a3;
  v10 = &v5;
  v11 = 32;
  EtwTraceKernelEvent((__int64)&v10, 1u, 0x80000u, 0x724u, 0x501904u);
}
