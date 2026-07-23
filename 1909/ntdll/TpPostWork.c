/*
 * XREFs of TpPostWork @ 0x180036570
 * Callers:
 *     LdrpQueueWork @ 0x180070BF4 (LdrpQueueWork.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FB9F0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     TppWorkpValidateWork @ 0x1800364D8 (TppWorkpValidateWork.c)
 *     TppWorkPost @ 0x180038510 (TppWorkPost.c)
 */

void __cdecl TpPostWork(PTP_WORK Work)
{
  if ( (unsigned int)TppWorkpValidateWork((_PEB_LDR_DATA *)Work, 0LL, 1LL) )
    TppWorkPost(Work);
}
