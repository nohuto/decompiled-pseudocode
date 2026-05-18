/*
 * XREFs of sub_18006B340 @ 0x18006B340
 * Callers:
 *     sub_18006B944 @ 0x18006B944 (sub_18006B944.c)
 * Callees:
 *     sub_18006DE4C @ 0x18006DE4C (sub_18006DE4C.c)
 */

__int64 __fastcall sub_18006B340(__int64 a1, __int64 a2, _DWORD **a3)
{
  __int64 result; // rax

  result = sub_18006DE4C(a1);
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = **a3;
  *(_QWORD *)(result + 40) = 0LL;
  *(_QWORD *)(result + 48) = 0LL;
  *(_QWORD *)(result + 56) = 0LL;
  return result;
}
