/*
 * XREFs of TpWaitForWork @ 0x18007D810
 * Callers:
 *     LdrpDetectDetour @ 0x1800635CC (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkWait @ 0x180031C98 (TppWorkWait.c)
 *     TppWorkpValidateWork @ 0x1800364D8 (TppWorkpValidateWork.c)
 */

void __cdecl TpWaitForWork(PTP_WORK Work, LOGICAL CancelPendingCallbacks)
{
  if ( (unsigned int)TppWorkpValidateWork((_PEB_LDR_DATA *)Work, 0LL, 0LL) )
    TppWorkWait(Work, CancelPendingCallbacks);
}
