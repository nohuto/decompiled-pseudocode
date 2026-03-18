/*
 * XREFs of IopPassiveInterruptWorker @ 0x14029E8C0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400F85B0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400F8850 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x14029E59C (IopAcquirePassiveInterruptBlockLock.c)
 *     IopDereferencePassiveInterruptBlock @ 0x14029E5F4 (IopDereferencePassiveInterruptBlock.c)
 *     KiInterruptDispatchCommon @ 0x1402B0B24 (KiInterruptDispatchCommon.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14086189C (IopAcquireReleaseDispatcherLock.c)
 */

void __fastcall IopPassiveInterruptWorker(char *P, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  KSPIN_LOCK *v4; // rcx
  struct _KPRCB *v5; // rcx
  unsigned __int8 v6[8]; // [rsp+30h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-18h] BYREF

  LOBYTE(a2) = 1;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  IopAcquireReleaseDispatcherLock(P, a2);
  if ( !P[28] )
  {
    Affinity = *(struct _GROUP_AFFINITY *)(P + 40);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  while ( 1 )
  {
    IopAcquirePassiveInterruptBlockLock((__int64)P, v6);
    v4 = (KSPIN_LOCK *)(P + 56);
    if ( !P[65] )
      break;
    P[65] = 0;
    KxReleaseSpinLock(v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6[0] < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v6[0]);
    KiInterruptDispatchCommon(P[28] != 0, *((_DWORD *)P + 5), 1, 0, 0LL);
  }
  P[64] = 0;
  KxReleaseSpinLock(v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6[0] < 2u )
  {
    v5 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v5->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v5);
  }
  __writecr8(v6[0]);
  if ( !P[28] )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  IopAcquireReleaseDispatcherLock(P, 0LL);
  if ( !*((_DWORD *)P + 8) )
    ((void (__fastcall *)(_QWORD, __int64))off_1404244B8[0])(*((unsigned int *)P + 6), 2LL);
  IopDereferencePassiveInterruptBlock(P);
}
