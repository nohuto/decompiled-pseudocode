/*
 * XREFs of sub_1800D30A0 @ 0x1800D30A0
 * Callers:
 *     sub_1800D4490 @ 0x1800D4490 (sub_1800D4490.c)
 * Callees:
 *     sub_18007DD0C @ 0x18007DD0C (sub_18007DD0C.c)
 *     sub_1800D3228 @ 0x1800D3228 (sub_1800D3228.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D30A0(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v2 = sub_18007DD0C();
  *(_QWORD *)a1 = v2;
  try
  {
    sub_1800D3228(a1);
    result = a1;
  }
  catch ( ... )
  {
    sub_18007E5A8((_QWORD **)a1);
    throw;
  }
  return result;
}
