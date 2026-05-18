/*
 * XREFs of sub_18009EC3C @ 0x18009EC3C
 * Callers:
 *     sub_180030404 @ 0x180030404 (sub_180030404.c)
 *     sub_1800312D4 @ 0x1800312D4 (sub_1800312D4.c)
 *     sub_1800CFED8 @ 0x1800CFED8 (sub_1800CFED8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009EC3C(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 112);
  result = 0LL;
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0LL;
  if ( v3 )
    return *(unsigned int *)(v3 + 20);
  return result;
}
