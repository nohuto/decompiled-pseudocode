/*
 * XREFs of ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C0016A74
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C000E508 (xxxDesktopThreadWaiter.c)
 *     xxxGetInputEvent @ 0x1C0015AE0 (xxxGetInputEvent.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C009E000 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3A50 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0016ABC (-UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
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
