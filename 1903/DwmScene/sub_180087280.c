/*
 * XREFs of sub_180087280 @ 0x180087280
 * Callers:
 *     sub_180084370 @ 0x180084370 (sub_180084370.c)
 *     sub_180086C24 @ 0x180086C24 (sub_180086C24.c)
 *     sub_180086D28 @ 0x180086D28 (sub_180086D28.c)
 * Callees:
 *     sub_180017DE8 @ 0x180017DE8 (sub_180017DE8.c)
 *     sub_180081CAC @ 0x180081CAC (sub_180081CAC.c)
 *     sub_180082F74 @ 0x180082F74 (sub_180082F74.c)
 *     sub_180083214 @ 0x180083214 (sub_180083214.c)
 *     sub_18008329C @ 0x18008329C (sub_18008329C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180087280(__int64 a1)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rax
  __int64 result; // rax
  _BYTE v5[64]; // [rsp+20h] [rbp-158h] BYREF
  _BYTE v6[64]; // [rsp+60h] [rbp-118h] BYREF
  _OWORD v7[4]; // [rsp+A0h] [rbp-D8h] BYREF
  _OWORD v8[4]; // [rsp+E0h] [rbp-98h] BYREF
  _OWORD v9[4]; // [rsp+120h] [rbp-58h] BYREF

  sub_18008329C((__int64)v9, (unsigned int *)(a1 + 144));
  sub_180082F74((__int64)v7, (__m128 *)(a1 + 156));
  sub_180083214((__int64)v8, a1 + 172);
  v2 = (_OWORD *)sub_180017DE8((__int64)v5, v8, v7);
  v3 = (_OWORD *)sub_180017DE8((__int64)v6, v2, v9);
  sub_180081CAC((_OWORD *)(a1 + 224), v3);
  result = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 352) = result;
  return result;
}
