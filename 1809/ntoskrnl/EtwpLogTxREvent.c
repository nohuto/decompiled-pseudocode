/*
 * XREFs of EtwpLogTxREvent @ 0x1408B9A88
 * Callers:
 *     EtwpTraceRegistryTransaction @ 0x1408BA1F0 (EtwpTraceRegistryTransaction.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall EtwpLogTxREvent(
        unsigned int a1,
        unsigned __int8 a2,
        __int128 *a3,
        int a4,
        int a5,
        __int64 *a6,
        __int64 a7)
{
  __int128 v7; // xmm0
  unsigned __int16 v9; // r10
  unsigned int v10; // r9d
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp-21h] BYREF
  __int128 v16; // [rsp+38h] [rbp-19h]
  int v17; // [rsp+48h] [rbp-9h]
  int v18; // [rsp+4Ch] [rbp-5h]
  __int64 *v19; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp+Fh]
  int v21; // [rsp+70h] [rbp+1Fh]
  int v22; // [rsp+74h] [rbp+23h]

  v7 = *a3;
  v17 = a4;
  v20[0] = 32LL;
  v9 = a2 | 0x900;
  v16 = v7;
  v10 = 1;
  v11 = *a6;
  v18 = a5;
  v15 = v11;
  v19 = &v15;
  v12 = *(_WORD *)a7 & 0xFFFE;
  if ( v12 )
  {
    v10 = 2;
    v20[1] = *(_QWORD *)(a7 + 8);
    v21 = v12;
    v22 = 0;
  }
  v13 = EtwpHostSiloState;
  v14 = 2LL * v10;
  v20[v14 - 1] = &EtwpNull;
  v20[v14] = 2LL;
  EtwpLogKernelEvent((__int64)&v19, v13, a1, v10 + 1, v9, 0x501902u);
}
