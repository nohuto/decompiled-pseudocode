/*
 * XREFs of sub_18009EB48 @ 0x18009EB48
 * Callers:
 *     sub_180034FB0 @ 0x180034FB0 (sub_180034FB0.c)
 *     sub_180037F90 @ 0x180037F90 (sub_180037F90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009EB48(__int64 a1)
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
