/*
 * XREFs of ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0025620
 * Callers:
 *     SlowAppThreadInShellFrame @ 0x1C0009FB0 (SlowAppThreadInShellFrame.c)
 *     ?UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C000AC90 (-UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C001B13C (_anonymous_namespace_--RemoveEventMessage.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C001F240 (EditionHandleAndPostKeyEvent.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0023720 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     DestroyThreadsMessages @ 0x1C0025580 (DestroyThreadsMessages.c)
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C011BAD8 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     SuspendThreadQueue @ 0x1C01211E0 (SuspendThreadQueue.c)
 *     ProcessSuspendedEventMessage @ 0x1C012E4E0 (ProcessSuspendedEventMessage.c)
 *     ?FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z @ 0x1C01CD5A8 (-FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z.c)
 *     EditionIsPointerQueuedMessageCoalescable @ 0x1C01CD730 (EditionIsPointerQueuedMessageCoalescable.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E2E04 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E3B58 (TryDetachShellFrame.c)
 *     _DelegateCapturePointers @ 0x1C01F114C (_DelegateCapturePointers.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F256C (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     NtUserGetRawInputBuffer @ 0x1C022E470 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(
        __int64 a1,
        __int64 a2)
{
  unsigned int DLT; // eax
  __int64 result; // rax

  DLT = DLT_QUEUE::getDLT();
  *(_QWORD *)a1 = GetDomainLockRef(DLT);
  *(_WORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 18) = 0;
  result = a1;
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
