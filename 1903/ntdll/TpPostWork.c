/*
 * XREFs of TpPostWork @ 0x180036570
 * Callers:
 *     sub_1800709A4 @ 0x1800709A4 (sub_1800709A4.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FB910 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     sub_1800364D8 @ 0x1800364D8 (sub_1800364D8.c)
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 */

void __cdecl TpPostWork(PTP_WORK Work)
{
  if ( (unsigned int)sub_1800364D8((PPEB_LDR_DATA)Work, 0LL, 1LL) )
    sub_180038510(Work);
}
