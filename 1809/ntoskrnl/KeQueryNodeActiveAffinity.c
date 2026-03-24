/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x1400E3C40
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x14000EA6C (PnpSetDeviceAffinityThread.c)
 *     ExpWorkerThread @ 0x1400B5C70 (ExpWorkerThread.c)
 *     MiZeroPageThread @ 0x140179200 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x14017F400 (MiZeroNodePages.c)
 *     MiGetPagesToZero @ 0x140185260 (MiGetPagesToZero.c)
 *     PpmParkRegisterParking @ 0x1401896B0 (PpmParkRegisterParking.c)
 *     MiZeroBootLargePages @ 0x140192554 (MiZeroBootLargePages.c)
 *     MiGetClosestNodeWithProcessors @ 0x1402BB7E4 (MiGetClosestNodeWithProcessors.c)
 *     KiConfigureSchedulingInformation @ 0x1405724C0 (KiConfigureSchedulingInformation.c)
 *     ExProcessorCounterSetCallback @ 0x1405CD7B0 (ExProcessorCounterSetCallback.c)
 *     ExpNodeCreateSystemThread @ 0x14066A9A8 (ExpNodeCreateSystemThread.c)
 *     ExpQueryNumaProcessorMap @ 0x14066AD38 (ExpQueryNumaProcessorMap.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D41B0 (MiCombineAllPhysicalMemory.c)
 *     ExpWorkQueueManagerThread @ 0x140740AA0 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionStart @ 0x1407547FC (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x140754D60 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x140754E00 (ExpWorkQueueManagerInitialize.c)
 *     MiCreateColorAnchors @ 0x14085CF64 (MiCreateColorAnchors.c)
 *     EtwpProcessorRundown @ 0x1408BF5A0 (EtwpProcessorRundown.c)
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
