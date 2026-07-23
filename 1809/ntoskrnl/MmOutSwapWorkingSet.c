/*
 * XREFs of MmOutSwapWorkingSet @ 0x1400E51A8
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1406045AC (PspChangeProcessExecutionState.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     SmStoreExistsForProcess @ 0x140011FA4 (SmStoreExistsForProcess.c)
 *     MiGetWorkingSetSwapSupport @ 0x14001290C (MiGetWorkingSetSwapSupport.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiVadMapsLargeImage @ 0x140074A00 (MiVadMapsLargeImage.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFindBestOutswapPagefile @ 0x1400E4E2C (MiFindBestOutswapPagefile.c)
 *     MiOutSwapWorkingSet @ 0x1400E5868 (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1400E595C (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400E59B4 (MiAllocateWorkingSetSwapSupport.c)
 *     MiGetKernelStackSwapSupport @ 0x140124104 (MiGetKernelStackSwapSupport.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SmStoreSetProcessVaRanges @ 0x14066C89C (SmStoreSetProcessVaRanges.c)
 *     EtwTraceWorkingSetSwap @ 0x14066C988 (EtwTraceWorkingSetSwap.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406BA084 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1406BA0EC (MiFreeReservationRuns.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x14085FC94 (MiExtendWorkingSetSwapPagefile.c)
 *     MiReserveWorkingSetSwapSpace @ 0x14085FDAC (MiReserveWorkingSetSwapSpace.c)
 */

