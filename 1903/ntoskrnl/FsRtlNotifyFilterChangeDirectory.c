/*
 * XREFs of FsRtlNotifyFilterChangeDirectory @ 0x1406C1F80
 * Callers:
 *     FsRtlNotifyChangeDirectory @ 0x140850470 (FsRtlNotifyChangeDirectory.c)
 *     FsRtlNotifyFullChangeDirectory @ 0x140850600 (FsRtlNotifyFullChangeDirectory.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlNotifySetCancelRoutine @ 0x14011B5F4 (FsRtlNotifySetCancelRoutine.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406C2924 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlIsNotifyOnList @ 0x1406C2E58 (FsRtlIsNotifyOnList.c)
 *     FsRtlCheckNotifyForDelete @ 0x1408503C4 (FsRtlCheckNotifyForDelete.c)
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
  __int16 v21; // cx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v23; // rdx
  struct _LIST_ENTRY *v24; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int16 v26; // cx

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
  if ( NotifyIrp )
  {
    CurrentStackLocation = NotifyIrp->Tail.Overlay.CurrentStackLocation;
    NotifyIrp->IoStatus.Status = 0;
    NotifyIrp->IoStatus.Information = 0LL;
    if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
      goto LABEL_23;
    IsNotifyOnList = FsRtlIsNotifyOnList(NotifyList, v12);
    PoolWithTag = (_QWORD *)IsNotifyOnList;
    if ( !IsNotifyOnList )
    {
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
        v26 = 2;
        if ( FullDirectoryName->Length < 2u || FullDirectoryName->Buffer[1] )
        {
          *((_BYTE *)PoolWithTag + 144) = 1;
          v26 = 1;
        }
        else
        {
          *((_BYTE *)PoolWithTag + 144) = 2;
        }
        if ( FullDirectoryName->Length == v26 )
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
      v24 = (struct _LIST_ENTRY *)(PoolWithTag + 4);
      Blink = NotifyList->Blink;
      if ( Blink->Flink != NotifyList )
        __fastfail(3u);
      v24->Flink = NotifyList;
      PoolWithTag[5] = Blink;
      Blink->Flink = v24;
      NotifyList->Blink = v24;
      *((_DWORD *)PoolWithTag + 28) = 1;
      CurrentStackLocation = NotifyIrp->Tail.Overlay.CurrentStackLocation;
      goto LABEL_12;
    }
    v20 = *(_WORD *)(IsNotifyOnList + 72);
    if ( (v20 & 4) != 0 )
    {
LABEL_23:
      CurrentStackLocation->Control |= v16;
      NotifyIrp->IoStatus.Status = 267;
    }
    else if ( (v20 & 0x20) != 0 )
    {
      CurrentStackLocation->Control |= v16;
      NotifyIrp->IoStatus.Status = -1073741738;
    }
    else
    {
      if ( ((unsigned __int8)v20 & (unsigned __int8)(v16 + 1)) == 0 )
      {
        v21 = v20 & 8;
LABEL_11:
        if ( *((_DWORD *)PoolWithTag + 26) && !v21 )
        {
          PoolWithTag[13] = 0LL;
          FsRtlNotifyCompleteIrp(NotifyIrp, 0);
          goto LABEL_38;
        }
LABEL_12:
        NotifyIrp->IoStatus.Information = (ULONG_PTR)PoolWithTag;
        CurrentStackLocation->Control |= v16;
        p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&NotifyIrp->Tail.Overlay.ListEntry;
        v23 = (struct _LIST_ENTRY *)PoolWithTag[7];
        if ( v23->Flink != (struct _LIST_ENTRY *)(PoolWithTag + 6) )
          __fastfail(3u);
        p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(PoolWithTag + 6);
        NotifyIrp->Tail.Overlay.ListEntry.Blink = v23;
        v23->Flink = &p_ListEntry->ListEntry;
        PoolWithTag[7] = p_ListEntry;
        _InterlockedAdd((volatile signed __int32 *)PoolWithTag + 28, v16);
        FsRtlNotifySetCancelRoutine((__int64)NotifyIrp, 0LL);
        goto LABEL_38;
      }
      v21 = v20 & 8;
      if ( (v20 & 8) != 0 )
        goto LABEL_11;
      *((_WORD *)PoolWithTag + 36) = v20 & 0xFFFD;
      NotifyIrp->Tail.Overlay.CurrentStackLocation->Control |= v16;
      NotifyIrp->IoStatus.Status = 268;
    }
    IofCompleteRequest(NotifyIrp, v16);
  }
  else
  {
    FsRtlCheckNotifyForDelete(NotifyList, v12);
  }
LABEL_38:
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
