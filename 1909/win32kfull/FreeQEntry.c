/*
 * XREFs of FreeQEntry @ 0x1C010143C
 * Callers:
 *     DestroyThreadsMessages @ 0x1C002B9F0 (DestroyThreadsMessages.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     FreeMessageList @ 0x1C00EF370 (FreeMessageList.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0136904 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C002ADA0 (IsPointerInputMessage.c)
 *     FreePointerMessageParams @ 0x1C01F0754 (FreePointerMessageParams.c)
 */

__int64 __fastcall FreeQEntry(unsigned int *a1)
{
  if ( (a1[25] & 8) != 0 && !a1[24] && IsPointerInputMessage(a1[6]) )
    FreePointerMessageParams(a1);
  return Win32FreeToPagedLookasideList(QEntryLookaside, a1);
}
