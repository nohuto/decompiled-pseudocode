/*
 * XREFs of sub_18006B450 @ 0x18006B450
 * Callers:
 *     sub_18006BA54 @ 0x18006BA54 (sub_18006BA54.c)
 * Callees:
 *     sub_18006DF5C @ 0x18006DF5C (sub_18006DF5C.c)
 */

__int64 __fastcall sub_18006B450(__int64 a1, __int64 a2, _DWORD **a3)
{
  __int64 result; // rax

  result = sub_18006DF5C(a1);
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = **a3;
  *(_QWORD *)(result + 40) = 0LL;
  *(_QWORD *)(result + 48) = 0LL;
  *(_QWORD *)(result + 56) = 0LL;
  return result;
}
