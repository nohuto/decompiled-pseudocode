/*
 * XREFs of MiInsertPteTracker @ 0x1402CDCB0
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1400E5E24 (MiMapContiguousMemory.c)
 *     MmMapMdl @ 0x1402ADA50 (MmMapMdl.c)
 *     MmAllocateMappingAddress @ 0x1406FA580 (MmAllocateMappingAddress.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     RtlCaptureStackBackTrace @ 0x1400CCD30 (RtlCaptureStackBackTrace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1401C55B0 (RtlpInterlockedFlushSList.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

_SLIST_ENTRY *__fastcall MiInsertPteTracker(__int64 a1, int a2, char a3, char a4)
{
  PSLIST_ENTRY v8; // rdi
  PSLIST_ENTRY v9; // rax
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY *v11; // rbx
  _SLIST_ENTRY *result; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  _SLIST_ENTRY *v20; // rdx
  __int64 v21; // rbx
  char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG BackTraceHash; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-30h] BYREF

  if ( LOWORD(stru_14043BC40.Alignment) < 0xAu )
  {
    v8 = RtlpInterlockedPopEntrySList(&stru_14043BC40);
    goto LABEL_6;
  }
  v9 = RtlpInterlockedFlushSList(&stru_14043BC40);
  v8 = v9;
  if ( v9 )
  {
    Next = v9->Next;
    if ( v9->Next )
    {
      do
      {
        v11 = Next->Next;
        ExFreePoolWithTag(Next, 0);
        Next = v11;
      }
      while ( v11 );
    }
LABEL_6:
    if ( v8 )
      goto LABEL_9;
  }
  result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x79536D4Du);
  v8 = result;
  if ( !result )
  {
    byte_14043BD3D = 1;
    return result;
  }
LABEL_9:
  if ( !a2 )
  {
    v17 = (*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF;
    v18 = *(unsigned int *)(a1 + 40) + 4095LL;
    v8[1].Next = (_SLIST_ENTRY *)a1;
    v16 = v18 + v17;
    *((_QWORD *)&v8[2].Next + 1) = *(_QWORD *)(a1 + 32);
    LODWORD(v8[3].Next) = *(_DWORD *)(a1 + 44);
    HIDWORD(v8[3].Next) = *(_DWORD *)(a1 + 40);
    goto LABEL_14;
  }
  if ( a2 == 1 )
  {
    v14 = (*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF;
    v15 = *(_QWORD *)(a1 + 16) + 4095LL;
    v8[1].Next = (_SLIST_ENTRY *)1;
    v16 = v15 + v14;
LABEL_14:
    v13 = v16 >> 12;
    goto LABEL_15;
  }
  v13 = *(_QWORD *)(a1 + 16) >> 12;
  v8[1].Next = 0LL;
LABEL_15:
  v19 = v13 + 1;
  if ( (a3 & 2) == 0 )
    v19 = v13;
  *((_QWORD *)&v8[1].Next + 1) = v19;
  RtlCaptureStackBackTrace(1u, 7u, (PVOID *)&v8[4].Next + 1, &BackTraceHash);
  v20 = *(_SLIST_ENTRY **)(a1 + 24);
  v8[2].Next = v20;
  *((_QWORD *)&v8[3].Next + 1) = *(_QWORD *)(a1 + 48);
  LODWORD(v8[4].Next) = (4 * (a4 & 3)) | a3 & 1 | (__int64)v8[4].Next & 0xFFFFFFE0 | ((a3 & 2) != 0 ? 0x10 : 0);
  v21 = 40543LL * (unsigned int)((unsigned __int64)v20 >> 12);
  KeAcquireInStackQueuedSpinLock(&qword_14043BC50, &LockHandle);
  v22 = (char *)&unk_14043C870 + 16 * (((unsigned __int8)v21 ^ BYTE4(v21)) & 0xF);
  v23 = *(_QWORD *)v22;
  if ( *(char **)(*(_QWORD *)v22 + 8LL) != v22 )
    __fastfail(3u);
  *((_QWORD *)&v8->Next + 1) = v22;
  v8->Next = (_SLIST_ENTRY *)v23;
  *(_QWORD *)(v23 + 8) = v8;
  *(_QWORD *)v22 = v8;
  qword_14043C970 += v19;
  v24 = ++qword_14043C978;
  if ( qword_14043C978 > (unsigned __int64)qword_14043C980 )
    qword_14043C980 = v24;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = (_SLIST_ENTRY *)OldIrql;
  __writecr8(OldIrql);
  return result;
}
