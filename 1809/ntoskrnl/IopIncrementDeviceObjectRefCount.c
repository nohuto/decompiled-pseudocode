/*
 * XREFs of IopIncrementDeviceObjectRefCount @ 0x1400B8780
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400DA98C (IopCompleteUnloadOrDelete.c)
 *     PnpMarkDeviceForRemove @ 0x14016992C (PnpMarkDeviceForRemove.c)
 *     IopShutdownBaseFileSystems @ 0x140578E88 (IopShutdownBaseFileSystems.c)
 *     IopMountVolume @ 0x1405A3E64 (IopMountVolume.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405A45A0 (IoCreateStreamFileObjectEx2.c)
 *     IopDeleteFile @ 0x14063C3E0 (IopDeleteFile.c)
 *     IoRegisterFileSystem @ 0x14070E3C0 (IoRegisterFileSystem.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopIncrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, char a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bp
  char *v5; // rbx
  volatile __int64 *v6; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v9; // rdx
  int v10; // edi
  volatile signed __int64 **v11; // rbx
  __int64 v12; // rax
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  int v16; // eax
  int v17; // eax
  struct _KPRCB *v18; // rcx
  __int64 v19; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
  {
    v10 = ++*(_DWORD *)(BugCheckParameter2 + 4);
    goto LABEL_13;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v5 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v6 = (volatile __int64 *)*((_QWORD *)v5 + 1);
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
    KiAcquireQueuedSpinLockInstrumented(v5, v6);
  }
  else
  {
    v9 = (_QWORD *)_InterlockedExchange64(v6, (__int64)v5);
    if ( v9 )
      KxWaitForLockOwnerShip((__int64)v5, v9, a3);
  }
  v10 = ++*(_DWORD *)(BugCheckParameter2 + 4);
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
        goto LABEL_10;
      v12 = KxWaitForLockChainValid((__int64 *)v11);
    }
    *v11 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v12 + 8), 1uLL);
  }
LABEL_10:
  v13 = KeGetCurrentPrcb();
  v14 = v13->SchedulerAssist;
  if ( v14 )
  {
    if ( v13->NestingLevel <= 1u )
    {
      v17 = v14[5] - 1;
      v14[5] = v17;
      if ( !v17 )
        KiRemoveSystemWorkPriorityKick(v13);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v18);
  }
  __writecr8(CurrentIrql);
LABEL_13:
  if ( v10 <= 0 )
  {
    v19 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v19 )
    {
      IoAddTriageDumpDataBlock(v19, 336LL);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  return (unsigned int)v10;
}
