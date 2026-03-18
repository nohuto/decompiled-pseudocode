/*
 * XREFs of VidSchIsTDRPending @ 0x1C00094D0
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000CF70 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C00107A0 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0039FD4 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0077960 (VidSchWaitForCompletionEvent.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0078A60 (VidSchiSubmitPagingCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0078D90 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C00796C0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C007A690 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C007AA10 (VidSchiCheckHwProgress.c)
 *     VidSchSwitchFromContext @ 0x1C007CB80 (VidSchSwitchFromContext.c)
 *     VidSchiDrainFlipQueue @ 0x1C0083E60 (VidSchiDrainFlipQueue.c)
 *     VidSchiRun_PriorityTable @ 0x1C008A1A0 (VidSchiRun_PriorityTable.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00C9E00 (VidSchiPreemptEngineNodes.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00C9F50 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00CA08C (VidSchiResetEngines.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00CA2B8 (VidSchiSubmitQueueCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00CA3F4 (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushAdapter @ 0x1C00CB190 (VidSchFlushAdapter.c)
 *     VidSchSwitchFromDevice @ 0x1C00CC7A0 (VidSchSwitchFromDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsTDRPending(__int64 a1)
{
  return *(_DWORD *)(a1 + 2404) != 0;
}
