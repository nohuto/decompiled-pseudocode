/*
 * XREFs of LockW32Thread @ 0x1C005D428
 * Callers:
 *     xxxQueryInformationThread @ 0x1C000B7BC (xxxQueryInformationThread.c)
 *     xxxDeactivate @ 0x1C0057EE8 (xxxDeactivate.c)
 *     xxxCancelTracking @ 0x1C00597BC (xxxCancelTracking.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C005AD04 (xxxMakeWindowForegroundWithState.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C005EBC0 (xxxSendFocusMessages.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C0108E1C (xxxImmUnloadThreadsLayout.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01AB6F0 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01AC074 (TryDetachShellFrame.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01AC954 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01ACED0 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01AD2F8 (xxxImmActivateThreadsLayout.c)
 *     xxxDrawDragRectEx @ 0x1C01C6034 (xxxDrawDragRectEx.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 */

LONG_PTR __fastcall LockW32Thread(__int64 a1, __int64 a2)
{
  LONG_PTR result; // rax

  result = PushW32ThreadLock(a1, a2, DereferenceW32Thread);
  if ( a1 )
  {
    result = ObfReferenceObject(*(PVOID *)a1);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  }
  return result;
}
