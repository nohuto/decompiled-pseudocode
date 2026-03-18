/*
 * XREFs of WmipAllocRegEntry @ 0x140175FB8
 * Callers:
 *     WmipRegisterDevice @ 0x140738A64 (WmipRegisterDevice.c)
 *     WmipInitializeDataStructs @ 0x140A1904C (WmipInitializeDataStructs.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400CA44C (ExAllocateFromNPagedLookasideList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     WmipAllocProviderId @ 0x1406F1084 (WmipAllocProviderId.c)
 */

_QWORD *__fastcall WmipAllocRegEntry(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  KIRQL v6; // al
  KIRQL v7; // di
  _QWORD *v8; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = ExAllocateFromNPagedLookasideList(&WmipRegLookaside);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x40uLL);
    v5[2] = a1;
    *((_DWORD *)v5 + 12) = a2 & 0xFF000000 | 1;
    *((_DWORD *)v5 + 14) = WmipAllocProviderId();
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v6 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
    ++WmipInUseRegEntryCount;
    v7 = v6;
    v8 = off_140426610;
    if ( *off_140426610 != (_UNKNOWN *)&WmipInUseRegEntryHead )
      __fastfail(3u);
    *v5 = &WmipInUseRegEntryHead;
    v5[1] = v8;
    *v8 = v5;
    off_140426610 = (_UNKNOWN **)v5;
    KxReleaseSpinLock(&WmipRegistrationSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v7);
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  return v5;
}
