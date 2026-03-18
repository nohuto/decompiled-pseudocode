/*
 * XREFs of PopCheckpointSystemSleep @ 0x140569714
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x1405681E0 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140568DB8 (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x140569770 (PopRestoreHiberContext.c)
 *     PopWriteHiberPages @ 0x140569C48 (PopWriteHiberPages.c)
 *     PopDecompressHiberBlocks @ 0x140569E60 (PopDecompressHiberBlocks.c)
 *     PopSaveHiberContext @ 0x14056A060 (PopSaveHiberContext.c)
 *     PopRequestWrite @ 0x14056A5F4 (PopRequestWrite.c)
 *     PopHiberChecksumHiberFileData @ 0x14056AA44 (PopHiberChecksumHiberFileData.c)
 *     PopHiberCheckResume @ 0x14056B320 (PopHiberCheckResume.c)
 *     PopRequestRead @ 0x14057D27C (PopRequestRead.c)
 *     PopIssueActionRequest @ 0x1406DE870 (PopIssueActionRequest.c)
 *     PopSuspendApps @ 0x1406DEBF0 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1406DEC58 (PopSuspendServices.c)
 *     PopResumeApps @ 0x1406DECC8 (PopResumeApps.c)
 *     PopResumeServices @ 0x1406DED60 (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x1406DEDF8 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x1406DEFAC (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x1406DF554 (PopAllocateHiberContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x14057E0E4 (PopCheckpointSystemSleepUnsafe.c)
 *     PopRecordSleepCheckpoint @ 0x1406DEFFC (PopRecordSleepCheckpoint.c)
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
      if ( (unsigned __int8)off_1403FE680[0]() )
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
  qword_140417B90 += result;
  return result;
}
