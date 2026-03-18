/*
 * XREFs of ViFilterDeviceUsageNotificationCompletion @ 0x1409829F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoReleaseRemoveLockEx @ 0x14011F290 (IoReleaseRemoveLockEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402A7988 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ViFilterDeviceUsageNotificationCompletion(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  KIRQL v6; // r15
  int v7; // eax
  int v8; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v11; // eax
  struct _KPRCB *v12; // rcx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(a2 + 48) >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 184);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 88));
    v7 = *(_DWORD *)(v4 + 96);
    if ( *(_BYTE *)(v5 + 8) )
    {
      *(_DWORD *)(v4 + 96) = v7 + 1;
      if ( !v7 )
        *(_DWORD *)(a1 + 48) &= ~0x2000u;
    }
    else
    {
      v8 = v7 - 1;
      *(_DWORD *)(v4 + 96) = v8;
      if ( !v8 )
        *(_DWORD *)(a1 + 48) |= *(_DWORD *)(*(_QWORD *)(v4 + 8) + 48LL) & 0x2000;
    }
    if ( (BYTE6(PerfGlobalGroupMask[0]) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v4 + 88), retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 88), 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = SchedulerAssist[5] - 1;
        SchedulerAssist[5] = v11;
        if ( !v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      v12 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v12);
    }
    __writecr8(v6);
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), (PVOID)a2, 0x20u);
  return 0LL;
}
