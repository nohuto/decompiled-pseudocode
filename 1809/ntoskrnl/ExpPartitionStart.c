/*
 * XREFs of ExpPartitionStart @ 0x1407559EC
 * Callers:
 *     PspAllocatePartition @ 0x14075DC38 (PspAllocatePartition.c)
 *     ExpWorkerInitialization @ 0x1409D5C50 (ExpWorkerInitialization.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1400E3CC0 (KeQueryNodeActiveAffinity.c)
 *     ExpWorkQueueManagerStart @ 0x140755A90 (ExpWorkQueueManagerStart.c)
 */

__int64 __fastcall ExpPartitionStart(__int64 a1)
{
  unsigned __int16 v2; // bx
  __int64 v3; // rax
  __int64 result; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( !KeNumberNodes )
    return 0LL;
  while ( 1 )
  {
    v3 = 0LL;
    if ( (_UNKNOWN *)KeNodeBlock[v2] != (_UNKNOWN *)((char *)&KiNodeInit + 384 * v2) )
      v3 = KeNodeBlock[v2];
    KeQueryNodeActiveAffinity(*(_WORD *)(v3 + 146), &Affinity, 0LL);
    if ( Affinity.Mask )
    {
      result = ExpWorkQueueManagerStart(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v2));
      if ( (int)result < 0 )
        break;
    }
    if ( ++v2 >= (unsigned __int16)KeNumberNodes )
      return 0LL;
  }
  return result;
}
