/*
 * XREFs of MiFreePrivateFixupEntryForSystemImage @ 0x14017A844
 * Callers:
 *     MiCountSystemImageCommitment @ 0x14017A5F4 (MiCountSystemImageCommitment.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140710698 (MiGetSystemAddressForImage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiFreePrivateFixupEntryForSystemImage(ULONG_PTR BugCheckParameter2, int a2)
{
  PVOID *v3; // rsi
  KIRQL v5; // al
  __int64 *v6; // rbx
  KIRQL v7; // di
  __int64 v8; // rcx
  __int64 *v9; // rax
  struct _KPRCB *v11; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = 0LL;
  v5 = ExAcquireSpinLockExclusive(&dword_1404648E4);
  v6 = (__int64 *)qword_1404648C0;
  v7 = v5;
  while ( 1 )
  {
    if ( v6 == &qword_1404648C0 )
      goto LABEL_9;
    v3 = (PVOID *)v6;
    if ( BugCheckParameter2 == v6[2] )
      break;
    v6 = (__int64 *)*v6;
  }
  if ( a2 )
  {
    v8 = *v6;
    v9 = (__int64 *)v6[1];
    if ( *(__int64 **)(*v6 + 8) != v6 || (__int64 *)*v9 != v6 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
LABEL_9:
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1404648E4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v7);
    if ( a2 )
    {
      if ( v6 == &qword_1404648C0 )
        KeBugCheckEx(0x1Au, 0x1011uLL, BugCheckParameter2, 0LL, 0LL);
      ExFreePoolWithTag(v3[5], 0);
      ExFreePoolWithTag(v3, 0);
    }
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1404648E4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    v11 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v11);
  }
  __writecr8(v7);
  return v6;
}
