/*
 * XREFs of KeSetEventBoostPriorityEx @ 0x1400C659C
 * Callers:
 *     IopReleaseFileObjectLock @ 0x14003B5C0 (IopReleaseFileObjectLock.c)
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     ExpReleaseFastMutexContended @ 0x1400C6530 (ExpReleaseFastMutexContended.c)
 *     FsRtlReleaseEofLock @ 0x1400EEBA0 (FsRtlReleaseEofLock.c)
 *     KeSetEventBoostPriority @ 0x1402A98C0 (KeSetEventBoostPriority.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140699658 (IopWaitAndAcquireFileObjectLock.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D290 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E290 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveBoostThread @ 0x140014690 (KiRemoveBoostThread.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14006A320 (KiTryUnwaitThread.c)
 *     KeAbPreWakeupThread @ 0x1400C6754 (KeAbPreWakeupThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x1402A469C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032D4A8 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSetEventBoostPriorityEx(__int64 a1, _QWORD *a2, unsigned int *a3, __int64 a4, char a5, char a6)
{
  _QWORD *v7; // r13
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v11; // rdi
  int v12; // r14d
  bool v13; // bl
  __int64 v14; // r8
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  char v16; // cl
  unsigned __int8 v17; // r8
  _QWORD *v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rcx
  char v22; // al
  bool v23; // zf
  char v24; // al
  __int64 v25; // rdi
  _QWORD *v26; // r13
  unsigned __int8 v27; // cl
  struct _KPRCB *v28; // rax
  _KTHREAD *CurrentThread; // r15
  __int64 v30; // r8
  __int64 v31; // r15
  int v32; // r8d
  __int64 *v33; // rdx
  unsigned __int8 v34; // [rsp+30h] [rbp-48h]
  _QWORD *v35; // [rsp+38h] [rbp-40h]
  __int64 v36; // [rsp+80h] [rbp+8h]

  v7 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v34 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(a1);
  *(_DWORD *)(a1 + 4) = 1;
  v11 = *(_QWORD **)(a1 + 8);
  v12 = 0;
  if ( v11 == (_QWORD *)(a1 + 8) )
    goto LABEL_3;
  while ( 1 )
  {
    v19 = (_QWORD *)*v11;
    v20 = (__int64)v11;
    v11 = v19;
    v35 = v19;
    v21 = *(_QWORD **)(v20 + 8);
    if ( v19[1] != v20 || *v21 != v20 )
LABEL_12:
      __fastfail(3u);
    *v21 = v19;
    v19[1] = v21;
    v22 = *(_BYTE *)(v20 + 16);
    if ( v22 != 1 )
    {
      if ( v22 != 2 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v20, 256LL, 0LL) )
          --v12;
        goto LABEL_53;
      }
      *(_BYTE *)(v20 + 17) = 5;
      v25 = *(_QWORD *)(v20 + 24);
      *(_QWORD *)v20 = 0LL;
      v26 = (_QWORD *)(v25 + 8);
      v27 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v28 = KeGetCurrentPrcb();
      v36 = (__int64)v28;
      CurrentThread = v28->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v30) = KeIsThreadRunning(v28->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v20, v30);
      }
      KiAcquireKobjectLockSafe(v25);
      if ( (_QWORD *)*v26 == v26
        || *(_DWORD *)(v25 + 40) >= *(_DWORD *)(v25 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v25 && CurrentThread->WaitReason == 15 )
      {
        v31 = v36;
      }
      else
      {
        v31 = v36;
        if ( KiWakeQueueWaiter(v36, (_QWORD *)v25, v20) )
        {
LABEL_49:
          _InterlockedAnd((volatile signed __int32 *)v25, 0xFFFFFF7F);
          v23 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v23 )
            goto LABEL_18;
          v11 = v35;
          v7 = a2;
          goto LABEL_53;
        }
      }
      v32 = *(_DWORD *)(v25 + 4);
      *(_DWORD *)(v25 + 4) = v32 + 1;
      v33 = *(__int64 **)(v25 + 32);
      if ( *v33 != v25 + 24 )
        goto LABEL_12;
      *(_QWORD *)v20 = v25 + 24;
      *(_QWORD *)(v20 + 8) = v33;
      *v33 = v20;
      *(_QWORD *)(v25 + 32) = v20;
      if ( !v32 && (_QWORD *)*v26 != v26 )
        KiWakeOtherQueueWaiters(v31, v25);
      goto LABEL_49;
    }
    if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v20, *(unsigned __int16 *)(v20 + 18), v7) )
    {
      v23 = (*(_DWORD *)(a1 + 4))-- == 1;
      if ( v23 )
        break;
    }
LABEL_53:
    if ( v11 == (_QWORD *)(a1 + 8) )
      goto LABEL_18;
  }
  ++v12;
LABEL_18:
  CurrentIrql = v34;
LABEL_3:
  if ( a2 )
    v13 = v12 > 0;
  else
    v13 = 0;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a6 & 1) != 0 )
  {
    v14 = *a3;
    if ( (_DWORD)v14 )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
        KeAbPreWakeupThread(&Next[-27], a4, v14);
    }
    v16 = a5;
    v17 = 1;
  }
  else
  {
    v24 = KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
    if ( a3 )
    {
      if ( *a3 )
      {
        if ( *(char *)a3 > v24 )
          v24 = *(_BYTE *)a3;
      }
      else
      {
        v13 = 0;
      }
    }
    v16 = v24;
    if ( !v13 )
      v16 = a5;
    v17 = v13 + 1;
  }
  return KiExitDispatcher((__int64)CurrentPrcb, 0LL, v17, v16, CurrentIrql);
}
