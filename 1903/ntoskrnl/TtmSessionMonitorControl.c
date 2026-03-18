/*
 * XREFs of TtmSessionMonitorControl @ 0x1408BDCB4
 * Callers:
 *     PopControlMonitor @ 0x140729A70 (PopControlMonitor.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     TtmiTerminalMonitorControl @ 0x1408BC9B4 (TtmiTerminalMonitorControl.c)
 *     TtmpAcquireSessionById @ 0x1408BE374 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
 *     TtmiLogSessionMonitorControl @ 0x1408C2E24 (TtmiLogSessionMonitorControl.c)
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
