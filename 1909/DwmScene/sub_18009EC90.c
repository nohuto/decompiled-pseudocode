/*
 * XREFs of sub_18009EC90 @ 0x18009EC90
 * Callers:
 *     sub_18002D420 @ 0x18002D420 (sub_18002D420.c)
 *     sub_1800304F0 @ 0x1800304F0 (sub_1800304F0.c)
 *     sub_1800312D4 @ 0x1800312D4 (sub_1800312D4.c)
 *     sub_180031A54 @ 0x180031A54 (sub_180031A54.c)
 *     sub_1800350C0 @ 0x1800350C0 (sub_1800350C0.c)
 *     sub_180037810 @ 0x180037810 (sub_180037810.c)
 *     sub_1800380A0 @ 0x1800380A0 (sub_1800380A0.c)
 *     sub_1800CFED8 @ 0x1800CFED8 (sub_1800CFED8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009EC90(__int64 a1)
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
    return *(unsigned int *)(v3 + 16);
  return result;
}
