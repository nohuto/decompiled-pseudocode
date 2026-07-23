/*
 * XREFs of MiDecrementLargeSubsections @ 0x1402B5A04
 * Callers:
 *     MiReferenceDataSubsections @ 0x140026658 (MiReferenceDataSubsections.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiRemoveMappedPtes @ 0x1400855C0 (MiRemoveMappedPtes.c)
 *     MiIncrementLargeSubsections @ 0x1402B634C (MiIncrementLargeSubsections.c)
 *     MiDereferenceDataSubsections @ 0x1402C4BE8 (MiDereferenceDataSubsections.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiCloneLargeFileOnlyVad @ 0x140853B74 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x14085F728 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiBuildWakeList @ 0x14001E4A8 (MiBuildWakeList.c)
 *     MiLockLeafPage @ 0x140080EC0 (MiLockLeafPage.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiChargeLargeProtoSubsection @ 0x140853B34 (MiChargeLargeProtoSubsection.c)
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
  __int64 *v9; // r12
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
      v9 = (__int64 *)v3[1];
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
