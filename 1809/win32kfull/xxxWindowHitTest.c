/*
 * XREFs of xxxWindowHitTest @ 0x1C00DEE34
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowHitTest2 @ 0x1C00DEEE8 (xxxWindowHitTest2.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01EE9F4 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C01EF8FC (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     xxxHelpLoop @ 0x1C022F7F8 (xxxHelpLoop.c)
 * Callees:
 *     xxxWindowHitTest2 @ 0x1C00DEEE8 (xxxWindowHitTest2.c)
 *     ThreadLockExchangeAlways @ 0x1C00DF0E4 (ThreadLockExchangeAlways.c)
 */

__int64 __fastcall xxxWindowHitTest(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rsi
  ULONG_PTR v2; // rdi
  __int64 v3; // rdx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = BugCheckParameter2;
  v3 = gptiCurrent;
  v5[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v5;
  for ( v5[1] = 0LL; v2; v2 = *(_QWORD *)(v2 + 64) )
  {
    ThreadLockExchangeAlways(v2, v5);
    v1 = xxxWindowHitTest2(v2);
    if ( v1 )
      break;
  }
  ThreadUnlock1(BugCheckParameter2, v3);
  return v1;
}
