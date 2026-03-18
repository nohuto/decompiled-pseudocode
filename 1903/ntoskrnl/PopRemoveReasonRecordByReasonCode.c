/*
 * XREFs of PopRemoveReasonRecordByReasonCode @ 0x1406A2324
 * Callers:
 *     PopLogDisabledSleepReason @ 0x1406A209C (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x1406A2194 (PopFilterCapabilities.c)
 *     PopEnableHiberFile @ 0x14074AAD0 (PopEnableHiberFile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopGetReasonListByReasonCode @ 0x1406A236C (PopGetReasonListByReasonCode.c)
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