__int64 __fastcall MmOutSwapWorkingSet(PEPROCESS Process, int a2)
{
  unsigned __int16 *v2; // r13
  unsigned int v5; // ebx
  __int64 v6; // rdi
  unsigned int SessionId; // r14d
  unsigned int BestOutswapPagefile; // r15d
  PVOID *PoolWithTag; // rax
  PVOID *v10; // r14
  volatile LONG *v11; // rsi
  KIRQL v12; // di
  __int64 v13; // rdx
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
  unsigned __int64 v26; // rcx
  __int64 v27; // rdi
  _QWORD *v28; // rcx
  int v29; // esi
  volatile LONG *v30; // r15
  KIRQL v31; // di
  __int64 v32; // rdx
  __int64 v33; // rcx
  LONG *SharedVm; // rax
  PVOID *v35; // rcx
  ULONG_PTR v36; // r15
  unsigned __int64 v37; // rcx
  struct _KTHREAD *v38; // rdi
  unsigned __int8 v39; // r12
  __int64 v40; // rdx
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
  int v56; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned __int64 v57; // [rsp+40h] [rbp-C8h]
  __int64 v58; // [rsp+48h] [rbp-C0h]
  unsigned int v59; // [rsp+50h] [rbp-B8h] BYREF
  int v60; // [rsp+54h] [rbp-B4h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-B0h]
  PEX_SPIN_LOCK SpinLock; // [rsp+60h] [rbp-A8h]
  PVOID P; // [rsp+68h] [rbp-A0h]
  PEPROCESS Processa; // [rsp+70h] [rbp-98h]
  PVOID *v65; // [rsp+78h] [rbp-90h]
  _QWORD v66[18]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v67; // [rsp+118h] [rbp+10h]
  __int64 v68; // [rsp+120h] [rbp+18h]
  __int64 v69; // [rsp+128h] [rbp+20h]
  __int64 v70; // [rsp+130h] [rbp+28h]
  int v71; // [rsp+138h] [rbp+30h]

  v2 = &Process[1].IdealNode[12];
  CurrentThread = KeGetCurrentThread();
  Processa = Process;
  v57 = 0LL;
  P = 0LL;
  v5 = 0;
  memset(v66, 0, sizeof(v66));
  v6 = *(_QWORD *)(qword_14043B808 + 8LL * v2[87]);
  v58 = v6;
  v66[3] = v6;
  LODWORD(v67) = a2 != 0;
  SessionId = -1;
  v55 = -1;
  if ( SmStoreExistsForProcess() )
  {
    LODWORD(v67) = v67 | 4;
    v5 = 2;
    LODWORD(v66[4]) = -1;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v6, &v59);
  if ( BestOutswapPagefile == 16 )
  {
    v29 = -1073741497;
  }
  else
  {
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x43536D4Du);
    v65 = PoolWithTag;
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x50uLL);
      v5 |= 1u;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v6 + 1112, 0LL);
      v11 = (volatile LONG *)(v6 + 1120);
      SpinLock = (PEX_SPIN_LOCK)(v6 + 1120);
      v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 1120));
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport((__int64)v2, v13);
      if ( WorkingSetSwapSupport )
      {
        if ( WorkingSetSwapSupport == 1 )
        {
          v29 = -1073740682;
        }
        else
        {
          v29 = -1073741791;
          if ( WorkingSetSwapSupport == 2 )
            v29 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v12);
        v6 = v58;
      }
      else
      {
        *((_QWORD *)MiGetSharedVm(v15) + 3) = 1LL;
        ExReleaseSpinLockExclusiveFromDpcLevel(v11);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
        {
          v51 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v51->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v51);
        }
        __writecr8(v12);
        v17 = v59;
        while ( 1 )
        {
          v18 = *((_QWORD *)v2 + 16);
          v57 = v18;
          if ( !v18 )
          {
            v29 = -1073741779;
            goto LABEL_35;
          }
          if ( LODWORD(v66[4]) == -1 )
            break;
          v29 = MiReserveWorkingSetSwapSpace(v58, &v66[5], v16, BestOutswapPagefile, v17, v18);
          if ( v29 >= 0 )
          {
            v18 = v57;
            break;
          }
          if ( v17 < 0x10 )
          {
            BestOutswapPagefile = v17;
            v29 = MiExtendWorkingSetSwapPagefile(v58, v57, v17);
            if ( v29 >= 0 )
              continue;
          }
          goto LABEL_35;
        }
        v19 = MiAllocateWorkingSetSwapSupport(v18);
        *v10 = (PVOID)v19;
        if ( !v19 )
          goto LABEL_94;
        if ( LODWORD(v66[4]) != -1 )
          *(_DWORD *)(v19 + 32) |= 1u;
        v20 = 0LL;
        if ( !a2 )
          goto LABEL_14;
        v20 = *((_QWORD *)v2 + 17);
        if ( v20 - *((_QWORD *)v2 + 18) <= v20 )
          v20 = *((_QWORD *)v2 + 17) - *((_QWORD *)v2 + 18);
        if ( v20 && (v52 = MiAllocateWorkingSetSwapSupport(v20), (v10[1] = (PVOID)v52) == 0LL) )
        {
LABEL_94:
          v29 = -1073741670;
        }
        else
        {
LABEL_14:
          v21 = CurrentThread;
          v66[0] = *v10;
          v66[1] = v10[1];
          v66[2] = v2;
          --CurrentThread->SpecialApcDisable;
          v22 = Processa;
          ExAcquirePushLockSharedEx((ULONG_PTR)&Processa[1].Affinity.Bitmap[7], 0LL);
          LOBYTE(v21[1].Queue) |= 2u;
          if ( (v22[1].DirectoryTableBase & 0x2000000000LL) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v21, (__int64)v22);
            v29 = -1073741558;
          }
          else
          {
            v23 = (_QWORD *)v22[2].Affinity.Bitmap[4];
            v24 = 0LL;
            while ( v23 )
            {
              v24 = (unsigned __int64)v23;
              v23 = (_QWORD *)*v23;
            }
            while ( v24 )
            {
              if ( !MiVadMapsLargeImage(v24) && ((1 << (*(_BYTE *)(v24 + 48) & 7)) & 0x55) != 0 )
                MiOutSwapWorkingSet(
                  (_DWORD)v2,
                  v24,
                  *(_DWORD *)(v24 + 24) << 12,
                  (*(_DWORD *)(v24 + 28) << 12) | 0xFFF,
                  (__int64)v66);
              v25 = *(_QWORD **)(v24 + 8);
              v26 = v24;
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
                  if ( !v24 || *(_QWORD *)v24 == v26 )
                    break;
                  v26 = v24;
                }
              }
            }
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v21, (__int64)v22);
            if ( *((_QWORD *)*v10 + 2) < v57 )
            {
              v27 = ((__int64 (*)(void))MiReAllocateWorkingSetSwapSupport)();
              if ( v27 )
              {
                ExFreePoolWithTag(*v10, 0);
                *v10 = (PVOID)v27;
              }
            }
            v28 = v10[1];
            if ( v28 )
            {
              if ( v28[2] < v20 )
              {
                v53 = ((__int64 (*)(void))MiReAllocateWorkingSetSwapSupport)();
                if ( v53 )
                {
                  ExFreePoolWithTag(v10[1], 0);
                  v10[1] = (PVOID)v53;
                }
              }
            }
            v57 = *((_QWORD *)*v10 + 3);
            MiGetKernelStackSwapSupport(v10, v22);
            if ( v5 >= 2 )
              P = (PVOID)MiReAllocateWorkingSetSwapSupport(*v10);
            v5 |= 4u;
            v29 = 0;
          }
        }
