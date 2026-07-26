/*
 * XREFs of ndisScheduleWorkItemInternal @ 0x1C001B218
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001B148 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ?ndisInitModeTimeoutDpc@@YAXPEAX000@Z @ 0x1C003F740 (-ndisInitModeTimeoutDpc@@YAXPEAX000@Z.c)
 *     ndisIfScheduleTimestampCapabilityChangeNotification @ 0x1C0067BB0 (ndisIfScheduleTimestampCapabilityChangeNotification.c)
 *     ndisPdcTaskClientDisableTimeoutDpc @ 0x1C0075150 (ndisPdcTaskClientDisableTimeoutDpc.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C0077328 (ndisUpdateAndIndicatePMCapabilities.c)
 *     NdisScheduleWorkItem @ 0x1C0081A30 (NdisScheduleWorkItem.c)
 *     NdisMResetMiniport @ 0x1C0098800 (NdisMResetMiniport.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C00A44A0 (NdisMReenumerateFailedAdapter.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C00A6D84 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00B68D8 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisIdleWaitWakeCallback @ 0x1C00B8380 (ndisIdleWaitWakeCallback.c)
 *     ndisSSIdleTimerDpc @ 0x1C00B8E70 (ndisSSIdleTimerDpc.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C00BAF9C (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C00BD290 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
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
