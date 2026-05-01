/*
 * XREFs of _HampUsageInfoRegistryQuery@12 @ 0x100132F0
 * Callers:
 *     _HamQueryApplicationUsageInfo@12 @ 0x10012AD0 (_HamQueryApplicationUsageInfo@12.c)
 *     _HamQueryPackageUsageInfo@12 @ 0x10012BE0 (_HamQueryPackageUsageInfo@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 *     ?HampSystemQueryValue@@YGJPAUHKEY__@@PBGPAXPAK@Z @ 0x10013923 (-HampSystemQueryValue@@YGJPAUHKEY__@@PBGPAXPAK@Z.c)
 */

unsigned int __fastcall HampUsageInfoRegistryQuery(HKEY hKey, LPCWSTR lpSubKey, void *a3)
{
  unsigned int v3; // ebx
  LSTATUS v4; // eax
  unsigned int v5; // esi
  bool v6; // sf
  LSTATUS v7; // eax
  bool v8; // sf
  LSTATUS v9; // eax
  bool v10; // sf
  int Value; // eax
  void *v13; // [esp+0h] [ebp-44h]
  unsigned int *v14; // [esp+4h] [ebp-40h]
  HKEY phkResult; // [esp+Ch] [ebp-38h] BYREF
  HKEY hKeya; // [esp+10h] [ebp-34h] BYREF
  HKEY v17; // [esp+14h] [ebp-30h] BYREF
  _DWORD v18[9]; // [esp+18h] [ebp-2Ch] BYREF

  v3 = 0;
  phkResult = 0;
  hKeya = 0;
  v17 = 0;
  v4 = RegOpenKeyExW(hKey, lpSubKey, 0, 1u, &phkResult);
  v5 = v4;
  v6 = v4 < 0;
  if ( v4 > 0 )
  {
    v5 = (unsigned __int16)v4 | 0xC0070000;
    v6 = 1;
  }
  if ( !v6 )
  {
    v7 = RegOpenKeyExW(phkResult, L"V1", 0, 1u, &hKeya);
    v5 = v7;
    v8 = v7 < 0;
    if ( v7 > 0 )
    {
      v5 = (unsigned __int16)v7 | 0xC0070000;
      v8 = 1;
    }
    if ( !v8 )
    {
      v9 = RegOpenKeyExW(hKeya, L"LU", 0, 0x20019u, &v17);
      v5 = v9;
      v10 = v9 < 0;
      if ( v9 > 0 )
      {
        v5 = (unsigned __int16)v9 | 0xC0070000;
        v10 = 1;
      }
      if ( !v10 )
      {
        memset(v18, 255, 32);
        while ( 1 )
        {
          Value = HampSystemQueryValue(
                    (HKEY)((char *)v18 + dword_10018068[v3]),
                    (LPDWORD)((char *)&unk_1001806C + v3 * 4),
                    v13,
                    v14);
          v5 = Value;
          if ( Value != -1073283070 && Value < 0 )
            break;
          v3 += 4;
          if ( v3 >= 16 )
          {
            qmemcpy(a3, v18, 0x20u);
            v5 = 0;
            break;
          }
        }
      }
    }
  }
  if ( v17 )
    RegCloseKey(v17);
  if ( hKeya )
    RegCloseKey(hKeya);
  if ( phkResult )
    RegCloseKey(phkResult);
  return v5;
}
