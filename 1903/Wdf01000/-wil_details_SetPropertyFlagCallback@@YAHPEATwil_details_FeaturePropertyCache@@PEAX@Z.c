/*
 * XREFs of ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x1C0059110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetPropertyFlagCallback(wil_details_FeaturePropertyCache *data, _DWORD *contextParam)
{
  __int64 result; // rax

  **(_DWORD **)contextParam = 0;
  if ( (contextParam[2] & *(_DWORD *)&data->cache) == contextParam[2] )
    return 0LL;
  *(_DWORD *)&data->cache |= contextParam[2];
  result = 1LL;
  if ( !contextParam[3] && (*(_DWORD *)&data->cache & 8) == 0 )
  {
    *(_DWORD *)&data->cache |= 8u;
    **(_DWORD **)contextParam = 1;
  }
  return result;
}
