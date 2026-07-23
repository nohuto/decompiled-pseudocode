/*
 * XREFs of TtmpGetConfigOverride @ 0x14087F33C
 * Callers:
 *     TtmpInitializeWatchdogTimeouts @ 0x14087F434 (TtmpInitializeWatchdogTimeouts.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 */

char __fastcall TtmpGetConfigOverride(__int64 a1, const WCHAR *a2, _DWORD *a3)
{
  NTSTATUS v5; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+37h] BYREF
  int v13; // [rsp+94h] [rbp+3Bh]
  int v14; // [rsp+98h] [rbp+3Fh]
  int v15; // [rsp+9Ch] [rbp+43h]

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Power");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0
    && (RtlInitUnicodeString(&ValueName, a2),
        v5 = ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x10u,
               &ResultLength),
        ZwClose(KeyHandle),
        v5 >= 0)
    && v13 == 4
    && v14 == 4 )
  {
    *a3 = v15;
    return 1;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
