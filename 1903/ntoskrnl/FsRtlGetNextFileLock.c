/*
 * XREFs of FsRtlGetNextFileLock @ 0x140282AE0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     RtlRealSuccessor @ 0x1401032A0 (RtlRealSuccessor.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x140103CF8 (FsRtlFindFirstOverlappingSharedNode.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x140104158 (FsRtlFindFirstOverlappingExclusiveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

PFILE_LOCK_INFO __stdcall FsRtlGetNextFileLock(PFILE_LOCK FileLock, BOOLEAN Restart)
{
  _QWORD *LockInformation; // rbx
  __int128 v4; // xmm0
  PRTL_SPLAY_LINKS LastReturnedLock; // rdi
  char v6; // r14
  PRTL_SPLAY_LINKS FirstOverlappingExclusiveNode; // rax
  _RTL_SPLAY_LINKS *v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r15
  __int32 v11; // r12d
  _RTL_SPLAY_LINKS *v12; // rsi
  _RTL_SPLAY_LINKS *v13; // r13
  __int64 v14; // rcx
  __int64 j; // rax
  __int128 v16; // xmm0
  _RTL_SPLAY_LINKS *FirstOverlappingSharedNode; // rax
  PRTL_SPLAY_LINKS v18; // rcx
  _RTL_SPLAY_LINKS *Parent; // rbx
  bool v20; // cf
  PRTL_SPLAY_LINKS v21; // rax
  _RTL_SPLAY_LINKS *v22; // rax
  __int64 v23; // rax
  __int64 i; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int128 v26; // xmm2
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  PFILE_LOCK_INFO result; // rax
  __int128 v30; // [rsp+38h] [rbp-51h] BYREF
  __m256i v31; // [rsp+48h] [rbp-41h] BYREF
  __int128 v32; // [rsp+68h] [rbp-21h]
  PRTL_SPLAY_LINKS Links; // [rsp+78h] [rbp-11h] BYREF
  __int128 v34; // [rsp+80h] [rbp-9h]
  __int128 v35; // [rsp+90h] [rbp+7h]
  PKSPIN_LOCK SpinLock; // [rsp+A0h] [rbp+17h]
  KIRQL v38; // [rsp+100h] [rbp+77h]
  char v39; // [rsp+108h] [rbp+7Fh] BYREF

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation )
    return 0LL;
  v4 = *(_OWORD *)&FileLock->LastReturnedLockInfo.StartingByte.LowPart;
  LastReturnedLock = (PRTL_SPLAY_LINKS)FileLock->LastReturnedLock;
  v6 = 0;
  SpinLock = LockInformation + 3;
  v34 = v4;
  v30 = v4;
  v32 = *(_OWORD *)&FileLock->LastReturnedLockInfo.ExclusiveLock;
  *(_OWORD *)v31.m256i_i8 = v32;
  v35 = *(_OWORD *)&FileLock->LastReturnedLockInfo.ProcessId;
  *(_OWORD *)&v31.m256i_u64[2] = v35;
  v38 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  if ( Restart )
  {
    v22 = (_RTL_SPLAY_LINKS *)LockInformation[5];
    if ( v22 )
    {
      do
      {
        LastReturnedLock = v22;
        v22 = v22->LeftChild;
      }
      while ( v22 );
      v34 = *(_OWORD *)&LastReturnedLock[1].Parent;
      v30 = v34;
      v32 = *(_OWORD *)&LastReturnedLock[1].RightChild;
      *(_OWORD *)v31.m256i_i8 = v32;
      v16 = *(_OWORD *)&LastReturnedLock[2].LeftChild;
      goto LABEL_56;
    }
    v23 = LockInformation[4];
    if ( !v23 )
      goto LABEL_63;
    for ( i = *(_QWORD *)(v23 + 8); i; i = *(_QWORD *)(i + 8) )
      v23 = i;
    LastReturnedLock = *(PRTL_SPLAY_LINKS *)(v23 - 24);
    goto LABEL_28;
  }
  if ( (_BYTE)v32 )
  {
    FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                        (_QWORD *)LockInformation[5],
                                                        (unsigned __int64 *)&v30,
                                                        &v31.m256i_u64[3],
                                                        &Links,
                                                        &v39);
    if ( FirstOverlappingExclusiveNode )
    {
      v9 = v31.m256i_i64[2];
      v10 = v31.m256i_i64[1];
      v11 = v31.m256i_i32[1];
      v12 = (_RTL_SPLAY_LINKS *)*((_QWORD *)&v30 + 1);
      v13 = (_RTL_SPLAY_LINKS *)v30;
      while ( LastReturnedLock != FirstOverlappingExclusiveNode
           || v13 != FirstOverlappingExclusiveNode[1].Parent
           || v12 != FirstOverlappingExclusiveNode[1].LeftChild
           || v11 != HIDWORD(FirstOverlappingExclusiveNode[1].RightChild)
           || (_RTL_SPLAY_LINKS *)v10 != FirstOverlappingExclusiveNode[2].Parent
           || (_RTL_SPLAY_LINKS *)v9 != FirstOverlappingExclusiveNode[2].LeftChild )
      {
        if ( FirstOverlappingExclusiveNode[1].LeftChild || v12 )
          goto LABEL_22;
        FirstOverlappingExclusiveNode = RtlRealSuccessor(FirstOverlappingExclusiveNode);
        if ( !FirstOverlappingExclusiveNode )
          goto LABEL_23;
      }
      v8 = FirstOverlappingExclusiveNode;
    }
    else
    {
      if ( v39 )
      {
        FirstOverlappingExclusiveNode = Links;
        goto LABEL_22;
      }
      v8 = Links;
      if ( !Links )
      {
LABEL_23:
        v14 = LockInformation[4];
        if ( !v14 )
        {
          v6 = 0;
          goto LABEL_63;
        }
        for ( j = *(_QWORD *)(v14 + 8); j; j = *(_QWORD *)(j + 8) )
          v14 = j;
        LastReturnedLock = *(PRTL_SPLAY_LINKS *)(v14 - 24);
LABEL_28:
        v34 = *(_OWORD *)&LastReturnedLock->LeftChild;
        v30 = v34;
        v32 = *(_OWORD *)&LastReturnedLock[1].Parent;
        *(_OWORD *)v31.m256i_i8 = v32;
        v16 = *(_OWORD *)&LastReturnedLock[1].RightChild;
LABEL_56:
        v35 = v16;
        v6 = 1;
        *(_OWORD *)&v31.m256i_u64[2] = v16;
        goto LABEL_63;
      }
    }
    FirstOverlappingExclusiveNode = RtlRealSuccessor(v8);
LABEL_22:
    if ( FirstOverlappingExclusiveNode )
    {
      LastReturnedLock = FirstOverlappingExclusiveNode;
      v34 = *(_OWORD *)&FirstOverlappingExclusiveNode[1].Parent;
      v30 = v34;
      v32 = *(_OWORD *)&FirstOverlappingExclusiveNode[1].RightChild;
      *(_OWORD *)v31.m256i_i8 = v32;
      v16 = *(_OWORD *)&FirstOverlappingExclusiveNode[2].LeftChild;
      goto LABEL_56;
    }
    goto LABEL_23;
  }
  FirstOverlappingSharedNode = (_RTL_SPLAY_LINKS *)FsRtlFindFirstOverlappingSharedNode(
                                                     LockInformation[4],
                                                     (unsigned __int64 *)&v30,
                                                     &v31.m256i_u64[3],
                                                     &Links,
                                                     &v39);
  if ( FirstOverlappingSharedNode )
  {
    v18 = FirstOverlappingSharedNode;
  }
  else
  {
    FirstOverlappingSharedNode = Links;
    if ( !Links )
      goto LABEL_63;
    v18 = Links;
    if ( !v39 )
    {
      FirstOverlappingSharedNode = RtlRealSuccessor(Links);
      v18 = FirstOverlappingSharedNode;
      if ( !FirstOverlappingSharedNode )
        goto LABEL_63;
    }
  }
  if ( v18 == (PRTL_SPLAY_LINKS)24 )
    goto LABEL_63;
  Parent = v18[-1].Parent;
  if ( !Parent )
    goto LABEL_49;
  while ( 1 )
  {
    if ( LastReturnedLock == Parent )
    {
      v20 = (_RTL_SPLAY_LINKS *)v30 < Parent->LeftChild;
      if ( (_RTL_SPLAY_LINKS *)v30 != Parent->LeftChild )
        goto LABEL_45;
      if ( (_RTL_SPLAY_LINKS *)*((_QWORD *)&v30 + 1) == Parent->RightChild
        && v31.m256i_i32[1] == HIDWORD(Parent[1].Parent)
        && *(_OWORD *)&v31.m256i_u64[1] == *(_OWORD *)&Parent[1].LeftChild )
      {
        break;
      }
    }
    v20 = (_RTL_SPLAY_LINKS *)v30 < Parent->LeftChild;
LABEL_45:
    if ( v20 )
      goto LABEL_48;
    Parent = Parent->Parent;
    if ( !Parent )
      goto LABEL_49;
  }
  Parent = Parent->Parent;
LABEL_48:
  if ( Parent )
  {
LABEL_52:
    LastReturnedLock = Parent;
    v34 = *(_OWORD *)&Parent->LeftChild;
    v30 = v34;
    v32 = *(_OWORD *)&Parent[1].Parent;
    *(_OWORD *)v31.m256i_i8 = v32;
    v16 = *(_OWORD *)&Parent[1].RightChild;
    goto LABEL_56;
  }
LABEL_49:
  v21 = RtlRealSuccessor(FirstOverlappingSharedNode);
  if ( v21 )
    Parent = v21[-1].Parent;
  if ( Parent )
    goto LABEL_52;
LABEL_63:
  KxReleaseSpinLock(SpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v38 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    v26 = *(_OWORD *)&v31.m256i_u64[2];
    v27 = *(_OWORD *)v31.m256i_i8;
    v28 = v30;
  }
  else
  {
    v26 = v35;
    v28 = v34;
    v27 = v32;
  }
  __writecr8(v38);
  if ( v6 )
  {
    result = &FileLock->LastReturnedLockInfo;
    FileLock->LastReturnedLock = LastReturnedLock;
    *(_OWORD *)&FileLock->LastReturnedLockInfo.StartingByte.LowPart = v28;
    *(_OWORD *)&FileLock->LastReturnedLockInfo.ExclusiveLock = v27;
    *(_OWORD *)&FileLock->LastReturnedLockInfo.ProcessId = v26;
    return result;
  }
  return 0LL;
}
