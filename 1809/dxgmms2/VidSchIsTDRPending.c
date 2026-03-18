/*
 * XREFs of VidSchIsTDRPending @ 0x1C00083F0
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C0012610 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003957C (VidSchiCompleteAllPendingCommand.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0066B38 (VidSchWaitForCompletionEvent.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0067BB0 (VidSchiSubmitPagingCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0068800 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C0069790 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C0069B20 (VidSchiCheckHwProgress.c)
 *     VidSchSwitchFromContext @ 0x1C007E390 (VidSchSwitchFromContext.c)
 *     VidSchiDrainFlipQueue @ 0x1C0080C00 (VidSchiDrainFlipQueue.c)
 *     VidSchiRun_PriorityTable @ 0x1C0086990 (VidSchiRun_PriorityTable.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00C6D88 (VidSchiPreemptEngineNodes.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00C6ED8 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00C7014 (VidSchiResetEngines.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00C7240 (VidSchiSubmitQueueCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00C737C (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushAdapter @ 0x1C00C80E0 (VidSchFlushAdapter.c)
 *     VidSchSwitchFromDevice @ 0x1C00C99B0 (VidSchSwitchFromDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsTDRPending(__int64 a1)
{
  return *(_DWORD *)(a1 + 2404) != 0;
}
