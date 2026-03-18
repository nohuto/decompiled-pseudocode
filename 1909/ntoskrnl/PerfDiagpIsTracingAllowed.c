/*
 * XREFs of PerfDiagpIsTracingAllowed @ 0x14071F95C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14071F830 (PerfDiagpProxyWorker.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x1407704E8 (PerfDiagpStartPerfDiagLogger.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 */

_BOOL8 PerfDiagpIsTracingAllowed()
{
  BOOL v0; // ebx
  ULONG Length; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+37h] BYREF
  int v8; // [rsp+94h] [rbp+3Bh]
  int v9; // [rsp+98h] [rbp+3Fh]
  int v10; // [rsp+9Ch] [rbp+43h]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  v0 = 1;
  ValueName.Buffer = 0LL;
  KeyHandle = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Diagnostics\\Performance");
  RtlInitUnicodeString(&ValueName, L"DisableDiagnosticTracing");
  Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0
    && ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, Length, &Length) >= 0
    && Length >= 0x10
    && v8 == 4
    && v9 == 4 )
  {
    v0 = v10 == 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v0;
}
