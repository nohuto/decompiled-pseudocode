/*
 * XREFs of KIsUnlockSettingEnabled @ 0x1406E3610
 * Callers:
 *     ExQueryFastCacheDevLicense @ 0x1406E35C0 (ExQueryFastCacheDevLicense.c)
 *     KIsSideloadingEnabled @ 0x14091B938 (KIsSideloadingEnabled.c)
 * Callees:
 *     AppModelFreeUnicodeString @ 0x140134560 (AppModelFreeUnicodeString.c)
 *     KGetUnlockSetting @ 0x1406E3748 (KGetUnlockSetting.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1406E7C04 (KGetAppModelStateSeparatedRegKeyPath.c)
 */

__int64 __fastcall KIsUnlockSettingEnabled(__int64 a1, _DWORD *a2)
{
  int v4; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v9[2]; // [rsp+50h] [rbp-10h] BYREF

  v7[0] = 9830548LL;
  v8[0] = 0LL;
  v8[1] = 0LL;
  v9[0] = 0LL;
  v9[1] = 0LL;
  v7[1] = L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\AppModelUnlock";
  *a2 = 0xFFFF;
  v6[0] = 7733364LL;
  v6[1] = L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx";
  v4 = KGetAppModelStateSeparatedRegKeyPath(L"AppxPolicies");
  if ( v4 >= 0 )
  {
    v4 = KGetUnlockSetting(v9, a1, a2);
    if ( v4 >= 0 )
    {
      if ( (MEMORY[0xFFFFF780000002F0] & 0x400) != 0 && *a2 == 0xFFFF )
        v4 = KGetUnlockSetting(v6, a1, a2);
      if ( v4 >= 0 && *a2 == 0xFFFF )
      {
        v4 = KGetAppModelStateSeparatedRegKeyPath(L"AppModelUnlock");
        if ( v4 >= 0 )
        {
          v4 = KGetUnlockSetting(v8, a1, a2);
          if ( v4 >= 0 && (MEMORY[0xFFFFF780000002F0] & 0x400) != 0 && *a2 == 0xFFFF )
            v4 = KGetUnlockSetting(v7, a1, a2);
        }
      }
    }
  }
  AppModelFreeUnicodeString(v8);
  AppModelFreeUnicodeString(v9);
  return (unsigned int)v4;
}
