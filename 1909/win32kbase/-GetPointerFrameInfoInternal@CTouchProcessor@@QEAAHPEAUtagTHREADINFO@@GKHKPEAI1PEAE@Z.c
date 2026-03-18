/*
 * XREFs of ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C0168A20
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C0115BF0 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C0168670 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C016AD00 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameInfoInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned int *a8,
        unsigned __int8 *a9)
{
  CTouchProcessor *v9; // rdi
  __int64 v11; // rdx
  __int64 ThreadPointerData; // rcx
  __int64 v13; // rcx
  CTouchProcessor *v15; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+58h] [rbp+10h] BYREF

  v15 = this;
  v9 = gpTouchProcessor;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        gpTouchProcessor,
                        (struct tagTHREADINFO *)((char *)a2 + 1080),
                        a3,
                        &v16,
                        (int *)&v15,
                        0LL);
  if ( !ThreadPointerData )
    goto LABEL_9;
  if ( (_DWORD)v15 )
  {
    if ( a4 != 1 && a4 != v16 )
    {
      v13 = 1629LL;
      goto LABEL_10;
    }
    if ( (unsigned int)CTouchProcessor::GetPointerFrameDataWithHistory(
                         v9,
                         ThreadPointerData,
                         a4,
                         a5,
                         a6,
                         a7,
                         a8,
                         (struct tagPOINTER_INFO *)a9) )
      return 1LL;
LABEL_9:
    v13 = 87LL;
    goto LABEL_10;
  }
  v13 = 5LL;
LABEL_10:
  UserSetLastError(v13, v11);
  return 0LL;
}
