/*
 * XREFs of MiDecrementCloneBlockReference @ 0x1402C9530
 * Callers:
 *     MiDeletePteList @ 0x140035B80 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140037620 (MiDeletePteRun.c)
 *     MiDecommitPages @ 0x140068950 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x140069700 (MiDeleteVa.c)
 *     MiCopyOnWrite @ 0x1400B45C0 (MiCopyOnWrite.c)
 * Callees:
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 *     MiDeleteMergedPte @ 0x14011FC00 (MiDeleteMergedPte.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     MiDeleteCloneDescriptor @ 0x1402C969C (MiDeleteCloneDescriptor.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1402CAAB8 (MiReturnCrossPartitionCloneCharges.c)
 */

__int64 __fastcall MiDecrementCloneBlockReference(
        ULONG_PTR BugCheckParameter2,
        volatile signed __int64 *BugCheckParameter3,
        __int64 a3)
{
  struct _KTHREAD *v5; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebp

  v5 = *(struct _KTHREAD **)(a3 + 896);
  if ( v5 && v5 != KeGetCurrentThread() )
    KeBugCheckEx(0x1Au, 0x61945uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 56) + 24LL);
  if ( *(_QWORD *)(qword_14043A748 + 8LL * *(unsigned __int16 *)(a3 + 1454)) != v7
    && _InterlockedExchangeAdd64(BugCheckParameter3 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    MiReturnCrossPartitionCloneCharges(v7);
  }
  if ( _InterlockedExchangeAdd64(BugCheckParameter3 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    v8 = MiDeleteMergedPte((struct _KEVENT *)v7, (unsigned __int64)BugCheckParameter3);
  else
    v8 = 4;
  if ( *(_QWORD *)(*(_QWORD *)(a3 + 1296) + 312LL) > *(_QWORD *)(BugCheckParameter2 + 96) )
  {
    if ( (_InterlockedDecrement64(BugCheckParameter3 + 2) & 0x7FFFFFFFFFFFFFFLL) == 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(v7 + 7816), 0xFFFFFFFFFFFFFFFFuLL);
      if ( v8 != 3 )
        MiReturnCommit(v7, 1uLL);
    }
    v8 = 5;
  }
  if ( !_InterlockedDecrement64((volatile signed __int64 *)(BugCheckParameter2 + 48)) )
    MiDeleteCloneDescriptor(a3, BugCheckParameter2);
  return v8;
}
