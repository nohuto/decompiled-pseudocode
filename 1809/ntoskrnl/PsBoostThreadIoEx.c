/*
 * XREFs of PsBoostThreadIoEx @ 0x1400BBED0
 * Callers:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400B9F90 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     PsEnterPriorityRegion @ 0x1400BBE50 (PsEnterPriorityRegion.c)
 *     PsLeavePriorityRegion @ 0x1400BBE80 (PsLeavePriorityRegion.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400E1528 (FsRtlpWaitForIoAtEof.c)
 *     FsRtlReleaseEofLock @ 0x140103180 (FsRtlReleaseEofLock.c)
 *     FsRtlpModifyThreadPriorities @ 0x140107E20 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpDoBoost @ 0x140107EE4 (FsRtlpDoBoost.c)
 *     ExReinitializeResourceLite @ 0x14010A190 (ExReinitializeResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14010A340 (ExpSetResourceOwnerPointerEx.c)
 *     KiAbThreadBoostIoPriority @ 0x14010ED94 (KiAbThreadBoostIoPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x14013A8A0 (KiAbThreadUnboostIoPriority.c)
 *     IoBoostThreadIo @ 0x140283160 (IoBoostThreadIo.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14031BBF0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x14031BCC0 (ExReleaseResourceAndLeavePriorityRegion.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlCaptureStackBackTrace @ 0x1400CCD30 (RtlCaptureStackBackTrace.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010EE5C (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x140128EA8 (KiAbThreadInsertList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PsBoostThreadIoEx(__int64 a1, char a2, char a3, void *a4)
{
  signed __int32 v4; // ebx
  KIRQL v5; // r13
  char v7; // bp
  PVOID *v10; // r12
  bool v11; // zf
  PVOID *PoolWithTag; // rax
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *v14; // rdi
  __int64 **v15; // r14
  __int64 *v16; // rcx
  __int64 **v17; // r14
  __int64 *v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rax
  PVOID **v21; // rcx
  __int64 v22; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v24; // rcx

  v4 = 0;
  v5 = 0;
  v7 = a3;
  v10 = 0LL;
  if ( PspAlwaysTrackIoBoosting )
  {
    v7 = 1;
  }
  else if ( !a3 )
  {
    goto LABEL_3;
  }
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x736F6F42u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    RtlCaptureStackBackTrace(1u, 0xAu, v10 + 2, 0LL);
    v10[12] = KeGetCurrentThread();
    v10[13] = a4;
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1848));
LABEL_3:
  if ( !a2 )
  {
    v4 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1800));
    if ( !v7 )
      goto LABEL_5;
    if ( !v10 )
      goto LABEL_29;
    v20 = (_QWORD *)(a1 + 1816);
    v21 = *(PVOID ***)(a1 + 1824);
    if ( *v21 != (PVOID *)(a1 + 1816) )
LABEL_40:
      __fastfail(3u);
    goto LABEL_39;
  }
  if ( *(_DWORD *)(a1 + 1800) )
  {
    v4 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 1800));
    if ( !v7 )
      goto LABEL_12;
    if ( !*(_DWORD *)(a1 + 1800) )
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0x736F6F42u);
      v15 = (__int64 **)(a1 + 1816);
      while ( 1 )
      {
        v16 = *v15;
        if ( *v15 == (__int64 *)v15 )
          break;
        v19 = *v16;
        if ( (__int64 **)v16[1] != v15 || *(__int64 **)(v19 + 8) != v16 )
          goto LABEL_40;
        *v15 = (__int64 *)v19;
        *(_QWORD *)(v19 + 8) = v15;
        ExFreePoolWithTag(v16, 0x736F6F42u);
      }
      v17 = (__int64 **)(a1 + 1832);
      while ( 1 )
      {
        v18 = *v17;
        if ( *v17 == (__int64 *)v17 )
          goto LABEL_29;
        v22 = *v18;
        if ( (__int64 **)v18[1] != v17 || *(__int64 **)(v22 + 8) != v18 )
          goto LABEL_40;
        *v17 = (__int64 *)v22;
        *(_QWORD *)(v22 + 8) = v17;
        ExFreePoolWithTag(v18, 0x736F6F42u);
      }
    }
    if ( v10 )
    {
      v20 = (_QWORD *)(a1 + 1832);
      v21 = *(PVOID ***)(a1 + 1840);
      if ( *v21 != (PVOID *)(a1 + 1832) )
        goto LABEL_40;
LABEL_39:
      *v10 = v20;
      v10[1] = v21;
      *v21 = v10;
      v20[1] = v10;
    }
  }
LABEL_29:
  if ( v7 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 1848));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v5);
  }
LABEL_12:
  if ( a2 )
  {
    v11 = v4 == 0;
    goto LABEL_6;
  }
LABEL_5:
  v11 = v4 == 1;
LABEL_6:
  if ( v11 && !a2 && *(_BYTE *)(a1 + 793) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v14 = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &v14->AbPropagateBoostsList, a1 + 1376) )
      KiAbQueueAutoBoostDpc(v14);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v24 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v24);
    }
    __writecr8(CurrentIrql);
  }
}
