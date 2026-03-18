/*
 * XREFs of xxxWindowHitTest @ 0x1C00DAA44
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowHitTest2 @ 0x1C00DAAF0 (xxxWindowHitTest2.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01CA6C8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C01CB56C (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     xxxHelpLoop @ 0x1C0206688 (xxxHelpLoop.c)
 * Callees:
 *     xxxWindowHitTest2 @ 0x1C00DAAF0 (xxxWindowHitTest2.c)
 *     ThreadLockExchangeAlways @ 0x1C00DACD0 (ThreadLockExchangeAlways.c)
 */

__int64 __fastcall xxxWindowHitTest(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  ULONG_PTR v4; // rdi
  __int64 v5; // rdx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v4 = BugCheckParameter2;
  v5 = gptiCurrent;
  v7[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v7;
  for ( v7[1] = 0LL; v4; v4 = *(_QWORD *)(v4 + 64) )
  {
    ThreadLockExchangeAlways(v4, v7);
    v3 = xxxWindowHitTest2(v4);
    if ( v3 )
      break;
  }
  ThreadUnlock1(BugCheckParameter2, v5, a3);
  return v3;
}
