/*
 * XREFs of FsRtlNotifyFilterChangeDirectoryLite @ 0x1406C2B30
 * Callers:
 *     <none>
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
 *     FsRtlNotifyInitializeSync @ 0x1406C2F30 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x1406EC370 (FsRtlNotifyUninitializeSync.c)
 *     FsRtlCheckNotifyForDeleteLite @ 0x140850424 (FsRtlCheckNotifyForDeleteLite.c)
 */

void __fastcall FsRtlNotifyFilterChangeDirectoryLite(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        char a4,
        int a5,
        PIRP Irp,
        __int64 a7,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        __int64 a9)
{
  PIRP v12; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int64 v14; // rax
  unsigned int v15; // r9d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 IsNotifyOnList; // rax
  _QWORD *PoolWithTag; // rbx
  __int16 v19; // ax
  __int16 v20; // cx
  unsigned int v21; // r8d
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  PSECURITY_SUBJECT_CONTEXT v26; // rbx
  PNOTIFY_SYNC NotifySync; // [rsp+98h] [rbp+10h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+18h]

  v28 = a3;
  v12 = Irp;
  if ( (_QWORD *)*a2 == a2 && !Irp )
    return;
  if ( !*a1 )
  {
    FsRtlNotifyInitializeSync(&NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync, 0LL) )
      FsRtlNotifyUninitializeSync(&NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  v14 = *a1;
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)a1);
    *(_QWORD *)(*a1 + 56) = CurrentThread;
    v14 = *a1;
  }
  LOBYTE(v15) = 1;
  ++*(_DWORD *)(v14 + 64);
  if ( !v12 )
  {
    FsRtlCheckNotifyForDeleteLite(a2);
    goto LABEL_33;
  }
  CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
  v12->IoStatus.Status = 0;
  v12->IoStatus.Information = 0LL;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    goto LABEL_26;
  IsNotifyOnList = FsRtlIsNotifyOnList(a2, v28);
  PoolWithTag = (_QWORD *)IsNotifyOnList;
  if ( !IsNotifyOnList )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x80uLL, 0x4E725346u);
    memset(PoolWithTag, 0, 0x80uLL);
    *((_WORD *)PoolWithTag + 36) |= 0x40u;
    *PoolWithTag = *a1;
    PoolWithTag[1] = v28;
    PoolWithTag[2] = a7;
    PoolWithTag[3] = SubjectContext;
    SubjectContext = 0LL;
    PoolWithTag[8] = a9;
    PoolWithTag[7] = PoolWithTag + 6;
    PoolWithTag[6] = PoolWithTag + 6;
    v15 = 1;
    if ( (a4 & 1) != 0 )
      *((_WORD *)PoolWithTag + 36) |= 1u;
    if ( (a4 & 4) != 0 )
      *((_WORD *)PoolWithTag + 36) |= 0x80u;
    *((_DWORD *)PoolWithTag + 19) = a5;
    if ( (a4 & 2) == 0 )
      *((_DWORD *)PoolWithTag + 24) = CurrentStackLocation->Parameters.Read.Length;
    PoolWithTag[15] = v12->Tail.Overlay.Thread->Process;
    v24 = PoolWithTag + 4;
    v25 = (_QWORD *)a2[1];
    if ( (_QWORD *)*v25 != a2 )
      __fastfail(3u);
    *v24 = a2;
    PoolWithTag[5] = v25;
    *v25 = v24;
    a2[1] = v24;
    *((_DWORD *)PoolWithTag + 28) = 1;
    CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
    goto LABEL_13;
  }
  v19 = *(_WORD *)(IsNotifyOnList + 72);
  if ( (v19 & 4) != 0 )
  {
LABEL_26:
    CurrentStackLocation->Control |= v15;
    v12->IoStatus.Status = 267;
    goto LABEL_27;
  }
  if ( (v19 & 0x20) != 0 )
  {
    CurrentStackLocation->Control |= v15;
    v12->IoStatus.Status = -1073741738;
    goto LABEL_27;
  }
  if ( (v19 & 2) != 0 )
  {
    v20 = v19 & 8;
    if ( (v19 & 8) != 0 )
      goto LABEL_12;
    *((_WORD *)PoolWithTag + 36) = v19 & 0xFFFD;
    v12->Tail.Overlay.CurrentStackLocation->Control |= v15;
    v12->IoStatus.Status = 268;
LABEL_27:
    IofCompleteRequest(v12, v15);
    goto LABEL_33;
  }
  v20 = v19 & 8;
LABEL_12:
  v21 = *((_DWORD *)PoolWithTag + 26);
  if ( !v21 || v20 )
  {
LABEL_13:
    v12->IoStatus.Information = (ULONG_PTR)PoolWithTag;
    CurrentStackLocation->Control |= v15;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v12->Tail.Overlay.ListEntry;
    v23 = (struct _LIST_ENTRY *)PoolWithTag[7];
    if ( v23->Flink != (struct _LIST_ENTRY *)(PoolWithTag + 6) )
      __fastfail(3u);
    p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(PoolWithTag + 6);
    v12->Tail.Overlay.ListEntry.Blink = v23;
    v23->Flink = &p_ListEntry->ListEntry;
    PoolWithTag[7] = p_ListEntry;
    _InterlockedAdd((volatile signed __int32 *)PoolWithTag + 28, v15);
    FsRtlNotifySetCancelRoutine((__int64)v12, 0LL);
    goto LABEL_33;
  }
  PoolWithTag[13] = 0LL;
  FsRtlNotifyCompleteIrp(v12, (__int64)PoolWithTag, v21, 0, 0);
LABEL_33:
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
  v26 = SubjectContext;
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(v26, 0);
  }
}
