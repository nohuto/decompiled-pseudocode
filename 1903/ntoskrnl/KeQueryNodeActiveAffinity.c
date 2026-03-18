/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x1401089A0
 * Callers:
 *     MiGetPagesToZero @ 0x140029C50 (MiGetPagesToZero.c)
 *     ExpWorkerThread @ 0x140059C30 (ExpWorkerThread.c)
 *     PnpSetDeviceAffinityThread @ 0x140099884 (PnpSetDeviceAffinityThread.c)
 *     ExAllocateCacheAwarePushLock @ 0x14015CEB0 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14016DD84 (ExpSaPageGroupDescriptorAllocate.c)
 *     MiZeroBootLargePages @ 0x1401852F4 (MiZeroBootLargePages.c)
 *     MiZeroNodePages @ 0x140188120 (MiZeroNodePages.c)
 *     PpmParkRegisterParking @ 0x14019397C (PpmParkRegisterParking.c)
 *     MiGetClosestNodeWithProcessors @ 0x1402D1D78 (MiGetClosestNodeWithProcessors.c)
 *     MiCreateColorAnchors @ 0x1402DF124 (MiCreateColorAnchors.c)
 *     MiComputeIdealDpcGang @ 0x1402E83AC (MiComputeIdealDpcGang.c)
 *     KiConfigureSchedulingInformation @ 0x14059F080 (KiConfigureSchedulingInformation.c)
 *     ExProcessorCounterSetCallback @ 0x1405C8BC0 (ExProcessorCounterSetCallback.c)
 *     ExpNodeCreateSystemThread @ 0x1406B3618 (ExpNodeCreateSystemThread.c)
 *     ExpQueryNumaProcessorMap @ 0x1406B4EC4 (ExpQueryNumaProcessorMap.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F4120 (MiCombineAllPhysicalMemory.c)
 *     ExpWorkQueueManagerThread @ 0x140766FB0 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionStart @ 0x14077A7B0 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x14077AD20 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x14077ADC8 (ExpWorkQueueManagerInitialize.c)
 *     EtwpProcessorRundown @ 0x1408FC38C (EtwpProcessorRundown.c)
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
