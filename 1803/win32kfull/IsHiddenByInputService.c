/*
 * XREFs of IsHiddenByInputService @ 0x1C000F944
 * Callers:
 *     DeferMessagesOnQueue @ 0x1C00059AC (DeferMessagesOnQueue.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C000C938 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsHiddenByInputService(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 100);
  return (v1 & 0x10000) != 0 || (v1 & 0x40000) != 0;
}
