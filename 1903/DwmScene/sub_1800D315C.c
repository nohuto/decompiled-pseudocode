/*
 * XREFs of sub_1800D315C @ 0x1800D315C
 * Callers:
 *     sub_1800D42A0 @ 0x1800D42A0 (sub_1800D42A0.c)
 * Callees:
 *     sub_1800D4768 @ 0x1800D4768 (sub_1800D4768.c)
 */

__int64 __fastcall sub_1800D315C(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax

  result = sub_1800D4768(a1);
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
