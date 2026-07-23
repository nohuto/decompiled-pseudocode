/*
 * XREFs of MmOutSwapWorkingSet @ 0x1400F3E2C
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140694A24 (PspChangeProcessExecutionState.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003FCE0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadSupportsPrivateCommit @ 0x140050730 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x1400538A0 (MiVadMapsLargeImage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     SmStoreExistsForProcess @ 0x14008AF04 (SmStoreExistsForProcess.c)
 *     MiGetWorkingSetSwapSupport @ 0x14008B6EC (MiGetWorkingSetSwapSupport.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiGetKernelStackSwapSupport @ 0x1400F15E0 (MiGetKernelStackSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x1400F16F8 (MiFindBestOutswapPagefile.c)
 *     MiOutSwapWorkingSet @ 0x1400F44E8 (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1400F45E0 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400F4638 (MiAllocateWorkingSetSwapSupport.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406A4F30 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1406A4F98 (MiFreeReservationRuns.c)
 *     EtwTraceWorkingSetSwap @ 0x1406A5714 (EtwTraceWorkingSetSwap.c)
 *     SmStoreSetProcessVaRanges @ 0x1406B36EC (SmStoreSetProcessVaRanges.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1406F66B0 (MiReserveWorkingSetSwapSpace.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x14089B8F4 (MiExtendWorkingSetSwapPagefile.c)
 */

