/*
 * XREFs of sub_1800022B0 @ 0x1800022B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056940 @ 0x180056940 (sub_180056940.c)
 */

__int64 sub_1800022B0()
{
  __int64 result; // rax

  result = sub_180056940();
  byte_18026A05D = result;
  return result;
}
