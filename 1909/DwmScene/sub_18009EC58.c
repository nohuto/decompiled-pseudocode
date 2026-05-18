/*
 * XREFs of sub_18009EC58 @ 0x18009EC58
 * Callers:
 *     sub_1800350C0 @ 0x1800350C0 (sub_1800350C0.c)
 *     sub_1800380A0 @ 0x1800380A0 (sub_1800380A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009EC58(__int64 a1)
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
    return *(unsigned int *)(v3 + 8);
  return result;
}
