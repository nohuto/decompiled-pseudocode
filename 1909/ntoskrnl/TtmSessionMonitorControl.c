/*
 * XREFs of TtmSessionMonitorControl @ 0x1408BD584
 * Callers:
 *     PopControlMonitor @ 0x14072ADE0 (PopControlMonitor.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     TtmiTerminalMonitorControl @ 0x1408BC284 (TtmiTerminalMonitorControl.c)
 *     TtmpAcquireSessionById @ 0x1408BDC44 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 *     TtmiLogSessionMonitorControl @ 0x1408C26F4 (TtmiLogSessionMonitorControl.c)
 */

__int64 __fastcall TtmSessionMonitorControl(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v6 = TtmpAcquireSessionById(&v10, a1);
  v7 = v10;
  v8 = v6;
  if ( v6 < 0 || (v8 = TtmiTerminalMonitorControl(v10, *(unsigned int **)(v10 + 32), a2, a3), v8 < 0) )
    TtmiLogError("TtmSessionMonitorControl");
  if ( v7 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  TtmiLogSessionMonitorControl(a1, a2, a3, (unsigned int)v8);
  return (unsigned int)v8;
}
