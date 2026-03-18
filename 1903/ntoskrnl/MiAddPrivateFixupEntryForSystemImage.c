/*
 * XREFs of MiAddPrivateFixupEntryForSystemImage @ 0x1401805AC
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140710698 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiInitializePrivateFixupBitmap @ 0x14065CC50 (MiInitializePrivateFixupBitmap.c)
 *     MiCreateSessionDriverProtos @ 0x14089BC04 (MiCreateSessionDriverProtos.c)
 */

__int64 __fastcall MiAddPrivateFixupEntryForSystemImage(_DWORD *a1, unsigned __int64 a2)
{
  PVOID PoolWithTag; // rsi
  _QWORD *v5; // rbx
  void *v6; // rcx
  KIRQL v7; // al
  _QWORD *v8; // rcx
  KIRQL v9; // di
  struct _KPRCB *CurrentPrcb; // rcx

  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNx,
                  8
                * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 8LL) >> 6)
                 + ((*(_DWORD *)(*(_QWORD *)a1 + 8LL) & 0x3F) != 0)
                 + 2LL),
                  0x69536D4Du);
  if ( !PoolWithTag )
    return 0LL;
  v5 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6946694Du);
  v6 = PoolWithTag;
  if ( !v5 )
  {
LABEL_7:
    ExFreePoolWithTag(v6, 0);
    return 0LL;
  }
  MiInitializePrivateFixupBitmap(PoolWithTag, a1);
  v5[5] = PoolWithTag;
  v5[6] = a1;
  v5[2] = a2;
  v5[3] = a2 + (unsigned int)((*(_DWORD *)(*(_QWORD *)a1 + 8LL) << 12) - 1);
  v5[4] = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( (unsigned int)MiGetSystemRegionType(a2) == 1
    && (a1[14] & 0x800) == 0
    && !(unsigned int)MiCreateSessionDriverProtos(a1, a2, v5) )
  {
    ExFreePoolWithTag(v5, 0);
    v6 = PoolWithTag;
    goto LABEL_7;
  }
  v7 = ExAcquireSpinLockExclusive(&dword_1404648E4);
  v8 = (_QWORD *)qword_1404648C8;
  v9 = v7;
  if ( *(__int64 **)qword_1404648C8 != &qword_1404648C0 )
    __fastfail(3u);
  v5[1] = qword_1404648C8;
  *v5 = &qword_1404648C0;
  *v8 = v5;
  qword_1404648C8 = (__int64)v5;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1404648E4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v9);
  return 1LL;
}
