/*
 * XREFs of GetThreadDesktopWindow @ 0x1C010B1CC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0076C54 (fnHkINLPCBTCREATESTRUCT.c)
 *     GetLastTopMostWindow @ 0x1C00895E4 (GetLastTopMostWindow.c)
 *     _FindWindowEx @ 0x1C00CB8F0 (_FindWindowEx.c)
 *     NtUserBuildHwndList @ 0x1C00CBEB0 (NtUserBuildHwndList.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0100D18 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     _SelectPalette @ 0x1C0106D94 (_SelectPalette.c)
 *     xxxWindowFromPoint @ 0x1C010AB1C (xxxWindowFromPoint.c)
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C02216C8 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C023C6E0 (xxxDrawAnimatedRects.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall GetThreadDesktopWindow(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax

  v2 = 0LL;
  v3 = a1;
  if ( a1 )
    goto LABEL_6;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(0LL, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  if ( v3 )
  {
LABEL_6:
    v6 = *(_QWORD *)(v3 + 456);
    if ( v6 )
      return *(_QWORD *)(v6 + 24);
  }
  return v2;
}
