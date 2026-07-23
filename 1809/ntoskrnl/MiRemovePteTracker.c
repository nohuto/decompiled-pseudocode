/*
 * XREFs of MiRemovePteTracker @ 0x1402CDF00
 * Callers:
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     MmUnmapIoSpace @ 0x1401232F0 (MmUnmapIoSpace.c)
 *     MmFreeMappingAddress @ 0x1406FD750 (MmFreeMappingAddress.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiRemovePteTracker(ULONG_PTR BugCheckParameter3, unsigned __int64 a2, ULONG_PTR a3)
{
  __int64 v5; // rbx
  _SLIST_ENTRY *v6; // rdi
  ULONG_PTR v7; // r14
  _SLIST_ENTRY *v8; // rdx
  _SLIST_ENTRY *Next; // r8
  ULONG_PTR v10; // r9
  ULONG_PTR v11; // rax
  ULONG_PTR v12; // r9
  _SLIST_ENTRY *v13; // rcx
  _SLIST_ENTRY **v14; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  PSLIST_ENTRY result; // rax
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+30h] [rbp-28h] BYREF

  v5 = 40543LL * (unsigned int)(a2 >> 12);
  v6 = 0LL;
  v7 = a2 & 0xFFFFFFFFFFFFF000uLL;
  KeAcquireInStackQueuedSpinLock(&qword_14043BC50, &v18);
  v8 = (_SLIST_ENTRY *)((char *)&unk_14043C870 + 16 * (((unsigned __int8)v5 ^ BYTE4(v5)) & 0xF));
  Next = v8->Next;
  if ( v8->Next == v8 )
    goto LABEL_16;
  do
  {
    v10 = (ULONG_PTR)Next[2].Next;
    if ( v7 == (v10 & 0xFFFFFFFFFFFFF000uLL) )
    {
      if ( v6 )
        KeBugCheckEx(0xDAu, 1uLL, (ULONG_PTR)Next, BugCheckParameter3, (ULONG_PTR)v6);
      if ( *((_QWORD *)&Next[1].Next + 1) != a3 )
        KeBugCheckEx(0xDAu, 2uLL, (ULONG_PTR)Next, *((_QWORD *)&Next[1].Next + 1), a3);
      if ( BugCheckParameter3 && (*(_WORD *)(BugCheckParameter3 + 10) & 0x200) == 0 )
      {
        v11 = *((_QWORD *)&Next[3].Next + 1);
        if ( v11 != *(_QWORD *)(BugCheckParameter3 + 48) )
          KeBugCheckEx(0xDAu, 4uLL, (ULONG_PTR)Next, v11, *(_QWORD *)(BugCheckParameter3 + 48));
        if ( !byte_14043BE70 )
        {
          if ( v10 != *(_QWORD *)(BugCheckParameter3 + 24) )
            KeBugCheckEx(0xDAu, 3uLL, (ULONG_PTR)Next, v10, *(_QWORD *)(BugCheckParameter3 + 24));
          v12 = *((_QWORD *)&Next[2].Next + 1);
          if ( v12 != *(_QWORD *)(BugCheckParameter3 + 32) )
            KeBugCheckEx(0xDAu, 5uLL, (ULONG_PTR)Next, v12, *(_QWORD *)(BugCheckParameter3 + 32));
        }
      }
      v13 = Next->Next;
      v14 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1);
      if ( *(&Next->Next->Next + 1) != Next || *v14 != Next )
        __fastfail(3u);
      *v14 = v13;
      v6 = Next;
      *((_QWORD *)&v13->Next + 1) = v14;
    }
    Next = Next->Next;
  }
  while ( Next != v8 );
  if ( !v6 )
  {
LABEL_16:
    if ( !byte_14043BD3D )
      KeBugCheckEx(0xDAu, 6uLL, BugCheckParameter3, v7, a3);
  }
  qword_14043C970 -= a3;
  --qword_14043C978;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v18);
  OldIrql = v18.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = (PSLIST_ENTRY)OldIrql;
  __writecr8(OldIrql);
  if ( v6 )
    return RtlpInterlockedPushEntrySList(&stru_14043BC40, v6);
  return result;
}
