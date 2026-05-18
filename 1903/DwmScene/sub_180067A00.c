/*
 * XREFs of sub_180067A00 @ 0x180067A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D57C0 @ 0x1800D57C0 (sub_1800D57C0.c)
 */

__int64 __fastcall sub_180067A00(__int64 a1)
{
  __int64 result; // rax

  result = sub_1800D57C0(*(_QWORD *)(a1 + 440));
  ++*(_QWORD *)(a1 + 480);
  return result;
}
