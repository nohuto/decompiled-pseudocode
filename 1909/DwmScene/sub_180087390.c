/*
 * XREFs of sub_180087390 @ 0x180087390
 * Callers:
 *     sub_180084480 @ 0x180084480 (sub_180084480.c)
 *     sub_180086D34 @ 0x180086D34 (sub_180086D34.c)
 *     sub_180086E38 @ 0x180086E38 (sub_180086E38.c)
 * Callees:
 *     sub_180017E58 @ 0x180017E58 (sub_180017E58.c)
 *     sub_180081DBC @ 0x180081DBC (sub_180081DBC.c)
 *     sub_180083084 @ 0x180083084 (sub_180083084.c)
 *     sub_180083324 @ 0x180083324 (sub_180083324.c)
 *     sub_1800833AC @ 0x1800833AC (sub_1800833AC.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180087390(__int64 a1)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rax
  __int64 result; // rax
  _BYTE v5[64]; // [rsp+20h] [rbp-158h] BYREF
  _BYTE v6[64]; // [rsp+60h] [rbp-118h] BYREF
  _OWORD v7[4]; // [rsp+A0h] [rbp-D8h] BYREF
  _OWORD v8[4]; // [rsp+E0h] [rbp-98h] BYREF
  _OWORD v9[4]; // [rsp+120h] [rbp-58h] BYREF

  sub_1800833AC((__int64)v9, (unsigned int *)(a1 + 144));
  sub_180083084((__int64)v7, (__m128 *)(a1 + 156));
  sub_180083324((__int64)v8, a1 + 172);
  v2 = (_OWORD *)sub_180017E58((__int64)v5, v8, v7);
  v3 = (_OWORD *)sub_180017E58((__int64)v6, v2, v9);
  sub_180081DBC((_OWORD *)(a1 + 224), v3);
  result = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 352) = result;
  return result;
}
