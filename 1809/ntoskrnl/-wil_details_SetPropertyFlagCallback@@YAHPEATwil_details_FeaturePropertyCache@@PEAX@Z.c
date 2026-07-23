/*
 * XREFs of ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x14012AF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetPropertyFlagCallback(union wil_details_FeaturePropertyCache *a1, _DWORD *a2)
{
  __int64 result; // rax

  **(_DWORD **)a2 = 0;
  if ( (a2[2] & *(_DWORD *)a1) == a2[2] )
    return 0LL;
  *(_DWORD *)a1 |= a2[2];
  result = 1LL;
  if ( !a2[3] && (*(_DWORD *)a1 & 8) == 0 )
  {
    *(_DWORD *)a1 |= 8u;
    **(_DWORD **)a2 = 1;
  }
  return result;
}
