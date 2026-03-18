/*
 * XREFs of ThreadLockExchangeAlways @ 0x1C011EE8C
 * Callers:
 *     xxxTrackMouseMove @ 0x1C001C4B4 (xxxTrackMouseMove.c)
 *     xxxScrollWindowEx @ 0x1C0028484 (xxxScrollWindowEx.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C0099EA4 (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowHitTest @ 0x1C011EBCC (xxxWindowHitTest.c)
 *     xxxPrintWindow @ 0x1C01E996C (xxxPrintWindow.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0200440 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C0202528 (xxxUpdateThreadsWindows.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0205968 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThreadLockExchangeAlways(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  HMLockObject(a1);
  if ( v2 )
    return HMUnlockObject(v2);
  return v2;
}
