/*
 * XREFs of FsRtlNotifyFilterChangeDirectory @ 0x1406A1DA0
 * Callers:
 *     FsRtlNotifyChangeDirectory @ 0x140817B50 (FsRtlNotifyChangeDirectory.c)
 *     FsRtlNotifyFullChangeDirectory @ 0x140817CE0 (FsRtlNotifyFullChangeDirectory.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     FsRtlNotifySetCancelRoutine @ 0x14011B06C (FsRtlNotifySetCancelRoutine.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406A26E8 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlIsNotifyOnList @ 0x1406A2C10 (FsRtlIsNotifyOnList.c)
 *     FsRtlCheckNotifyForDelete @ 0x140817AA0 (FsRtlCheckNotifyForDelete.c)
 */

void __stdcall FsRtlNotifyFilterChangeDirectory(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PVOID FsContext,
        PSTRING FullDirectoryName,
        BOOLEAN WatchTree,
        BOOLEAN IgnoreBuffer,
        ULONG CompletionFilter,
        PIRP NotifyIrp,
        PCHECK_FOR_TRAVERSE_ACCESS TraverseCallback,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PFILTER_REPORT_CHANGE FilterCallback)
{
  PVOID v12; // r9
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v16; // r10d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 IsNotifyOnList; // rax
  _QWORD *PoolWithTag; // rbx
  __int16 v20; // ax
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v22; // rdx
  struct _LIST_ENTRY *v23; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int16 v25; // cx

  v12 = FsContext;
  if ( NotifyList->Flink == NotifyList && !NotifyIrp )
    return;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
    v12 = FsContext;
  }
  LOBYTE(v16) = 1;
  ++*((_DWORD *)NotifySync + 16);
  if ( !NotifyIrp )
  {
    FsRtlCheckNotifyForDelete(NotifyList, v12);
    goto LABEL_36;
  }
  CurrentStackLocation = NotifyIrp->Tail.Overlay.CurrentStackLocation;
  NotifyIrp->IoStatus.Status = 0;
  NotifyIrp->IoStatus.Information = 0LL;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    goto LABEL_22;
  IsNotifyOnList = FsRtlIsNotifyOnList(NotifyList, v12);
  PoolWithTag = (_QWORD *)IsNotifyOnList;
  if ( IsNotifyOnList )
  {
    v20 = *(_WORD *)(IsNotifyOnList + 72);
    if ( (v20 & 4) == 0 )
    {
      if ( (v20 & 0x20) == 0 )
      {
        if ( ((unsigned __int8)v20 & (unsigned __int8)(v16 + 1)) != 0 && (v20 & 8) == 0 )
        {
          *((_WORD *)PoolWithTag + 36) = v20 & 0xFFFD;
          NotifyIrp->Tail.Overlay.CurrentStackLocation->Control |= v16;
          NotifyIrp->IoStatus.Status = 268;
          goto LABEL_23;
        }
        if ( *((_DWORD *)PoolWithTag + 26) && (v20 & 8) == 0 )
        {
          PoolWithTag[13] = 0LL;
          FsRtlNotifyCompleteIrp(NotifyIrp, 0);
          goto LABEL_36;
        }
        goto LABEL_11;
      }
      CurrentStackLocation->Control |= v16;
      NotifyIrp->IoStatus.Status = -1073741738;
LABEL_23:
      IofCompleteRequest(NotifyIrp, v16);
      goto LABEL_36;
    }
LABEL_22:
    CurrentStackLocation->Control |= v16;
    NotifyIrp->IoStatus.Status = 267;
    goto LABEL_23;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x98uLL, 0x4E725346u);
  memset(PoolWithTag, 0, 0x98uLL);
  *PoolWithTag = NotifySync;
  PoolWithTag[1] = FsContext;
  PoolWithTag[16] = CurrentStackLocation->FileObject->FsContext;
  PoolWithTag[2] = TraverseCallback;
  PoolWithTag[3] = SubjectContext;
  SubjectContext = 0LL;
  PoolWithTag[8] = FilterCallback;
  PoolWithTag[17] = FullDirectoryName;
  PoolWithTag[7] = PoolWithTag + 6;
  PoolWithTag[6] = PoolWithTag + 6;
  v16 = 1;
  if ( WatchTree )
    *((_WORD *)PoolWithTag + 36) |= 1u;
  if ( FullDirectoryName )
  {
    v25 = 2;
    if ( FullDirectoryName->Length < 2u || FullDirectoryName->Buffer[1] )
    {
      *((_BYTE *)PoolWithTag + 144) = 1;
      v25 = 1;
    }
    else
    {
      *((_BYTE *)PoolWithTag + 144) = 2;
    }
    if ( FullDirectoryName->Length == v25 )
      *((_WORD *)PoolWithTag + 36) |= 0x10u;
  }
  else
  {
    *((_BYTE *)PoolWithTag + 144) = 1;
  }
  *((_DWORD *)PoolWithTag + 19) = CompletionFilter;
  if ( !IgnoreBuffer )
    *((_DWORD *)PoolWithTag + 24) = CurrentStackLocation->Parameters.Read.Length;
  PoolWithTag[15] = NotifyIrp->Tail.Overlay.Thread->Process;
  v23 = (struct _LIST_ENTRY *)(PoolWithTag + 4);
  Blink = NotifyList->Blink;
  if ( Blink->Flink != NotifyList )
LABEL_35:
    __fastfail(3u);
  v23->Flink = NotifyList;
  PoolWithTag[5] = Blink;
  Blink->Flink = v23;
  NotifyList->Blink = v23;
  *((_DWORD *)PoolWithTag + 28) = 1;
  CurrentStackLocation = NotifyIrp->Tail.Overlay.CurrentStackLocation;
LABEL_11:
  NotifyIrp->IoStatus.Information = (ULONG_PTR)PoolWithTag;
  CurrentStackLocation->Control |= v16;
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&NotifyIrp->Tail.Overlay.ListEntry;
  v22 = (struct _LIST_ENTRY *)PoolWithTag[7];
  if ( v22->Flink != (struct _LIST_ENTRY *)(PoolWithTag + 6) )
    goto LABEL_35;
  p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(PoolWithTag + 6);
  NotifyIrp->Tail.Overlay.ListEntry.Blink = v22;
  v22->Flink = &p_ListEntry->ListEntry;
  PoolWithTag[7] = p_ListEntry;
  _InterlockedAdd((volatile signed __int32 *)PoolWithTag + 28, v16);
  FsRtlNotifySetCancelRoutine((__int64)NotifyIrp, 0LL);
LABEL_36:
  if ( (*((_DWORD *)NotifySync + 16))-- == 1 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
  if ( SubjectContext )
  {
    if ( FullDirectoryName )
    {
      SeReleaseSubjectContext(SubjectContext);
      ExFreePoolWithTag(SubjectContext, 0);
    }
  }
}
