/*
 * XREFs of MmPerformMemoryListCommand @ 0x14059E418
 * Callers:
 *     PopVerifierFlushMemoryBeforeSleep @ 0x140596190 (PopVerifierFlushMemoryBeforeSleep.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140596560 (PfpPowerActionStartScenarioTracing.c)
 *     PfPowerActionNotify @ 0x140596AF4 (PfPowerActionNotify.c)
 *     PfpLogScenarioEvent @ 0x140746518 (PfpLogScenarioEvent.c)
 *     MmIssueMemoryListCommand @ 0x14074673C (MmIssueMemoryListCommand.c)
 * Callees:
 *     MiGetProcessPartition @ 0x1400524D8 (MiGetProcessPartition.c)
 *     MiPurgePartitionStandby @ 0x14016105C (MiPurgePartitionStandby.c)
 *     MiFlushAllPages @ 0x14016A738 (MiFlushAllPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x14017F8B8 (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x1402C815C (MiEmptyAllWorkingSets.c)
 */

__int64 MmPerformMemoryListCommand()
{
  __int64 ProcessPartition; // rax
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // edx
  int v5; // r8d
  int v6; // r8d
  __int64 v7; // r8
  unsigned int v8; // edx

  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( !(_DWORD)v1 )
  {
    v3 = 0;
    goto LABEL_4;
  }
  v1 = (unsigned int)(v1 - 1);
  if ( !(_DWORD)v1 )
  {
    v3 = 1;
LABEL_4:
    MiCaptureAllWorkingSetAccessBits(ProcessPartition, v3, v1, v2);
    return 0LL;
  }
  v5 = v1 - 1;
  if ( !v5 )
  {
    MiEmptyAllWorkingSets(ProcessPartition);
    return 0LL;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    MiFlushAllPages(ProcessPartition, 0, 8u);
    return 0LL;
  }
  v7 = (unsigned int)(v6 - 1);
  if ( !(_DWORD)v7 )
  {
    v8 = 8;
    goto LABEL_14;
  }
  if ( (_DWORD)v7 == 1 )
  {
    v8 = 1;
LABEL_14:
    MiPurgePartitionStandby(ProcessPartition, v8, v7, v2);
    return 0LL;
  }
  return 3221225659LL;
}
