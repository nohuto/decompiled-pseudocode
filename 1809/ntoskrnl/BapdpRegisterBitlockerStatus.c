/*
 * XREFs of BapdpRegisterBitlockerStatus @ 0x1409D26E4
 * Callers:
 *     BapdpProcessBitlockerStatus @ 0x1409D21C4 (BapdpProcessBitlockerStatus.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 */

void __fastcall BapdpRegisterBitlockerStatus(PVOID Data, int a2)
{
  NTSTATUS v3; // eax
  HANDLE v4; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+90h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+28h] BYREF

  if ( Data )
  {
    if ( a2 == 4 )
    {
      KeyHandle = 0LL;
      Handle = 0LL;
      RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"BitlockerStatus");
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v3 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
        v4 = KeyHandle;
        if ( v3 >= 0 )
        {
          ZwClose(KeyHandle);
          RtlInitUnicodeString(&DestinationString, L"BootStatus");
          ZwSetValueKey(Handle, &DestinationString, 0, 4u, Data, 4u);
          v4 = Handle;
        }
        ZwClose(v4);
      }
    }
  }
}
