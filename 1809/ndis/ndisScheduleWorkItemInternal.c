/*
 * XREFs of ndisScheduleWorkItemInternal @ 0x1C00170D0
 * Callers:
 *     ndisInitModeTimeoutDpc @ 0x1C0016500 (ndisInitModeTimeoutDpc.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C0017000 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 *     ndisIfScheduleTimestampCapabilityChangeNotification @ 0x1C00429B8 (ndisIfScheduleTimestampCapabilityChangeNotification.c)
 *     ndisPdcTaskClientDisableTimeoutDpc @ 0x1C004B270 (ndisPdcTaskClientDisableTimeoutDpc.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004BB4C (ndisUpdateAndIndicatePMCapabilities.c)
 *     NdisScheduleWorkItem @ 0x1C0052740 (NdisScheduleWorkItem.c)
 *     NdisMResetMiniport @ 0x1C0061150 (NdisMResetMiniport.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C0068AB0 (NdisMReenumerateFailedAdapter.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C0069C5C (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C0073304 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisIdleWaitWakeCallback @ 0x1C0074B70 (ndisIdleWaitWakeCallback.c)
 *     ndisSSIdleTimerDpc @ 0x1C0075520 (ndisSSIdleTimerDpc.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0077340 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C0079370 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisScheduleWorkItemInternal(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = ndisWorkItemHandler;
  *(_QWORD *)(a1 + 40) = a1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 16), CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
}
