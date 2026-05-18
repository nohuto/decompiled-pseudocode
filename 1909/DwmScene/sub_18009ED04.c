/*
 * XREFs of sub_18009ED04 @ 0x18009ED04
 * Callers:
 *     sub_1800380A0 @ 0x1800380A0 (sub_1800380A0.c)
 *     sub_1800CFED8 @ 0x1800CFED8 (sub_1800CFED8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009ED04(__int64 a1)
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
    return *(unsigned int *)(v3 + 24);
  return result;
}
