/*
 * XREFs of PiCreateDriverRedirectedStateKey @ 0x14077CD68
 * Callers:
 *     IoOpenDriverRegistryKey @ 0x14077CB10 (IoOpenDriverRegistryKey.c)
 *     IopInitializeBootDrivers @ 0x140A10470 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x140144B3C (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     IopAllocateUnicodeString @ 0x1407320B0 (IopAllocateUnicodeString.c)
 *     PiGetStateRootPath @ 0x14073AA78 (PiGetStateRootPath.c)
 *     PiCreateRegistryPath @ 0x14085F748 (PiCreateRegistryPath.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408648E4 (PiAuGetServiceStateSecurityObject.c)
 */

__int64 __fastcall PiCreateDriverRedirectedStateKey(UNICODE_STRING *CreateOptions, __int64 a2, _QWORD *a3)
{
  void *v5; // rsi
  void *v6; // rdi
  int StateRootPath; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  NTSTATUS v11; // eax
  int ServiceStateSecurityObject; // eax
  int v13; // eax
  HANDLE v14; // rax
  void *v15; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+67h] BYREF
  void *v20; // [rsp+E8h] [rbp+7Fh]

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Handle = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v15 = 0LL;
  v20 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  if ( !CreateOptions || !CreateOptions->Buffer || CreateOptions->Length < 2u || !a3 )
  {
    StateRootPath = -1073741811;
    goto LABEL_6;
  }
  StateRootPath = PiGetStateRootPath(L"DriverStatePath", 0LL, LocationTypeRegistry, &DestinationString);
  if ( StateRootPath < 0 )
    goto LABEL_6;
  v9 = CreateOptions->Length + 2;
  v10 = v9 + DestinationString.Length;
  if ( v10 < v9 )
  {
    StateRootPath = -1073741675;
  }
  else
  {
    if ( v10 > 0xFFFE )
    {
      StateRootPath = -2147483643;
      goto LABEL_6;
    }
    StateRootPath = IopAllocateUnicodeString((__int64)&UnicodeString, v10);
    if ( StateRootPath >= 0 )
    {
      StateRootPath = RtlUnicodeStringPrintfEx(
                        &UnicodeString,
                        0LL,
                        0x800u,
                        L"%wZ\\%wZ",
                        &DestinationString,
                        CreateOptions);
      if ( StateRootPath >= 0 )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &UnicodeString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v11 = ZwOpenKey(&Handle, 4u, &ObjectAttributes);
        StateRootPath = v11;
        if ( v11 != -1073741772 )
          goto LABEL_25;
        ServiceStateSecurityObject = PiAuGetServiceStateSecurityObject(&v15);
        v5 = v15;
        StateRootPath = ServiceStateSecurityObject;
        if ( ServiceStateSecurityObject < 0 )
          goto LABEL_6;
        v13 = PiCreateRegistryPath(&DestinationString);
        v6 = v20;
        StateRootPath = v13;
        if ( v13 == -1073741772 )
          goto LABEL_24;
        if ( v13 < 0 )
          goto LABEL_6;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = v20;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = CreateOptions;
        ObjectAttributes.SecurityDescriptor = v5;
        v11 = ZwCreateKey(&Handle, 4u, &ObjectAttributes, 0, 0LL, 0, 0LL);
        StateRootPath = v11;
        if ( v11 == -1073741772 )
        {
LABEL_24:
          StateRootPath = -1073741595;
        }
        else
        {
LABEL_25:
          if ( v11 >= 0 )
          {
            v14 = Handle;
            Handle = 0LL;
            *a3 = v14;
          }
        }
      }
    }
  }
LABEL_6:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  if ( v6 )
    ZwClose(v6);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)StateRootPath;
}
