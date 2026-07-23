/*
 * XREFs of MiReturnPartitionPagesToParent @ 0x1402D27C4
 * Callers:
 *     MiFreePartitionPhysicalPages @ 0x14086160C (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDrainZeroLookasides @ 0x14011AD10 (MiDrainZeroLookasides.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1402D0308 (MiActOnPartitionNodePages.c)
 */

__int64 __fastcall MiReturnPartitionPagesToParent(__int64 a1)
{
  unsigned __int16 *v2; // rbx
  KIRQL v3; // al
  _QWORD *v4; // rcx
  KIRQL v5; // si
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  unsigned __int16 *v12[8]; // [rsp+20h] [rbp-48h] BYREF

  memset(v12, 0, 0x38uLL);
  v2 = **(unsigned __int16 ***)(*(_QWORD *)(a1 + 168) + 56LL);
  MiDrainZeroLookasides(a1, 0LL, 0LL, 0);
  v12[0] = v2;
  v12[1] = (unsigned __int16 *)a1;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 192));
  v4 = *(_QWORD **)(a1 + 24);
  v5 = v3;
  LOBYTE(v12[2]) = v3;
  v6 = 0LL;
  while ( v4 )
  {
    v6 = v4;
    v4 = (_QWORD *)*v4;
  }
  while ( v6 )
  {
    v7 = (_QWORD *)v6[1];
    v8 = (__int64)v6;
    v9 = v6;
    if ( v7 )
    {
      do
      {
        v6 = v7;
        v7 = (_QWORD *)*v7;
      }
      while ( v7 );
    }
    else
    {
      while ( 1 )
      {
        v6 = (_QWORD *)(v6[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v6 || (_QWORD *)*v6 == v9 )
          break;
        v9 = v6;
      }
    }
    MiActOnPartitionNodePages(v8, 4u, v12);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v5;
  __writecr8(v5);
  return result;
}
