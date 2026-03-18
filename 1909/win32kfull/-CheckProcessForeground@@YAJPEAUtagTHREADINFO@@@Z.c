/*
 * XREFs of ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C012FDE4
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C000DC88 (xxxDesktopThreadWaiter.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C003EDD0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0044820 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxGetInputEvent @ 0x1C0131A60 (xxxGetInputEvent.c)
 * Callees:
 *     ?UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C012FE2C (-UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall CheckProcessForeground(struct tagTHREADINFO *a1)
{
  struct tagTHREADINFO *v1; // rdx

  *(_QWORD *)(*((_QWORD *)a1 + 59) + 8LL) = 0LL;
  v1 = (struct tagTHREADINFO *)(*((_DWORD *)a1 + 120) & 0xFFFFFBFF);
  *(_DWORD *)(*((_QWORD *)a1 + 59) + 28LL) = (_DWORD)v1;
  *((_DWORD *)a1 + 120) &= ~0x400u;
  PriorityBoost::UpdateProcessPriorityForSpinning(a1, v1);
  return 0LL;
}
