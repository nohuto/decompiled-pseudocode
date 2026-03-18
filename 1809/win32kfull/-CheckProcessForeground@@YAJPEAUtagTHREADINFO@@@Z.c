/*
 * XREFs of ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00CF08C
 * Callers:
 *     xxxGetInputEvent @ 0x1C0025880 (xxxGetInputEvent.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0030D50 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00343A0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDesktopThreadWaiter @ 0x1C00BC0B4 (xxxDesktopThreadWaiter.c)
 * Callees:
 *     UpdateProcessPriorityForSpinning @ 0x1C00CF0D4 (UpdateProcessPriorityForSpinning.c)
 */

__int64 __fastcall CheckProcessForeground(struct tagTHREADINFO *a1)
{
  *(_QWORD *)(*((_QWORD *)a1 + 60) + 8LL) = 0LL;
  *(_DWORD *)(*((_QWORD *)a1 + 60) + 28LL) = *((_DWORD *)a1 + 122) & 0xFFFFFBFF;
  *((_DWORD *)a1 + 122) &= ~0x400u;
  UpdateProcessPriorityForSpinning();
  return 0LL;
}
