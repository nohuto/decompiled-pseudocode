/*
 * XREFs of EtwpLogGroupMask @ 0x140727394
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x1407270E8 (EtwpUpdateGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x1408BFC28 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall EtwpLogGroupMask(__int64 a1, unsigned int a2, __int128 *a3, unsigned __int16 a4)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  _OWORD *v6; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+38h] [rbp-40h]
  int v8; // [rsp+3Ch] [rbp-3Ch]
  _OWORD v9[2]; // [rsp+40h] [rbp-38h] BYREF
  int v10; // [rsp+60h] [rbp-18h]

  v4 = *a3;
  v5 = a3[1];
  v6 = v9;
  v8 = 0;
  v10 = 70;
  v9[0] = v4;
  v7 = 36;
  v9[1] = v5;
  EtwpLogKernelEvent((__int64)&v6, a1, a2, 1u, a4, 0x401802u);
}
