/*
 * XREFs of PopRemoveReasonRecordByReasonCode @ 0x14066F078
 * Callers:
 *     PopUpdateUpgradeInProgress @ 0x1405B1930 (PopUpdateUpgradeInProgress.c)
 *     PopLogDisabledSleepReason @ 0x14066EDF0 (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x14066EEE8 (PopFilterCapabilities.c)
 *     PopEnableHiberFile @ 0x140759E1C (PopEnableHiberFile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopGetReasonListByReasonCode @ 0x14066F0C0 (PopGetReasonListByReasonCode.c)
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
