/*
 * XREFs of IsLanguageOverlayBlockedByPolicy @ 0x180032D78
 * Callers:
 *     GetOverlayFilePath @ 0x180032BEC (GetOverlayFilePath.c)
 * Callees:
 *     QueryRegistryValue @ 0x180032F5C (QueryRegistryValue.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0540 (NtOpenKey.c)
 */

bool IsLanguageOverlayBlockedByPolicy()
{
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-19h] BYREF
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-9h] BYREF
  _UNICODE_STRING v3; // [rsp+50h] [rbp+7h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  __int64 v5; // [rsp+B8h] [rbp+6Fh] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( CachedLanguageOverlayGroupPolicyState == 2 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\WindowsStore");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      LODWORD(v5) = 4;
      RtlInitUnicodeString(&ValueName, L"AutoDownload");
      QueryRegistryValue(KeyHandle, &ValueName, (__int64)&v5);
      LODWORD(v5) = 4;
      RtlInitUnicodeString(&v3, L"DisableStoreApps");
      QueryRegistryValue(KeyHandle, &v3, (__int64)&v5);
    }
    _InterlockedCompareExchange(&CachedLanguageOverlayGroupPolicyState, 1, 2);
    if ( KeyHandle )
      NtClose(KeyHandle);
  }
  return CachedLanguageOverlayGroupPolicyState == 0;
}
