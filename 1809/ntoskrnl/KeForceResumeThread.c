/*
 * XREFs of KeForceResumeThread @ 0x1400F1C1C
 * Callers:
 *     KeRequestTerminationThread @ 0x1400F13C8 (KeRequestTerminationThread.c)
 *     KeRundownApcQueues @ 0x1405F8DE0 (KeRundownApcQueues.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 *     NtTerminateProcess @ 0x14067B9D0 (NtTerminateProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiResumeThread @ 0x1400F1CE0 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeForceResumeThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v4; // r8
  unsigned int v5; // edi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(a1 + 736);
  v5 = *(char *)(a1 + 644) + ((*(_DWORD *)(a1 + 120) >> 14) & 1);
  if ( v5 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xEu);
    *(_BYTE *)(a1 + 644) = 0;
  }
  LOBYTE(v4) = 1;
  KiResumeThread(a1, CurrentPrcb, v4);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 736), 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0, CurrentIrql);
  return v5;
}
