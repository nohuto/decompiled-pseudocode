/*
 * XREFs of ?wil_details_SetPropertyCacheUsageCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x1C007D430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetPropertyCacheUsageCallback(union wil_details_FeaturePropertyCache *a1, _DWORD *a2)
{
  int v2; // r9d
  wil_details_FeatureProperties cache; // edx
  int v5; // r8d
  wil_details_FeatureProperties v6; // r9d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 result; // rax

  v2 = 0;
  *(_DWORD *)(*(_QWORD *)a2 + 4LL) = 0;
  **(_DWORD **)a2 = (*(_DWORD *)&a1->cache & 8) == 0;
  *(_DWORD *)&a1->cache |= 8u;
  cache = a1->cache;
  v5 = a2[2];
  if ( ((*(_DWORD *)&a1->cache >> 15) & 1) == (v5 == 4) )
  {
    v6 = a1->cache;
  }
  else
  {
    if ( (*(_WORD *)&cache & 0x7FC0) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)a2 + 8LL) = v5 == 0 ? 4 : 0;
      *(_DWORD *)(*(_QWORD *)a2 + 4LL) = (*(_DWORD *)&a1->cache >> 6) & 0x1FF;
      *(_DWORD *)&a1->cache &= 0xFFFF803F;
      cache = a1->cache;
      v5 = a2[2];
    }
    if ( v5 == 4 )
      v2 = 0x8000;
    v6 = (wil_details_FeatureProperties)(*(_DWORD *)&cache & 0xFFFF7FFF | v2);
    a1->cache = v6;
  }
  v7 = ((unsigned __int64)*(unsigned int *)&v6 >> 6) & 0x1FF;
  v8 = *((_QWORD *)a2 + 2) + v7;
  if ( v8 > 0x1FF || v8 < v7 )
  {
    v8 = *((_QWORD *)a2 + 2);
    *(_DWORD *)(*(_QWORD *)a2 + 8LL) = a2[2];
    *(_DWORD *)(*(_QWORD *)a2 + 4LL) = (*(_DWORD *)&a1->cache >> 6) & 0x1FF;
    v6 = a1->cache;
  }
  result = 1LL;
  a1->cache = (wil_details_FeatureProperties)(*(_DWORD *)&v6 ^ (*(_WORD *)&v6 ^ (unsigned __int16)((_WORD)v8 << 6)) & 0x7FC0);
  return result;
}
