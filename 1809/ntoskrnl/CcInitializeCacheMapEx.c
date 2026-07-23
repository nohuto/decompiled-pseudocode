/*
 * XREFs of CcInitializeCacheMapEx @ 0x1400ABF90
 * Callers:
 *     CcInitializeCacheMap @ 0x14013A800 (CcInitializeCacheMap.c)
 * Callees:
 *     MmDisableModifiedWriteOfSection @ 0x140021D70 (MmDisableModifiedWriteOfSection.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     CcDeleteSharedCacheMap @ 0x14007C260 (CcDeleteSharedCacheMap.c)
 *     CcInitializeVolumeCacheMap @ 0x14007CB1C (CcInitializeVolumeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x14007EEB8 (CcScheduleLazyWriteScan.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x140090C28 (PsReferencePartitionSafe.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     PsGetPagePriorityThread @ 0x1400B5B20 (PsGetPagePriorityThread.c)
 *     IopGetFileObjectExtension @ 0x1400B78B0 (IopGetFileObjectExtension.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF8F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14011BA6C (CcInsertIntoCleanSharedCacheMapList.c)
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x14012F320 (FsRtlIsNtstatusExpected.c)
 *     CcCreatePartition @ 0x14018A69C (CcCreatePartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CcDeletePartition @ 0x14026B390 (CcDeletePartition.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObDeleteCapturedInsertInfo @ 0x1405B8BB0 (ObDeleteCapturedInsertInfo.c)
 *     MmCreateCacheManagerSection @ 0x1405DE6DC (MmCreateCacheManagerSection.c)
 *     CcCreateVacbArray @ 0x1406A3CD8 (CcCreateVacbArray.c)
 */

