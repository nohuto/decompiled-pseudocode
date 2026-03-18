/*
 * XREFs of IopPassiveInterruptWorker @ 0x1402886D0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6E70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D81F0 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x1402883B0 (IopAcquirePassiveInterruptBlockLock.c)
 *     IopDereferencePassiveInterruptBlock @ 0x140288408 (IopDereferencePassiveInterruptBlock.c)
 *     KiInterruptDispatchCommon @ 0x140299764 (KiInterruptDispatchCommon.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14082743C (IopAcquireReleaseDispatcherLock.c)
 */

void __fastcall IopPassiveInterruptWorker(char *P, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  KSPIN_LOCK *v4; // rcx
  struct _KPRCB *v5; // rcx
  unsigned __int8 v6[8]; // [rsp+30h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-20h] BYREF

  LOBYTE(a2) = 1;
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
    ((void (__fastcall *)(_QWORD, __int64))off_1403FE4B8[0])(*((unsigned int *)P + 6), 2LL);
  IopDereferencePassiveInterruptBlock(P);
}
