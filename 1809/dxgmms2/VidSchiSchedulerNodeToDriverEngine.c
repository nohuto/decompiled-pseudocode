/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1C0002CAC
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C0067BB0 (VidSchiSubmitPagingCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiCheckNodeTimeout @ 0x1C0069D10 (VidSchiCheckNodeTimeout.c)
 *     VidSchCreateSystemDevices @ 0x1C008CDCC (VidSchCreateSystemDevices.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00C6ED8 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00C7014 (VidSchiResetEngines.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00C737C (VidSchiSubmitRenderCommand.c)
 *     VidSchReportAdapter @ 0x1C00C8AC0 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00C9070 (VidSchReportDevice.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C00CA708 (VidSchiSerializeSchedulingLog.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00CA810 (VidSchiSubmitHwPagingCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverEngine(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 616);
  if ( a2 < *(_DWORD *)(a1 + 688) )
    v2 += 8LL * a2;
  return *(unsigned __int16 *)(*(_QWORD *)v2 + 6LL);
}
