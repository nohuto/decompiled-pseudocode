/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1C0003C08
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C0079440 (VidSchiSubmitPagingCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0079770 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiCheckNodeTimeout @ 0x1C007B5E0 (VidSchiCheckNodeTimeout.c)
 *     VidSchCreateSystemDevices @ 0x1C0091A2C (VidSchCreateSystemDevices.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00C9BF0 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00C9D2C (VidSchiResetEngines.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00CA094 (VidSchiSubmitRenderCommand.c)
 *     VidSchReportAdapter @ 0x1C00CB6B0 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00CBC60 (VidSchReportDevice.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C00CD1A8 (VidSchiSerializeSchedulingLog.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00CD2B0 (VidSchiSubmitHwPagingCommand.c)
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
