/*
 * XREFs of sub_1800515C4 @ 0x1800515C4
 * Callers:
 *     sub_1800514FC @ 0x1800514FC (sub_1800514FC.c)
 *     sub_18010B8A0 @ 0x18010B8A0 (sub_18010B8A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800515C4(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // r9

  result = 0LL;
  v4 = a2 + 32LL * a3;
  while ( a2 < v4 )
  {
    result = *(unsigned __int8 *)(a2 + 25) + (unsigned int)result;
    a2 += 32LL;
  }
  return result;
}
