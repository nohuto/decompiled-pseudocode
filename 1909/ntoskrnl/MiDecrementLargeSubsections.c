/*
 * XREFs of MiDecrementLargeSubsections @ 0x1402CB278
 * Callers:
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiRemoveMappedPtes @ 0x14005E8F0 (MiRemoveMappedPtes.c)
 *     MiReferenceDataSubsections @ 0x1400960E8 (MiReferenceDataSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1402CC148 (MiIncrementLargeSubsections.c)
 *     MiDereferenceDataSubsections @ 0x1402DE68C (MiDereferenceDataSubsections.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 *     MiCloneLargeFileOnlyVad @ 0x14088BE30 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x14089ABC0 (MiDeletePartialCloneVads.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiBuildWakeList @ 0x14007463C (MiBuildWakeList.c)
 *     MiDecrementShareCount @ 0x1400BB990 (MiDecrementShareCount.c)
 *     MiLockLeafPage @ 0x1400BC6F0 (MiLockLeafPage.c)
 *     MiReleaseControlAreaWaiters @ 0x1400C0420 (MiReleaseControlAreaWaiters.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiChargeLargeProtoSubsection @ 0x14088BDF0 (MiChargeLargeProtoSubsection.c)
 */

__int64 __fastcall MiDecrementLargeSubsections(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r13
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  volatile LONG *v5; // r14
  KIRQL v6; // si
  unsigned int v7; // r15d
  unsigned int v8; // ebp
  unsigned __int64 *v9; // r12
  ULONG_PTR v10; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 CurrentIrql; // cl
  __int64 *v13; // rax
  struct _KPRCB *v14; // rcx
  __int64 result; // rax

  v2 = *a1;
  v3 = a1;
  v4 = a2;
  v5 = (volatile LONG *)(*a1 + 72);
  v6 = ExAcquireSpinLockExclusive(v5);
  while ( 1 )
  {
    if ( --*((_DWORD *)v3 + 27) == 1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
        KeGetCurrentIrql();
      __writecr8(2uLL);
      v7 = *((_DWORD *)v3 + 11);
      v8 = 0;
      v9 = (unsigned __int64 *)v3[1];
      if ( v7 )
      {
        do
        {
          v10 = MiLockLeafPage(v9, 0);
          MiDecrementShareCount(v10);
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (++v8 & 0xF) == 0 && v8 != v7 && KeShouldYieldProcessor() )
          {
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            __writecr8(v6);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          }
          ++v9;
        }
        while ( v8 < v7 );
        v4 = a2;
        v5 = (volatile LONG *)(v2 + 72);
      }
      MiChargeLargeProtoSubsection(v3, 0LL);
      ExAcquireSpinLockExclusive(v5);
      --*((_DWORD *)v3 + 27);
      v13 = MiBuildWakeList(v2, 512);
      MiReleaseControlAreaWaiters(v13);
    }
    if ( v3 == v4 )
      break;
    v3 = (__int64 *)v3[2];
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    v14 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v14);
  }
  result = v6;
  __writecr8(v6);
  return result;
}
