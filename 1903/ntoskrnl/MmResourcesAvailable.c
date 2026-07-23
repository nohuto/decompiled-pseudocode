/*
 * XREFs of MmResourcesAvailable @ 0x14003A2E0
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x1400377B0 (ExAllocatePoolWithTagPriority.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KePulseEvent @ 0x1400F3050 (KePulseEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiFreeExcessSegments @ 0x1402B99CC (MiFreeExcessSegments.c)
 *     MiIssuePageExtendRequest @ 0x1402CE6CC (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MmResourcesAvailable(char a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR *v3; // r14
  ULONG_PTR v7; // r11
  unsigned __int64 v8; // r9
  int v9; // edi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // ebp
  unsigned __int64 v13; // rcx
  ULONG_PTR v14; // rcx
  ULONG_PTR v15; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  struct _KEVENT *v22; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _KEVENT *v29; // rcx
  struct _KTHREAD *v30; // rdi
  unsigned int SessionId; // r8d
  unsigned __int8 v32; // r14
  unsigned int v33; // edx
  bool v34; // zf
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  _KLOCK_ENTRY *v38; // rsi
  __int64 v39; // rdx
  $6EAC78A6FCFADE0A5FA44F358736B38F *v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  int v44; // [rsp+80h] [rbp+8h] BYREF
  int v45; // [rsp+90h] [rbp+18h]

  v3 = &MiSystemPartition;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v8 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
  v9 = a1 & 1;
  if ( (a1 & 1) == 0 )
  {
    v10 = MiState - qword_1404644C8;
    goto LABEL_4;
  }
  if ( (a1 & 0x20) == 0 )
  {
    v10 = qword_1404669B8 - qword_1404669A8;
LABEL_4:
    v11 = v10 << 12;
    goto LABEL_5;
  }
  v17 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
  v18 = (__int64)*(int *)(v17 + 1148) << 21;
  v19 = *(_QWORD *)(v17 + 184) << 12;
  v20 = (0x10000LL - *(unsigned int *)(v17 + 1152)) << 21;
  v21 = v18 - v19;
  if ( v18 <= v19 )
    v21 = 0LL;
  v11 = v20 + v21;
  v3 = *(ULONG_PTR **)(qword_140466188 + 8LL * *(unsigned __int16 *)(v8 + 430));
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
    v14 = v3[1053];
    v15 = v3[897] - v14;
    if ( v14 > v3[897] )
      v15 = 0LL;
    if ( v7 > v15 )
    {
      MiIssuePageExtendRequest(v3, v7, 2LL);
    }
    else
    {
LABEL_30:
      if ( a2 + 10485760 < v11 || v3[986] < 0x40000 )
        return 1LL;
      v12 = 1;
    }
  }
  if ( (a1 & 0x20) == 0 )
  {
    if ( v9 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
      v29 = (struct _KEVENT *)v3[30];
      if ( !v29->Header.SignalState )
        KePulseEvent(v29, 0, 0);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&BugCheckParameter2);
      v44 = 0;
      v30 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(&BugCheckParameter2, v26, v27, v28) == 1 )
        SessionId = MmGetSessionIdEx(v30->ApcState.Process);
      else
        SessionId = -1;
      --v30->SpecialApcDisable;
      v32 = ++v30->AbAllocationRegionCount;
      v33 = ((char)v30->AbEntrySummary | (char)v30->AbOrphanedEntrySummary) ^ 0x3F;
      v34 = !_BitScanReverse((unsigned int *)&v35, v33);
      v45 = v35;
      if ( v34 )
        goto LABEL_57;
      while ( 1 )
      {
        v36 = 1 << v35;
        v37 = v35;
        v38 = &v30->LockEntries[v37];
        v33 &= ~v36;
        if ( (v38->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v38->LockState.0 & 1) == 0
          && (*(_QWORD *)&v38->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
          && v38->LockState.SessionId == SessionId )
        {
          v38->AcquiredByte &= ~1u;
          if ( v38->LockState.0 )
            break;
        }
        v34 = !_BitScanReverse((unsigned int *)&v35, v33);
        v45 = v35;
        if ( v34 )
          goto LABEL_57;
      }
      if ( !v38 )
      {
LABEL_57:
        if ( (*((_DWORD *)&v30->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v30, (ULONG_PTR)&BugCheckParameter2, SessionId, 0LL);
      }
      else
      {
        v38->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v38->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v30->LockEntries[v37].TreeNode);
        v44 = v38->BoostBitmap.AllFields & 0x1FFFF;
        v38->BoostBitmap.AllFields &= 0xFFFE0000;
        v38->ThreadLocalFlags &= ~1u;
        v38->LockState.0 = 0LL;
        v39 = ((char *)v38 - (char *)v30 - 800) / 96;
        if ( v32 == 1 )
          v30->AbEntrySummary |= 1 << v39;
        else
          _InterlockedOr8((volatile signed __int8 *)&v30->AbOrphanedEntrySummary, 1 << v39);
      }
      --v30->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v30, &BugCheckParameter2, &v44);
      v34 = v30->SpecialApcDisable++ == -1;
      if ( v34 )
      {
        v40 = &v30->152;
        if ( ($6EAC78A6FCFADE0A5FA44F358736B38F *)v40->ApcState.ApcListHead[0].Flink != v40 )
          KiCheckForKernelApcDelivery();
      }
      KiLeaveGuardedRegionUnsafe(CurrentThread, v40, v41, v42);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(v3 + 608, &LockHandle);
      v22 = (struct _KEVENT *)v3[32];
      if ( !v22->Header.SignalState )
        KePulseEvent(v22, 0, 0);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
    }
    MiFreeExcessSegments();
  }
  return v12;
}
