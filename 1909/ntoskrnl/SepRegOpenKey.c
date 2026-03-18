/*
 * XREFs of SepRegOpenKey @ 0x14061C51C
 * Callers:
 *     SepBuildCapPolicyTable @ 0x14019B398 (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x14061C3B4 (SepRegQueryDwordValue.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140778B98 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x14077E920 (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x14078736C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1408E289C (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 */

NTSTATUS __fastcall SepRegOpenKey(PCWSTR SourceString, ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  *KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
