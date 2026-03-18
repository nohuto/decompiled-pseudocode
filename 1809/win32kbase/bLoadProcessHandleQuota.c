/*
 * XREFs of bLoadProcessHandleQuota @ 0x1C00F9758
 * Callers:
 *     HmgCreate @ 0x1C0005068 (HmgCreate.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 bLoadProcessHandleQuota()
{
  unsigned int v0; // ebx
  int v1; // r9d
  void *KeyHandle; // [rsp+30h] [rbp-79h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-71h] BYREF
  __int64 v5; // [rsp+40h] [rbp-69h] BYREF
  __int64 v6; // [rsp+48h] [rbp-61h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+60h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-9h] BYREF
  __int64 *v11; // [rsp+C0h] [rbp+17h]
  __int64 v12; // [rsp+C8h] [rbp+1Fh]
  __int64 *v13; // [rsp+D0h] [rbp+27h]
  __int64 v14; // [rsp+D8h] [rbp+2Fh]
  _BYTE KeyValueInformation[12]; // [rsp+E0h] [rbp+37h] BYREF
  __int64 v16; // [rsp+ECh] [rbp+43h]

  gProcessHandleQuota = 10000;
  v0 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"GDIProcessHandleQuota");
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      gProcessHandleQuota = v16;
      if ( (int)v16 < 0 || (unsigned int)v16 > gMaxGdiHandleCount )
        gProcessHandleQuota = 10000;
      if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v5 = v1;
        v11 = &v5;
        v13 = &v6;
        v12 = 8LL;
        v6 = 0x1000000LL;
        v14 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019E00D, 0LL, 0LL, 4u, &pData);
      }
    }
    v0 = 1;
    ZwClose(KeyHandle);
  }
  return v0;
}
