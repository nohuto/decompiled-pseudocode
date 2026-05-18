/*
 * XREFs of sub_1800D31B0 @ 0x1800D31B0
 * Callers:
 *     sub_1800D45A0 @ 0x1800D45A0 (sub_1800D45A0.c)
 * Callees:
 *     sub_18007DE1C @ 0x18007DE1C (sub_18007DE1C.c)
 *     sub_1800D3338 @ 0x1800D3338 (sub_1800D3338.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D31B0(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v2 = sub_18007DE1C();
  *(_QWORD *)a1 = v2;
  try
  {
    sub_1800D3338(a1);
    result = a1;
  }
  catch ( ... )
  {
    sub_18007E6B8((_QWORD **)a1);
    throw;
  }
  return result;
}
