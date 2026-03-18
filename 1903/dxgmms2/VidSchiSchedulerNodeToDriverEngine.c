/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1C0003E48
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C0078A60 (VidSchiSubmitPagingCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0078D90 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiCheckNodeTimeout @ 0x1C007AC00 (VidSchiCheckNodeTimeout.c)
 *     VidSchCreateSystemDevices @ 0x1C0090664 (VidSchCreateSystemDevices.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00C9F50 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00CA08C (VidSchiResetEngines.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00CA3F4 (VidSchiSubmitRenderCommand.c)
 *     VidSchReportAdapter @ 0x1C00CBA10 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00CBFC0 (VidSchReportDevice.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C00CD508 (VidSchiSerializeSchedulingLog.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00CD610 (VidSchiSubmitHwPagingCommand.c)
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
