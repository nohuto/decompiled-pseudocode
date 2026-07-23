/*
 * XREFs of KIsUnlockSettingEnabled @ 0x1406C4370
 * Callers:
 *     ExQueryFastCacheDevLicense @ 0x1406C4320 (ExQueryFastCacheDevLicense.c)
 *     KIsSideloadingEnabled @ 0x1408DEE54 (KIsSideloadingEnabled.c)
 * Callees:
 *     AppModelFreeUnicodeString @ 0x1401346C0 (AppModelFreeUnicodeString.c)
 *     KGetUnlockSetting @ 0x1406C44A8 (KGetUnlockSetting.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1406C8DF8 (KGetAppModelStateSeparatedRegKeyPath.c)
 */

__int64 __fastcall KIsUnlockSettingEnabled(__int64 a1, _DWORD *a2)
{
  int v4; // ebx
  UNICODE_STRING v6; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  int v8; // [rsp+40h] [rbp-20h] BYREF
  const WCHAR *v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+50h] [rbp-10h] BYREF
  const WCHAR *v11; // [rsp+58h] [rbp-8h]

  v10 = 9830548;
  *(_QWORD *)&v6.Length = 0LL;
  v6.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v11 = L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\AppModelUnlock";
  *a2 = 0xFFFF;
  v8 = 7733364;
  v9 = L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx";
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
        v4 = KGetUnlockSetting(&v8, a1, a2);
      if ( v4 >= 0 && *a2 == 0xFFFF )
      {
        v4 = KGetAppModelStateSeparatedRegKeyPath(
               L"AppModelUnlock",
               L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\AppModelUnlock",
               &v6);
        if ( v4 >= 0 )
        {
          v4 = KGetUnlockSetting(&v6, a1, a2);
          if ( v4 >= 0 && (MEMORY[0xFFFFF780000002F0] & 0x400) != 0 && *a2 == 0xFFFF )
            v4 = KGetUnlockSetting(&v10, a1, a2);
        }
      }
    }
  }
  AppModelFreeUnicodeString(&v6);
  AppModelFreeUnicodeString(&DestinationString);
  return (unsigned int)v4;
}
