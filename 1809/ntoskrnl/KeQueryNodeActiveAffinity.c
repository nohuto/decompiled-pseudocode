/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x1400E3C20
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x14000EA6C (PnpSetDeviceAffinityThread.c)
 *     ExpWorkerThread @ 0x1400B5C50 (ExpWorkerThread.c)
 *     MiZeroPageThread @ 0x1401791E0 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x14017F3E0 (MiZeroNodePages.c)
 *     MiGetPagesToZero @ 0x140185240 (MiGetPagesToZero.c)
 *     PpmParkRegisterParking @ 0x140189690 (PpmParkRegisterParking.c)
 *     MiZeroBootLargePages @ 0x140192534 (MiZeroBootLargePages.c)
 *     MiGetClosestNodeWithProcessors @ 0x1402BB6E4 (MiGetClosestNodeWithProcessors.c)
 *     KiConfigureSchedulingInformation @ 0x1405724C0 (KiConfigureSchedulingInformation.c)
 *     ExProcessorCounterSetCallback @ 0x1405CD7B0 (ExProcessorCounterSetCallback.c)
 *     ExpNodeCreateSystemThread @ 0x14066A9C8 (ExpNodeCreateSystemThread.c)
 *     ExpQueryNumaProcessorMap @ 0x14066AD58 (ExpQueryNumaProcessorMap.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D41D0 (MiCombineAllPhysicalMemory.c)
 *     ExpWorkQueueManagerThread @ 0x140740AC0 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionStart @ 0x14075481C (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x140754D80 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x140754E20 (ExpWorkQueueManagerInitialize.c)
 *     MiCreateColorAnchors @ 0x14085CF84 (MiCreateColorAnchors.c)
 *     EtwpProcessorRundown @ 0x1408BF5C0 (EtwpProcessorRundown.c)
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
