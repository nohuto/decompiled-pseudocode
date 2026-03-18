/*
 * XREFs of ?IsSessionDisabled@@YAHPEBU_GUID@@K@Z @ 0x1C00A4230
 * Callers:
 *     WinSqmStartSession @ 0x1C00A3FD8 (WinSqmStartSession.c)
 *     ?RegisterWinSqmProvider@@YAKXZ @ 0x1C00A4194 (-RegisterWinSqmProvider@@YAKXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall IsSessionDisabled(const struct _GUID *Source1, ULONG Value)
{
  unsigned int v4; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-59h] BYREF
  struct _UNICODE_STRING String; // [rsp+38h] [rbp-51h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-29h] BYREF
  _QWORD KeyValueInformation[2]; // [rsp+90h] [rbp+7h] BYREF
  int v12; // [rsp+A0h] [rbp+17h]
  char v13; // [rsp+A8h] [rbp+1Fh] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v4 = 0;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  KeyValueInformation[0] = 0LL;
  KeyValueInformation[1] = 0LL;
  v12 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows\\DisabledSessions\\");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( !Source1 || RtlCompareMemory(Source1, &unk_1C01D98B0, 0x10uLL) == 16 )
    {
      RtlInitUnicodeString(&String, L"GlobalSession");
    }
    else
    {
      String.MaximumLength = 16;
      String.Buffer = (PWSTR)&v13;
      if ( RtlIntegerToUnicodeString(Value, 0xAu, &String) < 0 )
        goto LABEL_2;
    }
    if ( ZwQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
      v4 = 1;
  }
LABEL_2:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v4;
}
