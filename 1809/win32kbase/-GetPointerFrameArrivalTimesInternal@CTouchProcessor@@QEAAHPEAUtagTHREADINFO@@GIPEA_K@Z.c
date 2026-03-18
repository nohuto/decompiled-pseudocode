/*
 * XREFs of ?GetPointerFrameArrivalTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEA_K@Z @ 0x1C013BEFC
 * Callers:
 *     NtUserGetPointerFrameArrivalTimes @ 0x1C00EF110 (NtUserGetPointerFrameArrivalTimes.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ?GetPointerDataArrivalTimes@CTouchProcessor@@QEAAH_KIPEA_K@Z @ 0x1C013B650 (-GetPointerDataArrivalTimes@CTouchProcessor@@QEAAH_KIPEA_K@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C013E3D0 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameArrivalTimesInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  __int64 *Blink; // rbx
  __int64 ThreadPointerData; // rax
  __int64 v10; // [rsp+28h] [rbp-10h]

  Blink = (__int64 *)WPP_MAIN_CB.Queue.ListEntry.Blink;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        (CTouchProcessor *)WPP_MAIN_CB.Queue.ListEntry.Blink,
                        (struct tagTHREADINFO *)((char *)a2 + 1080),
                        a3,
                        0LL,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
  {
    LODWORD(v10) = a3;
    WPP_RECORDER_SF_d(Blink[1], 2u, 0xBu, 0x13Fu, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids, v10);
LABEL_3:
    UserSetLastError(87LL);
    return 0LL;
  }
  if ( !(unsigned int)CTouchProcessor::GetPointerDataArrivalTimes((CTouchProcessor *)Blink, ThreadPointerData, a4, a5) )
  {
    WPP_RECORDER_SF_(Blink[1], 2u, 0xBu, 0x140u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    goto LABEL_3;
  }
  return 1LL;
}
