/*
 * XREFs of IsLanguageOverlayBlockedByPolicy @ 0x18005BD9C
 * Callers:
 *     GetOverlayFilePath @ 0x18005BC10 (GetOverlayFilePath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     QueryRegistryValue @ 0x18005BF80 (QueryRegistryValue.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
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
