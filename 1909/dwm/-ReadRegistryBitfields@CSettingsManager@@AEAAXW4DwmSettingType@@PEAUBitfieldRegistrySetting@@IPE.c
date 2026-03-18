/*
 * XREFs of ?ReadRegistryBitfields@CSettingsManager@@AEAAXW4DwmSettingType@@PEAUBitfieldRegistrySetting@@IPEAK@Z @ 0x1400024E0
 * Callers:
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x1400023F0 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 * Callees:
 *     ?GetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGPEAK@Z @ 0x140002600 (-GetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGPEAK@Z.c)
 */

__int64 __fastcall CSettingsManager::ReadRegistryBitfields(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  _DWORD *v5; // r15
  unsigned int *v6; // rbx
  __int64 v9; // rsi
  int v10; // edi
  unsigned int v11; // ecx
  __int64 result; // rax
  unsigned int v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = a4;
  v5 = a5;
  v6 = (unsigned int *)(a3 + 8);
  v9 = 3LL;
  v10 = *a5;
  do
  {
    if ( (int)CSettingsManager::GetDword(a1, a2, *((_QWORD *)v6 - 1), &v13) >= 0 )
    {
      v11 = v13;
    }
    else
    {
      v11 = v6[1];
      v13 = v11;
    }
    result = *v6;
    if ( v11 )
    {
      v10 |= result;
    }
    else
    {
      result = (unsigned int)~(_DWORD)result;
      v10 &= result;
    }
    v6 += 4;
    --v9;
  }
  while ( v9 );
  *v5 = v10;
  return result;
}
