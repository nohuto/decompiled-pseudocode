/*
 * XREFs of IsHiddenByInputService @ 0x1C00F5BB0
 * Callers:
 *     DeferMessagesOnQueue @ 0x1C0007328 (DeferMessagesOnQueue.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C00F5AC8 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0136904 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsHiddenByInputService(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 100);
  return (v1 & 0x10000) != 0 || (v1 & 0x20000) != 0 || (v1 & 0x80000) != 0;
}
