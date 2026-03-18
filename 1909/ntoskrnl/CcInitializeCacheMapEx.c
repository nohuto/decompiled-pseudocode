/*
 * XREFs of CcInitializeCacheMapEx @ 0x14000D930
 * Callers:
 *     CcInitializeCacheMap @ 0x14013C920 (CcInitializeCacheMap.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopGetFileObjectExtension @ 0x14000A970 (IopGetFileObjectExtension.c)
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x14005A580 (PsGetPagePriorityThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400656F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     CcDeleteSharedCacheMap @ 0x14007FC90 (CcDeleteSharedCacheMap.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     PsReferencePartitionSafe @ 0x1400C5438 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x1400C5468 (PsDereferencePartition.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14011E8D0 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x14012013C (CcScheduleLazyWriteScan.c)
 *     CcInitializeVolumeCacheMap @ 0x140121C44 (CcInitializeVolumeCacheMap.c)
 *     DbgPrint @ 0x140126B50 (DbgPrint.c)
 *     MmDisableModifiedWriteOfSection @ 0x14012B6C0 (MmDisableModifiedWriteOfSection.c)
 *     FsRtlIsNtstatusExpected @ 0x14012F840 (FsRtlIsNtstatusExpected.c)
 *     CcCreatePartition @ 0x140190950 (CcCreatePartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CcDeletePartition @ 0x14027E980 (CcDeletePartition.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObDeleteCapturedInsertInfo @ 0x14063DD70 (ObDeleteCapturedInsertInfo.c)
 *     CcCreateVacbArray @ 0x1406CBFFC (CcCreateVacbArray.c)
 *     MmCreateCacheManagerSection @ 0x1406CEB58 (MmCreateCacheManagerSection.c)
 */

