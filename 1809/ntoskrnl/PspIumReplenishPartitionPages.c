/*
 * XREFs of PspIumReplenishPartitionPages @ 0x1402EBCA4
 * Callers:
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     PspIumGetPhysicalPage @ 0x14088E140 (PspIumGetPhysicalPage.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402AA4FC (MmAllocateNonChargedSecurePages.c)
 */

bool __fastcall PspIumReplenishPartitionPages(__int64 a1, unsigned int a2)
{
  __int64 v3; // r14
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v8; // rdx
  unsigned int i; // edi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  struct _KPRCB *v13; // rcx
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 160) + 48LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(a1 + 88)) )
  {
    if ( *(_DWORD *)(a1 + 4) >= a2 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      return 1;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
  }
  v8 = *(unsigned int *)(a1 + 156);
  v14 = *(_DWORD *)(a1 + 152) - v8 - *(_DWORD *)(a1 + 4);
  if ( v14 )
  {
    MmAllocateNonChargedSecurePages(*(ULONG_PTR ***)(a1 + 8), &v14, (__int64 *)(v3 + 8 * v8));
    *(_DWORD *)(a1 + 156) += v14;
  }
  i = *(_DWORD *)(a1 + 4);
  if ( i < 8 )
  {
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 0) )
      _mm_pause();
    for ( i = *(_DWORD *)(a1 + 4); i < 8; *(_DWORD *)(a1 + 4) = i )
    {
      v10 = *(_DWORD *)(a1 + 156);
      if ( !v10 )
        break;
      v11 = *(unsigned int *)(a1 + 4);
      v12 = (unsigned int)(v10 - 1);
      *(_DWORD *)(a1 + 156) = v12;
      *(_QWORD *)(a1 + 8 * v11 + 24) = *(_QWORD *)(v3 + 8 * v12);
      i = *(_DWORD *)(a1 + 4) + 1;
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v13 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v13);
  }
  __writecr8(CurrentIrql);
  return i >= a2;
}
