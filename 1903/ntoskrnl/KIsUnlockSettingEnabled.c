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
  UNICODE_STRING v8; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  v7[0] = 9830548LL;
  *(_QWORD *)&v8.Length = 0LL;
  v8.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v7[1] = L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\AppModelUnlock";
  *a2 = 0xFFFF;
  v6[0] = 7733364LL;
  v6[1] = L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx";
  v4 = KGetAppModelStateSeparatedRegKeyPath(
         L"AppxPolicies",
         L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx",
         &DestinationString);
  if ( v4 >= 0 )
  {
    v4 = KGetUnlockSetting(&DestinationString, a1, a2);
    if ( v4 >= 0 )
    {
      if ( (MEMORY[0xFFFFF780000002F0] & 0x400) != 0 && *a2 == 0xFFFF )
        v4 = KGetUnlockSetting(v6, a1, a2);
      if ( v4 >= 0 && *a2 == 0xFFFF )
      {
        v4 = KGetAppModelStateSeparatedRegKeyPath(
               L"AppModelUnlock",
               L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\AppModelUnlock",
               &v8);
        if ( v4 >= 0 )
        {
          v4 = KGetUnlockSetting(&v8, a1, a2);
          if ( v4 >= 0 && (MEMORY[0xFFFFF780000002F0] & 0x400) != 0 && *a2 == 0xFFFF )
            v4 = KGetUnlockSetting(v7, a1, a2);
        }
      }
    }
  }
  AppModelFreeUnicodeString(&v8);
  AppModelFreeUnicodeString(&DestinationString);
  return (unsigned int)v4;
}
