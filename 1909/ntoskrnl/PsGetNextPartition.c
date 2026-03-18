/*
 * XREFs of PsGetNextPartition @ 0x1401231DC
 * Callers:
 *     MiCheckControlArea @ 0x1400711B0 (MiCheckControlArea.c)
 *     MmSetTrimWhileAgingState @ 0x1401231A0 (MmSetTrimWhileAgingState.c)
 *     MiFinishResume @ 0x140160B40 (MiFinishResume.c)
 *     MmFlushAllPagesEx @ 0x14016A6EC (MmFlushAllPagesEx.c)
 *     MiFreeExcessSegments @ 0x1402B972C (MiFreeExcessSegments.c)
 *     MmEmptyAllWorkingSets @ 0x1402C93B4 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1402C9538 (MmTrimFilePagesFromWorkingSets.c)
 *     EtwpLogMemNodeInfo @ 0x14032EAC8 (EtwpLogMemNodeInfo.c)
 *     ExpCheckForWorker @ 0x14033BDB4 (ExpCheckForWorker.c)
 *     MmEnablePeriodicAccessClearing @ 0x14059E3E4 (MmEnablePeriodicAccessClearing.c)
 *     MmSetMinimumAgeRate @ 0x1406CA1D0 (MmSetMinimumAgeRate.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140913560 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x1400C5438 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x1400C5468 (PsDereferencePartition.c)
 *     PsGetNextPartitionUnsafe @ 0x14012336C (PsGetNextPartitionUnsafe.c)
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
