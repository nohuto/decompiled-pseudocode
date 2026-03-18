/*
 * XREFs of PopCheckForUpgradeInProgress @ 0x140A21254
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     PopLogSleepDisabled @ 0x140736600 (PopLogSleepDisabled.c)
 */

NTSTATUS PopCheckForUpgradeInProgress()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-11h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+37h] BYREF
  int v7; // [rsp+90h] [rbp+47h]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyValueInformation = 0uLL;
  v7 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SystemSetupInProgress");
    v1 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength);
    result = ZwClose(KeyHandle);
    if ( v1 >= 0 && HIDWORD(KeyValueInformation) == 1 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      return PopLogSleepDisabled(15, 8, 0LL, 0LL);
  }
  return result;
}
