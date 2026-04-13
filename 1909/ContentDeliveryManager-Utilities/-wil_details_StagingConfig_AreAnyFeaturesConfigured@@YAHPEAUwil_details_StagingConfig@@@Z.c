/*
 * XREFs of ?wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z @ 0x1800063F0
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180008F4C (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_StagingConfig_AreAnyFeaturesConfigured(struct wil_details_StagingConfig *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edx
  __int64 v3; // rsi
  unsigned int v4; // r10d
  unsigned int v5; // r11d
  _BYTE *v6; // r9
  int v7; // edi
  unsigned int v8; // r8d

  v1 = *((_QWORD *)a1 + 3);
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  v5 = *(unsigned __int16 *)(v1 + 4);
  if ( *(_WORD *)(v1 + 4) )
  {
    v6 = (_BYTE *)(v3 + 4);
    do
    {
      v7 = *((_DWORD *)v6 - 1);
      if ( v7
        && ((*(_DWORD *)v6 & 0x300) != 0
         || (*(_DWORD *)v6 & 0xC00) != 0
         || (*(_DWORD *)v6 & 0x3000) != 0
         || (*(_DWORD *)v6 & 0x3F000000) != 0
         || (*v6 & 2) != 0) )
      {
        if ( (*v6 & 1) != 0 )
          return 1;
        v8 = 0;
        if ( !*(_WORD *)(v1 + 4) )
          return 1;
        while ( v8 == v4 || v7 != *(_DWORD *)(v3 + 12LL * v8) )
        {
          if ( ++v8 >= v5 )
            return 1;
        }
      }
      ++v4;
      v6 += 12;
    }
    while ( v4 < v5 );
  }
  if ( *(_WORD *)(v1 + 6) )
    return 1;
  return v2;
}
