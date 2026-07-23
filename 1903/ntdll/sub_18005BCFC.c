/*
 * XREFs of sub_18005BCFC @ 0x18005BCFC
 * Callers:
 *     sub_18005BB70 @ 0x18005BB70 (sub_18005BB70.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     sub_18005BEE0 @ 0x18005BEE0 (sub_18005BEE0.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 */

bool sub_18005BCFC()
{
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-19h] BYREF
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-9h] BYREF
  _UNICODE_STRING v3; // [rsp+50h] [rbp+7h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  __int64 v5; // [rsp+B8h] [rbp+6Fh] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( dword_180162768 == 2 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\WindowsStore");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      LODWORD(v5) = 4;
      RtlInitUnicodeString(&ValueName, L"AutoDownload");
      sub_18005BEE0(KeyHandle, &ValueName, (__int64)&v5);
      LODWORD(v5) = 4;
      RtlInitUnicodeString(&v3, L"DisableStoreApps");
      sub_18005BEE0(KeyHandle, &v3, (__int64)&v5);
    }
    _InterlockedCompareExchange(&dword_180162768, 1, 2);
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  return dword_180162768 == 0;
}
