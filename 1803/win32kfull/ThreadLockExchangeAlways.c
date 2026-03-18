/*
 * XREFs of ThreadLockExchangeAlways @ 0x1C00DACD0
 * Callers:
 *     xxxScrollWindowEx @ 0x1C002F500 (xxxScrollWindowEx.c)
 *     xxxBeginPaint @ 0x1C0037D64 (xxxBeginPaint.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxTrackMouseMove @ 0x1C005CF1C (xxxTrackMouseMove.c)
 *     xxxWindowHitTest @ 0x1C00DAA44 (xxxWindowHitTest.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01C5560 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C01C83A4 (xxxUpdateThreadsWindows.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01CB1F0 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     HMUnlockObject @ 0x1C00DAD2C (HMUnlockObject.c)
 */

__int64 __fastcall ThreadLockExchangeAlways(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  if ( result )
    return HMUnlockObject(result);
  return result;
}
