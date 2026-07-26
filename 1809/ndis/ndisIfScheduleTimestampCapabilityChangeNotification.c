/*
 * XREFs of ndisIfScheduleTimestampCapabilityChangeNotification @ 0x1C00429B8
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     ndisScheduleWorkItemInternal @ 0x1C00170D0 (ndisScheduleWorkItemInternal.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019E34 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019EC8 (ndisMReferenceIfBlock.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

char __fastcall ndisIfScheduleTimestampCapabilityChangeNotification(__int64 a1, KIRQL a2)
{
  char v4; // bl
  __int64 v5; // rsi
  __int64 *PoolWithTag; // rax
  __int64 *v7; // r14
  KIRQL v8; // bl

  v4 = 0;
  v5 = ndisMReferenceIfBlock(a1, 0x1Au);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), a2);
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x50uLL);
      *v7 = v5;
      v7[1] = (__int64)ndisNsiQueuedTimestampingChangeNotification;
      v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v5 + 1440), 0xAu);
      ++*(_DWORD *)(v5 + 1304);
      KeReleaseSpinLock(&ndisIfListLock, v8);
      ndisScheduleWorkItemInternal((__int64)v7);
      v4 = 1;
    }
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1864) = 2244265;
    ndisMDereferenceIfBlock(a1, MPIFREF_TIMESTAMPING);
  }
  return v4;
}
