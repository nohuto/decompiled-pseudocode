/*
 * XREFs of ?wil_details_SetPropertyCacheUsageCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x1C0059010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetPropertyCacheUsageCallback(
        wil_details_FeaturePropertyCache *data,
        _DWORD *contextParam)
{
  int v2; // r9d
  wil_details_FeatureProperties cache; // edx
  int v5; // r8d
  wil_details_FeatureProperties v6; // r9d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 result; // rax

  v2 = 0;
  *(_DWORD *)(*(_QWORD *)contextParam + 4LL) = 0;
  **(_DWORD **)contextParam = (*(_DWORD *)&data->cache & 8) == 0;
  *(_DWORD *)&data->cache |= 8u;
  cache = data->cache;
  v5 = contextParam[2];
  if ( ((*(_DWORD *)&data->cache >> 15) & 1) == (v5 == 4) )
  {
    v6 = data->cache;
  }
  else
  {
    if ( (*(_WORD *)&cache & 0x7FC0) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)contextParam + 8LL) = v5 == 0 ? 4 : 0;
      *(_DWORD *)(*(_QWORD *)contextParam + 4LL) = (*(_DWORD *)&data->cache >> 6) & 0x1FF;
      *(_DWORD *)&data->cache &= 0xFFFF803F;
      cache = data->cache;
      v5 = contextParam[2];
    }
    if ( v5 == 4 )
      v2 = 0x8000;
    v6 = (wil_details_FeatureProperties)(*(_DWORD *)&cache & 0xFFFF7FFF | v2);
    data->cache = v6;
  }
  v7 = ((unsigned __int64)*(unsigned int *)&v6 >> 6) & 0x1FF;
  v8 = *((_QWORD *)contextParam + 2) + v7;
  if ( v8 > 0x1FF || v8 < v7 )
  {
    v8 = *((_QWORD *)contextParam + 2);
    *(_DWORD *)(*(_QWORD *)contextParam + 8LL) = contextParam[2];
    *(_DWORD *)(*(_QWORD *)contextParam + 4LL) = (*(_DWORD *)&data->cache >> 6) & 0x1FF;
    v6 = data->cache;
  }
  result = 1LL;
  data->cache = (wil_details_FeatureProperties)(*(_DWORD *)&v6 ^ (*(_WORD *)&v6 ^ (unsigned __int16)((_WORD)v8 << 6)) & 0x7FC0);
  return result;
}
