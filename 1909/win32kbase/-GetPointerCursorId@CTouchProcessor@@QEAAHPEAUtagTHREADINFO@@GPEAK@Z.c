/*
 * XREFs of ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C0167860
 * Callers:
 *     NtUserGetPointerCursorId @ 0x1C0115900 (NtUserGetPointerCursorId.c)
 * Callees:
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C01678F0 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C016AD00 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ApiSetDoesPointerHaveSingleCursor @ 0x1C0198E4C (ApiSetDoesPointerHaveSingleCursor.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerCursorId(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int *a4)
{
  CTouchProcessor *v4; // rdi
  __int64 v6; // rdx
  unsigned __int64 ThreadPointerData; // rsi

  v4 = gpTouchProcessor;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        gpTouchProcessor,
                        (struct tagTHREADINFO *)((char *)a2 + 1080),
                        a3,
                        0LL,
                        0LL,
                        0LL);
  if ( ThreadPointerData )
  {
    if ( (unsigned int)ApiSetDoesPointerHaveSingleCursor() )
    {
      *a4 = 0;
      return 1LL;
    }
    if ( (unsigned int)CTouchProcessor::GetPointerCursorIdFromMsgData(v4, ThreadPointerData, a4) )
      return 1LL;
  }
  UserSetLastError(87LL, v6);
  return 0LL;
}
