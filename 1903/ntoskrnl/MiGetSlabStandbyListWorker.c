/*
 * XREFs of MiGetSlabStandbyListWorker @ 0x1402DC590
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x1402DB430 (MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 *     MiCompareSlabEntry @ 0x1402DB8A4 (MiCompareSlabEntry.c)
 */

__int64 __fastcall MiGetSlabStandbyListWorker(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rbp
  KIRQL v7; // r15
  __int64 v8; // rbx
  int v9; // esi
  int v10; // eax
  __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
  {
    if ( !v4 )
      return 0LL;
    v4 ^= a2;
  }
  if ( v4 )
  {
    v6 = 0LL;
    v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a2 + 16));
    v8 = *(_QWORD *)a2;
    if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v8 )
      v8 ^= a2;
    v9 = *(_BYTE *)(a2 + 8) & 1;
    if ( v8 )
    {
      do
      {
        v10 = MiCompareSlabEntry(a3 + 1, v8);
        if ( v10 >= 0 )
        {
          if ( v10 <= 0 )
            break;
          v11 = *(_QWORD *)(v8 + 8);
        }
        else
        {
          v11 = *(_QWORD *)v8;
        }
        if ( v9 && v11 )
          v8 ^= v11;
        else
          v8 = v11;
      }
      while ( v8 );
      if ( v8 )
      {
        v6 = v8;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 136));
        if ( (unsigned int)(*(_DWORD *)(v8 + 136) + *(_DWORD *)(v8 + 132)) >= 0x200 )
          _InterlockedOr((volatile signed __int32 *)(a2 + 56), 1u);
      }
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v7);
    if ( v6 )
    {
      MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY(*a3, v6);
      result = 1LL;
      a3[2] = a2 + 64;
      return result;
    }
  }
  return 0LL;
}
