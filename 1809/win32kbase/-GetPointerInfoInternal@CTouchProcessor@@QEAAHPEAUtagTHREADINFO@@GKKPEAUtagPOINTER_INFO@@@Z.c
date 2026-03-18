/*
 * XREFs of ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C013CB1C
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C00EF210 (NtUserGetPointerInfoList.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C013B4C0 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C013E3D0 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerInfoInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        struct tagPOINTER_INFO *a6)
{
  __int64 *Blink; // rdi
  __int64 ThreadPointerData; // rsi
  __int64 v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-10h]
  CTouchProcessor *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = this;
  Blink = (__int64 *)WPP_MAIN_CB.Queue.ListEntry.Blink;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        (CTouchProcessor *)WPP_MAIN_CB.Queue.ListEntry.Blink,
                        (struct tagTHREADINFO *)((char *)a2 + 1080),
                        a3,
                        (unsigned int *)&v13,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
  {
    LODWORD(v12) = a3;
    WPP_RECORDER_SF_d(Blink[1], 2u, 4u, 0x141u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids, v12);
LABEL_3:
    v10 = 87LL;
LABEL_4:
    UserSetLastError(v10);
    return 0LL;
  }
  if ( a4 != 1 && a4 != (_DWORD)v13 )
  {
    WPP_RECORDER_SF_(Blink[1], 2u, 0xBu, 0x142u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v10 = 1629LL;
    goto LABEL_4;
  }
  if ( !(unsigned int)CTouchProcessor::GetPointerData((CTouchProcessor *)Blink, ThreadPointerData, a4, a5, a6) )
  {
    WPP_RECORDER_SF_q(
      Blink[1],
      2u,
      0xBu,
      0x143u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids,
      ThreadPointerData);
    goto LABEL_3;
  }
  return 1LL;
}
