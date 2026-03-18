/*
 * XREFs of IopIncrementDeviceObjectRefCount @ 0x1400F14B0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400F10C4 (IopCompleteUnloadOrDelete.c)
 *     PnpMarkDeviceForRemove @ 0x140171030 (PnpMarkDeviceForRemove.c)
 *     IopShutdownBaseFileSystems @ 0x1405A7CC4 (IopShutdownBaseFileSystems.c)
 *     IopDeleteFile @ 0x1405F1150 (IopDeleteFile.c)
 *     IopMountVolume @ 0x1406A0254 (IopMountVolume.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406A0820 (IoCreateStreamFileObjectEx2.c)
 *     IoRegisterFileSystem @ 0x14073B850 (IoRegisterFileSystem.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x14019BF38 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopIncrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  char *v4; // rbx
  volatile __int64 *v5; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v8; // rdx
  int v9; // edi
  volatile signed __int64 **v10; // rbx
  __int64 v11; // rax
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  int v15; // eax
  int v16; // eax
  struct _KPRCB *v17; // rcx
  __int64 v18; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
  {
    v9 = ++*(_DWORD *)(BugCheckParameter2 + 4);
    goto LABEL_13;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v5 = (volatile __int64 *)*((_QWORD *)v4 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v15 = SchedulerAssist[5];
      SchedulerAssist[5] = v15 + 1;
      if ( v15 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v4, v5);
  }
  else
  {
    v8 = (_QWORD *)_InterlockedExchange64(v5, (__int64)v4);
    if ( v8 )
      KxWaitForLockOwnerShip((__int64)v4, v8);
  }
  v9 = ++*(_DWORD *)(BugCheckParameter2 + 4);
  v10 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v10, retaddr);
  }
  else
  {
    _m_prefetchw(v10);
    v11 = (__int64)*v10;
    if ( !*v10 )
    {
      if ( v10 == (volatile signed __int64 **)_InterlockedCompareExchange64(v10[1], 0LL, (signed __int64)v10) )
        goto LABEL_10;
      v11 = KxWaitForLockChainValid((__int64 *)v10);
    }
    *v10 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v11 + 8), 1uLL);
  }
LABEL_10:
  v12 = KeGetCurrentPrcb();
  v13 = v12->SchedulerAssist;
  if ( v13 )
  {
    if ( v12->NestingLevel <= 1u )
    {
      v16 = v13[5] - 1;
      v13[5] = v16;
      if ( !v16 )
        KiRemoveSystemWorkPriorityKick(v12);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v17);
  }
  __writecr8(CurrentIrql);
LABEL_13:
  if ( v9 <= 0 )
  {
    v18 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v18 )
    {
      IoAddTriageDumpDataBlock(v18, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  return (unsigned int)v9;
}
