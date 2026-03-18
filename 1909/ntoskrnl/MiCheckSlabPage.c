/*
 * XREFs of MiCheckSlabPage @ 0x1402DB4CC
 * Callers:
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiMakeDriverPagesPrivate @ 0x1400FABE4 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x14012FFD0 (MiFinalizeImageHeaderPage.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCompareSlabEntry @ 0x1402DB604 (MiCompareSlabEntry.c)
 *     MiGetSlabAllocator @ 0x1402DC0F8 (MiGetSlabAllocator.c)
 */

__int64 __fastcall MiCheckSlabPage(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 SlabAllocator; // rsi
  volatile LONG *v7; // r14
  KIRQL v8; // al
  unsigned __int64 v9; // rbx
  unsigned int v10; // edi
  KIRQL v11; // bp
  int v12; // esi
  int v13; // eax
  unsigned __int64 v14; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v5 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  v17 = ((unsigned __int64)v4 >> 63) + (v4 >> 3);
  SlabAllocator = MiGetSlabAllocator(v5, a2, a3);
  v7 = (volatile LONG *)(SlabAllocator + 16);
  v8 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(SlabAllocator + 16));
  v9 = *(_QWORD *)SlabAllocator;
  v10 = 0;
  v11 = v8;
  if ( (*(_BYTE *)(SlabAllocator + 8) & 1) != 0 )
  {
    if ( v9 )
      v9 ^= SlabAllocator;
    else
      v9 = 0LL;
  }
  v12 = *(_BYTE *)(SlabAllocator + 8) & 1;
  while ( v9 )
  {
    v13 = MiCompareSlabEntry(&v17, v9);
    if ( v13 >= 0 )
    {
      if ( v13 <= 0 )
        break;
      v14 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      v14 = *(_QWORD *)v9;
    }
    if ( v12 && v14 )
      v9 ^= v14;
    else
      v9 = v14;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v7);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v11);
  LOBYTE(v10) = v9 != 0;
  return v10;
}
