/*
 * XREFs of sub_1800B3A54 @ 0x1800B3A54
 * Callers:
 *     sub_1800190D0 @ 0x1800190D0 (sub_1800190D0.c)
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 * Callees:
 *     sub_1800AEB4C @ 0x1800AEB4C (sub_1800AEB4C.c)
 *     sub_1800AEB5C @ 0x1800AEB5C (sub_1800AEB5C.c)
 *     sub_1800AEB6C @ 0x1800AEB6C (sub_1800AEB6C.c)
 *     sub_1800B3AC0 @ 0x1800B3AC0 (sub_1800B3AC0.c)
 */

__int64 __fastcall sub_1800B3A54(int a1, __int64 *a2)
{
  __int64 v2; // rsi
  int v3; // r14d
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  int v7; // eax
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = *a2;
  v3 = (int)a2;
  v5 = sub_1800AEB4C(*a2, &v9);
  v6 = sub_1800AEB5C(v2, &v10);
  v7 = sub_1800AEB6C(v2);
  return sub_1800B3AC0(a1, v3, *v6, *v5, v7);
}
