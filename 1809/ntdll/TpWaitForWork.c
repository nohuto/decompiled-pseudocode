/*
 * XREFs of TpWaitForWork @ 0x18002C690
 * Callers:
 *     LdrpDetectDetour @ 0x180028E48 (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkWait @ 0x18002D368 (TppWorkWait.c)
 *     TppWorkpValidateWork @ 0x18002D3EC (TppWorkpValidateWork.c)
 */

void __cdecl TpWaitForWork(PTP_WORK Work, LOGICAL CancelPendingCallbacks)
{
  if ( (unsigned int)TppWorkpValidateWork(Work, 0LL) )
    TppWorkWait(Work, CancelPendingCallbacks);
}
