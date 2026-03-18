/*
 * XREFs of ?wil_details_SetPropertyCacheOpportunityCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x1C0058F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetPropertyCacheOpportunityCallback(
        wil_details_FeaturePropertyCache *data,
        _DWORD *contextParam)
{
  unsigned int v2; // r9d
  wil_details_FeatureProperties cache; // edx
  int v6; // r8d
  int v7; // ecx
  wil_details_FeatureProperties v8; // r9d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 result; // rax

  v2 = 0;
  *(_DWORD *)(*(_QWORD *)contextParam + 4LL) = 0;
  **(_DWORD **)contextParam = ((*(_DWORD *)&data->cache >> 3) & 1) == 0;
  *(_DWORD *)&data->cache |= 8u;
  cache = data->cache;
  v6 = contextParam[2];
  if ( *(_DWORD *)&data->cache >> 31 == (v6 == 5) )
  {
    v8 = data->cache;
  }
  else
  {
    if ( (*(_DWORD *)&cache & 0x7F000000) != 0 )
    {
      v7 = 5;
      if ( v6 != 1 )
        v7 = 1;
      *(_DWORD *)(*(_QWORD *)contextParam + 8LL) = v7;
      *(_DWORD *)(*(_QWORD *)contextParam + 4LL) = HIBYTE(data->var) & 0x7F;
      *(_DWORD *)&data->cache &= 0x80FFFFFF;
      cache = data->cache;
      v6 = contextParam[2];
    }
    if ( v6 == 5 )
      v2 = 0x80000000;
    v8 = (wil_details_FeatureProperties)(*(_DWORD *)&cache & 0x7FFFFFFF | v2);
    data->cache = v8;
  }
  v9 = HIBYTE(*(unsigned int *)&v8) & 0x7F;
  v10 = *((_QWORD *)contextParam + 2) + v9;
  if ( v10 > 0x7F || v10 < v9 )
  {
    v10 = *((_QWORD *)contextParam + 2);
    *(_DWORD *)(*(_QWORD *)contextParam + 8LL) = contextParam[2];
    *(_DWORD *)(*(_QWORD *)contextParam + 4LL) = HIBYTE(data->var) & 0x7F;
    v8 = data->cache;
  }
  result = 1LL;
  data->cache = (wil_details_FeatureProperties)(*(_DWORD *)&v8 ^ (*(_DWORD *)&v8 ^ ((_DWORD)v10 << 24)) & 0x7F000000);
  return result;
}