__int64 __fastcall MmOutSwapWorkingSet(PEPROCESS Process, int a2)
{
  unsigned __int16 *v4; // r13
  unsigned int v5; // ebx
  __int64 v6; // rdi
  int v7; // eax
  unsigned int SessionId; // r14d
  unsigned int BestOutswapPagefile; // r15d
  PVOID *PoolWithTag; // rax
  PVOID *v11; // r14
  volatile LONG *v12; // rsi
  KIRQL v13; // di
  __int64 WorkingSetSwapSupport; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // edi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  struct _KTHREAD *v21; // r12
  PEPROCESS v22; // r15
  _QWORD *v23; // rax
  unsigned __int64 v24; // rdi
  _QWORD *v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rdi
  _QWORD *v29; // rcx
  int v30; // esi
  volatile LONG *v31; // r15
  KIRQL v32; // di
  __int64 v33; // rcx
  LONG *SharedVm; // rax
  PVOID *v35; // rcx
  ULONG_PTR v36; // r15
  unsigned __int64 v37; // rcx
  struct _KTHREAD *v38; // rdi
  unsigned __int8 v39; // r12
  unsigned int v40; // edx
  bool v41; // zf
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  _KLOCK_ENTRY *v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rcx
  PVOID v48; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdi
  struct _KPRCB *v54; // rcx
  int v55; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v56; // [rsp+40h] [rbp-C8h]
  __int64 v57; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v58; // [rsp+50h] [rbp-B8h]
  unsigned int v59; // [rsp+58h] [rbp-B0h] BYREF
  int v60; // [rsp+5Ch] [rbp-ACh]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A8h]
  PEX_SPIN_LOCK SpinLock; // [rsp+68h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-98h]
  PEPROCESS Processa; // [rsp+78h] [rbp-90h]
  PVOID *v65; // [rsp+80h] [rbp-88h]
  _QWORD v66[23]; // [rsp+88h] [rbp-80h] BYREF

  Processa = Process;
  CurrentThread = KeGetCurrentThread();
  v4 = &Process[1].IdealNode[6];
  v56 = 0LL;
  P = 0LL;
  v5 = 0;
  memset(v66, 0, sizeof(v66));
  v6 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)&Process[1].Spare2[69]);
  v7 = v66[18];
  if ( a2 )
    v7 = 1;
  v58 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)&Process[1].Spare2[69]);
  LODWORD(v66[18]) = v7;
  v66[3] = v6;
  SessionId = -1;
  v55 = -1;
  if ( SmStoreExistsForProcess() )
  {
    LODWORD(v66[18]) |= 4u;
    v5 = 2;
    LODWORD(v66[4]) = -1;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v6, &v59);
  if ( BestOutswapPagefile == 16 )
  {
    v30 = -1073741497;
  }
  else
  {
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x43536D4Du);
    v65 = PoolWithTag;
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x50uLL);
      v5 |= 1u;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v6 + 1120, 0LL);
      v12 = (volatile LONG *)(v6 + 1128);
      SpinLock = (PEX_SPIN_LOCK)(v6 + 1128);
      v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 1128));
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport((__int64)v4);
      if ( WorkingSetSwapSupport )
      {
        if ( WorkingSetSwapSupport == 1 )
        {
          v30 = -1073740682;
        }
        else
        {
          v30 = -1073741791;
          if ( WorkingSetSwapSupport == 2 )
            v30 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v13);
        v6 = v58;
      }
      else
      {
        *((_QWORD *)MiGetSharedVm(v15) + 3) = 1LL;
        ExReleaseSpinLockExclusiveFromDpcLevel(v12);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
        {
          v51 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v51->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v51);
        }
        __writecr8(v13);
        v17 = v59;
        while ( 1 )
        {
          v18 = *((_QWORD *)v4 + 16);
          v56 = v18;
          if ( !v18 )
          {
            v30 = -1073741779;
            goto LABEL_37;
          }
          if ( LODWORD(v66[4]) == -1 )
            break;
          v30 = MiReserveWorkingSetSwapSpace(v58, &v66[5], v16, BestOutswapPagefile, v17, v18);
          if ( v30 >= 0 )
          {
            v18 = v56;
            break;
          }
          if ( v17 < 0x10 )
          {
            BestOutswapPagefile = v17;
            v30 = MiExtendWorkingSetSwapPagefile(v58, v56, v17);
            if ( v30 >= 0 )
              continue;
          }
          goto LABEL_37;
        }
        v19 = MiAllocateWorkingSetSwapSupport(v18);
        *v11 = (PVOID)v19;
        if ( !v19 )
          goto LABEL_96;
        if ( LODWORD(v66[4]) != -1 )
          *(_DWORD *)(v19 + 32) |= 1u;
        v20 = 0LL;
        if ( !a2 )
          goto LABEL_16;
        v20 = *((_QWORD *)v4 + 17);
        if ( v20 - *((_QWORD *)v4 + 18) <= v20 )
          v20 = *((_QWORD *)v4 + 17) - *((_QWORD *)v4 + 18);
        if ( v20 && (v52 = MiAllocateWorkingSetSwapSupport(v20), (v11[1] = (PVOID)v52) == 0LL) )
        {
LABEL_96:
          v30 = -1073741670;
        }
        else
        {
LABEL_16:
          v21 = CurrentThread;
          v66[0] = *v11;
          v66[1] = v11[1];
          v66[2] = v4;
          --CurrentThread->SpecialApcDisable;
          v22 = Processa;
          ExAcquirePushLockSharedEx((ULONG_PTR)&Processa[1].Affinity.Bitmap[7], 0LL);
          LOBYTE(v21[1].Queue) |= 2u;
          if ( (v22[1].DirectoryTableBase & 0x2000000000LL) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v21, (__int64)v22);
            v30 = -1073741558;
          }
          else
          {
            v23 = (_QWORD *)v22[2].Affinity.Bitmap[8];
            v24 = 0LL;
            while ( v23 )
            {
              v24 = (unsigned __int64)v23;
              v23 = (_QWORD *)*v23;
            }
            while ( v24 )
            {
              if ( !MiVadMapsLargeImage(v24) && MiVadSupportsPrivateCommit(v26) )
                MiOutSwapWorkingSet(
                  (_DWORD)v4,
                  v24,
                  *(_DWORD *)(v24 + 24) << 12,
                  (*(_DWORD *)(v24 + 28) << 12) | 0xFFF,
                  (__int64)v66);
              v25 = *(_QWORD **)(v24 + 8);
              v27 = v24;
              if ( v25 )
              {
                do
                {
                  v24 = (unsigned __int64)v25;
                  v25 = (_QWORD *)*v25;
                }
                while ( v25 );
              }
              else
              {
                while ( 1 )
                {
                  v24 = *(_QWORD *)(v24 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( !v24 || *(_QWORD *)v24 == v27 )
                    break;
                  v27 = v24;
                }
              }
            }
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v21, (__int64)v22);
            if ( *((_QWORD *)*v11 + 2) < v56 )
            {
              v28 = ((__int64 (*)(void))MiReAllocateWorkingSetSwapSupport)();
              if ( v28 )
              {
                ExFreePoolWithTag(*v11, 0);
                *v11 = (PVOID)v28;
              }
            }
            v29 = v11[1];
            if ( v29 )
            {
              if ( v29[2] < v20 )
              {
                v53 = ((__int64 (*)(void))MiReAllocateWorkingSetSwapSupport)();
                if ( v53 )
                {
                  ExFreePoolWithTag(v11[1], 0);
                  v11[1] = (PVOID)v53;
                }
              }
            }
            v56 = *((_QWORD *)*v11 + 3);
            MiGetKernelStackSwapSupport((__int64)v11, (__int64)v22);
            if ( v5 >= 2 )
              P = (PVOID)MiReAllocateWorkingSetSwapSupport(*v11);
            v5 |= 4u;
            v30 = 0;
          }
        }
