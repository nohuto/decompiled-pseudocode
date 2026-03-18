/*
 * XREFs of VidSchIsTDRPending @ 0x1C0009290
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000CD30 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C0010560 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0039FD4 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0079440 (VidSchiSubmitPagingCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0079770 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C007A0A0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C007B070 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C007B3F0 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C007C5B4 (VidSchWaitForCompletionEvent.c)
 *     VidSchSwitchFromContext @ 0x1C007D1C0 (VidSchSwitchFromContext.c)
 *     VidSchiDrainFlipQueue @ 0x1C00850C0 (VidSchiDrainFlipQueue.c)
 *     VidSchiRun_PriorityTable @ 0x1C008B560 (VidSchiRun_PriorityTable.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00C9AA0 (VidSchiPreemptEngineNodes.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00C9BF0 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00C9D2C (VidSchiResetEngines.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00C9F58 (VidSchiSubmitQueueCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00CA094 (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushAdapter @ 0x1C00CAE30 (VidSchFlushAdapter.c)
 *     VidSchSwitchFromDevice @ 0x1C00CC440 (VidSchSwitchFromDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsTDRPending(__int64 a1)
{
  return *(_DWORD *)(a1 + 2404) != 0;
}
