/*
 * XREFs of PopCheckpointSystemSleep @ 0x14056A714
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x1405691E0 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140569DB8 (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x14056A770 (PopRestoreHiberContext.c)
 *     PopWriteHiberPages @ 0x14056AC48 (PopWriteHiberPages.c)
 *     PopDecompressHiberBlocks @ 0x14056AE60 (PopDecompressHiberBlocks.c)
 *     PopSaveHiberContext @ 0x14056B060 (PopSaveHiberContext.c)
 *     PopRequestWrite @ 0x14056B5F4 (PopRequestWrite.c)
 *     PopHiberChecksumHiberFileData @ 0x14056BA44 (PopHiberChecksumHiberFileData.c)
 *     PopHiberCheckResume @ 0x14056C320 (PopHiberCheckResume.c)
 *     PopRequestRead @ 0x14057E27C (PopRequestRead.c)
 *     PopIssueActionRequest @ 0x1406DFAF0 (PopIssueActionRequest.c)
 *     PopSuspendApps @ 0x1406DFE70 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1406DFED8 (PopSuspendServices.c)
 *     PopResumeApps @ 0x1406DFF48 (PopResumeApps.c)
 *     PopResumeServices @ 0x1406DFFE0 (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x1406E0078 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x1406E022C (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x1406E07D4 (PopAllocateHiberContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x14057F0E4 (PopCheckpointSystemSleepUnsafe.c)
 *     PopRecordSleepCheckpoint @ 0x1406E027C (PopRecordSleepCheckpoint.c)
 */

unsigned __int64 __fastcall PopCheckpointSystemSleep(unsigned int a1)
{
  ULONG_PTR v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax

  v1 = (int)a1;
  v2 = __rdtsc();
  if ( !PoPowerDownActionInProgress )
    PopRecordSleepCheckpoint(a1);
  if ( PopCheckpointSystemSleepEnabled
    && ((PopCheckpointSystemSleepSimulateFlags & 1) == 0
     || (unsigned int)v1 <= HIBYTE(PopCheckpointSystemSleepSimulateFlags)) )
  {
    if ( PoAllProcIntrDisabled )
    {
      if ( KeGetCurrentPrcb()->Number )
        KeBugCheckEx(0xA0u, 0x10FuLL, v1, 1uLL, 0LL);
      if ( (unsigned __int8)off_1403FF680[0]() )
        KeBugCheckEx(0xA0u, 0x10FuLL, v1, 2uLL, 0LL);
    }
    else if ( !_InterlockedExchangeAdd(&PopPagingEnabled, 0) )
    {
      KeBugCheckEx(0xA0u, 0x10FuLL, v1, 0LL, 0LL);
    }
    if ( PoPowerDownActionInProgress )
      PopCheckpointSystemSleepUnsafe((unsigned int)v1);
  }
  v3 = __rdtsc();
  result = (((unsigned __int64)HIDWORD(v3) << 32) | (unsigned int)v3) - v2;
  qword_140418C30 += result;
  return result;
}