void __fastcall CcInitializeCacheMapEx(_BYTE *Object, __int128 *a2, char a3, __int64 a4, __int64 a5, unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // r12
  _DWORD *v8; // r14
  _KPROCESS *Process; // r15
  __int64 Partition; // r13
  __int128 v11; // xmm1
  unsigned __int64 v12; // rax
  int v13; // edi
  int v14; // eax
  unsigned __int8 CurrentIrql; // dl
  _DWORD *v16; // rbx
  _QWORD *FileObjectExtension; // rdx
  _KSPIN_LOCK_QUEUE *v18; // r8
  int v19; // eax
  unsigned int ActiveGroupsMask; // eax
  volatile __int64 *v21; // r15
  unsigned __int8 v22; // dl
  unsigned int v23; // eax
  __int16 v24; // cx
  int v25; // ecx
  __int64 v26; // rdx
  unsigned __int8 v27; // di
  __int64 v28; // rdx
  unsigned __int8 v29; // di
  _WORD *v30; // rdi
  int v31; // r14d
  unsigned __int8 v32; // dl
  unsigned __int8 v33; // dl
  int PagePriorityThread; // ecx
  _QWORD *v35; // rax
  int v36; // ecx
  _QWORD *v37; // rdx
  NTSTATUS v38; // r15d
  char v39; // r12
  int v40; // edi
  int v41; // esi
  __int64 v42; // rcx
  __int64 v43; // rdx
  unsigned __int8 v44; // bl
  __int64 v45; // rdx
  unsigned __int8 v46; // bl
  _DWORD *v47; // rax
  unsigned int v48; // eax
  NTSTATUS v49; // eax
  void *v50; // r15
  __int64 v51; // rcx
  __int64 v52; // r14
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rbx
  __int64 v56; // rdi
  _QWORD *v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned __int8 v63; // di
  __int64 v64; // rdx
  unsigned __int8 v65; // di
  bool v66; // zf
  __int64 v67; // rax
  int VacbArray; // eax
  struct _KEVENT *v69; // rcx
  __int64 v70; // rdx
  unsigned __int8 v71; // di
  __int64 v72; // rdx
  unsigned __int8 v73; // bl
  __int64 v74; // rax
  KIRQL v75; // r12
  __int64 v76; // rdx
  struct _KPRCB *v77; // rcx
  __int64 v78; // rdx
  unsigned __int8 v79; // r14
  struct _KPRCB *v80; // rcx
  __int64 v81; // rdx
  unsigned __int8 v82; // bl
  struct _KPRCB *v83; // rcx
  __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rdx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v89; // rax
  struct _KPRCB *v90; // rcx
  struct _KPRCB *v91; // rcx
  struct _KPRCB *v92; // rcx
  __int64 v93; // rdx
  unsigned __int8 v94; // di
  struct _KPRCB *v95; // rcx
  int v96; // edi
  char *PoolWithTag; // rax
  __int64 v98; // rdx
  unsigned __int8 v99; // di
  struct _KPRCB *v100; // rcx
  __int64 v101; // rdx
  unsigned __int8 v102; // di
  struct _KPRCB *v103; // rcx
  _QWORD *v104; // rax
  __int64 v105; // rdx
  unsigned __int8 v106; // di
  struct _KPRCB *v107; // rcx
  __int64 v108; // rdx
  unsigned __int8 v109; // di
  struct _KPRCB *v110; // rcx
  NTSTATUS v111; // edi
  struct _KPRCB *v112; // rcx
  struct _KPRCB *v113; // rcx
  __int64 v114; // rdx
  unsigned __int8 v115; // r14
  struct _KPRCB *v116; // rcx
  __int64 v117; // rdx
  unsigned __int8 v118; // r14
  struct _KPRCB *v119; // rcx
  unsigned int v120; // eax
  int v121; // eax
  struct _KPRCB *v122; // rcx
  struct _KEVENT *v123; // rcx
  __int64 v124; // rdx
  unsigned __int8 v125; // bl
  struct _KPRCB *v126; // rcx
  __int64 v127; // rdx
  unsigned __int8 v128; // bl
  struct _KPRCB *v129; // rcx
  unsigned __int64 v130; // rcx
  __int64 v131; // rdi
  struct _KPRCB *v132; // rcx
  struct _KPRCB *v133; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-99h] BYREF
  struct _KLOCK_QUEUE_HANDLE v135; // [rsp+48h] [rbp-81h] BYREF
  int v136; // [rsp+60h] [rbp-69h]
  unsigned int v137; // [rsp+64h] [rbp-65h]
  unsigned int v138; // [rsp+68h] [rbp-61h]
  PVOID P; // [rsp+70h] [rbp-59h]
  int v140; // [rsp+78h] [rbp-51h]
  PVOID Objecta; // [rsp+80h] [rbp-49h] BYREF
  PVOID v142; // [rsp+88h] [rbp-41h]
  unsigned __int128 v143; // [rsp+90h] [rbp-39h]
  __int64 v144; // [rsp+A0h] [rbp-29h]
  _KPROCESS *v145; // [rsp+A8h] [rbp-21h]
  struct _KTHREAD *v146; // [rsp+B0h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE v147; // [rsp+B8h] [rbp-11h] BYREF
  NTSTATUS Status; // [rsp+120h] [rbp+57h]

  CurrentThread = KeGetCurrentThread();
  v146 = CurrentThread;
  v137 = 0;
  v8 = 0LL;
  Process = CurrentThread->ApcState.Process;
  Partition = 0LL;
  memset(&v135, 0, sizeof(v135));
  memset(&LockHandle, 0, sizeof(LockHandle));
  P = 0LL;
  v136 = 0;
  v140 = 0;
  v142 = 0LL;
  v145 = Process;
  Status = 0;
  Objecta = 0LL;
  if ( CcDbgDisableDAX )
    v138 = a6 & 0xFFFFFFFE;
  else
    v138 = a6;
  v11 = *a2;
  v12 = *(_QWORD *)a2;
  v144 = *((_QWORD *)a2 + 2);
  v143 = __PAIR128__(*((unsigned __int64 *)&v11 + 1), v12);
  if ( !v12 )
  {
    LODWORD(v143) = 1;
    v12 = v143;
  }
  v13 = CurrentThread->MiscFlags & 0x400;
  if ( Object[75] )
  {
    *(_QWORD *)&v143 = v12 + 0xFFFFF;
    v14 = (v12 + 0xFFFFF) & 0xFFF00000;
  }
  else
  {
    *(_QWORD *)&v143 = v12 + 0x3FFFF;
    v14 = (v12 + 0x3FFFF) & 0xFFFC0000;
  }
  LODWORD(v143) = v14;
  if ( !*(_QWORD *)(*((_QWORD *)Object + 5) + 8LL) )
    goto LABEL_62;
  while ( 1 )
  {
    v135.LockQueue.Lock = &CcMasterLock;
    v135.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v135.OldIrql = CurrentIrql;
    KxAcquireQueuedSpinLock((__int64)&v135, (volatile __int64 *)&CcMasterLock);
    if ( *((_QWORD *)Object + 6) )
      break;
    v16 = *(_DWORD **)(*((_QWORD *)Object + 5) + 8LL);
    if ( v16 )
    {
      Partition = CcGetPartition(*(_QWORD *)(*((_QWORD *)Object + 5) + 8LL));
      FileObjectExtension = (_QWORD *)IopGetFileObjectExtension((__int64)Object, 8, 0LL);
      if ( !FileObjectExtension || *FileObjectExtension == *(_QWORD *)(Partition + 8) )
      {
        LockHandle.LockQueue.Next = v18;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(Partition + 128));
        if ( (*((_DWORD *)Object + 20) & 0x20) == 0 )
          v16[38] &= ~0x40u;
        v19 = v16[38];
        if ( (v19 & 0x200000) != 0 && v13 )
          v16[38] = v19 & 0xFFDFFFFF;
        ActiveGroupsMask = Process[1].ActiveGroupsMask;
        if ( ActiveGroupsMask )
          v16[128] = ActiveGroupsMask;
        goto LABEL_19;
      }
      LockHandle.LockQueue.Next = v18;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(Partition + 128));
      v85 = v16[1];
      if ( !v85 || v85 == v16[134] )
      {
        LOBYTE(v84) = 1;
        v38 = -1073741608;
        CcScheduleLazyWriteScan(Partition, v84, 0LL);
        v39 = 1;
      }
      else
      {
        v38 = -1073740277;
        v39 = 0;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
      OldIrql = v135.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v135.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v86);
      }
      __writecr8(OldIrql);
