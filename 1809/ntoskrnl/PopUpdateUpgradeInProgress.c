/*
 * XREFs of PopUpdateUpgradeInProgress @ 0x140582490
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B83B0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B8450 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x1401BA3D0 (ZwNotifyChangeKey.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1405B0AE4 (PopRemoveReasonRecordByReasonCode.c)
 *     PopLogSleepDisabled @ 0x14070AA54 (PopLogSleepDisabled.c)
 */

NTSTATUS __fastcall PopUpdateUpgradeInProgress(HANDLE KeyHandle)
{
  HANDLE v2; // rdi
  NTSTATUS result; // eax
  HANDLE KeyHandlea; // [rsp+50h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+A0h] [rbp+37h] BYREF
  int v9; // [rsp+A4h] [rbp+3Bh]
  int v10; // [rsp+A8h] [rbp+3Fh]
  int v11; // [rsp+ACh] [rbp+43h]

  KeyHandlea = KeyHandle;
  v2 = KeyHandle;
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
      goto LABEL_14;
    v2 = KeyHandlea;
  }
  RtlInitUnicodeString(&DestinationString, L"SystemSetupInProgress");
  result = ZwQueryValueKey(
             v2,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result < 0 || v9 != 4 || v10 != 4 || !v11 )
  {
    if ( KeyHandle )
    {
      PopAcquirePolicyLock();
      PopRemoveReasonRecordByReasonCode(15LL);
      result = PopReleasePolicyLock();
    }
    goto LABEL_14;
  }
  if ( !KeyHandle && (result = PopLogSleepDisabled(15LL, 8LL, 0LL, 0LL), result < 0)
    || (*(_QWORD *)PopSetupInProgressUpdateWorkItem = 0LL,
        qword_1404194D0 = (__int64)PopUpdateUpgradeInProgress,
        qword_1404194D8 = (__int64)KeyHandlea,
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
LABEL_14:
    if ( KeyHandlea )
      return ZwClose(KeyHandlea);
  }
  return result;
}
