/*
 * XREFs of sub_18009ED20 @ 0x18009ED20
 * Callers:
 *     sub_18002D490 @ 0x18002D490 (sub_18002D490.c)
 *     sub_18002EC20 @ 0x18002EC20 (sub_18002EC20.c)
 *     sub_1800304F0 @ 0x1800304F0 (sub_1800304F0.c)
 *     sub_180031A54 @ 0x180031A54 (sub_180031A54.c)
 *     sub_1800350C0 @ 0x1800350C0 (sub_1800350C0.c)
 *     sub_1800CFED8 @ 0x1800CFED8 (sub_1800CFED8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009ED20(__int64 a1)
{
  unsigned int **v1; // rcx
  __int64 result; // rax
  unsigned int *v3; // rcx

  v1 = *(unsigned int ***)(a1 + 112);
  result = 0LL;
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0LL;
  if ( v3 )
    return *v3;
  return result;
}
