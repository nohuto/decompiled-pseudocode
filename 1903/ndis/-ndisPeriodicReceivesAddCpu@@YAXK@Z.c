/*
 * XREFs of ?ndisPeriodicReceivesAddCpu@@YAXK@Z @ 0x1C007C8EC
 * Callers:
 *     ?ndisCpuHotAddHandler@@YAXPEAXPEAU_KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT@@PEAJ@Z @ 0x1C007BCB0 (-ndisCpuHotAddHandler@@YAXPEAXPEAU_KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT@@PEAJ@Z.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C002FB60 (NdisInitializeTimer.c)
 *     ?ndisCreateThread@@YAHP6AXPEAX@Z0JPEAPEAU_KTHREAD@@@Z @ 0x1C0031D34 (-ndisCreateThread@@YAHP6AXPEAX@Z0JPEAPEAU_KTHREAD@@@Z.c)
 *     WPP_RECORDER_SF_dD @ 0x1C007DECC (WPP_RECORDER_SF_dD_ea_1C007DECC.c)
 */

void __fastcall ndisPeriodicReceivesAddCpu(void *a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  void (*v3)(void *); // rcx
  int Thread; // eax
  int v5; // r8d
  int v6; // r9d
  int v7; // [rsp+20h] [rbp-28h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp+8h] BYREF

  ProcNumber = 0;
  v1 = (unsigned int)a1;
  KeGetProcessorNumberFromIndex((ULONG)a1, &ProcNumber);
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
               (void *)(unsigned int)v1,
               (KPRIORITY)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink,
               (PVOID *)WPP_MAIN_CB.Dpc.DeferredContext + v1);
    if ( Thread < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v5,
        v6,
        v7,
        v1,
        Thread);
  }
  KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
