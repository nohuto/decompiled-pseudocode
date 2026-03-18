/*
 * XREFs of MmPerformMemoryListCommand @ 0x14056EA20
 * Callers:
 *     PopVerifierFlushMemoryBeforeSleep @ 0x1405652FC (PopVerifierFlushMemoryBeforeSleep.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140566844 (PfpPowerActionStartScenarioTracing.c)
 *     PfPowerActionNotify @ 0x140567F10 (PfPowerActionNotify.c)
 *     PfpLogScenarioEvent @ 0x14071BCD4 (PfpLogScenarioEvent.c)
 *     MmIssueMemoryListCommand @ 0x14071BEF8 (MmIssueMemoryListCommand.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     MiPurgePartitionStandby @ 0x140151DFC (MiPurgePartitionStandby.c)
 *     MiFlushAllPages @ 0x140153118 (MiFlushAllPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x140175CB4 (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x1402B2EAC (MiEmptyAllWorkingSets.c)
 */

__int64 MmPerformMemoryListCommand()
{
  __int64 ProcessPartition; // rax
  int v1; // r8d
  int v2; // r8d
  int v3; // edx
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  unsigned int v8; // edx

  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( !v1 )
  {
    v3 = 0;
    goto LABEL_4;
  }
  v2 = v1 - 1;
  if ( !v2 )
  {
    v3 = 1;
LABEL_4:
    MiCaptureAllWorkingSetAccessBits(ProcessPartition, v3);
    return 0LL;
  }
  v5 = v2 - 1;
  if ( !v5 )
  {
    MiEmptyAllWorkingSets(ProcessPartition);
    return 0LL;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    MiFlushAllPages(ProcessPartition, 0);
    return 0LL;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = 8;
    goto LABEL_14;
  }
  if ( v7 == 1 )
  {
    v8 = 1;
LABEL_14:
    MiPurgePartitionStandby(ProcessPartition, v8);
    return 0LL;
  }
  return 3221225659LL;
}