LABEL_37:
        v31 = SpinLock;
        v32 = ExAcquireSpinLockExclusive(SpinLock);
        if ( MiGetWorkingSetSwapSupport((__int64)v4) == 1 )
        {
          SharedVm = MiGetSharedVm(v33);
          if ( v5 < 4 )
          {
            v35 = 0LL;
          }
          else
          {
            v35 = v65;
            v11 = 0LL;
            v30 = 0;
          }
          *((_QWORD *)SharedVm + 3) = v35;
        }
        else
        {
          v30 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v31);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32 < 2u )
        {
          v54 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v54->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v54);
        }
        __writecr8(v32);
        v6 = v58;
        MiFreeReservationRuns(v58, &v66[5]);
      }
      if ( v11 )
        MiFreeWorkingSetSwapContext(v6, v11);
    }
    else
    {
      v30 = -1073741670;
    }
    SessionId = -1;
  }
  if ( (v5 & 1) != 0 )
  {
    v36 = v6 + 1120;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1120), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1120));
    LODWORD(v57) = 0;
    v37 = v6 + 1120;
    v38 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v37) == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v38->ApcState.Process);
      v55 = SessionId;
    }
    --v38->SpecialApcDisable;
    v39 = ++v38->AbAllocationRegionCount;
    v40 = ((char)v38->AbEntrySummary | (char)v38->AbOrphanedEntrySummary) ^ 0x3F;
    v41 = !_BitScanReverse((unsigned int *)&v42, v40);
    v60 = v42;
    if ( v41 )
    {
LABEL_73:
      if ( (*((_DWORD *)&v38->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v38, v36, SessionId, 0LL);
    }
    else
    {
      while ( 1 )
      {
        v43 = 1 << v42;
        v44 = v42;
        v45 = &v38->LockEntries[v44];
        v40 &= ~v43;
        if ( (v45->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v45->LockState.0 & 1) == 0
          && (*(_QWORD *)&v45->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v36 & 0x7FFFFFFFFFFFFFFCLL)
          && v45->LockState.SessionId == v55 )
        {
          v45->AcquiredByte &= ~1u;
          if ( v45->LockState.0 )
            break;
        }
        v41 = !_BitScanReverse((unsigned int *)&v42, v40);
        v60 = v42;
        if ( v41 )
          goto LABEL_72;
      }
      if ( !v45 )
      {
LABEL_72:
        SessionId = v55;
        goto LABEL_73;
      }
      v45->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v45->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v38->LockEntries[v44].TreeNode);
      LODWORD(v57) = v45->BoostBitmap.AllFields & 0x1FFFF;
      v45->BoostBitmap.AllFields &= 0xFFFE0000;
      v45->ThreadLocalFlags &= ~1u;
      v45->LockState.0 = 0LL;
      v46 = ((char *)v45 - (char *)v38 - 800) / 96;
      if ( v39 == 1 )
        v38->AbEntrySummary |= 1 << v46;
      else
        _InterlockedOr8((volatile signed __int8 *)&v38->AbOrphanedEntrySummary, 1 << v46);
    }
    --v38->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v38, v36, &v57);
    v41 = v38->SpecialApcDisable++ == -1;
    if ( v41 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v38->ApcState.ApcListHead[0].Flink != &v38->152 )
      KiCheckForKernelApcDelivery(v47);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  v48 = P;
  if ( P )
  {
    if ( v5 >= 4 )
      SmStoreSetProcessVaRanges(*(void **)P);
    ExFreePoolWithTag(v48, 0);
  }
  v66[18] = v56;
  v66[19] = v66[15];
  v66[20] = v66[16];
  v66[21] = v66[17];
  LODWORD(v66[22]) = v30;
  EtwTraceWorkingSetSwap(Processa);
  return (unsigned int)v30;
}