LABEL_243:
      v121 = 0;
LABEL_244:
      v96 = 0;
      v31 = 0;
      if ( v121 )
      {
        v8 = P;
        goto LABEL_246;
      }
LABEL_35:
      v40 = v31;
      v41 = v31;
      if ( v16 )
      {
        if ( !v31 )
        {
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v135);
          v31 = 1;
        }
        if ( Partition && !v40 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
          v41 = 1;
        }
        if ( !v140 && !v16[28] && v16[1] )
          CcInsertIntoCleanSharedCacheMapList(v16);
        v42 = *((_QWORD *)v16 + 34);
        if ( v42 )
        {
          do
          {
            v130 = v42 & 0xFFFFFFFFFFFFFFFEuLL;
            v131 = *(_QWORD *)v130;
            KeSetEvent((PRKEVENT)(v130 + 8), 0, 0);
            v42 = v131;
          }
          while ( v131 );
        }
        v16[38] &= ~0x10000u;
        *((_QWORD *)v16 + 34) = 0LL;
      }
      if ( v41 )
        goto LABEL_48;
      goto LABEL_50;
    }
    if ( v8 )
    {
      v16 = v8;
      v8 = 0LL;
      P = 0LL;
      v56 = *((_QWORD *)v16 + 66);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v56 + 128);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v56 + 128));
      v57 = *(_QWORD **)(v56 + 24);
      v58 = v16 + 34;
      v59 = v56 + 16;
      if ( *v57 != v59 )
        goto LABEL_231;
      *((_QWORD *)v16 + 18) = v57;
      *v58 = v59;
      *v57 = v58;
      *(_QWORD *)(v59 + 8) = v58;
      v60 = *((_QWORD *)Object + 5);
      v140 = 1;
      *(_QWORD *)(v60 + 8) = v16;
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
LABEL_19:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      Partition = CcGetPartition(v16);
      LockHandle.LockQueue.Next = 0LL;
      v21 = (volatile __int64 *)(Partition + 128);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
      v22 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      LockHandle.OldIrql = v22;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, v21);
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (v16[38] & 0x80000) != 0 )
      {
        DbgPrint("CC: Reusing shared cache map that is already marked for deletion!\n");
        __debugbreak();
      }
      v23 = v16[38] & 0xFFFFFFEF;
      v24 = v16[38] & 0xFFEF;
      v16[38] = v23;
      v25 = v24 & 0x100;
      if ( *((_QWORD *)v16 + 11) )
      {
        if ( !v25 )
        {
          ++v16[1];
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v27 = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            v112 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v112->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v112, v26);
          }
          __writecr8(v27);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
          v29 = v135.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v135.OldIrql < 2u )
            goto LABEL_213;
          goto LABEL_25;
        }
