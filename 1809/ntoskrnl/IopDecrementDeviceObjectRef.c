/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x1400B8B60
 * Callers:
 *     IopCheckVpbMounted @ 0x1400B8F70 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x14016A290 (IopDecrementDeviceObjectHandleCount.c)
 *     IopShutdownBaseFileSystems @ 0x140578E88 (IopShutdownBaseFileSystems.c)
 *     IopMountVolume @ 0x1405A3E64 (IopMountVolume.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405A45A0 (IoCreateStreamFileObjectEx2.c)
 *     IopDeleteFile @ 0x14063C3E0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     IopLoadFileSystemDriver @ 0x1407080BC (IopLoadFileSystemDriver.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     IopCompleteUnloadOrDelete @ 0x1400DA98C (IopCompleteUnloadOrDelete.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(ULONG_PTR BugCheckParameter2, char a2, __int64 a3)
{
  unsigned __int8 v5; // bp
  unsigned __int8 CurrentIrql; // r14
  char *v7; // rbx
  volatile __int64 *v8; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v11; // rdx
  int v12; // eax
  volatile signed __int64 **v13; // rbx
  __int64 v14; // rax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  struct _KPRCB *v21; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v7 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v8 = (volatile __int64 *)*((_QWORD *)v7 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v18 = SchedulerAssist[5];
      SchedulerAssist[5] = v18 + 1;
      if ( v18 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v7, v8);
  }
  else
  {
    v11 = (_QWORD *)_InterlockedExchange64(v8, (__int64)v7);
    if ( v11 )
      KxWaitForLockOwnerShip((__int64)v7, v11, a3);
  }
  v12 = *(_DWORD *)(BugCheckParameter2 + 4) - 1;
  *(_DWORD *)(BugCheckParameter2 + 4) = v12;
  if ( v12 < 0 )
  {
    v19 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v19 )
    {
      IoAddTriageDumpDataBlock(v19, 336LL);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      v12 = *(_DWORD *)(BugCheckParameter2 + 4);
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, v12);
  }
  if ( !v12 && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2);
  v13 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v13, retaddr);
  }
  else
  {
    _m_prefetchw(v13);
    v14 = (__int64)*v13;
    if ( !*v13 )
    {
      if ( v13 == (volatile signed __int64 **)_InterlockedCompareExchange64(v13[1], 0LL, (signed __int64)v13) )
        goto LABEL_11;
      v14 = KxWaitForLockChainValid((__int64 *)v13);
    }
    *v13 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v14 + 8), 1uLL);
  }
LABEL_11:
  v15 = KeGetCurrentPrcb();
  v16 = v15->SchedulerAssist;
  if ( v16 )
  {
    if ( v15->NestingLevel <= 1u )
    {
      v20 = v16[5] - 1;
      v16[5] = v20;
      if ( !v20 )
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v21 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v21);
  }
  __writecr8(CurrentIrql);
  return v5;
}