void __fastcall CcInitializeCacheMapEx(_BYTE *Object, __int128 *a2, char a3, __int64 a4, __int64 a5, unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v8; // r15d
  __int64 v9; // r13
  _KPROCESS *Process; // r14
  __int128 v11; // xmm1
  unsigned __int64 v12; // rax
  int v13; // edi
  int v14; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rbx
  void *v17; // r12
  NTSTATUS v18; // eax
  NTSTATUS v19; // r15d
  void *v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rbx
  unsigned __int8 CurrentIrql; // dl
  __int64 v27; // rdi
  void *v28; // r14
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  unsigned __int8 v33; // dl
  unsigned int v34; // eax
  __int16 v35; // cx
  int v36; // ecx
  __int64 v37; // rax
  unsigned __int8 v38; // di
  unsigned __int8 v39; // di
  bool v40; // zf
  __int64 v41; // rax
  unsigned __int8 v42; // di
  int VacbArray; // eax
  unsigned __int8 v44; // dl
  struct _KEVENT *v45; // rcx
  unsigned __int8 v46; // di
  _WORD *v47; // rdi
  int v48; // r14d
  unsigned __int8 v49; // dl
  unsigned __int8 v50; // dl
  int PagePriorityThread; // ecx
  _QWORD *v52; // rax
  int v53; // ecx
  _QWORD *v54; // rdx
  int v55; // edi
  int v56; // esi
  __int64 v57; // rcx
  unsigned __int8 v58; // bl
  unsigned __int8 v59; // bl
  char v60; // si
  __int64 v61; // r9
  _QWORD *FileObjectExtension; // rdx
  _KSPIN_LOCK_QUEUE *v63; // r8
  int v64; // eax
  unsigned int v65; // eax
  unsigned __int8 v66; // di
  unsigned __int8 v67; // bl
  __int64 Partition; // rax
  KIRQL v69; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 OldIrql; // r14
  struct _KPRCB *v72; // rcx
  unsigned __int8 v73; // bl
  struct _KPRCB *v74; // rcx
  int v75; // eax
  unsigned __int8 v76; // di
  struct _KPRCB *v77; // rcx
  _QWORD *v78; // rax
  struct _KPRCB *v79; // rcx
  struct _KPRCB *v80; // rcx
  struct _KPRCB *v81; // rcx
  unsigned __int8 v82; // di
  struct _KPRCB *v83; // rcx
  int v84; // edi
  char *v85; // rax
  unsigned __int8 v86; // di
  struct _KPRCB *v87; // rcx
  unsigned __int8 v88; // di
  struct _KPRCB *v89; // rcx
  _QWORD *v90; // rax
  unsigned __int8 v91; // di
  struct _KPRCB *v92; // rcx
  unsigned __int8 v93; // di
  struct _KPRCB *v94; // rcx
  NTSTATUS v95; // edi
  struct _KPRCB *v96; // rcx
  struct _KPRCB *v97; // rcx
  unsigned __int8 v98; // r14
  struct _KPRCB *v99; // rcx
  unsigned __int8 v100; // r14
  struct _KPRCB *v101; // rcx
  unsigned int v102; // eax
  int v103; // eax
  struct _KPRCB *v104; // rcx
  struct _KEVENT *v105; // rcx
  unsigned __int8 v106; // bl
  struct _KPRCB *v107; // rcx
  unsigned __int8 v108; // bl
  struct _KPRCB *v109; // rcx
  unsigned __int64 v110; // rcx
  __int64 v111; // rdi
  struct _KPRCB *v112; // rcx
  struct _KPRCB *v113; // rcx
  _QWORD *P; // [rsp+30h] [rbp-99h]
  struct _KLOCK_QUEUE_HANDLE v115; // [rsp+38h] [rbp-91h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-79h] BYREF
  int v117; // [rsp+68h] [rbp-61h]
  int v118; // [rsp+6Ch] [rbp-5Dh]
  unsigned int v119; // [rsp+70h] [rbp-59h]
  unsigned int v120; // [rsp+74h] [rbp-55h]
  int v121; // [rsp+78h] [rbp-51h]
  PVOID Objecta; // [rsp+80h] [rbp-49h] BYREF
  PVOID v123; // [rsp+88h] [rbp-41h]
  unsigned __int128 v124; // [rsp+90h] [rbp-39h]
  __int64 v125; // [rsp+A0h] [rbp-29h]
  _KPROCESS *v126; // [rsp+A8h] [rbp-21h]
  struct _KTHREAD *v127; // [rsp+B0h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE v128; // [rsp+B8h] [rbp-11h] BYREF
  char v129; // [rsp+120h] [rbp+57h]
  NTSTATUS Status; // [rsp+128h] [rbp+5Fh]

  CurrentThread = KeGetCurrentThread();
  v120 = 0;
  v8 = 0;
  P = 0LL;
  v9 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v126 = Process;
  v118 = 0;
  v117 = 0;
  v121 = 0;
  v123 = 0LL;
  v127 = CurrentThread;
  Status = 0;
  Objecta = 0LL;
  v129 = 0;
  if ( CcDbgDisableDAX )
    v119 = a6 & 0xFFFFFFFE;
  else
    v119 = a6;
  v11 = *a2;
  v12 = *(_QWORD *)a2;
  v125 = *((_QWORD *)a2 + 2);
  v124 = __PAIR128__(*((unsigned __int64 *)&v11 + 1), v12);
  if ( !v12 )
  {
    LODWORD(v124) = 1;
    v12 = v124;
  }
  v13 = CurrentThread->MiscFlags & 0x400;
  if ( Object[75] )
  {
    *(_QWORD *)&v124 = v12 + 0xFFFFF;
    v14 = (v12 + 0xFFFFF) & 0xFFF00000;
  }
  else
  {
    *(_QWORD *)&v124 = v12 + 0x3FFFF;
    v14 = (v12 + 0x3FFFF) & 0xFFFC0000;
  }
  LODWORD(v124) = v14;
  if ( *(_QWORD *)(*((_QWORD *)Object + 5) + 8LL) )
    goto LABEL_23;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x220uLL, 0x63536343u);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
