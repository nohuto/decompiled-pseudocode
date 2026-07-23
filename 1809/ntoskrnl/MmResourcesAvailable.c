/*
 * XREFs of MmResourcesAvailable @ 0x1400FD980
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x1400FD8B0 (ExAllocatePoolWithTagPriority.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KePulseEvent @ 0x1400F0C40 (KePulseEvent.c)
 *     MiFreeExcessSegments @ 0x1401644D4 (MiFreeExcessSegments.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiIssuePageExtendRequest @ 0x1402B855C (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MmResourcesAvailable(char a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR *v3; // r15
  ULONG_PTR v7; // r11
  unsigned __int64 v8; // r12
  int v9; // edi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // r14d
  unsigned __int64 v13; // rcx
  ULONG_PTR v14; // rcx
  ULONG_PTR v15; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // ebp
  struct _KEVENT *v23; // rcx
  __int64 v24; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *CurrentThread; // r13
  struct _KEVENT *v28; // rcx
  struct _KTHREAD *v29; // r15
  __int64 SessionId; // rdx
  unsigned int v31; // r8d
  bool v32; // zf
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  _KLOCK_ENTRY *v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+A0h] [rbp+8h]
  int v43; // [rsp+B0h] [rbp+18h] BYREF
  struct _KTHREAD *v44; // [rsp+B8h] [rbp+20h]

  v3 = &MiSystemPartition;
  v7 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v8 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v9 = a1 & 1;
  if ( (a1 & 1) == 0 )
  {
    v10 = MiState[0] - qword_140439B18;
    goto LABEL_4;
  }
  if ( (a1 & 0x20) == 0 )
  {
    v10 = qword_14043C058 - qword_14043C048;
LABEL_4:
    v11 = v10 << 12;
    goto LABEL_5;
  }
  v17 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v18 = (unsigned __int64)*(unsigned int *)(v17 + 8124) << 21;
  v19 = *(_QWORD *)(v17 + 232) << 12;
  v20 = (0x10000LL - *(unsigned int *)(v17 + 8132)) << 21;
  v21 = v18 - v19;
  if ( v18 <= v19 )
    v21 = 0LL;
  v11 = v20 + v21;
  v3 = *(ULONG_PTR **)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v8 + 3182));
LABEL_5:
  v12 = 0;
  if ( a3 == 16 )
    v13 = a2 + 0x80000;
  else
    v13 = a2 + 0x200000;
  if ( v13 <= v11 )
  {
    if ( !v9 )
      goto LABEL_30;
    v14 = v3[957];
    v15 = v3[801] - v14;
    if ( v14 > v3[801] )
      v15 = 0LL;
    if ( v7 > v15 )
    {
      MiIssuePageExtendRequest(v3, v7, 2LL, 0LL);
    }
    else
    {
LABEL_30:
      if ( a2 + 10485760 < v11 || v3[890] < 0x40000 )
        return 1LL;
      v12 = 1;
    }
  }
  v22 = a1 & 0x20;
  if ( !v22 )
  {
    if ( v9 )
    {
      ++dword_140439BA0;
      CurrentThread = KeGetCurrentThread();
      v44 = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043C018, 0LL);
      v28 = (struct _KEVENT *)v3[30];
      if ( !v28->Header.SignalState )
        KePulseEvent(v28, 0, 0);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043C018, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043C018);
      v43 = 0;
      v29 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_14043C018) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx((__int64)v29->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --v29->SpecialApcDisable;
      ++v29->AbAllocationRegionCount;
      v31 = ((char)v29->AbEntrySummary | (char)v29->AbOrphanedEntrySummary) ^ 0x3F;
      AbAllocationRegionCount = v29->AbAllocationRegionCount;
      v32 = !_BitScanReverse((unsigned int *)&v33, v31);
      if ( v32 )
      {
LABEL_62:
        if ( (*((_DWORD *)&v29->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v29, (ULONG_PTR)&qword_14043C018, (unsigned int)SessionId, 0LL);
      }
      else
      {
        while ( 1 )
        {
          v34 = 1 << v33;
          v35 = v33;
          v36 = &v29->LockEntries[v35];
          v31 &= ~v34;
          if ( (v36->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v36->LockState.0 & 1) == 0
            && (*(_QWORD *)&v36->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14043C018 & 0x7FFFFFFFFFFFFFFCLL)
            && v36->LockState.SessionId == (_DWORD)SessionId )
          {
            v36->AcquiredByte &= ~1u;
            if ( v36->LockState.0 )
              break;
          }
          v32 = !_BitScanReverse((unsigned int *)&v33, v31);
          if ( v32 )
            goto LABEL_61;
        }
        if ( !v36 )
        {
LABEL_61:
          CurrentThread = v44;
          goto LABEL_62;
        }
        v36->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v36->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v29->LockEntries[v35].TreeNode, SessionId);
        v43 = 0;
        v43 = v36->BoostBitmap.AllFields & 0x1FFFF;
        v36->BoostBitmap.AllFields &= 0xFFFE0000;
        v36->ThreadLocalFlags &= ~1u;
        v36->LockState.0 = 0LL;
        v37 = (unsigned __int128)(((char *)v36 - (char *)v29 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
        CurrentThread = v44;
        v38 = ((unsigned __int64)v37 >> 63) + (v37 >> 4);
        if ( AbAllocationRegionCount == 1 )
          v29->AbEntrySummary |= 1 << v38;
        else
          _InterlockedOr8((volatile signed __int8 *)&v29->AbOrphanedEntrySummary, 1 << v38);
      }
      --v29->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v29, (__int64)&qword_14043C018, (__int64)&v43);
      v32 = v29->SpecialApcDisable++ == -1;
      if ( v32 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v29->ApcState.ApcListHead[0].Flink != &v29->152 )
        KiCheckForKernelApcDelivery(v39);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    else
    {
      ++dword_140439B9C;
      KeAcquireInStackQueuedSpinLock(v3 + 608, &LockHandle);
      v23 = (struct _KEVENT *)v3[32];
      if ( !v23->Header.SignalState )
        KePulseEvent(v23, 0, 0);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
    }
    MiFreeExcessSegments(v24);
  }
  if ( !v12 )
  {
    v40 = 4LL;
    if ( v9 )
    {
      if ( a3 != 16 )
        v40 = 8LL;
      if ( v22 )
      {
        ++*(_DWORD *)((char *)&MiState[9] + v40);
        ++*(_DWORD *)(v8 + 88);
      }
      else
      {
        ++*(_DWORD *)((char *)&MiState[7] + v40 + 4);
      }
    }
    else
    {
      if ( a3 != 16 )
        v40 = 8LL;
      ++*(_DWORD *)((char *)&MiState[6] + v40);
    }
    ++dword_140439B58;
  }
  return v12;
}
