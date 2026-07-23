/*
 * XREFs of KdRegisterDebuggerDataBlock @ 0x140916420
 * Callers:
 *     KdInitSystem @ 0x140916140 (KdInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KdRegisterDebuggerDataBlock(__int64 a1, __int64 a2)
{
  KIRQL v3; // di
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 *v7; // rcx
  struct _KPRCB *v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = KeAcquireSpinLockRaiseToDpc(&KdpDataSpinLock);
  v4 = (__int64 *)KdpDebuggerDataListHead;
  do
  {
    if ( v4 == &KdpDebuggerDataListHead )
    {
      *(_DWORD *)(a2 + 16) = 1195525195;
      *(_DWORD *)(a2 + 20) = 896;
      v5 = (__int64 *)qword_140431948;
      if ( *(__int64 **)qword_140431948 != &KdpDebuggerDataListHead )
        __fastfail(3u);
      *(_QWORD *)a2 = &KdpDebuggerDataListHead;
      *(_QWORD *)(a2 + 8) = v5;
      *v5 = a2;
      qword_140431948 = a2;
      KxReleaseSpinLock(&KdpDataSpinLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v3);
      return 1;
    }
    v7 = v4;
    v4 = (__int64 *)*v4;
  }
  while ( v7 != (__int64 *)a2 && *((_DWORD *)v7 + 4) != 1195525195 );
  KxReleaseSpinLock(&KdpDataSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    v8 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v8->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v8);
  }
  __writecr8(v3);
  return 0;
}
