/*
 * XREFs of SepRegOpenKey @ 0x140736FF0
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1401818D8 (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x1405B99BC (SepRegQueryDwordValue.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140736CC4 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x140736ED0 (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x140737078 (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1408A4844 (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1401B83D0 (ZwOpenKey.c)
 *     memset @ 0x1401D1880 (memset.c)
 */

NTSTATUS __fastcall SepRegOpenKey(PCWSTR SourceString, ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  *KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