LABEL_281:
      RtlRaiseStatus(-1073741670);
    memset(PoolWithTag, 0, 0x220uLL);
    v17 = v16;
    P = v16;
    if ( (v119 & 1) != 0 )
    {
      v8 |= 1u;
      v120 = v8;
    }
    v18 = MmCreateCacheManagerSection(&Objecta, v124, v8, Object);
    v19 = v18;
    if ( v18 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v18) )
        v19 = -1073741590;
      goto LABEL_246;
    }
    ObDeleteCapturedInsertInfo(Objecta);
    v20 = 0LL;
    v21 = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(**((_QWORD **)Object + 5) + 60LL) & 0x3FF));
    v22 = *(_QWORD *)(v21 + 168);
    v9 = *(_QWORD *)(v22 + 8);
    if ( !v9 )
    {
      Partition = CcCreatePartition(*(_QWORD *)(v21 + 168));
      v9 = Partition;
      if ( !Partition )
        goto LABEL_14;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v128);
      v69 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      if ( *(_QWORD *)(v22 + 8) )
      {
        v20 = (void *)v9;
        v9 = *(_QWORD *)(v22 + 8);
      }
      else
      {
        ++CcPartitionCount;
        *(_QWORD *)(v22 + 8) = v9;
        *(_BYTE *)(v9 + 901) = 1;
        if ( PsReferencePartitionSafe(v22) )
          PsDereferencePartition(v22);
        else
          *(_BYTE *)(v9 + 902) = 1;
      }
      KxReleaseSpinLock(&CcGlobalPartitionLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v69 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v69);
      KxReleaseQueuedSpinLock(&v128);
      OldIrql = v128.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v128.OldIrql < 2u )
      {
        v72 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v72->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v72);
      }
      __writecr8(OldIrql);
      if ( v20 )
        CcDeletePartition(v20);
      v17 = v16;
      if ( !v9 )
      {
LABEL_127:
        v19 = -1073741670;
LABEL_246:
        v60 = 0;
LABEL_247:
        v103 = v117;
LABEL_248:
        v84 = 0;
        v48 = 0;
        if ( !v103 )
        {
LABEL_59:
          v55 = v48;
          v56 = v48;
          if ( v16 )
          {
            if ( !v48 )
            {
              KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
              v48 = 1;
            }
            if ( v9 && !v55 )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 128), &v115);
              v56 = 1;
            }
            if ( !v121 && !v16[28] && v16[1] )
              CcInsertIntoCleanSharedCacheMapList(v16);
            v57 = *((_QWORD *)v16 + 34);
            if ( v57 )
            {
              do
              {
                v110 = v57 & 0xFFFFFFFFFFFFFFFEuLL;
                v111 = *(_QWORD *)v110;
                KeSetEvent((PRKEVENT)(v110 + 8), 0, 0);
                v57 = v111;
              }
              while ( v111 );
            }
            v16[38] &= ~0x10000u;
            *((_QWORD *)v16 + 34) = 0LL;
          }
          if ( !v56 )
            goto LABEL_71;
          goto LABEL_69;
        }
        goto LABEL_249;
      }
    }
    if ( *(_BYTE *)(v9 + 902) >= 2u )
      KeBugCheckEx(0x34u, 0x54EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
LABEL_14:
    if ( !v9 )
      goto LABEL_127;
    v23 = *((_QWORD *)&v124 + 1);
    Process = v126;
    *v16 = 35652351;
    *((_QWORD *)v16 + 12) = Object;
    *((_QWORD *)v16 + 1) = v23;
    v24 = v125;
    *((_QWORD *)v16 + 5) = v125;
    *((_QWORD *)v16 + 6) = v24;
    v16[128] = Process[1].ThreadSeed[1];
    *((_QWORD *)v16 + 66) = v9;
    Status = CcInitializeVolumeCacheMap((__int64)Object, (__int64 **)v16 + 63);
    if ( Status < 0 )
      goto LABEL_281;
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
    CurrentThread = v127;
    v8 = v120;
    *((_QWORD *)v16 + 3) = v16 + 4;
    *((_QWORD *)v16 + 2) = v16 + 4;
    *((_QWORD *)v16 + 26) = a4;
    *((_QWORD *)v16 + 27) = a5;
    v25 = v16 + 56;
    v25[1] = v25;
    *v25 = v25;
LABEL_23:
    LockHandle.LockQueue.Lock = &CcMasterLock;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    LockHandle.OldIrql = CurrentIrql;
    KxAcquireQueuedSpinLock(&LockHandle);
    if ( *((_QWORD *)Object + 6) )
      break;
    v16 = *(_DWORD **)(*((_QWORD *)Object + 5) + 8LL);
    if ( v16 )
    {
      v9 = CcGetPartition(*(_QWORD *)(*((_QWORD *)Object + 5) + 8LL));
      FileObjectExtension = (_QWORD *)IopGetFileObjectExtension(Object, 8LL, 0LL, v61);
      if ( FileObjectExtension && *FileObjectExtension != *(_QWORD *)(v9 + 8) )
      {
        v115.LockQueue.Next = v63;
        v115.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 128);
        KxAcquireQueuedSpinLock(&v115);
        v75 = v16[1];
        if ( !v75 || v75 == v16[134] )
        {
          v19 = -1073741608;
          CcScheduleLazyWriteScan(v9, 1, 0);
          v60 = 1;
          v129 = 1;
        }
        else
        {
          v60 = 0;
          v19 = -1073740277;
        }
        KxReleaseQueuedSpinLock(&v115);
        KxReleaseQueuedSpinLock(&LockHandle);
        v76 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v77 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v77->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v77);
        }
        __writecr8(v76);
        v17 = P;
        goto LABEL_247;
      }
      v115.LockQueue.Next = v63;
      v115.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 128);
      KxAcquireQueuedSpinLock(&v115);
      if ( (*((_DWORD *)Object + 20) & 0x20) == 0 )
        v16[38] &= ~0x40u;
      v64 = v16[38];
      if ( (v64 & 0x200000) != 0 && v13 )
        v16[38] = v64 & 0xFFDFFFFF;
      v65 = Process[1].ThreadSeed[1];
      if ( v65 )
        v16[128] = v65;
      v28 = P;
