/*
 * XREFs of ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C00ADF7C
 * Callers:
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C00A0B8C (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ?ndisMQueueReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00ADEF4 (-ndisMQueueReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisPeriodicReceivesWorker @ 0x1C00AF090 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     <none>
 */

void ndisQueuePeriodicReceivesTimer(void)
{
  LARGE_INTEGER v0; // rdx

  if ( !_InterlockedExchange((volatile __int32 *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 4LL * KeGetPcr()->Prcb.Number), 1) )
  {
    v0 = *(LARGE_INTEGER *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
    if ( !*(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
      v0.QuadPart = -1LL;
    KeSetTimer(
      (PKTIMER)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)KeGetPcr()->Prcb.Number],
      v0,
      (PKDPC)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)KeGetPcr()->Prcb.Number + 8]);
  }
}
