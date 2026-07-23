/*
 * XREFs of PopRemoveReasonRecordByReasonCode @ 0x1405B1AE4
 * Callers:
 *     PopUpdateUpgradeInProgress @ 0x140583490 (PopUpdateUpgradeInProgress.c)
 *     PopLogDisabledSleepReason @ 0x1405B1874 (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x1405B1968 (PopFilterCapabilities.c)
 *     PopEnableHiberFile @ 0x14074716C (PopEnableHiberFile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopGetReasonListByReasonCode @ 0x1405B1B2C (PopGetReasonListByReasonCode.c)
 */

void PopRemoveReasonRecordByReasonCode()
{
  _QWORD *ReasonListByReasonCode; // rax
  __int64 v1; // rcx
  _QWORD *v2; // rdx

  ReasonListByReasonCode = (_QWORD *)PopGetReasonListByReasonCode();
  if ( ReasonListByReasonCode )
  {
    v1 = *ReasonListByReasonCode;
    if ( *(_QWORD **)(*ReasonListByReasonCode + 8LL) != ReasonListByReasonCode
      || (v2 = (_QWORD *)ReasonListByReasonCode[1], (_QWORD *)*v2 != ReasonListByReasonCode) )
    {
      __fastfail(3u);
    }
    *v2 = v1;
    *(_QWORD *)(v1 + 8) = v2;
    ExFreePoolWithTag(ReasonListByReasonCode, 0x66756263u);
  }
}
