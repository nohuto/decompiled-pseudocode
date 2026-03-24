/*
 * XREFs of KIsUnlockSettingEnabled @ 0x1406C30D0
 * Callers:
 *     ExQueryFastCacheDevLicense @ 0x1406C3080 (ExQueryFastCacheDevLicense.c)
 *     KIsSideloadingEnabled @ 0x1408DDB94 (KIsSideloadingEnabled.c)
 * Callees:
 *     AppModelFreeUnicodeString @ 0x1401345F0 (AppModelFreeUnicodeString.c)
 *     KGetUnlockSetting @ 0x1406C3208 (KGetUnlockSetting.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1406C7B58 (KGetAppModelStateSeparatedRegKeyPath.c)
 */

__int64 __fastcall KIsUnlockSettingEnabled(__int64 a1, _DWORD *a2)
{
  int v4; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-30h] BYREF
  int v8; // [rsp+40h] [rbp-20h] BYREF
  const wchar_t *v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+50h] [rbp-10h] BYREF
  const wchar_t *v11; // [rsp+58h] [rbp-8h]

  v10 = 9830548;
  v6[0] = 0LL;
  v6[1] = 0LL;
  v7[0] = 0LL;
  v7[1] = 0LL;
  v11 = L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\AppModelUnlock";
  *a2 = 0xFFFF;
  v8 = 7733364;
  v9 = L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx";
  v4 = KGetAppModelStateSeparatedRegKeyPath(L"AppxPolicies");
  if ( v4 >= 0 )
  {
    v4 = KGetUnlockSetting(v7, a1, a2);
    if ( v4 >= 0 )
    {
      if ( (MEMORY[0xFFFFF780000002F0] & 0x400) != 0 && *a2 == 0xFFFF )
        v4 = KGetUnlockSetting(&v8, a1, a2);
      if ( v4 >= 0 && *a2 == 0xFFFF )
      {
        v4 = KGetAppModelStateSeparatedRegKeyPath(L"AppModelUnlock");
        if ( v4 >= 0 )
        {
          v4 = KGetUnlockSetting(v6, a1, a2);
          if ( v4 >= 0 && (MEMORY[0xFFFFF780000002F0] & 0x400) != 0 && *a2 == 0xFFFF )
            v4 = KGetUnlockSetting(&v10, a1, a2);
        }
      }
    }
  }
  AppModelFreeUnicodeString(v6);
  AppModelFreeUnicodeString(v7);
  return (unsigned int)v4;
}
