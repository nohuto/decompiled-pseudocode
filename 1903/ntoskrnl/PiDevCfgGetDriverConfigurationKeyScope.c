/*
 * XREFs of PiDevCfgGetDriverConfigurationKeyScope @ 0x14029F2D8
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406FB7A4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140868888 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 */

__int64 __fastcall PiDevCfgGetDriverConfigurationKeyScope(wchar_t *Str2)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  const wchar_t **i; // rsi

  v1 = 0;
  v2 = 0;
  for ( i = (const wchar_t **)&off_1409489D0; wcsicmp(*i, Str2); i += 2 )
  {
    if ( ++v2 >= 7 )
      return v1;
  }
  return *((unsigned int *)&off_1409489D0 + 4 * v2 + 2);
}
