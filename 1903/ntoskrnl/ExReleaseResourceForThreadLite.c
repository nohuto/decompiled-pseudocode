/*
 * XREFs of ExReleaseResourceForThreadLite @ 0x140100560
 * Callers:
 *     CcUnpinDataForThread @ 0x140823520 (CcUnpinDataForThread.c)
 * Callees:
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BD90 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D9E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     ExpFastResourceLegacyRelease @ 0x14016BC98 (ExpFastResourceLegacyRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall ExReleaseResourceForThreadLite(PERESOURCE Resource, ERESOURCE_THREAD ResourceThreadId)
{
  __int16 v4; // ax
  unsigned __int8 v5; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v8; // rdx
  struct _KTHREAD *v9; // r8
  USHORT Flag; // cx
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx
  int v13; // eax
  _QWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  if ( (Resource->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v4 = Resource->Flag & 1;
  if ( v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v4 )
  {
    if ( (struct _KTHREAD *)ResourceThreadId != KeGetCurrentThread() )
      KeBugCheckEx(0x1C6u, 0x11uLL, (ULONG_PTR)Resource, ResourceThreadId, 0LL);
    ExpFastResourceLegacyRelease((ULONG_PTR)Resource);
  }
  else
  {
    v15 = 0LL;
    v14[0] = 0LL;
    v14[1] = &Resource->SpinLock;
    v5 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v5 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    LOBYTE(v15) = v5;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = SchedulerAssist[5];
        SchedulerAssist[5] = v13 + 1;
        if ( v13 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v14, &Resource->SpinLock);
    }
    else
    {
      v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)v14);
      if ( v8 )
        KxWaitForLockOwnerShip((__int64)v14, v8);
    }
    v9 = KeGetCurrentThread();
    Flag = Resource->Flag;
    if ( ((Flag & 1) != 0 || ExpResourceEnforceOwnerTransfer)
      && (ResourceThreadId & 3) != 3
      && (struct _KTHREAD *)ResourceThreadId != v9 )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v9, ResourceThreadId, 0LL);
    }
    if ( (Flag & 0x80u) != 0 )
      ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)Resource, ResourceThreadId, (unsigned __int8 *)v14);
    else
      ExpReleaseResourceSharedForThreadLite((ULONG_PTR)Resource, ResourceThreadId, (unsigned __int8 *)v14);
  }
}
