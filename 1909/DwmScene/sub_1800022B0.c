/*
 * XREFs of sub_1800022B0 @ 0x1800022B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056A50 @ 0x180056A50 (sub_180056A50.c)
 */

__int64 sub_1800022B0()
{
  __int64 result; // rax

  result = sub_180056A50();
  byte_18026B05D = result;
  return result;
}
