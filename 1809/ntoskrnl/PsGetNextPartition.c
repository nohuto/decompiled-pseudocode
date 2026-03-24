/*
 * XREFs of PsGetNextPartition @ 0x14011FFE8
 * Callers:
 *     MiCheckControlArea @ 0x1400764A0 (MiCheckControlArea.c)
 *     MmSetTrimWhileAgingState @ 0x14011FFAC (MmSetTrimWhileAgingState.c)
 *     MiFinishResume @ 0x140151910 (MiFinishResume.c)
 *     MmFlushAllPagesEx @ 0x1401530EC (MmFlushAllPagesEx.c)
 *     MiFreeExcessSegments @ 0x1401643D4 (MiFreeExcessSegments.c)
 *     MmEmptyAllWorkingSets @ 0x1402B41B4 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1402B4338 (MmTrimFilePagesFromWorkingSets.c)
 *     ExpCheckForWorker @ 0x14031D0E4 (ExpCheckForWorker.c)
 *     MmEnablePeriodicAccessClearing @ 0x1405660A4 (MmEnablePeriodicAccessClearing.c)
 *     MmSetMinimumAgeRate @ 0x1406A48FC (MmSetMinimumAgeRate.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1408D6210 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     PsDereferencePartition @ 0x140090CC0 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x140090CE8 (PsReferencePartitionSafe.c)
 *     PsGetNextPartitionUnsafe @ 0x14012017C (PsGetNextPartitionUnsafe.c)
 */

void *__fastcall PsGetNextPartition(void *a1)
{
  __int64 v1; // rbx
  void *v2; // rdi
  __int64 NextPartitionUnsafe; // rax
  void *v4; // r8

  v1 = (__int64)a1;
  v2 = 0LL;
  while ( 1 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(a1);
    if ( !NextPartitionUnsafe )
      break;
    if ( PsReferencePartitionSafe(NextPartitionUnsafe) )
    {
      v2 = v4;
      break;
    }
    a1 = v4;
  }
  if ( v1 )
    PsDereferencePartition(v1);
  return v2;
}
