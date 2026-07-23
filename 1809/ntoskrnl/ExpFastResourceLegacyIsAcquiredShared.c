/*
 * XREFs of ExpFastResourceLegacyIsAcquiredShared @ 0x14031BACC
 * Callers:
 *     ExIsResourceAcquiredSharedLite @ 0x1400B9A20 (ExIsResourceAcquiredSharedLite.c)
 * Callees:
 *     ExpFindFastOwnerEntryForThread @ 0x140166184 (ExpFindFastOwnerEntryForThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpFastResourceLegacyIsAcquiredShared(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int8 CurrentIrql; // di
  __int64 *FastOwnerEntryForThread; // rax
  unsigned __int8 v4; // r10
  unsigned int v5; // r11d
  __int64 *v6; // rcx
  __int64 *v7; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  if ( *(_DWORD *)(a1 + 64) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread((__int64)KeGetCurrentThread(), a1, 0, 0);
    if ( FastOwnerEntryForThread )
    {
      v6 = FastOwnerEntryForThread + 5;
      v1 = v5;
      v7 = (__int64 *)FastOwnerEntryForThread[5];
      while ( v7 != v6 )
      {
        v7 = (__int64 *)*v7;
        v1 += v5;
      }
    }
    else
    {
      v1 = 0;
    }
    if ( KiIrqlFlags
      && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0
      && KeGetCurrentIrql() >= v4
      && CurrentIrql < v4 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    return 0;
  }
  return v1;
}