LABEL_177:
        if ( !*((_QWORD *)v16 + 22) )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456343u);
          *((_QWORD *)v16 + 22) = PoolWithTag;
          if ( !PoolWithTag )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v99 = LockHandle.OldIrql;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
            {
              v100 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v100->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v100, v98);
            }
            __writecr8(v99);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
            v102 = v135.OldIrql;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v135.OldIrql < 2u )
            {
              v103 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v103->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v103, v101);
            }
            __writecr8(v102);
LABEL_190:
            v38 = -1073741670;
LABEL_242:
            v39 = 0;
            goto LABEL_243;
          }
          *(_WORD *)PoolWithTag = 0;
          PoolWithTag[2] = 6;
          *((_DWORD *)PoolWithTag + 1) = 0;
          v104 = PoolWithTag + 8;
          v104[1] = v104;
          *v104 = v104;
        }
        ++v16[1];
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v106 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v107 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v107->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v107, v105);
        }
        __writecr8(v106);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
        v109 = v135.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v135.OldIrql < 2u )
        {
          v110 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v110->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v110, v108);
        }
        __writecr8(v109);
        KeWaitForSingleObject(*((PVOID *)v16 + 22), Executive, 0, 0, 0LL);
        v111 = v16[39];
        if ( v111 < 0 )
        {
          v38 = -1073741590;
          if ( FsRtlIsNtstatusExpected(v111) )
            v38 = v111;
          v96 = v136;
          v39 = 0;
LABEL_246:
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v135);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
          if ( v96 )
          {
            v123 = (struct _KEVENT *)*((_QWORD *)v16 + 22);
            if ( v123 )
              KeSetEvent(v123, 0, 0);
            v16[38] &= ~0x100u;
          }
          v66 = v16[1]-- == 1;
          if ( !v66 || (v16[38] & 0x20) != 0 || v16[28] )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v125 = LockHandle.OldIrql;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
            {
              v126 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v126->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v126, v124);
            }
            __writecr8(v125);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
            v128 = v135.OldIrql;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v135.OldIrql < 2u )
            {
              v129 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v129->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v129, v127);
            }
            __writecr8(v128);
          }
          else
          {
            CcDeleteSharedCacheMap(v16, &v135, &LockHandle, 0LL);
          }
LABEL_54:
          if ( v8 )
            ExFreePoolWithTag(v8, 0x63536343u);
          if ( v142 )
            ExFreePoolWithTag(v142, 0x63506343u);
          if ( Objecta )
            ObDereferenceObjectDeferDeleteWithTag(Objecta, 0x746C6644u);
          if ( v38 < 0 )
          {
            if ( v39 )
              KeDelayExecutionThread(0, 0, &Cc10Milliseconds);
            RtlRaiseStatus(v38);
          }
          return;
        }
      }
      else
      {
        if ( v25 )
          goto LABEL_177;
        ++v16[1];
        v16[38] = v23 | 0x100;
        v61 = *((_QWORD *)v16 + 22);
        if ( v61 )
        {
          *(_WORD *)v61 = 0;
          *(_BYTE *)(v61 + 2) = 6;
          *(_DWORD *)(v61 + 4) = 0;
          v89 = (_QWORD *)(v61 + 8);
          v89[1] = v89;
          *v89 = v89;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v63 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v90 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v90->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v90, v62);
        }
        __writecr8(v63);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
        v65 = v135.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v135.OldIrql < 2u )
        {
          v91 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v91->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v91, v64);
        }
        __writecr8(v65);
        v66 = *((_QWORD *)v16 + 21) == 0LL;
        v136 = 1;
        if ( !v66 )
        {
          v96 = v136;
          v38 = -1073741811;
          v39 = 0;
          goto LABEL_246;
        }
        if ( !Objecta )
          KeBugCheckEx(0x34u, 0x5FBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        *((_QWORD *)v16 + 21) = Objecta;
        v67 = *((_QWORD *)Object + 3);
        Objecta = 0LL;
        if ( (*(_BYTE *)(v67 + 6) & 1) == 0 && !*((_QWORD *)Object + 4) )
        {
          MmDisableModifiedWriteOfSection(*((_QWORD *)Object + 5));
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v135);
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
          LockHandle.LockQueue.Next = 0LL;
          KxAcquireQueuedSpinLock((__int64)&LockHandle, v21);
          v16[38] |= 0x200u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
          v71 = v135.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v135.OldIrql < 2u )
          {
            v92 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v92->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v92, v70);
          }
          __writecr8(v71);
        }
        VacbArray = CcCreateVacbArray(v16, v143);
        Status = VacbArray;
        if ( VacbArray < 0 )
        {
          v96 = v136;
          v38 = VacbArray;
          v39 = 0;
          goto LABEL_246;
        }
        if ( (v138 & 1) != 0 )
        {
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v135);
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
          LockHandle.LockQueue.Next = 0LL;
          KxAcquireQueuedSpinLock((__int64)&LockHandle, v21);
          v16[38] |= 0x40000000u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
          v94 = v135.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v135.OldIrql < 2u )
          {
            v95 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v95->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v95, v93);
          }
          __writecr8(v94);
        }
        KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v135);
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
        LockHandle.LockQueue.Next = 0LL;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, v21);
        v69 = (struct _KEVENT *)*((_QWORD *)v16 + 22);
        v16[38] &= ~0x100u;
        if ( v69 )
          KeSetEvent(v69, 0, 0);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
        v29 = v135.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v135.OldIrql < 2u )
        {
LABEL_213:
          v113 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v113->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v113, v28);
        }
