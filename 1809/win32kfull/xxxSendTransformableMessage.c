/*
 * XREFs of xxxSendTransformableMessage @ 0x1C004104C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendTransformableMessage(__int64 *a1, unsigned int a2, unsigned __int64 a3, __int64 a4, int a5)
{
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(a1, a2, a3, a4, 0, 0, 0LL, 1, a5);
}