LABEL_29:
      KxReleaseQueuedSpinLock(&v115);
      v9 = CcGetPartition(v16);
      v115.LockQueue.Next = 0LL;
      v115.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 128);
      v33 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v33 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v115.OldIrql = v33;
      KxAcquireQueuedSpinLock(&v115);
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (v16[38] & 0x80000) != 0 )
      {
        DbgPrint("CC: Reusing shared cache map that is already marked for deletion!\n");
        __debugbreak();
      }
      v34 = v16[38] & 0xFFFFFFEF;
      v35 = v16[38] & 0xFFEF;
      v16[38] = v34;
      v36 = v35 & 0x100;
      if ( *((_QWORD *)v16 + 11) )
      {
        if ( !v36 )
        {
          ++v16[1];
          KxReleaseQueuedSpinLock(&v115);
          v66 = v115.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v115.OldIrql < 2u )
          {
            v96 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v96->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v96);
          }
          __writecr8(v66);
          KxReleaseQueuedSpinLock(&LockHandle);
          v46 = LockHandle.OldIrql;
          if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || LockHandle.OldIrql >= 2u )
            goto LABEL_49;
LABEL_217:
          v97 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v97->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v97);
LABEL_49:
          __writecr8(v46);
LABEL_50:
          if ( v28 )
          {
            ExFreePoolWithTag(v28, 0x63536343u);
            P = 0LL;
          }
          v47 = v16 + 94;
          if ( *((_WORD *)v16 + 188) )
            goto LABEL_100;
          while ( 1 )
          {
            LockHandle.LockQueue.Next = 0LL;
            LockHandle.LockQueue.Lock = &CcMasterLock;
            v48 = 1;
            v49 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            LockHandle.OldIrql = v49;
            KxAcquireQueuedSpinLock(&LockHandle);
            v115.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 128);
            v115.LockQueue.Next = 0LL;
            v50 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v50 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v115.OldIrql = v50;
            KxAcquireQueuedSpinLock(&v115);
            if ( *((_QWORD *)Object + 6) )
              break;
            if ( !*v47 )
              goto LABEL_57;
            if ( v123 )
            {
              v47 = v123;
              v123 = 0LL;
LABEL_57:
              memset(v47, 0, 0x78uLL);
              *((_QWORD *)v47 + 1) = Object;
              *v47 = 766;
              *((_DWORD *)v47 + 1) = 4095;
              PagePriorityThread = (unsigned __int8)PsGetPagePriorityThread(CurrentThread);
              v52 = v47 + 48;
              v53 = (*(_DWORD *)v47 ^ (PagePriorityThread << 18)) & 0x1C0000;
              *((_QWORD *)v47 + 10) = 0LL;
              *(_DWORD *)v47 ^= v53;
              v54 = (_QWORD *)*((_QWORD *)v16 + 29);
              if ( (_DWORD *)*v54 == v16 + 56 )
              {
                v17 = P;
                v19 = Status;
                *v52 = v16 + 56;
                *((_QWORD *)v47 + 13) = v54;
                *v54 = v52;
                *((_QWORD *)v16 + 29) = v52;
                *((_QWORD *)Object + 6) = v47;
                goto LABEL_59;
              }
LABEL_235:
              __fastfail(3u);
            }
            KxReleaseQueuedSpinLock(&v115);
            v98 = v115.OldIrql;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v115.OldIrql < 2u )
            {
              v99 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v99->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v99);
            }
            __writecr8(v98);
            KxReleaseQueuedSpinLock(&LockHandle);
            v100 = LockHandle.OldIrql;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
            {
              v101 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v101->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v101);
            }
            __writecr8(v100);
