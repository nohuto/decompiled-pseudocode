/*
 * XREFs of ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C016B394
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C0118560 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C016A320 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C016CF00 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
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
  CTouchProcessor *v7; // rdi
  __int64 ThreadPointerData; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  CTouchProcessor *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = this;
  v7 = gpTouchProcessor;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        gpTouchProcessor,
                        (struct tagTHREADINFO *)((char *)a2 + 1080),
                        a3,
                        (unsigned int *)&v13,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
  {
LABEL_7:
    v11 = 87LL;
    goto LABEL_8;
  }
  if ( a4 == 1 || a4 == (_DWORD)v13 )
  {
    if ( (unsigned int)CTouchProcessor::GetPointerDataWithHistory(
                         v7,
                         ThreadPointerData,
                         a4,
                         a5,
                         a6,
                         (struct tagPOINTER_INFO *)a7) )
      return 1LL;
    goto LABEL_7;
  }
  v11 = 1629LL;
LABEL_8:
  UserSetLastError(v11, v10);
  return 0LL;
}
