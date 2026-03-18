/*
 * XREFs of CcDeleteSharedCacheMap @ 0x14007FC90
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D930 (CcInitializeCacheMapEx.c)
 *     CcUninitializeCacheMap @ 0x14000E560 (CcUninitializeCacheMap.c)
 *     CcWriteBehindInternal @ 0x14007E5E0 (CcWriteBehindInternal.c)
 *     CcDeleteSectionsForPartition @ 0x14027EB34 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     CcDereferencePartition @ 0x14007E4D4 (CcDereferencePartition.c)
 *     ObFastReplaceObject @ 0x14007FED4 (ObFastReplaceObject.c)
 *     CcUninitializeVolumeCacheMap @ 0x14007FF84 (CcUninitializeVolumeCacheMap.c)
 *     CcUnmapAndPurge @ 0x14008027C (CcUnmapAndPurge.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400802F4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcDeleteMbcb @ 0x1401290E0 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x14016A918 (CcDeleteBcbs.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFile @ 0x1405D5DE0 (FsRtlReleaseFile.c)
 */

void __fastcall CcDeleteSharedCacheMap(
        char *P,
        PKLOCK_QUEUE_HANDLE LockHandle,
        PKLOCK_QUEUE_HANDLE a3,
        int a4,
        PFILE_OBJECT FileObject)
{
  __int64 Partition; // rbp
  char **v10; // rdx
  PVOID *v11; // rax
  __int64 v12; // rdx
  char **v13; // rcx
  __int64 v14; // rdx
  unsigned __int8 OldIrql; // bl
  unsigned __int8 v16; // bl
  void *v17; // rcx
  void *v18; // rax
  __int64 v19; // rcx
  char *v20; // rcx
  char *v21; // rcx
  char *v22; // rcx
  unsigned __int64 v23; // rcx
  __int64 v24; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v26; // rcx

  Partition = CcGetPartition(P);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(Partition + 904)) <= 1 )
    __fastfail(0xEu);
  v10 = (char **)*((_QWORD *)P + 17);
  v11 = (PVOID *)*((_QWORD *)P + 18);
  if ( v10[1] != P + 136 || *v11 != P + 136 )
    goto LABEL_45;
  *v11 = v10;
  v10[1] = (char *)v11;
  if ( (*((_DWORD *)P + 38) & 0x3000000) != 0 )
  {
    v12 = *((_QWORD *)P + 15);
    v13 = (char **)*((_QWORD *)P + 16);
    if ( *(char **)(v12 + 8) == P + 120 && *v13 == P + 120 )
    {
      *v13 = (char *)v12;
      *(_QWORD *)(v12 + 8) = v13;
      goto LABEL_8;
    }
LABEL_45:
    __fastfail(3u);
  }
LABEL_8:
  *(_QWORD *)(*(_QWORD *)((*((_QWORD *)P + 12) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) = 0LL;
  *((_DWORD *)P + 38) |= 0x80020u;
  if ( !LockHandle && !*(_BYTE *)(Partition + 902) )
    KeBugCheckEx(0x34u, 0xDADuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
  OldIrql = a3->OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( LockHandle )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
    v16 = LockHandle->OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
    {
      v26 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v26);
    }
    __writecr8(v16);
  }
  if ( *((char **)P + 2) != P + 16 )
    CcDeleteBcbs(P);
  LOBYTE(v14) = *((_QWORD *)P + 1) >= 0x100000LL;
  CcUnmapAndPurge(P, v14);
  if ( a4 )
  {
    FsRtlReleaseFile(FileObject);
    CcDereferenceSharedCacheMapFileObject(P, FileObject);
  }
  v17 = (void *)*((_QWORD *)P + 21);
  if ( v17 )
  {
    ObfDereferenceObject(v17);
    *((_QWORD *)P + 21) = 0LL;
  }
  if ( *((_QWORD *)P + 20) )
    CcDeleteMbcb(P);
  CcUninitializeVolumeCacheMap(*((PVOID *)P + 63));
  v18 = (void *)ObFastReplaceObject(P + 96, 0LL);
  ObfDereferenceObject(v18);
  v19 = *((_QWORD *)P + 34);
  if ( v19 )
  {
    do
    {
      v23 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
      v24 = *(_QWORD *)v23;
      KeSetEvent((PRKEVENT)(v23 + 8), 0, 0);
      v19 = v24;
    }
    while ( v24 );
  }
  v20 = (char *)*((_QWORD *)P + 11);
  if ( v20 != P + 56 && v20 )
    ExFreePoolWithTag(v20, 0);
  v21 = (char *)*((_QWORD *)P + 22);
  if ( v21 && v21 != P + 344 )
    ExFreePoolWithTag(v21, 0);
  v22 = (char *)*((_QWORD *)P + 23);
  if ( v22 && v22 != P + 344 )
    ExFreePoolWithTag(v22, 0);
  CcDereferencePartition(Partition);
  ExFreePoolWithTag(P, 0);
}
