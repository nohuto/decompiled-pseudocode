/*
 * XREFs of CcPerfLogCanWriteFail @ 0x14026BAF0
 * Callers:
 *     CcCanIWrite @ 0x140104DA0 (CcCanIWrite.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall CcPerfLogCanWriteFail(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // [rsp+30h] [rbp-48h] BYREF
  int v5; // [rsp+38h] [rbp-40h]
  int v6; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v7[3]; // [rsp+40h] [rbp-38h] BYREF
  int v8; // [rsp+58h] [rbp-20h]

  if ( a1 )
    v7[0] = *(_QWORD *)(a1 + 24);
  else
    v7[0] = 0LL;
  v6 = 0;
  v8 = a2;
  v7[1] = a3;
  v7[2] = a4;
  v4 = v7;
  v5 = 32;
  EtwTraceKernelEvent((__int64)&v4, 1u, 0x80020000, 0x1606u, 0x401902u);
}
