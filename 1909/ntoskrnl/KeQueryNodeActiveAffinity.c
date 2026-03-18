/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x140118A60
 * Callers:
 *     MiGetPagesToZero @ 0x14002A040 (MiGetPagesToZero.c)
 *     ExpWorkerThread @ 0x140059CD0 (ExpWorkerThread.c)
 *     PnpSetDeviceAffinityThread @ 0x1400ED994 (PnpSetDeviceAffinityThread.c)
 *     ExAllocateCacheAwarePushLock @ 0x14015D550 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14016E474 (ExpSaPageGroupDescriptorAllocate.c)
 *     MiZeroBootLargePages @ 0x1401858A4 (MiZeroBootLargePages.c)
 *     MiZeroNodePages @ 0x1401886D0 (MiZeroNodePages.c)
 *     PpmParkRegisterParking @ 0x14019415C (PpmParkRegisterParking.c)
 *     MiGetClosestNodeWithProcessors @ 0x1402D1AD8 (MiGetClosestNodeWithProcessors.c)
 *     MiCreateColorAnchors @ 0x1402DEE84 (MiCreateColorAnchors.c)
 *     MiComputeIdealDpcGang @ 0x1402E810C (MiComputeIdealDpcGang.c)
 *     KiConfigureSchedulingInformation @ 0x14059F060 (KiConfigureSchedulingInformation.c)
 *     ExProcessorCounterSetCallback @ 0x1405C90C0 (ExProcessorCounterSetCallback.c)
 *     ExpNodeCreateSystemThread @ 0x1406C05EC (ExpNodeCreateSystemThread.c)
 *     ExpQueryNumaProcessorMap @ 0x1406C06C0 (ExpQueryNumaProcessorMap.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F5EB0 (MiCombineAllPhysicalMemory.c)
 *     ExpWorkQueueManagerThread @ 0x14076BAB0 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionStart @ 0x140772F98 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x140773508 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407735B0 (ExpWorkQueueManagerInitialize.c)
 *     EtwpProcessorRundown @ 0x1408FBD6C (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

void __stdcall KeQueryNodeActiveAffinity(USHORT NodeNumber, PGROUP_AFFINITY Affinity, PUSHORT Count)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rcx

  if ( Affinity )
  {
    Affinity->Mask = 0LL;
    *(_QWORD *)&Affinity->Group = 0LL;
  }
  if ( Count )
    *Count = 0;
  if ( NodeNumber < (unsigned __int16)KeNumberNodes )
  {
    _mm_lfence();
    v3 = KeNodeBlock[NodeNumber];
    if ( Affinity )
    {
      Affinity->Group = *(_WORD *)(v3 + 144);
      Affinity->Mask = *(_QWORD *)(v3 + 136);
    }
    if ( Count )
    {
      v4 = *(_QWORD *)(v3 + 136) - ((*(_QWORD *)(v3 + 136) >> 1) & 0x5555555555555555LL);
      *Count = (0x101010101010101LL
              * (((v4 & 0x3333333333333333LL)
                + ((v4 >> 2) & 0x3333333333333333LL)
                + (((v4 & 0x3333333333333333LL) + ((v4 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    }
  }
}
