/*
 * XREFs of ndisPeriodicReceivesAddCpu @ 0x1C0050588
 * Callers:
 *     ndisCpuHotAddHandler @ 0x1C00EA6F0 (ndisCpuHotAddHandler.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C001DCF0 (NdisInitializeTimer.c)
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     ndisCreateThread @ 0x1C00C4E7C (ndisCreateThread.c)
 */

LONG __fastcall ndisPeriodicReceivesAddCpu(ULONG a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx
  int Thread; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1;
  ProcNumber = 0;
  KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  v2 = (unsigned __int64)(unsigned int)v1 << 7;
  NdisInitializeTimer(
    (PNDIS_TIMER)((char *)WPP_MAIN_CB.Dpc.DpcListEntry.Next + v2),
    (PNDIS_TIMER_FUNCTION)ndisPeriodicReceivesTimer,
    0LL);
  KeSetTargetProcessorDpcEx((PKDPC)((char *)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[8] + v2), &ProcNumber);
  KeWaitForSingleObject(&ndisPeriodicReceivesMutex, Executive, 0, 0, 0LL);
  if ( HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
  {
    Thread = ndisCreateThread(
               v3,
               (unsigned int)v1,
               LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink),
               (char *)WPP_MAIN_CB.Dpc.DeferredContext + 8 * v1);
    if ( Thread < 0 && (unsigned __int8)byte_1C00A025B >= 2u )
      WPP_SF_dd(0x4Du, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, v1, Thread);
  }
  return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
