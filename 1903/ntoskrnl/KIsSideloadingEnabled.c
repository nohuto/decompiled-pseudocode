/*
 * XREFs of KIsSideloadingEnabled @ 0x14091B938
 * Callers:
 *     SepIsLockedDown @ 0x1408D9E5C (SepIsLockedDown.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x1401C2A70 (ZwQueryLicenseValue.c)
 *     KIsUnlockSettingEnabled @ 0x1406E3610 (KIsUnlockSettingEnabled.c)
 */

__int64 __fastcall KIsSideloadingEnabled(_BYTE *a1)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+70h] [rbp+18h] BYREF
  int v6; // [rsp+78h] [rbp+20h]
  int v7; // [rsp+80h] [rbp+28h] BYREF
  char v8; // [rsp+88h] [rbp+30h] BYREF

  v3[0] = 2621478LL;
  v3[1] = L"AllowAllTrustedApps";
  v5 = 0xFFFF;
  *a1 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = KIsUnlockSettingEnabled((__int64)v3, &v5);
  if ( (int)result >= 0 )
  {
    if ( v5 == 1 )
      goto LABEL_7;
    if ( v5 != 0xFFFF )
      return result;
    RtlInitUnicodeString(&DestinationString, L"AppXDeploymentServer-License-AllowAllTrustedApps");
    result = ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v8, (__int64)&v7);
    if ( (int)result >= 0 && v6 == 4 && v7 == 1 )
LABEL_7:
      *a1 = 1;
    else
      return 0LL;
  }
  return result;
}
