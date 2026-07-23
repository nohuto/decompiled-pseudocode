/*
 * XREFs of KiDisconnectSecondaryInterrupt @ 0x1402937D4
 * Callers:
 *     KeDisconnectInterrupt @ 0x14016D3C0 (KeDisconnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiDisconnectInterruptCommon @ 0x14016D794 (KiDisconnectInterruptCommon.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14029355C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1402935B4 (KiAcquireSecondaryPassiveConnectLock.c)
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v8;
}
