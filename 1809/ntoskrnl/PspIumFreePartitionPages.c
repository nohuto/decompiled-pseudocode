/*
 * XREFs of PspIumFreePartitionPages @ 0x1402EB95C
 * Callers:
 *     PspIumFreePhysicalPages @ 0x1402EBB1C (PspIumFreePhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MmFreeNonChargedSecurePages @ 0x1402AA6A8 (MmFreeNonChargedSecurePages.c)
 */

void __fastcall PspIumFreePartitionPages(__int64 a1, int a2, ULONG_PTR *a3)
{
  __int64 v3; // r12
  __int64 v6; // rbx
  KIRQL v7; // bp
  __int64 v8; // rax
  unsigned int v9; // edi
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = *(_QWORD *)(a1 + 160);
  LODWORD(v6) = a2;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v8 = *(unsigned int *)(a1 + 156);
  v9 = *(_DWORD *)(a1 + 152) - v8 - *(_DWORD *)(a1 + 4);
  if ( v9 > (unsigned int)v6 )
    v9 = v6;
  if ( v9 )
  {
    v6 = (unsigned int)v6 - v9;
    memmove((void *)(v3 + 8 * (v8 + 6)), &a3[v6], 8LL * v9);
    *(_DWORD *)(a1 + 156) += v9;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v7);
  if ( (_DWORD)v6 )
    MmFreeNonChargedSecurePages(*(ULONG_PTR ***)(a1 + 8), v6, a3);
}
