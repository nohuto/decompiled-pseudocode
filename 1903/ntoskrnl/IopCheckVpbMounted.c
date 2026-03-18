/*
 * XREFs of IopCheckVpbMounted @ 0x1400440F0
 * Callers:
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 * Callees:
 *     IopDecrementDeviceObjectRef @ 0x140036EA0 (IopDecrementDeviceObjectRef.c)
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     IopMountVolume @ 0x140681CF4 (IopMountVolume.c)
 */

__int64 __fastcall IopCheckVpbMounted(__int64 a1, ULONG_PTR a2, __int64 a3, int *a4)
{
  KIRQL CurrentIrql; // si
  char *v7; // rbx
  volatile __int64 *v8; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  ULONG_PTR v11; // rbx
  volatile signed __int64 **v12; // rdi
  __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  __int64 result; // rax
  int v17; // eax
  KIRQL v18; // al
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  struct _KPRCB *v23; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v25; // [rsp+68h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v7 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  v8 = (volatile __int64 *)*((_QWORD *)v7 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v19 = SchedulerAssist[5];
      SchedulerAssist[5] = v19 + 1;
      if ( v19 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v7, v8);
  }
  else if ( _InterlockedExchange64(v8, (__int64)v7) )
  {
    KxWaitForLockOwnerShip(v7);
  }
  v11 = *(_QWORD *)(a2 + 56);
  if ( (*(_BYTE *)(v11 + 4) & 1) != 0 )
  {
LABEL_7:
    if ( (*(_BYTE *)(v11 + 4) & 2) != 0 )
    {
      *a4 = -1073741790;
      v11 = 0LL;
    }
    else if ( (int)++*(_DWORD *)(v11 + 28) <= 0 )
    {
      v20 = *(_QWORD *)(v11 + 8);
      if ( v20 )
      {
        IoAddTriageDumpDataBlock(v20, (PVOID)0x150);
        v21 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL);
        if ( v21 )
        {
          IoAddTriageDumpDataBlock(v21, (PVOID)0x150);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 56LL));
        }
      }
      KeBugCheckEx(0x18u, 0LL, v11, 7uLL, *(unsigned int *)(v11 + 28));
    }
    v12 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v12, retaddr);
    }
    else
    {
      _m_prefetchw(v12);
      v13 = (__int64)*v12;
      if ( !*v12 )
      {
        if ( v12 == (volatile signed __int64 **)_InterlockedCompareExchange64(v12[1], 0LL, (signed __int64)v12) )
          goto LABEL_12;
        v13 = KxWaitForLockChainValid(v12);
      }
      *v12 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
    }
LABEL_12:
    v14 = KeGetCurrentPrcb();
    v15 = v14->SchedulerAssist;
    if ( v15 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v22 = v15[5] - 1;
        v15[5] = v22;
        if ( !v22 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v23 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v23);
    }
    __writecr8(CurrentIrql);
    if ( !v11 )
      IopDecrementDeviceObjectRef(a2, 0);
    return v11;
  }
  while ( 1 )
  {
    KeReleaseQueuedSpinLock(9uLL, CurrentIrql);
    v25 = 0LL;
    v17 = IopMountVolume(a2, (__int64)&v25);
    *a4 = v17;
    if ( v17 < 0 || v17 == 192 || v17 == 257 )
      break;
    result = v25;
    if ( v25 )
      return result;
    v18 = KeAcquireQueuedSpinLock(9uLL);
    v11 = *(_QWORD *)(a2 + 56);
    CurrentIrql = v18;
    if ( (*(_BYTE *)(v11 + 4) & 1) != 0 )
      goto LABEL_7;
  }
  IopDecrementDeviceObjectRef(a2, 0);
  result = 0LL;
  if ( *a4 >= 0 )
    *a4 = -1073741806;
  return result;
}
