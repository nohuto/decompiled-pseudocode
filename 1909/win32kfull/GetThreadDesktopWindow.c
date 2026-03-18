/*
 * XREFs of GetThreadDesktopWindow @ 0x1C00E576C
 * Callers:
 *     GetLastTopMostWindow @ 0x1C001AECC (GetLastTopMostWindow.c)
 *     _FindWindowEx @ 0x1C006CFC0 (_FindWindowEx.c)
 *     NtUserBuildHwndList @ 0x1C006D580 (NtUserBuildHwndList.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0094764 (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     _SelectPalette @ 0x1C00E1194 (_SelectPalette.c)
 *     xxxWindowFromPoint @ 0x1C00E50BC (xxxWindowFromPoint.c)
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0139FEC (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0221188 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C023C0C0 (xxxDrawAnimatedRects.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
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
