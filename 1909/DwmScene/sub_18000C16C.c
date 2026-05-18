/*
 * XREFs of sub_18000C16C @ 0x18000C16C
 * Callers:
 *     sub_18000C30C @ 0x18000C30C (sub_18000C30C.c)
 * Callees:
 *     sub_18000B36C @ 0x18000B36C (sub_18000B36C.c)
 *     sub_18000BF3C @ 0x18000BF3C (sub_18000BF3C.c)
 */

__int64 __fastcall sub_18000C16C(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  unsigned int v11; // ebx

  v11 = sub_18000B36C(a1, a2, a3, a4, a5, a6);
  sub_18000BF3C(a1, a2, a3, a4, a5, a6, a7, v11, 0LL, 0);
  return v11;
}
