/*
 * XREFs of WheapAllocErrorRecord @ 0x140320088
 * Callers:
 *     WheapReportBootError @ 0x14031FAEC (WheapReportBootError.c)
 *     WheaReportHwError @ 0x14031FD20 (WheaReportHwError.c)
 * Callees:
 *     WheapInitializeErrorRecordWrapper @ 0x14017D254 (WheapInitializeErrorRecordWrapper.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     WheapGetPreallocatedErrorRecord @ 0x140320484 (WheapGetPreallocatedErrorRecord.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheapAllocErrorRecord(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // ecx
  PVOID PoolWithTag; // rax
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 PreallocatedErrorRecord; // rax

  v4 = *(_DWORD *)(a1 + 32);
  *a2 = v4;
  if ( KeGetCurrentIrql() > 2u )
  {
    PreallocatedErrorRecord = WheapGetPreallocatedErrorRecord(a1);
    v6 = PreallocatedErrorRecord;
    if ( PreallocatedErrorRecord )
    {
      *(_DWORD *)(PreallocatedErrorRecord + 24) = 1;
      goto LABEL_6;
    }
LABEL_7:
    *a2 = 0;
    return v6;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, *(_DWORD *)(a1 + 36));
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_7;
  v7 = *a2;
  memset(PoolWithTag, 0, v7);
  WheapInitializeErrorRecordWrapper(v6, v7, a1);
LABEL_6:
  *(_QWORD *)(v6 + 32) = a1;
  return v6;
}
