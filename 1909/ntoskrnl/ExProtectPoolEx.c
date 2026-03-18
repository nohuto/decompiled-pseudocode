/*
 * XREFs of ExProtectPoolEx @ 0x1400ECB9C
 * Callers:
 *     CmpProtectPool @ 0x1400EC9C8 (CmpProtectPool.c)
 *     ExProtectPool @ 0x1400ECB7C (ExProtectPool.c)
 *     SmHpBufferProtectEx @ 0x140151A20 (SmHpBufferProtectEx.c)
 *     HvpSetRangeProtection @ 0x1406329F4 (HvpSetRangeProtection.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiDeterminePoolType @ 0x140061B00 (MiDeterminePoolType.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExProtectPoolEx(unsigned __int16 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  int v7; // eax
  unsigned __int64 v8; // rdx
  char v9; // r8
  int v10; // r12d
  unsigned __int64 v11; // rbx
  KIRQL v12; // di
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rbp
  __int64 v18; // r14
  int v19; // r12d
  char v21; // al
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v23; // rcx

  if ( (((unsigned __int16)a2 | a1) & 0xFFF) != 0 )
    return 0LL;
  v7 = MiDeterminePoolType(a2);
  v9 = 0;
  if ( v7 != 32 )
    v9 = v7;
  if ( (v9 & 0x20) != 0 )
    return 0LL;
  v10 = 0;
  v11 = ((40543 * (unsigned __int64)(unsigned int)(v8 >> 12)) >> 32) ^ (40543LL * (unsigned int)(v8 >> 12));
  v12 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  v13 = (unsigned int)v11 & ((_DWORD)PoolBigPageTableSize - 1);
  if ( PoolBigPageTable )
  {
    v14 = PoolBigPageTable + 24 * v13;
    v15 = PoolBigPageTable + 24 * PoolBigPageTableSize;
    v16 = a2 + a3 - 1;
    while ( 1 )
    {
      do
      {
        v17 = *(_QWORD *)v14;
        if ( (*(_QWORD *)v14 & 1) == 0 && a2 >= v17 )
        {
          v18 = *(_QWORD *)(v14 + 16);
          if ( v16 < v18 + v17
            && ((v18 & 0xFFF) == 0
             || ((v16 + 4095) & 0xFFFFFFFFFFFFF000uLL) < ((v18 + v17 + 4095) & 0xFFFFFFFFFFFFF000uLL)) )
          {
            v19 = *(_DWORD *)(v14 + 12);
            ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
            __writecr8(v12);
            if ( a4 == -1 )
            {
              if ( v17 == a2 && v18 == a3 && (v18 & 0xFFF) == 0 )
                return 1LL;
            }
            else if ( (v18 & 0xFFF) == 0 || (v19 & 0x4000) != 0 && ((unsigned __int16)v18 & 0xFFFu) <= 0x10uLL )
            {
              return MmProtectPool(a2, a3, a4);
            }
            return 0LL;
          }
        }
        v14 += 24LL;
      }
      while ( v14 < v15 );
      if ( v10 == 1 )
        break;
      v14 = PoolBigPageTable;
      v10 = 1;
      v15 = PoolBigPageTable + 24 * v13;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
    v21 = KiIrqlFlags;
    if ( !KiIrqlFlags )
      goto LABEL_40;
    goto LABEL_36;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  v21 = KiIrqlFlags;
  if ( KiIrqlFlags )
  {
LABEL_36:
    if ( (v21 & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      v23 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v23);
    }
  }
LABEL_40:
  __writecr8(v12);
  return 0LL;
}