LABEL_35:
        v30 = SpinLock;
        v31 = ExAcquireSpinLockExclusive(SpinLock);
        if ( MiGetWorkingSetSwapSupport((__int64)v2, v32) == 1 )
        {
          SharedVm = MiGetSharedVm(v33);
          if ( v5 < 4 )
          {
            v35 = 0LL;
          }
          else
          {
            v35 = v65;
            v10 = 0LL;
            v29 = 0;
          }
          *((_QWORD *)SharedVm + 3) = v35;
        }
        else
        {
          v29 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v30);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v31 < 2u )
        {
          v54 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v54->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v54);
        }
        __writecr8(v31);
        v6 = v58;
        MiFreeReservationRuns(v58, &v66[5]);
      }
      if ( v10 )
        MiFreeWorkingSetSwapContext(v6, v10);
    }
    else
    {
      v29 = -1073741670;
    }
    SessionId = -1;
  }
  if ( (v5 & 1) != 0 )
  {
    v36 = v6 + 1112;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1112));
    v56 = 0;
    v37 = v6 + 1112;
    v38 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v37) == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v38->ApcState.Process);
      v55 = SessionId;
    }
    --v38->SpecialApcDisable;
    v39 = ++v38->AbAllocationRegionCount;
    LODWORD(v40) = ((char)v38->AbEntrySummary | (char)v38->AbOrphanedEntrySummary) ^ 0x3F;
    v41 = !_BitScanReverse((unsigned int *)&v42, v40);
    v60 = v42;
    if ( v41 )
    {
LABEL_76:
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
        v40 = ~v43 & (unsigned int)v40;
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
          goto LABEL_75;
      }
      if ( !v45 )
      {
LABEL_75:
        SessionId = v55;
        goto LABEL_76;
      }
      v45->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v45->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v38->LockEntries[v44].TreeNode, v40);
      v56 = 0;
      v56 = v45->BoostBitmap.AllFields & 0x1FFFF;
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
    KiAbThreadRemoveBoosts((ULONG_PTR)v38, v36, (__int64)&v56);
    v41 = v38->SpecialApcDisable++ == -1;
    if ( v41 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v38->ApcState.ApcListHead[0].Flink != &v38->152 )
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
  v67 = v57;
  v68 = v66[15];
  v69 = v66[16];
  v70 = v66[17];
  v71 = v29;
  EtwTraceWorkingSetSwap(Processa);
  return (unsigned int)v29;
}
