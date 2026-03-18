/*
 * XREFs of PopCheckpointSystemSleep @ 0x1405990D4
 * Callers:
 *     PopPrepareSleep @ 0x14015E7E0 (PopPrepareSleep.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x140597FF0 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140598740 (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x140599380 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140599640 (PopSaveHiberContext.c)
 *     PopRequestWrite @ 0x14059A134 (PopRequestWrite.c)
 *     PopHiberChecksumHiberFileData @ 0x14059A5C0 (PopHiberChecksumHiberFileData.c)
 *     PopDecompressHiberBlocks @ 0x14059A700 (PopDecompressHiberBlocks.c)
 *     PopWriteHiberPages @ 0x14059A908 (PopWriteHiberPages.c)
 *     PopHiberCheckResume @ 0x14059B630 (PopHiberCheckResume.c)
 *     PopRequestRead @ 0x1405AD13C (PopRequestRead.c)
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 *     PopSuspendApps @ 0x140726208 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x14072625C (PopSuspendServices.c)
 *     PopResumeApps @ 0x1407262BC (PopResumeApps.c)
 *     PopResumeServices @ 0x140726340 (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x1407263F4 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x14072644C (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x140726928 (PopAllocateHiberContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x1405ADFD4 (PopCheckpointSystemSleepUnsafe.c)
 *     PopRecordSleepCheckpoint @ 0x14072649C (PopRecordSleepCheckpoint.c)
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
  qword_140443550 += result;
  return result;
}
