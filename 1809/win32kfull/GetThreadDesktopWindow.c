/*
 * XREFs of GetThreadDesktopWindow @ 0x1C0109EB8
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C000B40C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     GetLastTopMostWindow @ 0x1C000FEA0 (GetLastTopMostWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     NtUserBuildHwndList @ 0x1C006FAB0 (NtUserBuildHwndList.c)
 *     _FindWindowEx @ 0x1C0070458 (_FindWindowEx.c)
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 *     _SelectPalette @ 0x1C00FE484 (_SelectPalette.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0107828 (fnHkINLPCBTCREATESTRUCT.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0209C38 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C022426C (xxxDrawAnimatedRects.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetThreadDesktopWindow(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rcx

  v2 = 0LL;
  ThreadWin32Thread = a1;
  if ( a1 || (ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2)) != 0 )
  {
    v4 = *(_QWORD *)(ThreadWin32Thread + 464);
    if ( v4 )
      return *(_QWORD *)(v4 + 24);
  }
  return v2;
}
