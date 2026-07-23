/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x1400E3CC0
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x14000EA6C (PnpSetDeviceAffinityThread.c)
 *     ExpWorkerThread @ 0x1400B5BB0 (ExpWorkerThread.c)
 *     MiZeroPageThread @ 0x140179300 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x14017F540 (MiZeroNodePages.c)
 *     MiGetPagesToZero @ 0x1401853A0 (MiGetPagesToZero.c)
 *     PpmParkRegisterParking @ 0x1401897F0 (PpmParkRegisterParking.c)
 *     MiZeroBootLargePages @ 0x140192694 (MiZeroBootLargePages.c)
 *     MiGetClosestNodeWithProcessors @ 0x1402BB9D4 (MiGetClosestNodeWithProcessors.c)
 *     KiConfigureSchedulingInformation @ 0x1405734C0 (KiConfigureSchedulingInformation.c)
 *     ExProcessorCounterSetCallback @ 0x1405CE7B0 (ExProcessorCounterSetCallback.c)
 *     ExpNodeCreateSystemThread @ 0x14066BB68 (ExpNodeCreateSystemThread.c)
 *     ExpQueryNumaProcessorMap @ 0x14066BEF8 (ExpQueryNumaProcessorMap.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D5450 (MiCombineAllPhysicalMemory.c)
 *     ExpWorkQueueManagerThread @ 0x140741C90 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionStart @ 0x1407559EC (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x140755F50 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x140755FF0 (ExpWorkQueueManagerInitialize.c)
 *     MiCreateColorAnchors @ 0x14085E1C4 (MiCreateColorAnchors.c)
 *     EtwpProcessorRundown @ 0x1408C0860 (EtwpProcessorRundown.c)
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
