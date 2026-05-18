/*
 * XREFs of sub_180067B10 @ 0x180067B10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D58D0 @ 0x1800D58D0 (sub_1800D58D0.c)
 */

__int64 __fastcall sub_180067B10(__int64 a1)
{
  __int64 result; // rax

  result = sub_1800D58D0(*(_QWORD *)(a1 + 440));
  ++*(_QWORD *)(a1 + 480);
  return result;
}
