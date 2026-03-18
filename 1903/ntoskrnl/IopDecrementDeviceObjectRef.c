/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x140036EA0
 * Callers:
 *     IopCheckVpbMounted @ 0x1400440F0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x140171760 (IopDecrementDeviceObjectHandleCount.c)
 *     IopShutdownBaseFileSystems @ 0x1405A7CE4 (IopShutdownBaseFileSystems.c)
 *     IopDeleteFile @ 0x1405F0850 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     IopMountVolume @ 0x140681CF4 (IopMountVolume.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406822C0 (IoCreateStreamFileObjectEx2.c)
 *     IopLoadFileSystemDriver @ 0x14072DCD8 (IopLoadFileSystemDriver.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     IopCompleteUnloadOrDelete @ 0x1400B40A4 (IopCompleteUnloadOrDelete.c)
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 v4; // bp
  unsigned __int8 CurrentIrql; // r14
  char *v6; // rbx
  volatile __int64 *v7; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v10; // eax
  volatile signed __int64 **v11; // rbx
  __int64 v12; // rax
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  struct _KPRCB *v19; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v6 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v7 = (volatile __int64 *)*((_QWORD *)v6 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v16 = SchedulerAssist[5];
      SchedulerAssist[5] = v16 + 1;
      if ( v16 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v6, v7);
  }
  else if ( _InterlockedExchange64(v7, (__int64)v6) )
  {
    KxWaitForLockOwnerShip(v6);
  }
  v10 = *(_DWORD *)(BugCheckParameter2 + 4) - 1;
  *(_DWORD *)(BugCheckParameter2 + 4) = v10;
  if ( v10 < 0 )
  {
    v17 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v17 )
    {
      IoAddTriageDumpDataBlock(v17, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      v10 = *(_DWORD *)(BugCheckParameter2 + 4);
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, v10);
  }
  if ( !v10 && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2);
  v11 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v11, retaddr);
  }
  else
  {
    _m_prefetchw(v11);
    v12 = (__int64)*v11;
    if ( !*v11 )
    {
      if ( v11 == (volatile signed __int64 **)_InterlockedCompareExchange64(v11[1], 0LL, (signed __int64)v11) )
        goto LABEL_11;
      v12 = KxWaitForLockChainValid(v11);
    }
    *v11 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v12 + 8), 1uLL);
  }
LABEL_11:
  v13 = KeGetCurrentPrcb();
  v14 = v13->SchedulerAssist;
  if ( v14 )
  {
    if ( v13->NestingLevel <= 1u )
    {
      v18 = v14[5] - 1;
      v14[5] = v18;
      if ( !v18 )
        KiRemoveSystemWorkPriorityKick(v13);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v19 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v19);
  }
  __writecr8(CurrentIrql);
  return v4;
}
