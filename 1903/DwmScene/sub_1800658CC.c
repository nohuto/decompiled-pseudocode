/*
 * XREFs of sub_1800658CC @ 0x1800658CC
 * Callers:
 *     sub_180066E78 @ 0x180066E78 (sub_180066E78.c)
 * Callees:
 *     sub_180065B7C @ 0x180065B7C (sub_180065B7C.c)
 *     sub_18006934C @ 0x18006934C (sub_18006934C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800658CC(__int64 *a1)
{
  __int64 v2; // rax
  __int64 *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18006934C(a1);
  *a1 = v2;
  try
  {
    sub_180065B7C(a1);
    result = a1;
  }
  catch ( ... )
  {
    sub_1800697A8(a1);
    throw;
  }
  return result;
}
