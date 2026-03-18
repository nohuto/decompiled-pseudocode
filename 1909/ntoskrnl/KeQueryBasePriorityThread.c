/*
 * XREFs of KeQueryBasePriorityThread @ 0x140013AAC
 * Callers:
 *     NtQueryInformationThread @ 0x1405E5C60 (NtQueryInformationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140104DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryBasePriorityThread(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  unsigned int v7; // ebx
  char v8; // al
  _DWORD *v10; // rcx
  int v11; // eax
  int v12; // eax
  struct _KPRCB *v13; // rcx
  volatile signed __int32 *v14; // rdx
  int v15; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 544);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v1 + 64));
  CurrentPrcb = KeGetCurrentPrcb();
  v15 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = SchedulerAssist[5];
        SchedulerAssist[5] = v11 + 1;
        if ( v11 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v4);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v10[5] - 1;
        v10[5] = v12;
        if ( !v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v4);
      }
    }
    do
      KeYieldProcessorEx(&v15);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v7 = *(char *)(a1 + 563) - *(char *)(v1 + 448);
  v8 = *(_BYTE *)(a1 + 645);
  if ( v8 )
    v7 = 16 * v8;
  KiReleaseThreadLockSafe(a1);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v1 + 64));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v13 = KeGetCurrentPrcb();
    v14 = (volatile signed __int32 *)v13->SchedulerAssist;
    _InterlockedAnd(v14, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v13, v14);
  }
  __writecr8(CurrentIrql);
  return v7;
}
