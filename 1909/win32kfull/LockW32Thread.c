/*
 * XREFs of LockW32Thread @ 0x1C0072530
 * Callers:
 *     xxxQueryInformationThread @ 0x1C000C908 (xxxQueryInformationThread.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B8F4 (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001C72C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C010FD44 (xxxImmUnloadThreadsLayout.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0132A44 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxCancelTracking @ 0x1C0134DA0 (xxxCancelTracking.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C01354CC (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E2C84 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E39D8 (TryDetachShellFrame.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E4688 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E4C90 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E5064 (xxxImmActivateThreadsLayout.c)
 *     xxxDrawDragRectEx @ 0x1C02006D0 (xxxDrawDragRectEx.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 (__fastcall *__fastcall LockW32Thread(__int64 a1, _QWORD *a2, __int64 a3))()
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 (__fastcall *result)(); // rax

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  *a2 = *(_QWORD *)(v6 + 16);
  result = DereferenceW32Thread;
  *(_QWORD *)(v6 + 16) = a2;
  a2[2] = DereferenceW32Thread;
  a2[1] = a1;
  if ( a1 )
  {
    result = (__int64 (__fastcall *)())ObfReferenceObject(*(PVOID *)a1);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  }
  return result;
}
