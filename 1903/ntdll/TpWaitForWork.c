/*
 * XREFs of TpWaitForWork @ 0x18007D170
 * Callers:
 *     sub_18006352C @ 0x18006352C (sub_18006352C.c)
 * Callees:
 *     sub_180031C98 @ 0x180031C98 (sub_180031C98.c)
 *     sub_1800364D8 @ 0x1800364D8 (sub_1800364D8.c)
 */

void __cdecl TpWaitForWork(PTP_WORK Work, LOGICAL CancelPendingCallbacks)
{
  if ( (unsigned int)sub_1800364D8((PPEB_LDR_DATA)Work, 0LL, 0LL) )
    sub_180031C98(Work, CancelPendingCallbacks);
}
