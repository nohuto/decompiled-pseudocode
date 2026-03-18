/*
 * XREFs of FreeQEntry @ 0x1C000F9A0
 * Callers:
 *     DestroyThreadsMessages @ 0x1C000C5D0 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C000C730 (FreeMessageList.c)
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0057B60 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C0023E34 (IsPointerInputMessage.c)
 *     FreePointerMessageParams @ 0x1C01B84E4 (FreePointerMessageParams.c)
 */

__int64 __fastcall FreeQEntry(unsigned int *a1)
{
  if ( (a1[25] & 8) != 0 && !a1[24] && (unsigned int)IsPointerInputMessage(a1[6]) )
    FreePointerMessageParams(a1);
  return Win32FreeToPagedLookasideList(QEntryLookaside, a1);
}
