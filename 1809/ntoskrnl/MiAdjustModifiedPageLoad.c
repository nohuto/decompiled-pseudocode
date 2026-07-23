/*
 * XREFs of MiAdjustModifiedPageLoad @ 0x1400F06DC
 * Callers:
 *     MiWorkingSetManager @ 0x1400EF634 (MiWorkingSetManager.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400EEE4C (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1400EEFC8 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiWakeModifiedPageWriter @ 0x1401533D8 (MiWakeModifiedPageWriter.c)
 *     MiUpdateReserveClusterInfo @ 0x140188268 (MiUpdateReserveClusterInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAdjustModifiedPageLoad(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v5; // r9
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int128 v13; // rax
  int v14; // ebp
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rdi
  unsigned __int8 OldIrql; // di
  signed __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // r11
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // al
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v27[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 7792);
  v5 = 0x4000LL;
  if ( *(_QWORD *)(a1 + 7296) >> 5 > 0x4000uLL )
    v5 = *(_QWORD *)(a1 + 7296) >> 5;
  v8 = *(_QWORD *)(a1 + 7296) >> 4;
  if ( v8 >= v5 )
    v8 = v5;
  v9 = *(_QWORD *)(a1 + 2176) + *(_QWORD *)(a1 + 2240);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 7024) + 2392LL);
  v11 = 0LL;
  v12 = 20000LL;
  if ( v10 > 0x4E20 )
    v12 = v10;
  if ( v9 > v12 )
  {
    v13 = v9 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
    if ( v3 < *((_QWORD *)&v13 + 1) >> 3 )
      goto LABEL_9;
  }
  if ( v3 >= v8 )
  {
    v11 = v8 >> 1;
LABEL_36:
    if ( !MiUseLowIoPriorityForModifiedPages(a1) )
      v11 = -1LL;
    *(_QWORD *)&v13 = MiWakeModifiedPageWriter(a1, v11, v22, v23);
    *(_QWORD *)(a1 + 800) = 0LL;
    *(_QWORD *)(a1 + 808) = 0LL;
    goto LABEL_9;
  }
  *(_QWORD *)&v13 = *(_QWORD *)(a1 + 808) >> 4;
  *((_QWORD *)&v13 + 1) = 15 * v13 + (v3 >> 4);
  *(_QWORD *)(a1 + 808) = *((_QWORD *)&v13 + 1);
  if ( (unsigned __int64)(15 * v13) > *((_QWORD *)&v13 + 1) )
    goto LABEL_36;
  if ( v3 < 0x320 )
  {
    *(_QWORD *)(a1 + 800) = 0LL;
    goto LABEL_9;
  }
  *(_QWORD *)&v13 = *(_QWORD *)(a1 + 800);
  v19 = *((_QWORD *)&v13 + 1) <= v3 ? *((_QWORD *)&v13 + 1) - v3 + v13 : v3 + v13 - *((_QWORD *)&v13 + 1);
  v20 = v19 + v3;
  *(_QWORD *)(a1 + 800) = v19 + v3;
  if ( v19 > (__int64)(v19 + v3) )
    goto LABEL_36;
  v21 = v8 >> 1;
  *(_QWORD *)&v13 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v21 < 0x369D0369D0369DLL )
    *(_QWORD *)&v13 = 600 * v21;
  if ( v20 >= (__int64)v13 )
    goto LABEL_36;
LABEL_9:
  *(_QWORD *)(a1 + 816) = a2;
  if ( (a3 & 7) == 0 )
  {
    v14 = 0;
    if ( (*(_BYTE *)(a1 + 860) & 1) != 0 )
    {
      _InterlockedOr(v27, 0);
      if ( a2 > 0x4000 || (unsigned __int64)(KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 848)) >= 0x47868C00 )
      {
        v14 = 1;
        *(_WORD *)(a1 + 860) &= ~1u;
      }
    }
    *(_QWORD *)&v13 = *(unsigned int *)(a1 + 7128);
    if ( (_DWORD)v13 )
    {
      v15 = a1 + 7136;
      v16 = (unsigned int)v13;
      do
      {
        v17 = *(_QWORD *)v15;
        if ( (*(_BYTE *)(*(_QWORD *)v15 + 204LL) & 0x40) == 0 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 232), &LockHandle);
          if ( *(_DWORD *)(v17 + 132) != *(_DWORD *)(v17 + 128) )
            *(_DWORD *)(v17 + 124) = dword_14054118C;
          *(_DWORD *)(v17 + 136) = 4 * dword_14054118C;
          if ( v14 )
          {
            v24 = *(_BYTE *)(v17 + 207);
            if ( (v24 & 1) != 0 )
              *(_BYTE *)(v17 + 207) = v24 & 0xFE;
          }
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          *(_QWORD *)&v13 = OldIrql;
          __writecr8(OldIrql);
        }
        v15 += 8LL;
        --v16;
      }
      while ( v16 );
    }
    if ( v14 )
      *(_QWORD *)&v13 = MiUpdateReserveClusterInfo(a1, 0LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 1144) )
    *(_QWORD *)&v13 = MiStoreUpdateMemoryConditions(a1);
  return v13;
}
