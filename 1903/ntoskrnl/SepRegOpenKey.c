/*
 * XREFs of SepRegOpenKey @ 0x14061AA0C
 * Callers:
 *     SepBuildCapPolicyTable @ 0x14019AD38 (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x14061A8B0 (SepRegQueryDwordValue.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x1407755B8 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x14077C050 (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x14078500C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1408E30A4 (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
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
