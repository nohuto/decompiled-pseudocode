/*
 * XREFs of PsGetNextPartition @ 0x140120058
 * Callers:
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 *     MmSetTrimWhileAgingState @ 0x14012001C (MmSetTrimWhileAgingState.c)
 *     MiFinishResume @ 0x140151A10 (MiFinishResume.c)
 *     MmFlushAllPagesEx @ 0x1401531EC (MmFlushAllPagesEx.c)
 *     MiFreeExcessSegments @ 0x1401644D4 (MiFreeExcessSegments.c)
 *     MmEmptyAllWorkingSets @ 0x1402B43A4 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1402B4528 (MmTrimFilePagesFromWorkingSets.c)
 *     ExpCheckForWorker @ 0x14031D2D4 (ExpCheckForWorker.c)
 *     MmEnablePeriodicAccessClearing @ 0x1405670A4 (MmEnablePeriodicAccessClearing.c)
 *     MmSetMinimumAgeRate @ 0x1406A5B9C (MmSetMinimumAgeRate.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1408D74D0 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x140090C28 (PsReferencePartitionSafe.c)
 *     PsGetNextPartitionUnsafe @ 0x1401201EC (PsGetNextPartitionUnsafe.c)
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
