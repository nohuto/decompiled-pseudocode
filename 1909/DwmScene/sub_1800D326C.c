/*
 * XREFs of sub_1800D326C @ 0x1800D326C
 * Callers:
 *     sub_1800D43B0 @ 0x1800D43B0 (sub_1800D43B0.c)
 * Callees:
 *     sub_1800D4878 @ 0x1800D4878 (sub_1800D4878.c)
 */

__int64 __fastcall sub_1800D326C(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax

  result = sub_1800D4878(a1);
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = *a2;
  *(_QWORD *)(result + 40) = 0LL;
  *(_QWORD *)(result + 48) = 0LL;
  *(_QWORD *)(result + 40) = *a3;
  *(_QWORD *)(result + 48) = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  return result;
}
