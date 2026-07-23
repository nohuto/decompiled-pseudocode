/*
 * XREFs of CmpLinkKeyToHive @ 0x140733F1C
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 */

char __fastcall CmpLinkKeyToHive(PCWSTR SourceString, PCWSTR a2)
{
  NTSTATUS v3; // ebx
  UNICODE_STRING Data; // [rsp+40h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+27h] BYREF
  ULONG Disposition; // [rsp+B0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+7Fh] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateKey(&KeyHandle, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition) >= 0 )
  {
    if ( Disposition == 1 )
    {
      RtlInitUnicodeString(&Data, a2);
      v3 = ZwSetValueKey(KeyHandle, &CmSymbolicLinkValueName, 0, 6u, Data.Buffer, Data.Length);
      ZwClose(KeyHandle);
      if ( v3 >= 0 )
        return 1;
    }
    else
    {
      ZwClose(KeyHandle);
    }
  }
  return 0;
}
