/*
 * XREFs of PiOpenDriverRedirectedStateKey @ 0x1407066CC
 * Callers:
 *     PipHardwareConfigActivateService @ 0x1407065F0 (PipHardwareConfigActivateService.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x14015D8CC (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     PiGetStateRootPath @ 0x14070F3E0 (PiGetStateRootPath.c)
 *     IopAllocateUnicodeString @ 0x140711194 (IopAllocateUnicodeString.c)
 */

__int64 __fastcall PiOpenDriverRedirectedStateKey(unsigned __int16 *a1, __int64 a2, _QWORD *a3)
{
  NTSTATUS StateRootPath; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ecx
  HANDLE v10; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+10h] BYREF

  Handle = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  if ( a1 && *((_QWORD *)a1 + 1) && *a1 >= 2u && a3 )
  {
    StateRootPath = PiGetStateRootPath(L"DriverStatePath", 0LL, LocationTypeRegistry, &DestinationString);
    if ( StateRootPath >= 0 )
    {
      v7 = -1;
      v8 = *a1 + 2;
      v9 = v8 + DestinationString.Length;
      if ( v9 >= v8 )
        v7 = v8 + DestinationString.Length;
      StateRootPath = v9 < v8 ? 0xC0000095 : 0;
      if ( v9 >= v8 )
      {
        if ( v7 <= 0xFFFE )
        {
          StateRootPath = IopAllocateUnicodeString(&UnicodeString, (unsigned __int16)v7);
          if ( StateRootPath >= 0 )
          {
            StateRootPath = RtlUnicodeStringPrintfEx(&UnicodeString, 0LL, 0x800u, L"%wZ\\%wZ", &DestinationString, a1);
            if ( StateRootPath >= 0 )
            {
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.ObjectName = &UnicodeString;
              ObjectAttributes.Length = 48;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              StateRootPath = ZwOpenKey(&Handle, 0x30006u, &ObjectAttributes);
              if ( StateRootPath == -1073741772 )
                StateRootPath = -1073741275;
              if ( StateRootPath >= 0 )
              {
                v10 = Handle;
                Handle = 0LL;
                *a3 = v10;
              }
            }
          }
        }
        else
        {
          StateRootPath = -2147483643;
        }
      }
    }
  }
  else
  {
    StateRootPath = -1073741811;
  }
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)StateRootPath;
}
