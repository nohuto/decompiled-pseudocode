/*
 * XREFs of RtlpHpSegMgrVaCtxInitialize @ 0x1400078F8
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x14000D98C (RtlpHpSegMgrReserve.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x14000A390 (RtlpHpQueryVA.c)
 */

__int64 __fastcall RtlpHpSegMgrVaCtxInitialize(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v7 = *(_OWORD *)(a1 + 40);
  RtlpHpQueryVA(a2, &v7, &v8, &v9);
  result = v8;
  *(_WORD *)(v8 + 2) = (1 << (a4 / a3)) - 2;
  *(_QWORD *)(result + 8) = -1LL;
  return result;
}
