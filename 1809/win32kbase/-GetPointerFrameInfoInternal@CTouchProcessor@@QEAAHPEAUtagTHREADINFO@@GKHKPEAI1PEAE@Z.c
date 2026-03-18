/*
 * XREFs of ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C013C44C
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C00EF210 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C013C100 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C013E3D0 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
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
  struct _LIST_ENTRY *Blink; // rdi
  __int64 ThreadPointerData; // rcx
  __int64 v12; // rcx
  CTouchProcessor *v14; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF

  v14 = this;
  Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        (CTouchProcessor *)WPP_MAIN_CB.Queue.ListEntry.Blink,
                        (struct tagTHREADINFO *)((char *)a2 + 1080),
                        a3,
                        &v15,
                        (int *)&v14,
                        0LL);
  if ( !ThreadPointerData )
    goto LABEL_9;
  if ( (_DWORD)v14 )
  {
    if ( a4 != 1 && a4 != v15 )
    {
      v12 = 1629LL;
      goto LABEL_10;
    }
    if ( (unsigned int)CTouchProcessor::GetPointerFrameDataWithHistory(
                         (CTouchProcessor *)Blink,
                         ThreadPointerData,
                         a4,
                         a5,
                         a6,
                         a7,
                         a8,
                         a9) )
      return 1LL;
LABEL_9:
    v12 = 87LL;
    goto LABEL_10;
  }
  v12 = 5LL;
LABEL_10:
  UserSetLastError(v12);
  return 0LL;
}
