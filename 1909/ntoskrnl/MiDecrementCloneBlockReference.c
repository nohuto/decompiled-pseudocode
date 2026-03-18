/*
 * XREFs of MiDecrementCloneBlockReference @ 0x1402E36E4
 * Callers:
 *     MiDeletePteList @ 0x140027380 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MiDeleteVa @ 0x14004B520 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 * Callees:
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiDeleteMergedPte @ 0x140142A28 (MiDeleteMergedPte.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiDeleteCloneDescriptor @ 0x1402E3850 (MiDeleteCloneDescriptor.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1402E4D74 (MiReturnCrossPartitionCloneCharges.c)
 */

__int64 __fastcall MiDecrementCloneBlockReference(
        ULONG_PTR BugCheckParameter2,
        volatile signed __int64 *BugCheckParameter3,
        __int64 a3)
{
  struct _KTHREAD *v5; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebp

  v5 = *(struct _KTHREAD **)(a3 + 904);
  if ( v5 && v5 != KeGetCurrentThread() )
    KeBugCheckEx(0x1Au, 0x61945uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 56) + 24LL);
  if ( *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a3 + 1454)) != v7
    && _InterlockedExchangeAdd64(BugCheckParameter3 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    MiReturnCrossPartitionCloneCharges(v7);
  }
  if ( _InterlockedExchangeAdd64(BugCheckParameter3 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    v8 = MiDeleteMergedPte(v7, (unsigned __int64)BugCheckParameter3);
  else
    v8 = 4;
  if ( *(_QWORD *)(*(_QWORD *)(a3 + 1296) + 360LL) > *(_QWORD *)(BugCheckParameter2 + 96) )
  {
    if ( (_InterlockedDecrement64(BugCheckParameter3 + 2) & 0x7FFFFFFFFFFFFFFLL) == 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(v7 + 8584), 0xFFFFFFFFFFFFFFFFuLL);
      if ( v8 != 3 )
        MiReturnCommit(v7, 1uLL);
    }
    v8 = 5;
  }
  if ( !_InterlockedDecrement64((volatile signed __int64 *)(BugCheckParameter2 + 48)) )
    MiDeleteCloneDescriptor(a3, BugCheckParameter2);
  return v8;
}
