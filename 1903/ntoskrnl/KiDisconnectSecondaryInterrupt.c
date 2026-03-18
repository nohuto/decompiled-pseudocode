/*
 * XREFs of KiDisconnectSecondaryInterrupt @ 0x1402A9FC4
 * Callers:
 *     KeDisconnectInterrupt @ 0x14017BB10 (KeDisconnectInterrupt.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiDisconnectInterruptCommon @ 0x14017BE74 (KiDisconnectInterruptCommon.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x1402A9D4C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1402A9DA4 (KiAcquireSecondaryPassiveConnectLock.c)
 */

__int64 __fastcall KiDisconnectSecondaryInterrupt(__int64 a1, __int64 a2)
{
  bool v4; // bl
  __int64 v5; // rdi
  __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v8; // ebx
  unsigned __int8 v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a1 + 88) - 256);
  KiAcquireSecondaryPassiveConnectLock(v5);
  KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)v5, &v10);
  if ( *(_BYTE *)(a1 + 95) )
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( v6 == a1 )
      v4 = *(_QWORD *)(v6 + 8) == v6 + 8;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v5);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v10);
  if ( v4 )
    HalDisableInterrupt(a2);
  v8 = KiDisconnectInterruptCommon(1, a1, a2);
  KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}
