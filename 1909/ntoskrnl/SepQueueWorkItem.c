/*
 * XREFs of SepQueueWorkItem @ 0x14012D804
 * Callers:
 *     SepAdtLogAuditRecord @ 0x14012D67C (SepAdtLogAuditRecord.c)
 *     SepInformLsaOfDeletedLogon @ 0x1406D75B0 (SepInformLsaOfDeletedLogon.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     PsGetServerSiloState @ 0x14012D970 (PsGetServerSiloState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

char __fastcall SepQueueWorkItem(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // rcx
  char v7; // bp
  char v8; // r15
  _BYTE *v9; // r8
  unsigned __int8 CurrentIrql; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64); // rax
  _QWORD *v14; // rax
  _QWORD *v16; // rcx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a2 + 56);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 0;
  v8 = 0;
  if ( (unsigned int)PsGetServerSiloState(v4) == 1 )
  {
    if ( v9 )
      *v9 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql == 2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      v12 = *(_QWORD *)(a1 + 200);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 32), 1u);
      v12 = *(_QWORD *)(a1 + 192);
    }
    if ( v12 )
    {
      if ( a3 )
        *a3 = 1;
      goto LABEL_15;
    }
    v13 = *(__int64 (__fastcall **)(__int64))(a1 + 208);
    if ( v13 )
      v7 = v13(a2);
    else
      v7 = 1;
    if ( !v7 )
    {
LABEL_15:
      if ( CurrentIrql == 2 )
      {
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
      else
      {
        ExReleaseResourceLite((PERESOURCE)(a1 + 32));
        KeLeaveCriticalRegion();
      }
      if ( v8 )
      {
        *(_QWORD *)(a1 + 144) = 0LL;
        *(_QWORD *)(a1 + 160) = SepRmCallLsa;
        *(_QWORD *)(a1 + 168) = a1;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 144), DelayedWorkQueue);
      }
      return v7;
    }
    *(_DWORD *)(a2 + 52) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 180));
    if ( CurrentIrql == 2 )
    {
      v16 = *(_QWORD **)(a1 + 24);
      if ( *v16 == a1 + 16 )
      {
        *(_QWORD *)a2 = a1 + 16;
        *(_QWORD *)(a2 + 8) = v16;
        *v16 = a2;
        *(_QWORD *)(a1 + 24) = a2;
LABEL_13:
        if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 176)) == 1 )
          v8 = 1;
        goto LABEL_15;
      }
    }
    else
    {
      v14 = *(_QWORD **)(a1 + 8);
      if ( *v14 == a1 )
      {
        *(_QWORD *)a2 = a1;
        *(_QWORD *)(a2 + 8) = v14;
        *v14 = a2;
        *(_QWORD *)(a1 + 8) = a2;
        goto LABEL_13;
      }
    }
    __fastfail(3u);
  }
  if ( a3 )
    *v9 = 1;
  return 0;
}
