/*
 * XREFs of sub_18009ECE8 @ 0x18009ECE8
 * Callers:
 *     sub_1800350C0 @ 0x1800350C0 (sub_1800350C0.c)
 *     sub_180037810 @ 0x180037810 (sub_180037810.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009ECE8(__int64 a1)
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
    return *(unsigned int *)(v3 + 12);
  return result;
}
