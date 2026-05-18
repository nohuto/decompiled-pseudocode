/*
 * XREFs of sub_1800B3944 @ 0x1800B3944
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     sub_180075B3C @ 0x180075B3C (sub_180075B3C.c)
 * Callees:
 *     sub_1800AEA3C @ 0x1800AEA3C (sub_1800AEA3C.c)
 *     sub_1800AEA4C @ 0x1800AEA4C (sub_1800AEA4C.c)
 *     sub_1800AEA5C @ 0x1800AEA5C (sub_1800AEA5C.c)
 *     sub_1800B39B0 @ 0x1800B39B0 (sub_1800B39B0.c)
 */

__int64 __fastcall sub_1800B3944(int a1, __int64 *a2)
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
  v5 = sub_1800AEA3C(*a2, &v9);
  v6 = sub_1800AEA4C(v2, &v10);
  v7 = sub_1800AEA5C(v2);
  return sub_1800B39B0(a1, v3, *v6, *v5, v7);
}
