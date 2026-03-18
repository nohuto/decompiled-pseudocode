/*
 * XREFs of CmpLinkKeyToHive @ 0x140762BC4
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 */

char __fastcall CmpLinkKeyToHive(PCWSTR SourceString, PCWSTR a2)
{
  NTSTATUS v3; // ebx
  UNICODE_STRING Data; // [rsp+40h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+27h] BYREF
  ULONG Disposition; // [rsp+B0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&Data.Length = 0LL;
  Data.Buffer = 0LL;
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
