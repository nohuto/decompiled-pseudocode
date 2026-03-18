/*
 * XREFs of LockW32Thread @ 0x1C00D0E60
 * Callers:
 *     xxxQueryInformationThread @ 0x1C000D498 (xxxQueryInformationThread.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0013280 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     xxxCancelTracking @ 0x1C0013904 (xxxCancelTracking.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0013EE4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B1CC (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001BBFC (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C01350B4 (xxxImmUnloadThreadsLayout.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E2E04 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E3B58 (TryDetachShellFrame.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E4808 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E4E10 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E51E4 (xxxImmActivateThreadsLayout.c)
 *     xxxDrawDragRectEx @ 0x1C0200980 (xxxDrawDragRectEx.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 (__fastcall *__fastcall LockW32Thread(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4))()
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 (__fastcall *result)(); // rax

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  *a2 = *(_QWORD *)(v7 + 16);
  result = DereferenceW32Thread;
  *(_QWORD *)(v7 + 16) = a2;
  a2[2] = DereferenceW32Thread;
  a2[1] = a1;
  if ( a1 )
  {
    result = (__int64 (__fastcall *)())ObfReferenceObject(*(PVOID *)a1);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  }
  return result;
}
