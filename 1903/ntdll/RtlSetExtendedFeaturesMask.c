/*
 * XREFs of RtlSetExtendedFeaturesMask @ 0x1800F2220
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F2878 @ 0x1800F2878 (sub_1800F2878.c)
 */

unsigned __int64 *__fastcall RtlSetExtendedFeaturesMask(__int64 a1)
{
  unsigned __int64 *result; // rax
  __int64 v2; // r10

  result = (unsigned __int64 *)sub_1800F2878(a1);
  *result = v2 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0xFFFFFFFFFFFFFFFCuLL;
  return result;
}
