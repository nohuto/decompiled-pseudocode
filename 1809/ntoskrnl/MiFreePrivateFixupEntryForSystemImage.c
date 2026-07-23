/*
 * XREFs of MiFreePrivateFixupEntryForSystemImage @ 0x140173788
 * Callers:
 *     MiCountSystemImageCommitment @ 0x14017353C (MiCountSystemImageCommitment.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140684100 (MiGetSystemAddressForImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
  v5 = ExAcquireSpinLockExclusive(&dword_140439F88);
  v6 = (__int64 *)qword_140439F40;
  v7 = v5;
  while ( 1 )
  {
    if ( v6 == &qword_140439F40 )
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
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439F88);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v7);
    if ( a2 )
    {
      if ( v6 == &qword_140439F40 )
        KeBugCheckEx(0x1Au, 0x1011uLL, BugCheckParameter2, 0LL, 0LL);
      ExFreePoolWithTag(v3[5], 0);
      ExFreePoolWithTag(v3, 0);
    }
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439F88);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    v11 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v11);
  }
  __writecr8(v7);
  return v6;
}
