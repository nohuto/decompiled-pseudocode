/*
 * XREFs of TpReleaseWork @ 0x180031710
 * Callers:
 *     LdrpDetectDetour @ 0x1800635CC (LdrpDetectDetour.c)
 *     RtlpCtContextFree @ 0x1800FBC50 (RtlpCtContextFree.c)
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x180031774 (TppCleanupGroupMemberRelease.c)
 *     TppWorkpValidateWork @ 0x1800364D8 (TppWorkpValidateWork.c)
 */

void __cdecl TpReleaseWork(PTP_WORK Work)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)TppWorkpValidateWork(Work, 1LL) && (unsigned int)TppCleanupGroupMemberRelease(Work, 1LL) )
  {
    *((_QWORD *)Work + 23) = retaddr;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Work, 0xFFFFFFFF) == 1 )
      (**((void (__fastcall ***)(PTP_WORK))Work + 1))(Work);
  }
}
