/*
 * XREFs of xxxSendTransformableMessage @ 0x1C00C3130
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendTransformableMessage(__int64 *a1, unsigned int a2, HWND a3, struct _LARGE_STRING *a4, int a5)
{
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(a1, a2, a3, a4, 0, 0, 0LL, 1u, a5);
}
