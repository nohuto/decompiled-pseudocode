/*
 * XREFs of KIsSideloadingEnabled @ 0x14091B398
 * Callers:
 *     SepIsLockedDown @ 0x1408D975C (SepIsLockedDown.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x1401C35F0 (ZwQueryLicenseValue.c)
 *     KIsUnlockSettingEnabled @ 0x1406E4AC0 (KIsUnlockSettingEnabled.c)
 */

int __fastcall KIsSideloadingEnabled(_BYTE *a1)
{
  int result; // eax
  _QWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+70h] [rbp+18h] BYREF
  ULONG ResultDataSize; // [rsp+78h] [rbp+20h] BYREF
  int Data; // [rsp+80h] [rbp+28h] BYREF
  ULONG Type; // [rsp+88h] [rbp+30h] BYREF

  v3[0] = 2621478LL;
  v3[1] = L"AllowAllTrustedApps";
  v5 = 0xFFFF;
  *a1 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = KIsUnlockSettingEnabled((__int64)v3, &v5);
  if ( result >= 0 )
  {
    if ( v5 == 1 )
      goto LABEL_7;
    if ( v5 != 0xFFFF )
      return result;
    RtlInitUnicodeString(&DestinationString, L"AppXDeploymentServer-License-AllowAllTrustedApps");
    result = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize);
    if ( result >= 0 && ResultDataSize == 4 && Data == 1 )
LABEL_7:
      *a1 = 1;
    else
      return 0;
  }
  return result;
}
