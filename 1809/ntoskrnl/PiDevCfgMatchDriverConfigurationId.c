/*
 * XREFs of PiDevCfgMatchDriverConfigurationId @ 0x1402894DC
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x1406F5DDC (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     _wcsnicmp @ 0x140195BB0 (_wcsnicmp.c)
 */

bool __fastcall PiDevCfgMatchDriverConfigurationId(__int64 a1, const wchar_t *a2)
{
  size_t v4; // rsi
  char v5; // bl
  unsigned __int16 v6; // r14
  const wchar_t *v7; // rdi
  size_t v8; // rsi

  v4 = *(_WORD *)(a1 + 40) >> 1;
  v5 = 0;
  v6 = *(_WORD *)(a1 + 40) >> 1;
  if ( !wcsnicmp(a2, *(const wchar_t **)(a1 + 48), v4) && a2[v4] == 58 )
  {
    v7 = &a2[v6];
    v8 = *(_WORD *)(a1 + 72) >> 1;
    if ( !wcsnicmp(v7 + 1, *(const wchar_t **)(a1 + 80), v8) )
      return v7[v8 + 1] == 44;
  }
  return v5;
}
