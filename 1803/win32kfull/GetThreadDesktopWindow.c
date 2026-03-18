/*
 * XREFs of GetThreadDesktopWindow @ 0x1C00F06E0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     NtUserBuildHwndList @ 0x1C0029040 (NtUserBuildHwndList.c)
 *     _FindWindowEx @ 0x1C0029C30 (_FindWindowEx.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C005202C (fnHkINLPCBTCREATESTRUCT.c)
 *     GetLastTopMostWindow @ 0x1C006E748 (GetLastTopMostWindow.c)
 *     _SelectPalette @ 0x1C00E5978 (_SelectPalette.c)
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00FB27C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C01E3D68 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C01FB950 (xxxDrawAnimatedRects.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
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
    v4 = *(_QWORD *)(ThreadWin32Thread + 456);
    if ( v4 )
      return *(_QWORD *)(v4 + 24);
  }
  return v2;
}
