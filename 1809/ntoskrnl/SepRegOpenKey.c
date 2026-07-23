/*
 * XREFs of SepRegOpenKey @ 0x1407381E0
 * Callers:
 *     SepBuildCapPolicyTable @ 0x140181A18 (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x1405BA9BC (SepRegQueryDwordValue.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140737EB4 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x1407380C0 (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x140738268 (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1408A5AA4 (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     memset @ 0x1401D1980 (memset.c)
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
