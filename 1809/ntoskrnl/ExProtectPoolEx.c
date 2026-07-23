/*
 * XREFs of ExProtectPoolEx @ 0x14000DED8
 * Callers:
 *     ExProtectPool @ 0x14000DEB8 (ExProtectPool.c)
 *     CmpProtectPool @ 0x14013B48C (CmpProtectPool.c)
 *     SmHpBufferProtectEx @ 0x14014A370 (SmHpBufferProtectEx.c)
 *     HvpSetRangeProtection @ 0x1405FCD30 (HvpSetRangeProtection.c)
 * Callees:
 *     ExIsSpecialPoolAddress @ 0x14000E140 (ExIsSpecialPoolAddress.c)
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiDeterminePoolType @ 0x14007BF20 (MiDeterminePoolType.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExProtectPoolEx(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  int v9; // eax
  char v10; // cl
  int v11; // r13d
  KIRQL v12; // si
  unsigned __int64 v13; // rax
  char v14; // al
  __int64 v15; // r10
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r15
  __int64 v19; // r14
  unsigned __int64 v20; // rax
  int v21; // r13d

  if ( (unsigned int)ExpHeapBackedPoolEnabledState < 2 && (unsigned int)ExIsSpecialPoolAddress(a2) )
  {
    if ( a4 != -1 )
      return MmProtectPool(a2, a3, a4);
  }
  else if ( ((a2 | a1) & 0xFFF) == 0 )
  {
    v9 = MiDeterminePoolType(a2);
    v10 = 0;
    if ( v9 != 32 )
      v10 = v9;
    if ( (v10 & 0x20) == 0 )
    {
      v11 = 0;
      v12 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
      v13 = (((40543 * (unsigned __int64)(unsigned int)(a1 >> 12)) >> 32) ^ (40543 * (unsigned int)(a1 >> 12))) & (unsigned int)(PoolBigPageTableSize - 1);
      if ( PoolBigPageTable )
      {
        v15 = 3 * v13;
        v16 = PoolBigPageTable + 24 * PoolBigPageTableSize;
        v17 = PoolBigPageTable + 24 * v13;
        while ( 1 )
        {
          v18 = *(_QWORD *)v17;
          if ( (*(_QWORD *)v17 & 1) == 0 && a2 >= v18 )
          {
            v19 = *(_QWORD *)(v17 + 16);
            v20 = a2 + a3 - 1;
            if ( v20 < v19 + v18
              && ((v19 & 0xFFF) == 0
               || ((v20 + 4095) & 0xFFFFFFFFFFFFF000uLL) < ((v19 + v18 + 4095) & 0xFFFFFFFFFFFFF000uLL)) )
            {
              break;
            }
          }
          v17 += 24LL;
          if ( v17 >= v16 )
          {
            if ( v11 == 1 )
            {
              ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
              v14 = KiIrqlFlags;
              if ( !KiIrqlFlags )
                goto LABEL_40;
              goto LABEL_36;
            }
            v17 = PoolBigPageTable;
            v11 = 1;
            v16 = PoolBigPageTable + 8 * v15;
          }
        }
        v21 = *(_DWORD *)(v17 + 12);
        ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
        {
          _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick();
        }
        __writecr8(v12);
        if ( a4 == -1 )
          return v18 == a2 && v19 == a3 && (v19 & 0xFFF) == 0;
        if ( (v19 & 0xFFF) != 0 && ((v21 & 0x4000) == 0 || ((unsigned __int16)v19 & 0xFFFu) > 0x10uLL) )
          return 0LL;
        return MmProtectPool(a2, a3, a4);
      }
      ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
      v14 = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
LABEL_36:
        if ( (v14 & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
        {
          _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick();
        }
      }
LABEL_40:
      __writecr8(v12);
    }
  }
  return 0LL;
}
