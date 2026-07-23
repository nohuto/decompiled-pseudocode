/*
 * XREFs of ExShareAddressSpaceWithDevice @ 0x14033C5F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400FA8B0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MmEnableProcessSvm @ 0x1402BC890 (MmEnableProcessSvm.c)
 *     ExpAllocateAsid @ 0x14033D9DC (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14033DD5C (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14033E070 (ExpSvmDereferenceDevice.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoQueryInterface @ 0x14077B6D0 (IoQueryInterface.c)
 *     ExpAssignPasid @ 0x14091437C (ExpAssignPasid.c)
 */

__int64 __fastcall ExShareAddressSpaceWithDevice(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rsi
  unsigned int v5; // r12d
  unsigned __int64 *v6; // r15
  unsigned __int64 v7; // r14
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r13
  struct _KTHREAD *v11; // rbx
  volatile signed __int32 *v12; // rdi
  __int64 v13; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v15; // dl
  int SessionId; // eax
  bool v17; // zf
  unsigned int Asid; // r12d
  int v19; // ebx
  unsigned __int8 v20; // bl
  unsigned __int64 v21; // rcx
  unsigned __int64 **v22; // rax
  struct _KPRCB *v23; // rcx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *v26; // rbx
  __int64 v27; // rcx
  unsigned __int8 v28; // al
  char v29; // dl
  __int64 v30; // rsi
  int v31; // eax
  __int64 v32; // rcx
  __int64 *v34; // rax
  __int64 *v35; // rdx
  __int64 *v36; // rcx
  struct _KTHREAD *v37; // rbx
  unsigned int v38; // edx
  unsigned __int8 v39; // r14
  unsigned int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // rsi
  int v43; // eax
  unsigned int v44; // ecx
  unsigned __int8 v45; // al
  __int64 v46; // rcx
  unsigned __int64 *PoolWithTag; // rax
  char v48; // di
  unsigned __int8 v49; // bl
  unsigned __int64 *v50; // rcx
  unsigned __int64 *v51; // rdx
  unsigned __int64 v52; // rax
  struct _KPRCB *v53; // rcx
  struct _KTHREAD *v54; // rbx
  unsigned __int8 v55; // r14
  unsigned int v56; // edx
  int v57; // eax
  __int64 v58; // rcx
  _KLOCK_ENTRY *v59; // rdi
  __int64 v60; // rcx
  int v61; // ecx
  unsigned int v62; // edx
  __int64 v63; // rdx
  unsigned __int64 v64; // [rsp+40h] [rbp-89h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h] BYREF
  int v66; // [rsp+50h] [rbp-79h] BYREF
  int v67; // [rsp+54h] [rbp-75h] BYREF
  _DWORD v68[4]; // [rsp+58h] [rbp-71h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-61h] BYREF
  int v70; // [rsp+80h] [rbp-49h]
  int v71; // [rsp+84h] [rbp-45h]
  struct _KTHREAD *v72; // [rsp+88h] [rbp-41h]
  _QWORD v73[18]; // [rsp+90h] [rbp-39h] BYREF
  int Interface; // [rsp+140h] [rbp+77h]
  int v77; // [rsp+148h] [rbp+7Fh] BYREF

  memset(v73, 0, 0x48uLL);
  v4 = 0LL;
  v5 = -1;
  LockHandle.LockQueue.Next = 0LL;
  *a2 = -1;
  v6 = 0LL;
  v7 = 0LL;
  LockHandle.LockQueue.Lock = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  P = 0LL;
  if ( !ExpSvmIommuSystemContext )
    return 3221225659LL;
  if ( !a1 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v72 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    return 3221225738LL;
  Interface = IoQueryInterface(a1, 0, (int)&GUID_IOMMU_BUS_INTERFACE, 72, 1, a1, v73);
  if ( Interface >= 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v11 = KeGetCurrentThread();
    v12 = (volatile signed __int32 *)&Process[2].ActiveProcessors.Bitmap[7];
    v67 = 0;
    --v11->SpecialApcDisable;
    if ( ++v11->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v11, (ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[7], KeGetCurrentIrql(), 0LL);
    LOBYTE(v13) = v11->AbEntrySummary;
    if ( !(_BYTE)v13 )
    {
      if ( !v11->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion((__int64)v11, (__int64)&Process[2].ActiveProcessors.Bitmap[7]);
        goto LABEL_14;
      }
      AbOrphanedEntrySummary = v11->AbOrphanedEntrySummary;
      v11->AbOrphanedEntrySummary = 0;
      LOBYTE(v13) = AbOrphanedEntrySummary | v11->AbEntrySummary;
    }
    v15 = v13;
    _BitScanForward((unsigned int *)&v13, (unsigned __int8)v13);
    v70 = v13;
    v11->AbEntrySummary = v15 & ~(1 << v13);
    v4 = (__int64)&v11->LockEntries[v13];
    if ( v4 )
    {
      if ( (unsigned __int64)v12 >= 0xFFFF800000000000uLL
        && *((_BYTE *)&MiState[1488] + (((unsigned __int64)v12 >> 39) & 0x1FF)) == 1 )
      {
        SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)(v4 + 40) = SessionId;
      *(_QWORD *)(v4 + 32) = (unsigned __int64)v12 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_22:
      --v11->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v11, (__int64)&Process[2].ActiveProcessors.Bitmap[7], &v67);
      v17 = v11->SpecialApcDisable++ == -1;
      if ( v17 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
        KiCheckForKernelApcDelivery(1LL);
      if ( _interlockedbittestandset64(v12, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          &Process[2].ActiveProcessors.Bitmap[7],
          (_RTL_BALANCED_NODE *)v4,
          (ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[7]);
      if ( v4 )
        *(_BYTE *)(v4 + 26) |= 1u;
      Asid = Process[2].ActiveProcessors.Bitmap[5];
      if ( !Asid )
      {
        Asid = ExpAllocateAsid();
        if ( !Asid )
        {
          v19 = -1073741709;
          Interface = -1073741709;
          goto LABEL_32;
        }
        if ( !(unsigned int)ExpAssignPasid(Process) )
          Asid = Process[2].ActiveProcessors.Bitmap[5];
      }
      --Asid;
      v64 = Process[2].ActiveProcessors.Bitmap[6];
      if ( !v64 )
      {
        Interface = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int64 *))HalIommuDispatch[2])(Asid, 0LL, &v64);
        v19 = Interface;
        if ( Interface < 0 )
          goto LABEL_32;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].ActiveProcessors.Bitmap[8], &LockHandle);
        if ( Process[2].ActiveProcessors.Bitmap[6] )
        {
          v7 = v64;
          v64 = Process[2].ActiveProcessors.Bitmap[6];
        }
        else
        {
          Process[2].ActiveProcessors.Bitmap[6] = v64;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(CurrentIrql);
        if ( v7 )
          ((void (__fastcall *)(unsigned __int64))HalIommuDispatch[8])(v7);
      }
      v26 = KeGetCurrentThread();
      v68[0] = 0;
      --v26->SpecialApcDisable;
      if ( ++v26->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v26, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
      LOBYTE(v27) = v26->AbEntrySummary;
      if ( !(_BYTE)v27 )
      {
        if ( !v26->AbOrphanedEntrySummary )
        {
          v30 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion((__int64)v26, (__int64)&ExpSvmDeviceListLock);
          goto LABEL_72;
        }
        v28 = v26->AbOrphanedEntrySummary;
        v26->AbOrphanedEntrySummary = 0;
        LOBYTE(v27) = v28 | v26->AbEntrySummary;
      }
      v29 = v27;
      _BitScanForward((unsigned int *)&v27, (unsigned __int8)v27);
      v71 = v27;
      v26->AbEntrySummary = v29 & ~(1 << v27);
      v30 = (__int64)&v26->LockEntries[v27];
      if ( v30 )
      {
        if ( (unsigned __int64)&ExpSvmDeviceListLock >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[1488] + (((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF)) == 1 )
        {
          v31 = MmGetSessionIdEx((__int64)v26->ApcState.Process);
        }
        else
        {
          v31 = -1;
        }
        *(_DWORD *)(v30 + 40) = v31;
        *(_QWORD *)(v30 + 32) = (unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_80;
      }
LABEL_72:
      _interlockedbittestandset((volatile signed __int32 *)&v26->116 + 1, 0x10u);
LABEL_80:
      --v26->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v26, (__int64)&ExpSvmDeviceListLock, v68);
      v17 = v26->SpecialApcDisable++ == -1;
      if ( v17 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
        KiCheckForKernelApcDelivery(v32);
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          &ExpSvmDeviceListLock,
          (_RTL_BALANCED_NODE *)v30,
          (ULONG_PTR)&ExpSvmDeviceListLock);
      if ( v30 )
        *(_BYTE *)(v30 + 26) |= 1u;
      v34 = (__int64 *)ExpSvmDevices;
      if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
        goto LABEL_94;
      do
      {
        v35 = v34;
        v36 = v34;
        P = v34;
        if ( v34[2] == a1 )
          break;
        v34 = (__int64 *)*v34;
      }
      while ( v34 != &ExpSvmDevices );
      if ( v36[2] != a1 )
      {
        v36 = 0LL;
        P = 0LL;
        v35 = 0LL;
      }
      if ( !v35 )
LABEL_94:
        Interface = ExpPrepareNewSvmDevice(a1, v64, v73, &P);
      else
        ++*((_DWORD *)v36 + 6);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
      v77 = 0;
      v37 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
        v38 = MmGetSessionIdEx((__int64)v37->ApcState.Process);
      else
        v38 = -1;
      --v37->SpecialApcDisable;
      v39 = ++v37->AbAllocationRegionCount;
      v40 = ((char)v37->AbEntrySummary | (char)v37->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v17 = !_BitScanReverse((unsigned int *)&v41, v40);
        v68[1] = v41;
        if ( v17 )
          break;
        v42 = (__int64)&v37->LockEntries[v41];
        v40 &= ~(1 << v41);
        if ( (*(_BYTE *)(v42 + 26) & 1) != 0
          && (*(_DWORD *)(v42 + 32) & 1) == 0
          && (*(_QWORD *)(v42 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v42 + 40) == v38 )
        {
          *(_BYTE *)(v42 + 26) &= ~1u;
          if ( *(_QWORD *)(v42 + 32) )
          {
            if ( v42 )
            {
              *(_BYTE *)(v42 + 32) |= 2u;
              if ( *(__int64 *)(v42 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v42);
              v43 = *(_DWORD *)(v42 + 88) & 0x1FFFF;
              v44 = *(_DWORD *)(v42 + 88) & 0xFFFE0000;
              *(_BYTE *)(v42 + 25) &= ~1u;
              v77 = v43;
              *(_DWORD *)(v42 + 88) = v44;
              *(_QWORD *)(v42 + 32) = 0LL;
              v45 = 1 << ((char)(v42 - (_BYTE)v37 - 32) / 96);
              if ( v39 == 1 )
                v37->AbEntrySummary |= v45;
              else
                _InterlockedOr8((volatile signed __int8 *)&v37->AbOrphanedEntrySummary, v45);
              goto LABEL_113;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v37->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v37, (ULONG_PTR)&ExpSvmDeviceListLock, v38, 0LL);
LABEL_113:
      --v37->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v37, (__int64)&ExpSvmDeviceListLock, &v77);
      v17 = v37->SpecialApcDisable++ == -1;
      if ( v17 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
        KiCheckForKernelApcDelivery(v46);
      v19 = Interface;
      if ( Interface >= 0 )
      {
        PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64507845u);
        v6 = PoolWithTag;
        if ( PoolWithTag )
        {
          v48 = 0;
          PoolWithTag[2] = (unsigned __int64)P;
          v49 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].ActiveProcessors.Bitmap[8], &LockHandle);
          v50 = &Process[2].ActiveProcessors.Bitmap[9];
          v51 = (unsigned __int64 *)Process[2].ActiveProcessors.Bitmap[9];
          if ( v51 == &Process[2].ActiveProcessors.Bitmap[9] )
          {
LABEL_129:
            v52 = *v50;
            if ( *(unsigned __int64 **)(*v50 + 8) != v50 )
              goto LABEL_141;
            *v6 = v52;
            v6[1] = (unsigned __int64)v50;
            *(_QWORD *)(v52 + 8) = v6;
            *v50 = (unsigned __int64)v6;
          }
          else
          {
            while ( *(_QWORD *)(v51[2] + 16) != a1 )
            {
              v51 = (unsigned __int64 *)*v51;
              if ( v51 == v50 )
                goto LABEL_129;
            }
            v48 = 1;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v49 < 2u )
          {
            v53 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v53->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v53);
          }
          __writecr8(v49);
          if ( v48 )
          {
            ExFreePoolWithTag(v6, 0);
            v19 = Interface;
            v6 = 0LL;
          }
          else
          {
            MmEnableProcessSvm();
            Interface = ((__int64 (__fastcall *)(unsigned __int64, _QWORD))HalIommuDispatch[4])(
                          v64,
                          *((_QWORD *)P + 14));
            v19 = Interface;
            if ( Interface >= 0 )
            {
              v19 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64))HalIommuDispatch[5])(
                      v64,
                      Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL);
              Interface = v19;
            }
          }
        }
        else
        {
          v19 = -1073741670;
          Interface = -1073741670;
        }
      }
LABEL_32:
      ((void (__fastcall *)(_QWORD))v73[3])(v73[1]);
      if ( v19 >= 0 )
      {
        *a2 = Asid;
LABEL_143:
        v5 = -1;
        goto LABEL_144;
      }
      if ( P )
        ExpSvmDereferenceDevice(P);
      if ( !v6 )
        goto LABEL_143;
      v20 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].ActiveProcessors.Bitmap[8], &LockHandle);
      v21 = *v6;
      v22 = (unsigned __int64 **)v6[1];
      if ( *(unsigned __int64 **)(*v6 + 8) == v6 && *v22 == v6 )
      {
        *v22 = (unsigned __int64 *)v21;
        *(_QWORD *)(v21 + 8) = v22;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v20 < 2u )
        {
          v23 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v23);
        }
        __writecr8(v20);
        ExFreePoolWithTag(v6, 0);
        goto LABEL_143;
      }
