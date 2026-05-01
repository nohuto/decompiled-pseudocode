/*
 * XREFs of _HamQueryPackageUsageInfo@12 @ 0x10012BE0
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 *     _HampUsageInfoRegistryQuery@12 @ 0x100132F0 (_HampUsageInfoRegistryQuery@12.c)
 *     ?HampUsageInfoMergeVectors@@YG?AU_HAM_APPLICATION_USAGE_INFO@@PAU1@0@Z @ 0x10013629 (-HampUsageInfoMergeVectors@@YG-AU_HAM_APPLICATION_USAGE_INFO@@PAU1@0@Z.c)
 *     ?HampSystemOpenAppRegistryKey@@YGJPBGPAXKPAPAUHKEY__@@@Z @ 0x10013803 (-HampSystemOpenAppRegistryKey@@YGJPBGPAXKPAPAUHKEY__@@@Z.c)
 */

signed int __stdcall HamQueryPackageUsageInfo(unsigned __int16 *a1, int a2, void *a3)
{
  DWORD v3; // edi
  signed int v4; // esi
  LSTATUS v5; // eax
  bool v6; // sf
  LSTATUS v7; // eax
  unsigned int v9; // [esp+4h] [ebp-110h]
  HKEY *v10; // [esp+8h] [ebp-10Ch]
  HKEY phkResult; // [esp+10h] [ebp-104h] BYREF
  HKEY hKey; // [esp+14h] [ebp-100h] BYREF
  DWORD cchName; // [esp+18h] [ebp-FCh] BYREF
  DWORD v14; // [esp+1Ch] [ebp-F8h]
  void *v15; // [esp+20h] [ebp-F4h]
  _BYTE v16[32]; // [esp+24h] [ebp-F0h] BYREF
  _DWORD v17[8]; // [esp+44h] [ebp-D0h] BYREF
  int v18[8]; // [esp+64h] [ebp-B0h] BYREF
  WCHAR Name[70]; // [esp+84h] [ebp-90h] BYREF

  v15 = a3;
  v3 = 0;
  hKey = 0;
  phkResult = 0;
  v4 = HampSystemOpenAppRegistryKey(a1, &hKey, v9, v10);
  if ( v4 >= 0 )
  {
    v5 = RegOpenKeyExW(hKey, L"HAM\\AUI", 0, 8u, &phkResult);
    v4 = v5;
    v6 = v5 < 0;
    if ( v5 > 0 )
    {
      v4 = (unsigned __int16)v5 | 0xC0070000;
      v6 = 1;
    }
    if ( !v6 )
    {
      v17[2] = 0;
      v17[0] = -1;
      v17[1] = -1;
      v17[4] = -1;
      v17[5] = -1;
      v17[3] = 0;
      v17[6] = 0;
      v17[7] = 0;
      while ( 1 )
      {
        v14 = v3;
        cchName = 65;
        v7 = RegEnumKeyExW(phkResult, v3, Name, &cchName, 0, 0, 0, 0);
        v4 = v7;
        if ( v7 == 259 )
        {
          qmemcpy(v15, v17, 0x20u);
          v4 = 0;
          goto LABEL_11;
        }
        if ( v7 )
          break;
        v4 = HampUsageInfoRegistryQuery(phkResult, Name, (int)v18);
        if ( v4 < 0 )
          goto LABEL_11;
        qmemcpy(v17, (const void *)HampUsageInfoMergeVectors(v17, v18, v16), sizeof(v17));
        v3 = v14 + 1;
      }
      if ( v7 > 0 )
        v4 = (unsigned __int16)v7 | 0xC0070000;
    }
  }
LABEL_11:
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( hKey )
    RegCloseKey(hKey);
  return v4;
}
