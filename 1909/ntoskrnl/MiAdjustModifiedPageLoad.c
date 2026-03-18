/*
 * XREFs of MiAdjustModifiedPageLoad @ 0x1400DAA78
 * Callers:
 *     MiWorkingSetManager @ 0x1400DA208 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400DB7A8 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1400DB934 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiWakeModifiedPageWriter @ 0x14015C9B4 (MiWakeModifiedPageWriter.c)
 *     MiUpdateReserveClusterInfo @ 0x140193554 (MiUpdateReserveClusterInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAdjustModifiedPageLoad(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int128 v14; // rax
  int v15; // ebp
  __int64 *v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rdi
  unsigned __int8 OldIrql; // di
  signed __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // r10
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // al
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v28[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 8064);
  v4 = *(_QWORD *)(a1 + 8560);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0x4000LL;
  if ( v3 >> 5 > 0x4000 )
    v6 = v3 >> 5;
  v9 = v3 >> 4;
  if ( v9 >= v6 )
    v9 = v6;
  v10 = *(_QWORD *)(a1 + 2176) + *(_QWORD *)(a1 + 2240);
  v11 = 0LL;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 7800) + 2392LL);
  v13 = 20000LL;
  if ( v12 > 0x4E20 )
    v13 = v12;
  if ( v10 > v13 )
  {
    v14 = v10 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
    if ( v4 < *((_QWORD *)&v14 + 1) >> 3 )
      goto LABEL_9;
  }
  if ( v4 >= v9 )
  {
    v11 = v9 >> 1;
LABEL_36:
    if ( !(unsigned int)MiUseLowIoPriorityForModifiedPages(a1) )
      v11 = -1LL;
    *(_QWORD *)&v14 = MiWakeModifiedPageWriter(a1, v11, v23, v24);
    *(_QWORD *)(a1 + 808) = 0LL;
    *(_QWORD *)(a1 + 816) = 0LL;
    goto LABEL_9;
  }
  *(_QWORD *)&v14 = *(_QWORD *)(a1 + 816) >> 4;
  *((_QWORD *)&v14 + 1) = 15 * v14 + (v4 >> 4);
  *(_QWORD *)(a1 + 816) = *((_QWORD *)&v14 + 1);
  if ( (unsigned __int64)(15 * v14) > *((_QWORD *)&v14 + 1) )
    goto LABEL_36;
  if ( v4 < 0x320 )
  {
    *(_QWORD *)(a1 + 808) = 0LL;
    goto LABEL_9;
  }
  *(_QWORD *)&v14 = *(_QWORD *)(a1 + 808);
  v20 = *((_QWORD *)&v14 + 1) <= v4 ? *((_QWORD *)&v14 + 1) - v4 + v14 : v4 + v14 - *((_QWORD *)&v14 + 1);
  v21 = v20 + v4;
  *(_QWORD *)(a1 + 808) = v20 + v4;
  if ( v20 > (__int64)(v20 + v4) )
    goto LABEL_36;
  v22 = v9 >> 1;
  *(_QWORD *)&v14 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v22 < 0x369D0369D0369DLL )
    *(_QWORD *)&v14 = 600 * v22;
  if ( v21 >= (__int64)v14 )
    goto LABEL_36;
LABEL_9:
  *(_QWORD *)(a1 + 824) = a2;
  if ( (a3 & 7) == 0 )
  {
    v15 = 0;
    if ( (*(_BYTE *)(a1 + 868) & 1) != 0 )
    {
      _InterlockedOr(v28, 0);
      if ( a2 > 0x4000 || (unsigned __int64)(KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 856)) >= 0x47868C00 )
      {
        v15 = 1;
        *(_WORD *)(a1 + 868) &= ~1u;
      }
    }
    *(_QWORD *)&v14 = *(unsigned int *)(a1 + 7896);
    if ( (_DWORD)v14 )
    {
      v16 = (__int64 *)(a1 + 7904);
      v17 = (unsigned int)v14;
      do
      {
        v18 = *v16;
        if ( (*(_BYTE *)(*v16 + 204) & 0x40) == 0 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v18 + 232), &LockHandle);
          if ( *(_DWORD *)(v18 + 132) != *(_DWORD *)(v18 + 128) )
            *(_DWORD *)(v18 + 124) = dword_14057119C;
          *(_DWORD *)(v18 + 136) = 4 * dword_14057119C;
          if ( v15 )
          {
            v25 = *(_BYTE *)(v18 + 207);
            if ( (v25 & 1) != 0 )
              *(_BYTE *)(v18 + 207) = v25 & 0xFE;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          *(_QWORD *)&v14 = OldIrql;
          __writecr8(OldIrql);
        }
        ++v16;
        --v17;
      }
      while ( v17 );
    }
    if ( v15 )
      *(_QWORD *)&v14 = MiUpdateReserveClusterInfo(a1, 0LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 1144) )
    *(_QWORD *)&v14 = MiStoreUpdateMemoryConditions(a1);
  return v14;
}
