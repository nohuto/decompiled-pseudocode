/*
 * XREFs of sub_18009EBF4 @ 0x18009EBF4
 * Callers:
 *     sub_180037F90 @ 0x180037F90 (sub_180037F90.c)
 *     sub_1800CFDC8 @ 0x1800CFDC8 (sub_1800CFDC8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009EBF4(__int64 a1)
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