LABEL_141:
      __fastfail(3u);
    }
LABEL_14:
    _interlockedbittestandset((volatile signed __int32 *)&v11->116 + 1, 0x10u);
    goto LABEL_22;
  }
LABEL_144:
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&Process[2].ActiveProcessors.Bitmap[7],
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[2].ActiveProcessors.Bitmap[7]);
  v54 = KeGetCurrentThread();
  v66 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&Process[2].ActiveProcessors.Bitmap[7]) == 1 )
    v5 = MmGetSessionIdEx((__int64)v54->ApcState.Process);
  --v54->SpecialApcDisable;
  v55 = ++v54->AbAllocationRegionCount;
  v56 = ((char)v54->AbEntrySummary | (char)v54->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v17 = !_BitScanReverse((unsigned int *)&v60, v56);
    v68[2] = v60;
    if ( v17 )
      goto LABEL_155;
    v57 = 1 << v60;
    v58 = v60;
    v59 = &v54->LockEntries[v58];
    v56 &= ~v57;
    if ( (v59->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v59->LockState.0 & 1) == 0
      && (*(_QWORD *)&v59->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&Process[2].ActiveProcessors.Bitmap[7] & 0x7FFFFFFFFFFFFFFCLL)
      && v59->LockState.SessionId == v5 )
    {
      v59->AcquiredByte &= ~1u;
      if ( v59->LockState.0 )
        break;
    }
  }
  if ( !v59 )
  {
LABEL_155:
    if ( (*((_DWORD *)&v54->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v54, (ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[7], v5, 0LL);
    goto LABEL_162;
  }
  v59->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v59->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v54->LockEntries[v58].TreeNode);
  v61 = v59->BoostBitmap.AllFields & 0x1FFFF;
  v62 = v59->BoostBitmap.AllFields & 0xFFFE0000;
  v59->ThreadLocalFlags &= ~1u;
  v66 = v61;
  v59->BoostBitmap.AllFields = v62;
  v59->LockState.0 = 0LL;
  v63 = ((char *)v59 - (char *)v54 - 800) / 96;
  if ( v55 == 1 )
    v54->AbEntrySummary |= 1 << v63;
  else
    _InterlockedOr8((volatile signed __int8 *)&v54->AbOrphanedEntrySummary, 1 << v63);
LABEL_162:
  --v54->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v54, (__int64)&Process[2].ActiveProcessors.Bitmap[7], &v66);
  v17 = v54->SpecialApcDisable++ == -1;
  if ( v17 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v54->ApcState.ApcListHead[0].Flink != &v54->152 )
    KiCheckForKernelApcDelivery(1LL);
  KiLeaveGuardedRegionUnsafe((__int64)v72);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  return (unsigned int)Interface;
}
