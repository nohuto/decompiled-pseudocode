/*
 * XREFs of PspGetMemoryPartitionFromJobList @ 0x14088AE88
 * Callers:
 *     PspGetMemoryPartitionContext @ 0x14060E560 (PspGetMemoryPartitionContext.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall PspGetMemoryPartitionFromJobList(__int64 a1, unsigned __int64 a2, PVOID *a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v7; // ebx
  unsigned __int64 i; // rsi
  __int64 v9; // r14
  PVOID v10; // rax

  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = 0;
  for ( i = 0LL; i < a2; ++i )
  {
    v9 = *(_QWORD *)(a1 + 8 * i);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v9 + 56), 1u);
    v10 = *(PVOID *)(v9 + 1544);
    if ( v10 == (PVOID)-1LL )
    {
      v7 = -1073740682;
    }
    else if ( *a3 )
    {
      if ( v10 && v10 != *a3 )
        v7 = -1073741637;
    }
    else if ( v10 )
    {
      ObfReferenceObjectWithTag(*(PVOID *)(v9 + 1544), 0x624A7350u);
      *a3 = *(PVOID *)(v9 + 1544);
    }
    ExReleaseResourceLite((PERESOURCE)(v9 + 56));
    if ( v7 < 0 )
      break;
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
    v7 = -1073741749;
  if ( v7 < 0 && *a3 )
  {
    ObfDereferenceObjectWithTag(*a3, 0x624A7350u);
    *a3 = 0LL;
  }
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v7;
}
