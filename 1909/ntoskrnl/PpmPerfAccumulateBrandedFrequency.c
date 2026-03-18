/*
 * XREFs of PpmPerfAccumulateBrandedFrequency @ 0x1408A6BD0
 * Callers:
 *     PpmPerfGetBrandedFrequency @ 0x1408A6C10 (PpmPerfGetBrandedFrequency.c)
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfAccumulateBrandedFrequency(ULONG a1, _DWORD *a2)
{
  __int64 Prcb; // rax
  __int64 v4; // rcx
  __int64 result; // rax

  Prcb = KeGetPrcb(a1);
  v4 = *(_QWORD *)(Prcb + 24176);
  if ( v4 )
    result = *(unsigned int *)(v4 + 308);
  else
    result = *(unsigned int *)(Prcb + 68);
  if ( a2[1] < (unsigned int)result )
    a2[1] = result;
  *a2 = 1;
  return result;
}
