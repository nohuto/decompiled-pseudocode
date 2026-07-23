/*
 * XREFs of MiExtendDynamicBitMap @ 0x14018FBD0
 * Callers:
 *     MiObtainDynamicVa @ 0x1400F6A0C (MiObtainDynamicVa.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1400265A8 (MiSplitBitmapPages.c)
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiReclaimSystemVa @ 0x1400F72F8 (MiReclaimSystemVa.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiExtendDynamicBitMap(__int64 *a1, unsigned __int64 *a2, unsigned int a3)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int8 OldIrql; // bl
  __int64 v13; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v15; // rcx
  unsigned __int8 v16; // si
  struct _KPRCB *v17; // rcx
  struct _KLOCK_QUEUE_HANDLE v18[2]; // [rsp+20h] [rbp-38h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 8, v18);
  v6 = *a2;
  if ( a2 != (unsigned __int64 *)a1 && a1[5] != v6 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)v18);
    OldIrql = v18[0].OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18[0].OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
LABEL_13:
    __writecr8(OldIrql);
    return 1LL;
  }
  v7 = a1[2];
  if ( a3 == 9 )
  {
    v7 -= a1[5];
  }
  else if ( a3 == 14 )
  {
    v7 -= *a1;
  }
  if ( v6 < v7 )
  {
    v8 = a3 == 14 ? -4096LL : v6 >> 3;
    v9 = 0x8000LL;
    if ( (unsigned int)MiSplitBitmapPages(a3, a2[1] + v8, 0x8000LL) == 1 )
    {
      if ( v6 + 0x8000 > v7 )
        v9 = v7 - v6;
      v10 = *a2;
      *a2 += v9;
      if ( a3 == 14 )
      {
        v10 = 0LL;
        a2[1] += -8LL * (v9 >> 6);
        v13 = a1[5];
        if ( !v13 )
          a1[6] = ((unsigned __int64)a1[1] >> 21) & 0x7FFF;
        a1[5] = v13 + v9;
      }
      RtlClearBitsEx((__int64)a2, v10, v9);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)v18);
      OldIrql = v18[0].OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18[0].OldIrql < 2u )
      {
        v15 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v15);
      }
      goto LABEL_13;
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)v18);
  v16 = v18[0].OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18[0].OldIrql < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v17);
  }
  __writecr8(v16);
  if ( a1 == &qword_14043B488 )
    MiReclaimSystemVa(1);
  return 0LL;
}