LABEL_25:
        __writecr8(v29);
      }
      if ( v8 )
      {
        ExFreePoolWithTag(v8, 0x63536343u);
        P = 0LL;
      }
      v30 = v16 + 94;
      if ( *((_WORD *)v16 + 188) )
        goto LABEL_98;
      while ( 1 )
      {
        v135.LockQueue.Next = 0LL;
        v135.LockQueue.Lock = &CcMasterLock;
        v31 = 1;
        v32 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v32 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v135.OldIrql = v32;
        KxAcquireQueuedSpinLock((__int64)&v135, (volatile __int64 *)&CcMasterLock);
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
        LockHandle.LockQueue.Next = 0LL;
        v33 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v33 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        LockHandle.OldIrql = v33;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, v21);
        if ( *((_QWORD *)Object + 6) )
          break;
        if ( !*v30 )
          goto LABEL_33;
        if ( v142 )
        {
          v30 = v142;
          v142 = 0LL;
LABEL_33:
          memset(v30, 0, 0x78uLL);
          *((_QWORD *)v30 + 1) = Object;
          *v30 = 766;
          *((_DWORD *)v30 + 1) = 4095;
          PagePriorityThread = (unsigned __int8)PsGetPagePriorityThread(CurrentThread);
          v35 = v30 + 48;
          v36 = (*(_DWORD *)v30 ^ (PagePriorityThread << 18)) & 0x1C0000;
          *((_QWORD *)v30 + 10) = 0LL;
          *(_DWORD *)v30 ^= v36;
          v37 = (_QWORD *)*((_QWORD *)v16 + 29);
          if ( (_DWORD *)*v37 == v16 + 56 )
          {
            v38 = Status;
            v39 = 0;
            *v35 = v16 + 56;
            *((_QWORD *)v30 + 13) = v37;
            *v37 = v35;
            *((_QWORD *)v16 + 29) = v35;
            *((_QWORD *)Object + 6) = v30;
            goto LABEL_35;
          }
LABEL_231:
          __fastfail(3u);
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v115 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v116 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v116->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v116, v114);
        }
        __writecr8(v115);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
        v118 = v135.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v135.OldIrql < 2u )
        {
          v119 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v119->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v119, v117);
        }
        __writecr8(v118);
LABEL_98:
        v142 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x63506343u);
        if ( !v142 )
        {
          v121 = 1;
          v38 = -1073741670;
          v39 = 0;
          goto LABEL_244;
        }
      }
      v120 = v16[1];
      if ( v120 <= 1 )
        KeBugCheckEx(0x34u, 0x74BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v38 = Status;
      v16[1] = v120 - 1;
      v39 = 0;
LABEL_48:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v44 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v132 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v132->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v132, v43);
      }
      __writecr8(v44);
LABEL_50:
      if ( v31 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
        v46 = v135.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v135.OldIrql < 2u )
        {
          v133 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v133->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v133, v45);
        }
        __writecr8(v46);
      }
      v8 = P;
      goto LABEL_54;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
    v82 = v135.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v135.OldIrql < 2u )
    {
      v83 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v83->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v83, v81);
    }
    __writecr8(v82);
