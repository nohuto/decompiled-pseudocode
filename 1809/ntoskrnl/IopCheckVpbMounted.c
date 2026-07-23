/*
 * XREFs of IopCheckVpbMounted @ 0x1400B8F70
 * Callers:
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     IopDecrementDeviceObjectRef @ 0x1400B8B60 (IopDecrementDeviceObjectRef.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     IopMountVolume @ 0x1405A3E64 (IopMountVolume.c)
 */

__int64 __fastcall IopCheckVpbMounted(__int64 a1, ULONG_PTR a2, __int64 a3, int *a4)
{
  KIRQL CurrentIrql; // si
  char *v7; // rbx
  volatile __int64 *v8; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v11; // rdx
  ULONG_PTR v12; // rbx
  volatile signed __int64 **v13; // rdi
  __int64 v14; // rax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  __int64 result; // rax
  int v18; // eax
  KIRQL v19; // al
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  struct _KPRCB *v24; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v26; // [rsp+68h] [rbp+10h] BYREF

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
      v20 = SchedulerAssist[5];
      SchedulerAssist[5] = v20 + 1;
      if ( v20 == -1 )
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
  v12 = *(_QWORD *)(a2 + 56);
  if ( (*(_BYTE *)(v12 + 4) & 1) != 0 )
  {
LABEL_7:
    if ( (*(_BYTE *)(v12 + 4) & 2) != 0 )
    {
      *a4 = -1073741790;
      v12 = 0LL;
    }
    else if ( (int)++*(_DWORD *)(v12 + 28) <= 0 )
    {
      v21 = *(_QWORD *)(v12 + 8);
      if ( v21 )
      {
        IoAddTriageDumpDataBlock(v21, 336LL);
        v22 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL);
        if ( v22 )
        {
          IoAddTriageDumpDataBlock(v22, 336LL);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 56LL));
        }
      }
      KeBugCheckEx(0x18u, 0LL, v12, 7uLL, *(unsigned int *)(v12 + 28));
    }
    v13 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
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
          goto LABEL_12;
        v14 = KxWaitForLockChainValid((__int64 *)v13);
      }
      *v13 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v14 + 8), 1uLL);
    }
LABEL_12:
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v23 = v16[5] - 1;
        v16[5] = v23;
        if ( !v23 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v24 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v24);
    }
    __writecr8(CurrentIrql);
    if ( !v12 )
      IopDecrementDeviceObjectRef(a2, 0, 0LL);
    return v12;
  }
  while ( 1 )
  {
    KeReleaseQueuedSpinLock(9uLL, CurrentIrql);
    v26 = 0LL;
    v18 = IopMountVolume(a2, (__int64)&v26);
    *a4 = v18;
    if ( v18 < 0 || v18 == 192 || v18 == 257 )
      break;
    result = v26;
    if ( v26 )
      return result;
    v19 = KeAcquireQueuedSpinLock(9uLL);
    v12 = *(_QWORD *)(a2 + 56);
    CurrentIrql = v19;
    if ( (*(_BYTE *)(v12 + 4) & 1) != 0 )
      goto LABEL_7;
  }
  IopDecrementDeviceObjectRef(a2, 0, 0LL);
  result = 0LL;
  if ( *a4 >= 0 )
    *a4 = -1073741806;
  return result;
}
