/*
 * XREFs of MiDeletePagablePteRange @ 0x1400E8030
 * Callers:
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiDeleteVirtualAddresses @ 0x1400E7FBC (MiDeleteVirtualAddresses.c)
 *     MiDeleteSessionAddressSpace @ 0x140165F60 (MiDeleteSessionAddressSpace.c)
 *     MiDeleteSessionPdes @ 0x140168D80 (MiDeleteSessionPdes.c)
 *     MiDeleteVadBitmap @ 0x1406445A0 (MiDeleteVadBitmap.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiWalkPageTables @ 0x140049000 (MiWalkPageTables.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140104E40 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140116F90 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1401175E0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiFreePhysicalPageChain @ 0x1402D5A40 (MiFreePhysicalPageChain.c)
 *     MiEndDpcGang @ 0x1402E8488 (MiEndDpcGang.c)
 *     MiInitializeDpcGang @ 0x1402E8574 (MiInitializeDpcGang.c)
 *     MiStartDpcGang @ 0x1402E86DC (MiStartDpcGang.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AB64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __fastcall MiDeletePagablePteRange(
        __int64 a1,
        unsigned __int8 CurrentIrql,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7)
{
  char v11; // al
  unsigned __int8 v12; // al
  int v13; // ecx
  int v14; // ecx
  __int16 v15; // ax
  struct _KTHREAD *CurrentThread; // r12
  int v17; // r13d
  unsigned __int8 v18; // al
  LONG *v19; // rbx
  unsigned __int8 v20; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v23; // ett
  __int16 v24; // ax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rcx
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  LONG *SharedVm; // rbx
  KIRQL v34; // al
  LONG *v35; // rax
  _KSPIN_LOCK_QUEUE *v36; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-D0h] BYREF
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v39; // [rsp+54h] [rbp-ACh]
  unsigned __int8 v40; // [rsp+56h] [rbp-AAh]
  char v41; // [rsp+57h] [rbp-A9h]
  int *v42; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h]
  _BYTE v46[104]; // [rsp+78h] [rbp-88h] BYREF
  __int64 (__fastcall *v47)(__int64, ULONG_PTR, int); // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v48)(_QWORD *); // [rsp+E8h] [rbp-18h]
  _QWORD *v49; // [rsp+F0h] [rbp-10h]
  _QWORD v50[48]; // [rsp+100h] [rbp+0h] BYREF
  int v51; // [rsp+280h] [rbp+180h] BYREF
  __int16 v52; // [rsp+284h] [rbp+184h]
  __int16 v53; // [rsp+286h] [rbp+186h]
  __int64 v54; // [rsp+288h] [rbp+188h]
  __int64 v55; // [rsp+290h] [rbp+190h]
  __int64 v56; // [rsp+298h] [rbp+198h]
  _BYTE v57[152]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v53 = 0;
  memset(v57, 0, sizeof(v57));
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v50, 0, sizeof(v50));
  v38 = 0;
  v39 = 0;
  v41 = 0;
  memset(v46, 0, sizeof(v46));
  if ( (a6 & 0x400) != 0 )
  {
    MiInitializeDpcGang(&v50[10], KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0], 0LL);
    HIDWORD(v50[23]) |= 0x80u;
  }
  v11 = *(_BYTE *)(a1 + 184);
  v50[2] = a7;
  LODWORD(v50[4]) = a6;
  BYTE1(v50[9]) = 1;
  v12 = v11 & 7;
  if ( v12 )
  {
    v13 = 2;
    if ( v12 >= 2u )
      v13 = 0;
  }
  else
  {
    v13 = 1;
  }
  v54 = 20LL;
  v42 = &v51;
  v51 = v13;
  v52 = 0;
  v55 = 0LL;
  v56 = 0LL;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    BYTE4(v50[4]) = 1;
  BYTE2(v38) ^= (BYTE2(v38) ^ (4 * a5)) & 0x1C;
  v14 = a6 & 0x100;
  v49 = v50;
  v15 = 39;
  LOWORD(v38) = 39;
  if ( (a6 & 0x100) != 0 )
  {
    v15 = 1059;
    LOWORD(v38) = 1059;
  }
  if ( (a6 & 0x80) != 0 )
  {
    v15 |= 0x800u;
    LOWORD(v38) = v15;
  }
  if ( (a6 & 0x400) != 0 )
    HIBYTE(v39) = 63;
  v44 = a3;
  v47 = MiDeleteVa;
  v45 = a4;
  CurrentThread = 0LL;
  v48 = MiDeleteVaTail;
  v17 = 0;
  v43 = a1;
  if ( (a6 & 0x10) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v30 = *(_QWORD *)(a7 + 32);
    --CurrentThread->SpecialApcDisable;
    ExAcquireAutoExpandPushLockExclusive(v30 + 56, 0LL);
    v15 = v38;
    v14 = a6 & 0x100;
  }
  if ( CurrentIrql == 17 )
  {
    if ( (v38 & 4) != 0 )
    {
      v18 = *(_BYTE *)(a1 + 184) & 7;
      if ( v18 >= 6u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || CurrentIrql >= 2u )
          goto LABEL_28;
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      }
      else
      {
        if ( v18 == 2 )
          v19 = &dword_140466F00;
        else
          v19 = (LONG *)(a1 + 192);
        v20 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v19, v20);
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v31 = SchedulerAssist[5];
              SchedulerAssist[5] = v31 + 1;
              if ( v31 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          _m_prefetchw(v19);
          v23 = *v19 & 0x7FFFFFFF;
          if ( v23 != _InterlockedCompareExchange(v19, v23 + 1, v23) )
          {
            v29 = CurrentPrcb->SchedulerAssist;
            if ( v29 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v32 = v29[5] - 1;
                v29[5] = v32;
                if ( !v32 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            ExpWaitForSpinLockSharedAndAcquire(v19, v20);
          }
        }
        if ( v19[1] )
          _InterlockedExchange(v19 + 1, 0);
        CurrentIrql = v20;
      }
    }
    else
    {
      SharedVm = MiGetSharedVm(a1);
      v34 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      CurrentIrql = v34;
    }
    v14 = a6 & 0x100;
LABEL_28:
    v24 = v38;
    goto LABEL_29;
  }
  v24 = v15 & 0xFFFD;
  v17 = 1;
  LOWORD(v38) = v24;
LABEL_29:
  v40 = CurrentIrql;
  if ( (a6 & 0x80) != 0 )
  {
    if ( !v14 )
      v24 = v24 & 0xEFFB | 0x1000;
    LOWORD(v38) = v24 & 0xFFFD;
    v35 = MiGetSharedVm(a1);
    LockHandle.LockQueue.Next = v36;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v35 + 16);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v35 + 8);
  }
  MiWalkPageTables((__int16 *)&v38);
  if ( (a6 & 0x80) != 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( (a6 & 0x100) == 0 )
      LOWORD(v38) = v38 | 4;
  }
  if ( !v17 )
  {
    if ( (v38 & 4) != 0 )
      MiUnlockWorkingSetShared(a1, CurrentIrql);
    else
      MiUnlockWorkingSetExclusive(a1, CurrentIrql, v25, v26);
  }
  if ( (v50[23] & 0x8000000000LL) != 0 )
  {
    MiStartDpcGang(&v50[10]);
    v27 = a7;
    *(_QWORD *)(a7 + 8) += v50[11];
    MiEndDpcGang(&v50[10]);
  }
  else
  {
    v27 = a7;
  }
  v28 = *(_QWORD *)(v27 + 32);
  if ( v28 && v50[5] )
    MiFreePhysicalPageChain(v28, v50[5], 1LL);
  if ( CurrentThread )
  {
    ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(v27 + 32) + 56LL, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
}
