/*
 * XREFs of PopUpdateUpgradeInProgress @ 0x1405B1930
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x1401C2ED0 (ZwNotifyChangeKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x14066F078 (PopRemoveReasonRecordByReasonCode.c)
 *     PopLogSleepDisabled @ 0x140738860 (PopLogSleepDisabled.c)
 */

NTSTATUS __fastcall PopUpdateUpgradeInProgress(HANDLE KeyHandle)
{
  HANDLE v2; // rdi
  NTSTATUS result; // eax
  HANDLE KeyHandlea; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp+37h] BYREF
  int v9; // [rsp+B0h] [rbp+47h]

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandlea = KeyHandle;
  KeyValueInformation = 0uLL;
  v2 = KeyHandle;
  v9 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( !KeyHandle )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
    if ( result < 0 )
      goto LABEL_13;
    v2 = KeyHandlea;
  }
  RtlInitUnicodeString(&DestinationString, L"SystemSetupInProgress");
  result = ZwQueryValueKey(
             v2,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL || !HIDWORD(KeyValueInformation) )
  {
    if ( KeyHandle )
    {
      PopAcquirePolicyLock();
      PopRemoveReasonRecordByReasonCode(15LL);
      result = PopReleasePolicyLock();
    }
    goto LABEL_13;
  }
  if ( !KeyHandle && (result = PopLogSleepDisabled(15LL, 8LL, 0LL, 0LL), result < 0)
    || (*(_QWORD *)PopSetupInProgressUpdateWorkItem = 0LL,
        qword_140444E50 = (__int64)PopUpdateUpgradeInProgress,
        qword_140444E58 = (__int64)KeyHandlea,
        result = ZwNotifyChangeKey(
                   KeyHandlea,
                   0LL,
                   PopSetupInProgressUpdateWorkItem,
                   (PVOID)1,
                   &PopSetupInProgressStatusBlock,
                   4u,
                   0,
                   0LL,
                   0,
                   1u),
        result < 0) )
  {
LABEL_13:
    if ( KeyHandlea )
      return ZwClose(KeyHandlea);
  }
  return result;
}
