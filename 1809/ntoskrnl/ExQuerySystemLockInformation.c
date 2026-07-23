/*
 * XREFs of ExQuerySystemLockInformation @ 0x14057F5CC
 * Callers:
 *     ExpGetLockInformation @ 0x1408CCB4C (ExpGetLockInformation.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140097E40 (MmUnlockPagableImageSection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     ExpOwnerEntryToThread @ 0x14010A2F8 (ExpOwnerEntryToThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MmLockPagableSectionByHandle @ 0x140620240 (MmLockPagableSectionByHandle.c)
 */

__int64 __fastcall ExQuerySystemLockInformation(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // edi
  _DWORD *v8; // rsi
  KIRQL v9; // al
  __int64 v10; // rdx
  __int64 *v11; // r8
  KIRQL v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = 8;
  if ( a2 >= 8 )
  {
    *a1 = 0;
    v8 = a1 + 2;
    v7 = 0;
    MmLockPagableSectionByHandle(ExPageLockHandle);
    v9 = ExAcquireSpinLockShared(&ExpResourceSpinLock);
    v10 = ExpSystemResourcesList;
    v11 = &ExpSystemResourcesList;
    v12 = v9;
    while ( (__int64 *)v10 != v11 )
    {
      ++*a1;
      v3 += 48;
      if ( v3 < 0x30 )
      {
        v7 = -1073741675;
        break;
      }
      if ( a2 >= v3 )
      {
        *(_QWORD *)v8 = v10;
        v8[2] = 1;
        v13 = ExpOwnerEntryToThread((__int64 *)(v10 + 48));
        if ( v13 )
          v14 = *(_QWORD *)(v13 + 1600);
        else
          v14 = 0LL;
        *((_QWORD *)v8 + 2) = v14;
        v8[6] = *(_DWORD *)(v10 + 64);
        v8[7] = *(_DWORD *)(v10 + 68);
        v8[10] = *(_DWORD *)(v10 + 72);
        v8[11] = *(_DWORD *)(v10 + 76);
        v8 += 12;
      }
      else
      {
        v7 = -1073741820;
      }
      v10 = *(_QWORD *)v10;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&ExpResourceSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v12);
    MmUnlockPagableImageSection(ExPageLockHandle);
  }
  else
  {
    v7 = -1073741820;
  }
  if ( a3 )
    *a3 = v3;
  return v7;
}
