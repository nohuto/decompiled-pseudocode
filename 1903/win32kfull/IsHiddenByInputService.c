/*
 * XREFs of IsHiddenByInputService @ 0x1C011BBC0
 * Callers:
 *     DeferMessagesOnQueue @ 0x1C0007328 (DeferMessagesOnQueue.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0012058 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C011BAD8 (MergeDeferredMessagesOfThreadOnQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsHiddenByInputService(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 100);
  return (v1 & 0x10000) != 0 || (v1 & 0x20000) != 0 || (v1 & 0x80000) != 0;
}
