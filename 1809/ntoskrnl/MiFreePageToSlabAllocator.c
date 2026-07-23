/*
 * XREFs of MiFreePageToSlabAllocator @ 0x1402C2170
 * Callers:
 *     MiFreeSlabPage @ 0x1402C27BC (MiFreeSlabPage.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCompareSlabEntry @ 0x1402C2154 (MiCompareSlabEntry.c)
 *     MiFreePageToSlabEntry @ 0x1402C22DC (MiFreePageToSlabEntry.c)
 *     MiReInitializeFreeSlabPfn @ 0x1402C2DF0 (MiReInitializeFreeSlabPfn.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402C2F2C (MiUpdateSlabPagePlaceholderState.c)
 */

__int64 __fastcall MiFreePageToSlabAllocator(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  KIRQL v7; // al
  __int64 v8; // rbx
  KIRQL v9; // r14
  __int64 v10; // rax
  int v11; // ebp
  int v12; // eax
  __int64 v13; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)a2;
  v3 = 0;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
  {
    if ( !v2 )
      return 0LL;
    v2 ^= a2;
  }
  if ( !v2 )
    return 0LL;
  v15 = (a1 + 0x58000000000LL) / 48;
  v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a2 + 16));
  v8 = *(_QWORD *)a2;
  v9 = v7;
  v10 = *(_QWORD *)(a2 + 8);
  if ( (v10 & 1) != 0 )
  {
    if ( v8 )
      v8 ^= a2;
    else
      v8 = 0LL;
  }
  v11 = v10 & 1;
  if ( v8 )
  {
    do
    {
      v12 = MiCompareSlabEntry(&v15, v8);
      if ( v12 >= 0 )
      {
        if ( v12 <= 0 )
          break;
        v13 = *(_QWORD *)(v8 + 8);
      }
      else
      {
        v13 = *(_QWORD *)v8;
      }
      if ( v11 && v13 )
        v8 ^= v13;
      else
        v8 = v13;
    }
    while ( v8 );
    if ( v8 )
    {
      MiReInitializeFreeSlabPfn(a1, a2);
      MiUpdateSlabPagePlaceholderState(a2, v15, 1LL, 1LL);
      MiFreePageToSlabEntry(a1, v8, a2);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v9);
  LOBYTE(v3) = v8 != 0;
  return v3;
}
