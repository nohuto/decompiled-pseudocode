/*
 * XREFs of MiFlushRelease @ 0x140071544
 * Callers:
 *     MmFlushSection @ 0x140077AD0 (MmFlushSection.c)
 *     MmTrimSection @ 0x1400E0C60 (MmTrimSection.c)
 *     MiFreeOverlappedFlushEntry @ 0x1402CA154 (MiFreeOverlappedFlushEntry.c)
 *     MiAllocateVirtualMemory @ 0x140603140 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x14069E9FC (MmFlushVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x140070F40 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1400715F0 (MiDecrementSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiFlushRelease(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  KIRQL v8; // r14
  __int64 v9; // rdi
  __int64 result; // rax

  v6 = 0LL;
  v7 = *(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( a2 )
  {
    v9 = MiDecrementSubsections(a2);
    v6 = MiDecrementSubsections(a3) + v9;
  }
  --*(_QWORD *)(a1 + 40);
  result = MiCheckControlArea(a1, v8);
  if ( v6 )
    return MiReturnCrossPartitionSectionCharges(v7, 1LL, v6);
  return result;
}
