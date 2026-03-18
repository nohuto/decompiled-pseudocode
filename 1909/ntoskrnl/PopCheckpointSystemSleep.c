/*
 * XREFs of PopCheckpointSystemSleep @ 0x1405990B4
 * Callers:
 *     PopPrepareSleep @ 0x14015EE80 (PopPrepareSleep.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x140597FCC (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x14059871C (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x140599360 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140599620 (PopSaveHiberContext.c)
 *     PopRequestWrite @ 0x14059A114 (PopRequestWrite.c)
 *     PopHiberChecksumHiberFileData @ 0x14059A5A0 (PopHiberChecksumHiberFileData.c)
 *     PopDecompressHiberBlocks @ 0x14059A6E0 (PopDecompressHiberBlocks.c)
 *     PopWriteHiberPages @ 0x14059A8E8 (PopWriteHiberPages.c)
 *     PopHiberCheckResume @ 0x14059B610 (PopHiberCheckResume.c)
 *     PopRequestRead @ 0x1405AD11C (PopRequestRead.c)
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 *     PopSuspendApps @ 0x1407280A8 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1407280FC (PopSuspendServices.c)
 *     PopResumeApps @ 0x14072815C (PopResumeApps.c)
 *     PopResumeServices @ 0x1407281E0 (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x140728294 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x1407282EC (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x1407287C8 (PopAllocateHiberContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x1405ADFB4 (PopCheckpointSystemSleepUnsafe.c)
 *     PopRecordSleepCheckpoint @ 0x14072833C (PopRecordSleepCheckpoint.c)
 */

unsigned __int64 __fastcall PopCheckpointSystemSleep(int a1)
{
  ULONG_PTR v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax

  v1 = a1;
  PopSleepCheckpoint = a1;
  v2 = __rdtsc();
  if ( PopBootStatCheckpointAvailable )
    PopRecordSleepCheckpoint((unsigned int)a1);
  if ( PopCheckpointSystemSleepEnabled
    && ((PopCheckpointSystemSleepSimulateFlags & 1) == 0
     || (unsigned int)v1 <= HIBYTE(PopCheckpointSystemSleepSimulateFlags)) )
  {
    if ( PoAllProcIntrDisabled )
    {
      if ( KeGetCurrentPrcb()->Number )
        KeBugCheckEx(0xA0u, 0x10FuLL, v1, 1uLL, 0LL);
      if ( (unsigned __int8)off_140424680[0]() )
        KeBugCheckEx(0xA0u, 0x10FuLL, v1, 2uLL, 0LL);
    }
    else if ( !_InterlockedExchangeAdd(&PopPagingEnabled, 0) )
    {
      KeBugCheckEx(0xA0u, 0x10FuLL, v1, 0LL, 0LL);
    }
    PopCheckpointSystemSleepUnsafe((unsigned int)v1);
  }
  v3 = __rdtsc();
  result = (((unsigned __int64)HIDWORD(v3) << 32) | (unsigned int)v3) - v2;
  qword_1404434D0 += result;
  return result;
}