LABEL_100:
            v123 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x63506343u);
            if ( !v123 )
            {
              v17 = P;
              v103 = 1;
              v19 = -1073741670;
              v60 = 0;
              goto LABEL_248;
            }
          }
          v102 = v16[1];
          if ( v102 <= 1 )
            KeBugCheckEx(0x34u, 0x743uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          v17 = P;
          v19 = Status;
          v16[1] = v102 - 1;
LABEL_69:
          KxReleaseQueuedSpinLock(&v115);
          v58 = v115.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v115.OldIrql < 2u )
          {
            v112 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v112->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v112);
          }
          __writecr8(v58);
LABEL_71:
          if ( v48 )
          {
            KxReleaseQueuedSpinLock(&LockHandle);
            v59 = LockHandle.OldIrql;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
            {
              v113 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v113->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v113);
            }
            __writecr8(v59);
          }
          v60 = v129;
LABEL_75:
          if ( v17 )
            ExFreePoolWithTag(v17, 0x63536343u);
          if ( v123 )
            ExFreePoolWithTag(v123, 0x63506343u);
          if ( Objecta )
            ObDereferenceObjectDeferDeleteWithTag(Objecta, 0x746C6644u);
          if ( v19 < 0 )
          {
            if ( v60 )
              KeDelayExecutionThread(0, 0, &Cc10Milliseconds);
            RtlRaiseStatus(v19);
          }
          return;
        }
      }
      else if ( !v36 )
      {
        ++v16[1];
        v16[38] = v34 | 0x100;
        v37 = *((_QWORD *)v16 + 22);
        if ( v37 )
        {
          *(_WORD *)v37 = 0;
          *(_BYTE *)(v37 + 2) = 6;
          *(_DWORD *)(v37 + 4) = 0;
          v78 = (_QWORD *)(v37 + 8);
          v78[1] = v78;
          *v78 = v78;
        }
        KxReleaseQueuedSpinLock(&v115);
        v38 = v115.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v115.OldIrql < 2u )
        {
          v79 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v79->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v79);
        }
        __writecr8(v38);
        KxReleaseQueuedSpinLock(&LockHandle);
        v39 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v80 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v80->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v80);
        }
        __writecr8(v39);
        v40 = *((_QWORD *)v16 + 21) == 0LL;
        v118 = 1;
        if ( v40 )
        {
          if ( !Objecta )
            KeBugCheckEx(0x34u, 0x5F3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          *((_QWORD *)v16 + 21) = Objecta;
          v41 = *((_QWORD *)Object + 3);
          Objecta = 0LL;
          if ( (*(_BYTE *)(v41 + 6) & 1) == 0 && !*((_QWORD *)Object + 4) )
          {
            MmDisableModifiedWriteOfSection(*((_QWORD **)Object + 5));
            KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
            v115.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 128);
            v115.LockQueue.Next = 0LL;
            KxAcquireQueuedSpinLock(&v115);
            v16[38] |= 0x200u;
            KxReleaseQueuedSpinLock(&v115);
            KxReleaseQueuedSpinLock(&LockHandle);
            v42 = LockHandle.OldIrql;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
            {
              v81 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v81->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v81);
            }
            __writecr8(v42);
          }
          VacbArray = CcCreateVacbArray(v16, v124);
          Status = VacbArray;
          if ( VacbArray >= 0 )
          {
            if ( (v119 & 1) != 0 )
            {
              KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
              v115.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 128);
              v115.LockQueue.Next = 0LL;
              KxAcquireQueuedSpinLock(&v115);
              v16[38] |= 0x40000000u;
              KxReleaseQueuedSpinLock(&v115);
              KxReleaseQueuedSpinLock(&LockHandle);
              v82 = LockHandle.OldIrql;
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
              {
                v83 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v83->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v83);
              }
              __writecr8(v82);
            }
            LockHandle.LockQueue.Next = 0LL;
            LockHandle.LockQueue.Lock = &CcMasterLock;
            v44 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v44 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            LockHandle.OldIrql = v44;
            KxAcquireQueuedSpinLock(&LockHandle);
            v115.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 128);
            v115.LockQueue.Next = 0LL;
            KxAcquireQueuedSpinLock(&v115);
            v45 = (struct _KEVENT *)*((_QWORD *)v16 + 22);
            v16[38] &= ~0x100u;
            if ( v45 )
              KeSetEvent(v45, 0, 0);
            KxReleaseQueuedSpinLock(&v115);
            KxReleaseQueuedSpinLock(&LockHandle);
            v46 = LockHandle.OldIrql;
            if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || LockHandle.OldIrql >= 2u )
              goto LABEL_49;
            goto LABEL_217;
          }
          v17 = P;
          v19 = VacbArray;
          v84 = v118;
          v60 = 0;
        }
        else
        {
          v17 = P;
          v19 = -1073741811;
          v84 = v118;
          v60 = 0;
        }
