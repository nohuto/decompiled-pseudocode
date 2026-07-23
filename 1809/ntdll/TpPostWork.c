/*
 * XREFs of TpPostWork @ 0x1800148A0
 * Callers:
 *     LdrpQueueWork @ 0x1800718CC (LdrpQueueWork.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FE520 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x1800148F4 (TppValidateCleanupGroupMember.c)
 */

void __cdecl TpPostWork(PTP_WORK Work)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  PTP_WORK v3; // r9

  v3 = Work;
  if ( Work
    && (unsigned int)TppValidateCleanupGroupMember(Work, 0LL, v2, Work)
    && *((__int64 (__fastcall ***)(PVOID))v3 + 1) == &TppWorkpCleanupGroupMemberVFuncs
    && (Work = (PTP_WORK)NtCurrentPeb()->Ldr, *((_BYTE *)Work + 72) == (_BYTE)v1) )
  {
    TppWorkPost(v3);
  }
  else
  {
    TppRaiseInvalidParameter(Work, v1, v2, v3);
  }
}
