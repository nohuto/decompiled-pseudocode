/*
 * XREFs of MiFreePageToSlabAllocator @ 0x1402DB960
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCompareSlabEntry @ 0x1402DB8A4 (MiCompareSlabEntry.c)
 *     MiFreePageToSlabEntry @ 0x1402DBAD0 (MiFreePageToSlabEntry.c)
 *     MiReInitializeFreeSlabPfn @ 0x1402DCE00 (MiReInitializeFreeSlabPfn.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402DCFA8 (MiUpdateSlabPagePlaceholderState.c)
 */

__int64 __fastcall MiFreePageToSlabAllocator(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  KIRQL v8; // r14
  __int64 v9; // rbx
  int v10; // ebp
  int v11; // eax
  __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = 0;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
  {
    if ( !v3 )
      return 0LL;
    v3 ^= a2;
  }
  if ( !v3 )
    return 0LL;
  v14 = (a3 + 0x58000000000LL) / 48;
  v8 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a2 + 16));
  v9 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
  {
    if ( v9 )
      v9 ^= a2;
    else
      v9 = 0LL;
  }
  v10 = *(_BYTE *)(a2 + 8) & 1;
  if ( v9 )
  {
    do
    {
      v11 = MiCompareSlabEntry(&v14, v9);
      if ( v11 >= 0 )
      {
        if ( v11 <= 0 )
          break;
        v12 = *(_QWORD *)(v9 + 8);
      }
      else
      {
        v12 = *(_QWORD *)v9;
      }
      if ( v10 && v12 )
        v9 ^= v12;
      else
        v9 = v12;
    }
    while ( v9 );
    if ( v9 )
    {
      MiReInitializeFreeSlabPfn(a3, a2);
      MiUpdateSlabPagePlaceholderState(a2, v14, 1LL, 1LL);
      MiFreePageToSlabEntry(a3, v9, a2);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v8);
  LOBYTE(v4) = v9 != 0;
  return v4;
}