LABEL_249:
        KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 128), &v115);
        if ( v84 )
        {
          v105 = (struct _KEVENT *)*((_QWORD *)v16 + 22);
          if ( v105 )
            KeSetEvent(v105, 0, 0);
          v16[38] &= ~0x100u;
        }
        v40 = v16[1]-- == 1;
        if ( !v40 || (v16[38] & 0x20) != 0 || v16[28] )
        {
          KxReleaseQueuedSpinLock(&v115);
          v106 = v115.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v115.OldIrql < 2u )
          {
            v107 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v107->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v107);
          }
          __writecr8(v106);
          KxReleaseQueuedSpinLock(&LockHandle);
          v108 = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            v109 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v109->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v109);
          }
          __writecr8(v108);
        }
        else
        {
          CcDeleteSharedCacheMap((char *)v16, (__int64)&LockHandle, (__int64)&v115, 0, 0LL);
        }
        goto LABEL_75;
      }
      if ( !*((_QWORD *)v16 + 22) )
      {
        v85 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456343u);
        *((_QWORD *)v16 + 22) = v85;
        if ( !v85 )
        {
          KxReleaseQueuedSpinLock(&v115);
          v86 = v115.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v115.OldIrql < 2u )
          {
            v87 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v87->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v87);
          }
          __writecr8(v86);
          KxReleaseQueuedSpinLock(&LockHandle);
          v88 = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            v89 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v89->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v89);
          }
          __writecr8(v88);
          v17 = P;
          v19 = -1073741670;
          goto LABEL_246;
        }
        *(_WORD *)v85 = 0;
        v85[2] = 6;
        *((_DWORD *)v85 + 1) = 0;
        v90 = v85 + 8;
        v90[1] = v90;
        *v90 = v90;
      }
      ++v16[1];
      KxReleaseQueuedSpinLock(&v115);
      v91 = v115.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v115.OldIrql < 2u )
      {
        v92 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v92->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v92);
      }
      __writecr8(v91);
      KxReleaseQueuedSpinLock(&LockHandle);
      v93 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v94 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v94->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v94);
      }
      __writecr8(v93);
      KeWaitForSingleObject(*((PVOID *)v16 + 22), Executive, 0, 0, 0LL);
      v95 = v16[39];
      if ( v95 >= 0 )
        goto LABEL_50;
      v17 = P;
      v19 = -1073741590;
      if ( FsRtlIsNtstatusExpected(v95) )
        v19 = v95;
      v84 = v118;
      v60 = 0;
      goto LABEL_249;
    }
    if ( P )
    {
      v27 = P[66];
      v16 = P;
      v28 = 0LL;
      P = 0LL;
      v115.LockQueue.Next = 0LL;
      v115.LockQueue.Lock = (unsigned __int64 *volatile)(v27 + 128);
      KxAcquireQueuedSpinLock(&v115);
      v29 = *(_QWORD **)(v27 + 24);
      v30 = v16 + 34;
      v31 = v27 + 16;
      if ( *v29 != v31 )
        goto LABEL_235;
      *((_QWORD *)v16 + 18) = v29;
      *v30 = v31;
      *v29 = v30;
      *(_QWORD *)(v31 + 8) = v30;
      v32 = *((_QWORD *)Object + 5);
      v121 = 1;
      *(_QWORD *)(v32 + 8) = v16;
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      goto LABEL_29;
    }
    KxReleaseQueuedSpinLock(&LockHandle);
    v73 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v74 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v74->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v74);
    }
    __writecr8(v73);
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  v67 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v104 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v104->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v104);
  }
  __writecr8(v67);
  if ( P )
    ExFreePoolWithTag(P, 0x63536343u);
}
