/*
 * XREFs of ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0169234
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C0115BF0 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C0167990 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C016AD00 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerInfoInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        struct tagPOINTER_INFO *a6)
{
  CTouchProcessor *v6; // rbp
  char v8; // si
  __int64 v9; // rdx
  __int64 ThreadPointerData; // rdi
  __int64 v11; // rcx
  CTouchProcessor *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = this;
  v6 = gpTouchProcessor;
  v8 = a3;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        gpTouchProcessor,
                        (struct tagTHREADINFO *)((char *)a2 + 1080),
                        a3,
                        (unsigned int *)&v13,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v9, 4, 325, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids, v8);
    }
LABEL_13:
    v11 = 87LL;
LABEL_9:
    UserSetLastError(v11, v9);
    return 0LL;
  }
  if ( a4 != 1 && a4 != (_DWORD)v13 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v9, 7, 326, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
    v11 = 1629LL;
    goto LABEL_9;
  }
  if ( !(unsigned int)CTouchProcessor::GetPointerData(v6, ThreadPointerData, a4, a5, a6) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_q(
        (_DWORD)gBaseLog,
        v9,
        7,
        327,
        (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids,
        ThreadPointerData);
    }
    goto LABEL_13;
  }
  return 1LL;
}
