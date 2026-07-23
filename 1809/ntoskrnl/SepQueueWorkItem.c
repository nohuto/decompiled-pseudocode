/*
 * XREFs of SepQueueWorkItem @ 0x14012A16C
 * Callers:
 *     SepAdtLogAuditRecord @ 0x140186F00 (SepAdtLogAuditRecord.c)
 *     SepInformLsaOfDeletedLogon @ 0x1406B4A58 (SepInformLsaOfDeletedLogon.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     PsGetServerSiloState @ 0x14012A2CC (PsGetServerSiloState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

char __fastcall SepQueueWorkItem(__int64 a1, __int64 a2, _BYTE *a3)
{
  char v6; // bp
  char v7; // r15
  _BYTE *v8; // r8
  unsigned __int8 CurrentIrql; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64); // rax
  _QWORD *v13; // rax
  _QWORD *v15; // rcx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0;
  v7 = 0;
  if ( (unsigned int)PsGetServerSiloState(*(_QWORD *)(a2 + 56)) == 1 )
  {
    if ( v8 )
      *v8 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql == 2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      v11 = *(_QWORD *)(a1 + 200);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 32), 1u);
      v11 = *(_QWORD *)(a1 + 192);
    }
    if ( v11 )
    {
      if ( a3 )
        *a3 = 1;
      goto LABEL_15;
    }
    v12 = *(__int64 (__fastcall **)(__int64))(a1 + 208);
    if ( v12 )
      v6 = v12(a2);
    else
      v6 = 1;
    if ( !v6 )
    {
LABEL_15:
      if ( CurrentIrql == 2 )
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
      if ( v7 )
      {
        *(_QWORD *)(a1 + 144) = 0LL;
        *(_QWORD *)(a1 + 160) = SepRmCallLsa;
        *(_QWORD *)(a1 + 168) = a1;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 144), DelayedWorkQueue);
      }
      return v6;
    }
    *(_DWORD *)(a2 + 52) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 180));
    if ( CurrentIrql == 2 )
    {
      v15 = *(_QWORD **)(a1 + 24);
      if ( *v15 == a1 + 16 )
      {
        *(_QWORD *)a2 = a1 + 16;
        *(_QWORD *)(a2 + 8) = v15;
        *v15 = a2;
        *(_QWORD *)(a1 + 24) = a2;
LABEL_13:
        if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 176)) == 1 )
          v7 = 1;
        goto LABEL_15;
      }
    }
    else
    {
      v13 = *(_QWORD **)(a1 + 8);
      if ( *v13 == a1 )
      {
        *(_QWORD *)a2 = a1;
        *(_QWORD *)(a2 + 8) = v13;
        *v13 = a2;
        *(_QWORD *)(a1 + 8) = a2;
        goto LABEL_13;
      }
    }
    __fastfail(3u);
  }
  if ( a3 )
    *v8 = 1;
  return 0;
}
