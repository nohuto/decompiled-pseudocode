/*
 * XREFs of KiProcessSecondarySignalList @ 0x140293BC0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSecondarySignalListLock @ 0x1402935EC (KiAcquireSecondarySignalListLock.c)
 *     KiProcessDisconnectList @ 0x14029A1F8 (KiProcessDisconnectList.c)
 */

void __fastcall KiProcessSecondarySignalList(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 **v4; // rcx
  __int64 v5; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v7[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+28h] [rbp-18h] BYREF
  __int64 **v9; // [rsp+30h] [rbp-10h]

  v9 = (__int64 **)&v8;
  v8 = (__int64)&v8;
  KiAcquireSecondarySignalListLock(v7);
  if ( (__int64 *)KiSecondarySignalList != &KiSecondarySignalList )
  {
    v4 = v9;
    if ( *(__int64 **)(v8 + 8) != &v8
      || *v9 != &v8
      || *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList
      || *(__int64 **)qword_14041C5C8 != &KiSecondarySignalList
      || (*v9 = &KiSecondarySignalList,
          v9 = (__int64 **)qword_14041C5C8,
          *(_QWORD *)qword_14041C5C8 = &v8,
          v5 = KiSecondarySignalList,
          qword_14041C5C8 = (__int64)v4,
          *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList)
      || *v4 != &KiSecondarySignalList )
    {
      __fastfail(3u);
    }
    *v4 = (__int64 *)KiSecondarySignalList;
    *(_QWORD *)(v5 + 8) = v4;
    qword_14041C5C8 = (__int64)&KiSecondarySignalList;
    KiSecondarySignalList = (__int64)&KiSecondarySignalList;
  }
  KiSecondarySignalDpcRunning = 0;
  KxReleaseSpinLock(&KiSecondarySignalListLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7[0] < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v7[0]);
  KiProcessDisconnectList(&v8);
}
