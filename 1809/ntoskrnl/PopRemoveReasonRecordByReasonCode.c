/*
 * XREFs of PopRemoveReasonRecordByReasonCode @ 0x1405B0AE4
 * Callers:
 *     PopUpdateUpgradeInProgress @ 0x140582490 (PopUpdateUpgradeInProgress.c)
 *     PopLogDisabledSleepReason @ 0x1405B0874 (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x1405B0968 (PopFilterCapabilities.c)
 *     PopEnableHiberFile @ 0x140745F9C (PopEnableHiberFile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PopGetReasonListByReasonCode @ 0x1405B0B2C (PopGetReasonListByReasonCode.c)
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
