/*
 * XREFs of PopUpdateWakeSourceWorker @ 0x1402DC050
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PnpUnlockDeviceActionQueue @ 0x140135460 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140135504 (PnpLockDeviceActionQueue.c)
 *     PopWakeInfoDereference @ 0x1401586E0 (PopWakeInfoDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopFreeWakeSource @ 0x14086C9D8 (PopFreeWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x14086CAA4 (PopProcessWakeSourceWork.c)
 */

PVOID *PopUpdateWakeSourceWorker()
{
  PVOID v0; // rbx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v3; // rdi
  int v4; // esi
  PVOID ***v5; // rdx
  PVOID **v6; // rax
  PVOID **v7; // rax
  PVOID *v8; // rdx
  PVOID **v9; // rcx
  PVOID *v10; // rcx
  struct _KEVENT *v11; // rcx
  _QWORD *v12; // rcx
  PVOID *v13; // rax
  unsigned __int8 v14; // bl
  struct _KPRCB *v15; // rcx
  PVOID v16; // rcx
  PVOID *result; // rax
  PVOID *v18; // rax
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  PVOID **v22; // [rsp+78h] [rbp+28h] BYREF
  PVOID **v23; // [rsp+80h] [rbp+30h] BYREF

  p_P = &P;
  P = &P;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  while ( 1 )
  {
    v0 = PopWakeSourceWorkList;
    if ( PopWakeSourceWorkList == &PopWakeSourceWorkList )
      break;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(OldIrql);
    v3 = *((_QWORD *)v0 + 3);
    PnpLockDeviceActionQueue();
    v4 = PopProcessWakeSourceWork(v0, &v22, &v23);
    PnpUnlockDeviceActionQueue();
    ObfDereferenceObjectWithTag(*((PVOID *)v0 + 2), 0x67446F50u);
    KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
    if ( (v3 == PopCurrentWakeInfo || v3 == PopPendingWakeInfo) && v4 >= 0 )
    {
      v5 = *(PVOID ****)(v3 + 32);
      if ( *v5 != (PVOID **)(v3 + 24) )
        goto LABEL_35;
      v6 = v22;
      v22 = 0LL;
      *v6 = (PVOID *)(v3 + 24);
      v6[1] = (PVOID *)v5;
      *v5 = v6;
      *(_QWORD *)(v3 + 32) = v6;
      ++*(_DWORD *)(v3 + 40);
      v7 = v23;
      if ( !v23 )
        goto LABEL_20;
      v8 = *v23;
      v9 = (PVOID **)v23[1];
      if ( (*v23)[1] != v23 || *v9 != (PVOID *)v23 )
        goto LABEL_35;
      *v9 = v8;
      v8[1] = v9;
      --*(_DWORD *)(v3 + 40);
      v22 = v7;
    }
    else
    {
      v7 = v22;
    }
    if ( v7 )
    {
      v10 = p_P;
      if ( *p_P != &P )
        goto LABEL_35;
      v7[1] = p_P;
      *v7 = &P;
      *v10 = v7;
      p_P = (PVOID *)v7;
    }
LABEL_20:
    PopWakeInfoDereference(v3);
    v11 = (struct _KEVENT *)*((_QWORD *)v0 + 4);
    if ( v11 )
      KeSetEvent(v11, 0, 0);
    v12 = *(_QWORD **)v0;
    v13 = (PVOID *)*((_QWORD *)v0 + 1);
    if ( *(PVOID *)(*(_QWORD *)v0 + 8LL) != v0 || *v13 != v0 )
LABEL_35:
      __fastfail(3u);
    *v13 = v12;
    v12[1] = v13;
    ExFreePoolWithTag(v0, 0x206D654Du);
  }
  PopWakeSourceWorkInProgress = 0;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v14 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v15 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v15);
  }
  __writecr8(v14);
  while ( 1 )
  {
    v16 = P;
    result = &P;
    if ( P == &P )
      return result;
    v18 = *(PVOID **)P;
    if ( *((PVOID **)P + 1) != &P || v18[1] != P )
      goto LABEL_35;
    P = *(PVOID *)P;
    v18[1] = &P;
    PopFreeWakeSource(v16);
  }
}
