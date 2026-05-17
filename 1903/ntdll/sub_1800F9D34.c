/*
 * XREFs of sub_1800F9D34 @ 0x1800F9D34
 * Callers:
 *     sub_18007D870 @ 0x18007D870 (sub_18007D870.c)
 *     sub_18007D8F8 @ 0x18007D8F8 (sub_18007D8F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F9D34(__int64 a1, int a2)
{
  __int64 result; // rax

  result = (unsigned int)(a2 + (a2 >> 3));
  if ( (int)result < 64 )
  {
    result = (unsigned int)(a2 * *(_DWORD *)(a1 + 24));
    if ( (int)result > 64 )
      return 64LL;
  }
  return result;
}
