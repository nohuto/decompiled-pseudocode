/*
 * XREFs of TpReleaseWork @ 0x180031710
 * Callers:
 *     sub_18006352C @ 0x18006352C (sub_18006352C.c)
 *     sub_1800FBB70 @ 0x1800FBB70 (sub_1800FBB70.c)
 * Callees:
 *     sub_180031774 @ 0x180031774 (sub_180031774.c)
 *     sub_1800364D8 @ 0x1800364D8 (sub_1800364D8.c)
 */

void __cdecl TpReleaseWork(PTP_WORK Work)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)sub_1800364D8(Work, 1LL) && (unsigned int)sub_180031774(Work, 1LL) )
  {
    *((_QWORD *)Work + 23) = retaddr;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Work, 0xFFFFFFFF) == 1 )
      (**((void (__fastcall ***)(PTP_WORK))Work + 1))(Work);
  }
}
