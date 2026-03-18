/*
 * XREFs of ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C013CA7C
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C00EF210 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C013BB40 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C013E3D0 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerInfoHistoryInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned __int8 *a7)
{
  struct _LIST_ENTRY *Blink; // rdi
  __int64 ThreadPointerData; // rax
  __int64 v10; // rcx
  CTouchProcessor *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = this;
  Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        (CTouchProcessor *)WPP_MAIN_CB.Queue.ListEntry.Blink,
                        (struct tagTHREADINFO *)((char *)a2 + 1080),
                        a3,
                        (unsigned int *)&v12,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
  {
LABEL_7:
    v10 = 87LL;
    goto LABEL_8;
  }
  if ( a4 == 1 || a4 == (_DWORD)v12 )
  {
    if ( (unsigned int)CTouchProcessor::GetPointerDataWithHistory(
                         (CTouchProcessor *)Blink,
                         ThreadPointerData,
                         a4,
                         a5,
                         a6,
                         (struct tagPOINTER_INFO *)a7) )
      return 1LL;
    goto LABEL_7;
  }
  v10 = 1629LL;
LABEL_8:
  UserSetLastError(v10);
  return 0LL;
}