LABEL_62:
    v47 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x228uLL, 0x63536343u);
    v16 = v47;
    if ( !v47 )
      goto LABEL_278;
    memset(v47, 0, 0x228uLL);
    v48 = v137;
    P = v16;
    if ( (v138 & 1) != 0 )
    {
      v48 = v137 | 1;
      v137 |= 1u;
    }
    v49 = MmCreateCacheManagerSection(&Objecta, v143, v48, Object);
    v38 = v49;
    if ( v49 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v49) )
        v38 = -1073741590;
      goto LABEL_242;
    }
    ObDeleteCapturedInsertInfo(Objecta);
    v50 = 0LL;
    v51 = *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(**((_QWORD **)Object + 5) + 60LL) & 0x3FF));
    memset(&v147, 0, sizeof(v147));
    v52 = *(_QWORD *)(v51 + 168);
    Partition = *(_QWORD *)(v52 + 8);
    if ( !Partition )
    {
      v74 = CcCreatePartition(*(_QWORD *)(v51 + 168));
      Partition = v74;
      if ( !v74 )
        goto LABEL_68;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v74 + 128), &v147);
      v75 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      if ( *(_QWORD *)(v52 + 8) )
      {
        v50 = (void *)Partition;
        Partition = *(_QWORD *)(v52 + 8);
      }
      else
      {
        ++CcPartitionCount;
        *(_QWORD *)(v52 + 8) = Partition;
        *(_BYTE *)(Partition + 901) = 1;
        if ( (unsigned __int8)PsReferencePartitionSafe(v52) )
          PsDereferencePartition(v52);
        else
          *(_BYTE *)(Partition + 902) = 1;
      }
      KxReleaseSpinLock(&CcGlobalPartitionLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v75 < 2u )
      {
        v77 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v77->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v77, v76);
      }
      __writecr8(v75);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v147);
      v79 = v147.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v147.OldIrql < 2u )
      {
        v80 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v80->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v80, v78);
      }
      __writecr8(v79);
      if ( v50 )
        CcDeletePartition(v50);
      if ( !Partition )
        goto LABEL_190;
    }
    if ( *(_BYTE *)(Partition + 902) >= 2u )
      KeBugCheckEx(0x34u, 0x54EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
LABEL_68:
    if ( !Partition )
      goto LABEL_190;
    v53 = *((_QWORD *)&v143 + 1);
    Process = v145;
    *v16 = 36176639;
    *((_QWORD *)v16 + 12) = Object;
    *((_QWORD *)v16 + 1) = v53;
    v54 = v144;
    *((_QWORD *)v16 + 5) = v144;
    *((_QWORD *)v16 + 6) = v54;
    v16[128] = Process[1].ActiveGroupsMask;
    *((_QWORD *)v16 + 66) = Partition;
    Status = CcInitializeVolumeCacheMap(Object, v16 + 126);
    if ( Status < 0 )
LABEL_278:
      RtlRaiseStatus(-1073741670);
    v16[70] = 1;
    *((_QWORD *)v16 + 36) = 0LL;
    v16[74] = 0;
    *((_WORD *)v16 + 152) = 1;
    *((_BYTE *)v16 + 306) = 6;
    v16[77] = 0;
    *((_QWORD *)v16 + 40) = v16 + 78;
    *((_QWORD *)v16 + 39) = v16 + 78;
    *((_QWORD *)v16 + 13) = 0LL;
    if ( a3 )
      v16[38] |= 4u;
    if ( (*((_DWORD *)Object + 20) & 0x20) != 0 )
      v16[38] |= 0x40u;
    if ( !v13 )
      v16[38] |= 0x200000u;
    CurrentThread = v146;
    v8 = P;
    *((_QWORD *)v16 + 3) = v16 + 4;
    *((_QWORD *)v16 + 2) = v16 + 4;
    *((_QWORD *)v16 + 26) = a4;
    *((_QWORD *)v16 + 27) = a5;
    v55 = v16 + 56;
    v55[1] = v55;
    *v55 = v55;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
  v73 = v135.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v135.OldIrql < 2u )
  {
    v122 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v122->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v122, v72);
  }
  __writecr8(v73);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x63536343u);
}
