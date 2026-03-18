/*
 * XREFs of PipCheckComputerSupported @ 0x14085CE98
 * Callers:
 *     PiDevCfgQueryDriverNode @ 0x1406FC2A0 (PiDevCfgQueryDriverNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     PipHardwareConfigOpenKey @ 0x1407548A8 (PipHardwareConfigOpenKey.c)
 */

bool __fastcall PipCheckComputerSupported(PCWSTR SourceString)
{
  int v2; // eax
  HANDLE v3; // rdi
  NTSTATUS v4; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  _QWORD KeyValueInformation[2]; // [rsp+88h] [rbp+2Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  DestinationString.Buffer = 0LL;
  KeyValueInformation[0] = 0LL;
  KeyValueInformation[1] = 0LL;
  ResultLength = 0;
  v2 = PipHardwareConfigOpenKey((__int64)SourceString, 0xF003Fu, &Handle);
  v3 = Handle;
  v4 = v2;
  if ( v2 >= 0 )
  {
    *(_DWORD *)&DestinationString.Length = 1572886;
    DestinationString.Buffer = L"ComputerIds";
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = Handle;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v4 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v4 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValueBasicInformation,
             KeyValueInformation,
             0x10u,
             &ResultLength);
      if ( v4 == -2147483643 )
        v4 = 0;
    }
  }
  if ( v3 )
    ZwClose(v3);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v4 >= 0;
}
