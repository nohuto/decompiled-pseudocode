/*
 * XREFs of ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C013D350
 * Callers:
 *     NtUserGetRawPointerDeviceData @ 0x1C00EF890 (NtUserGetRawPointerDeviceData.c)
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C013D3F0 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C013E3D0 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawDataInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        const struct tagPOINTER_DEVICE_PROPERTY *a6,
        unsigned int a7,
        int *a8)
{
  struct _LIST_ENTRY *Blink; // rdi
  unsigned int v9; // ebx
  unsigned __int64 ThreadPointerData; // rax

  Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
  v9 = 0;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        (CTouchProcessor *)WPP_MAIN_CB.Queue.ListEntry.Blink,
                        (struct tagTHREADINFO *)((char *)a2 + 1080),
                        a3,
                        0LL,
                        0LL,
                        0LL);
  if ( ThreadPointerData )
  {
    LOBYTE(v9) = (unsigned int)CTouchProcessor::GetPointerRawDataWithHistory(
                                 (CTouchProcessor *)Blink,
                                 ThreadPointerData,
                                 a4,
                                 a5,
                                 a6,
                                 a7,
                                 a8) != 0;
    return v9;
  }
  else
  {
    UserSetLastError(87LL);
    return 0LL;
  }
}
