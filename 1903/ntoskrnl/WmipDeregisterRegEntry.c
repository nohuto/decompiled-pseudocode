/*
 * XREFs of WmipDeregisterRegEntry @ 0x140173FF8
 * Callers:
 *     WmipDeregisterDevice @ 0x140732468 (WmipDeregisterDevice.c)
 *     WmipRegisterDevice @ 0x140736804 (WmipRegisterDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     WmipUnreferenceRegEntry @ 0x140099D28 (WmipUnreferenceRegEntry.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     WmipRemoveDS @ 0x1407324EC (WmipRemoveDS.c)
 */

void __fastcall WmipDeregisterRegEntry(char *Entry)
{
  KIRQL v2; // di
  signed __int32 v3; // esi
  KIRQL v4; // al
  KIRQL v5; // di
  _QWORD *v6; // rax
  PVOID *v7; // rdx
  void *v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v10; // rcx
  _DWORD Object[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-20h] BYREF

  Object[1] = 0;
  Object[0] = 393217;
  v12[1] = v12;
  v12[0] = v12;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  *((_QWORD *)Entry + 5) = Object;
  _m_prefetchw(Entry + 48);
  v3 = _InterlockedOr((volatile signed __int32 *)Entry + 12, 0xA0000000);
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v2);
  KeReleaseMutex(&WmipSMMutex, 0);
  WmipUnreferenceRegEntry((__int64)Entry);
  KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  --WmipInUseRegEntryCount;
  v5 = v4;
  v6 = *(_QWORD **)Entry;
  v7 = (PVOID *)*((_QWORD *)Entry + 1);
  if ( *(char **)(*(_QWORD *)Entry + 8LL) != Entry || *v7 != Entry )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = v7;
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    v10 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v10);
  }
  __writecr8(v5);
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( (v3 & 0x10000000) == 0 )
    ObfDereferenceObjectWithTag(*((PVOID *)Entry + 2), 0x746C6644u);
  v8 = (void *)*((_QWORD *)Entry + 3);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  WmipRemoveDS(Entry);
  ExFreeToNPagedLookasideList(&WmipRegLookaside, Entry);
}
