/*
 * XREFs of RtlOpenCurrentUser @ 0x140745FA0
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x14017F0C8 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140694B10 (RtlFormatCurrentUserKeyPath.c)
 */

NTSTATUS __stdcall RtlOpenCurrentUser(ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  int v4; // ebx
  UNICODE_STRING KeyPath; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(_QWORD *)&KeyPath.Length = 0LL;
  KeyPath.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = RtlFormatCurrentUserKeyPath(&KeyPath);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &KeyPath;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
    RtlFreeAnsiString(&KeyPath);
  }
  if ( v4 == -1073741772 )
  {
    RtlInitUnicodeString(&KeyPath, L"\\Registry\\User\\.Default");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &KeyPath;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
  }
  return v4;
}
