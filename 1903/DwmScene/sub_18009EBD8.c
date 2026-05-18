/*
 * XREFs of sub_18009EBD8 @ 0x18009EBD8
 * Callers:
 *     sub_180034FB0 @ 0x180034FB0 (sub_180034FB0.c)
 *     sub_180037700 @ 0x180037700 (sub_180037700.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009EBD8(__int64 a1)
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
