/*
 * XREFs of sub_18000C30C @ 0x18000C30C
 * Callers:
 *     sub_18000B778 @ 0x18000B778 (sub_18000B778.c)
 *     sub_18000CE38 @ 0x18000CE38 (sub_18000CE38.c)
 * Callees:
 *     sub_18000C16C @ 0x18000C16C (sub_18000C16C.c)
 */

__int64 __fastcall sub_18000C30C(__int64 a1, int a2, __int64 a3)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_18000C16C(a1, a2, a3, 0LL, 0LL, retaddr, 1);
}
