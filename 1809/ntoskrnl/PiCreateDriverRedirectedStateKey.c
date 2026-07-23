/*
 * XREFs of PiCreateDriverRedirectedStateKey @ 0x1407583E8
 * Callers:
 *     IoOpenDriverRegistryKey @ 0x140758110 (IoOpenDriverRegistryKey.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x14015D8CC (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     PiGetStateRootPath @ 0x14070F3E0 (PiGetStateRootPath.c)
 *     IopAllocateUnicodeString @ 0x140711194 (IopAllocateUnicodeString.c)
 *     PiCreateRegistryPath @ 0x1408264B0 (PiCreateRegistryPath.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14082B350 (PiAuGetServiceStateSecurityObject.c)
 */

__int64 __fastcall PiCreateDriverRedirectedStateKey(UNICODE_STRING *CreateOptions, __int64 a2, _QWORD *a3)
{
  void *v4; // rsi
  void *v5; // rdi
  signed int StateRootPath; // ebx
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  NTSTATUS v12; // eax
  int ServiceStateSecurityObject; // eax
  int v14; // eax
  HANDLE v15; // rax
  void *v16; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+67h] BYREF
  void *v21; // [rsp+E8h] [rbp+7Fh]

  v4 = 0LL;
  Handle = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  v21 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  if ( !CreateOptions || !CreateOptions->Buffer || CreateOptions->Length < 2u || !a3 )
  {
    StateRootPath = -1073741811;
    goto LABEL_6;
  }
  StateRootPath = PiGetStateRootPath(L"DriverStatePath", 0LL, LocationTypeRegistry, &DestinationString);
  if ( StateRootPath >= 0 )
  {
    v9 = -1;
    v10 = CreateOptions->Length + 2;
    v11 = v10 + DestinationString.Length;
    if ( v11 >= v10 )
      v9 = v10 + DestinationString.Length;
    StateRootPath = v11 < v10 ? 0xC0000095 : 0;
    if ( v11 >= v10 )
    {
      if ( v9 > 0xFFFE )
      {
        StateRootPath = -2147483643;
        goto LABEL_6;
      }
      StateRootPath = IopAllocateUnicodeString((__int64)&UnicodeString, v9);
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
          v12 = ZwOpenKey(&Handle, 4u, &ObjectAttributes);
          StateRootPath = v12;
          if ( v12 != -1073741772 )
            goto LABEL_27;
          ServiceStateSecurityObject = PiAuGetServiceStateSecurityObject(&v16);
          v4 = v16;
          StateRootPath = ServiceStateSecurityObject;
          if ( ServiceStateSecurityObject < 0 )
            goto LABEL_6;
          v14 = PiCreateRegistryPath(&DestinationString);
          v5 = v21;
          StateRootPath = v14;
          if ( v14 == -1073741772 )
            goto LABEL_26;
          if ( v14 < 0 )
            goto LABEL_6;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = v21;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = CreateOptions;
          ObjectAttributes.SecurityDescriptor = v4;
          v12 = ZwCreateKey(&Handle, 4u, &ObjectAttributes, 0, 0LL, 0, 0LL);
          StateRootPath = v12;
          if ( v12 == -1073741772 )
          {
LABEL_26:
            StateRootPath = -1073741595;
          }
          else
          {
LABEL_27:
            if ( v12 >= 0 )
            {
              v15 = Handle;
              Handle = 0LL;
              *a3 = v15;
            }
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
  if ( v5 )
    ZwClose(v5);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)StateRootPath;
}
