/*
 * XREFs of sub_1800019E0 @ 0x1800019E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056D6C @ 0x180056D6C (sub_180056D6C.c)
 */

__int64 sub_1800019E0()
{
  __int64 result; // rax

  result = sub_180056D6C();
  qword_180268E10 = result;
  return result;
}
