/*
 * XREFs of ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C013B394
 * Callers:
 *     NtUserGetPointerCursorId @ 0x1C00EF030 (NtUserGetPointerCursorId.c)
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C013B420 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C013E3D0 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ApiSetDoesPointerHaveSingleCursor @ 0x1C0160EE8 (ApiSetDoesPointerHaveSingleCursor.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerCursorId(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int *a4)
{
  struct _LIST_ENTRY *Blink; // rdi
  unsigned __int64 ThreadPointerData; // rsi

  Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        (CTouchProcessor *)WPP_MAIN_CB.Queue.ListEntry.Blink,
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
    if ( (unsigned int)CTouchProcessor::GetPointerCursorIdFromMsgData((CTouchProcessor *)Blink, ThreadPointerData, a4) )
      return 1LL;
  }
  UserSetLastError(87LL);
  return 0LL;
}
