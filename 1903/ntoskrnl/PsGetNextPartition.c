/*
 * XREFs of PsGetNextPartition @ 0x1400F9644
 * Callers:
 *     MiCheckControlArea @ 0x140070F40 (MiCheckControlArea.c)
 *     MmSetTrimWhileAgingState @ 0x1400F9608 (MmSetTrimWhileAgingState.c)
 *     MmFlushAllPagesEx @ 0x140160B18 (MmFlushAllPagesEx.c)
 *     MiFinishResume @ 0x1401610F0 (MiFinishResume.c)
 *     MiFreeExcessSegments @ 0x1402B99CC (MiFreeExcessSegments.c)
 *     MmEmptyAllWorkingSets @ 0x1402C9654 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1402C97D8 (MmTrimFilePagesFromWorkingSets.c)
 *     EtwpLogMemNodeInfo @ 0x14032F068 (EtwpLogMemNodeInfo.c)
 *     ExpCheckForWorker @ 0x14033C354 (ExpCheckForWorker.c)
 *     MmEnablePeriodicAccessClearing @ 0x14059E404 (MmEnablePeriodicAccessClearing.c)
 *     MmSetMinimumAgeRate @ 0x1406AA7C8 (MmSetMinimumAgeRate.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140913B00 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x1400A0358 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x1400A0388 (PsDereferencePartition.c)
 *     PsGetNextPartitionUnsafe @ 0x1400F97DC (PsGetNextPartitionUnsafe.c)
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
