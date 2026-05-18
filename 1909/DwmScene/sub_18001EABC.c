/*
 * XREFs of sub_18001EABC @ 0x18001EABC
 * Callers:
 *     sub_18001F560 @ 0x18001F560 (sub_18001F560.c)
 * Callees:
 *     sub_180025694 @ 0x180025694 (sub_180025694.c)
 */

__int64 __fastcall sub_18001EABC(__int64 a1, __int64 a2, _QWORD **a3)
{
  __int64 result; // rax

  result = sub_180025694(a1);
  *(_WORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = **a3;
  *(_QWORD *)(result + 96) = 0LL;
  return result;
}
