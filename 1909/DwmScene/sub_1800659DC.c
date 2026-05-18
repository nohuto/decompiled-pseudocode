/*
 * XREFs of sub_1800659DC @ 0x1800659DC
 * Callers:
 *     sub_180066F88 @ 0x180066F88 (sub_180066F88.c)
 * Callees:
 *     sub_180065C8C @ 0x180065C8C (sub_180065C8C.c)
 *     sub_18006945C @ 0x18006945C (sub_18006945C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800659DC(__int64 *a1)
{
  __int64 v2; // rax
  __int64 *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18006945C(a1);
  *a1 = v2;
  try
  {
    sub_180065C8C(a1);
    result = a1;
  }
  catch ( ... )
  {
    sub_1800698B8(a1);
    throw;
  }
  return result;
}
