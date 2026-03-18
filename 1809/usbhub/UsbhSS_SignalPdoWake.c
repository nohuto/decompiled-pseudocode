/*
 * XREFs of UsbhSS_SignalPdoWake @ 0x1C0001B44
 * Callers:
 *     UsbhPortResumeComplete @ 0x1C0001A90 (UsbhPortResumeComplete.c)
 *     UsbhPortResumeFailed @ 0x1C0055640 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C0001BDC (UsbhLatchPdo.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C001C7E4 (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhSS_SignalPdoWake(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // ebx

  v4 = PdoExt(a2);
  v5 = v4;
  UsbhLatchPdo(a1, *(unsigned __int16 *)(v4 + 1428), 0LL, 1936945239LL);
  Log(a1, 0x10000, 1935098187, a2, 0LL);
  return UsbhQueueWorkItemWithRetry(a1, v5 + 1624, (unsigned int)UsbhSS_PdoWakeWorker, 0, a2, 0, 2001752915);
}
