/*
 * XREFs of _HamQueryApplicationUsageInfo@12 @ 0x10012AD0
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 *     _HampUsageInfoRegistryQuery@12 @ 0x100132F0 (_HampUsageInfoRegistryQuery@12.c)
 *     ?HampSystemOpenAppRegistryKey@@YGJPBGPAXKPAPAUHKEY__@@@Z @ 0x10013803 (-HampSystemOpenAppRegistryKey@@YGJPBGPAXKPAPAUHKEY__@@@Z.c)
 */

signed int __stdcall HamQueryApplicationUsageInfo(const WCHAR *applicationUserModelId, int a2, int *a3)
{
  HKEY v3; // ebx
  const unsigned __int16 *v4; // ecx
  signed int v5; // esi
  int v6; // eax
  LSTATUS v7; // eax
  bool v8; // sf
  unsigned int v10; // [esp+0h] [ebp-158h]
  HKEY *v11; // [esp+4h] [ebp-154h]
  HKEY phkResult; // [esp+10h] [ebp-148h] BYREF
  HKEY hKey; // [esp+14h] [ebp-144h] BYREF
  UINT32 packageRelativeApplicationIdLength; // [esp+18h] [ebp-140h] BYREF
  UINT32 packageFamilyNameLength; // [esp+1Ch] [ebp-13Ch] BYREF
  int v16[8]; // [esp+20h] [ebp-138h] BYREF
  WCHAR packageFamilyName[68]; // [esp+40h] [ebp-118h] BYREF
  WCHAR packageRelativeApplicationId[70]; // [esp+C8h] [ebp-90h] BYREF

  v3 = 0;
  phkResult = 0;
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 65;
  hKey = 0;
  if ( ParseApplicationUserModelId(
         applicationUserModelId,
         &packageFamilyNameLength,
         packageFamilyName,
         &packageRelativeApplicationIdLength,
         packageRelativeApplicationId) )
  {
    v5 = -1073741585;
  }
  else
  {
    v6 = HampSystemOpenAppRegistryKey(v4, &hKey, v10, v11);
    v3 = hKey;
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = RegOpenKeyExW(hKey, L"HAM\\AUI", 0, 1u, &phkResult);
      v5 = v7;
      v8 = v7 < 0;
      if ( v7 > 0 )
      {
        v5 = (unsigned __int16)v7 | 0xC0070000;
        v8 = 1;
      }
      if ( !v8 )
      {
        v5 = HampUsageInfoRegistryQuery(phkResult, packageRelativeApplicationId, (int)v16);
        if ( v5 >= 0 )
        {
          qmemcpy(a3, v16, 0x20u);
          v5 = 0;
        }
      }
    }
  }
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( v3 )
    RegCloseKey(v3);
  return v5;
}
