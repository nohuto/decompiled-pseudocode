/*
 * XREFs of KeForceResumeThread @ 0x140081304
 * Callers:
 *     KeRequestTerminationThread @ 0x1400AE89C (KeRequestTerminationThread.c)
 *     PspInsertThread @ 0x1405E8D54 (PspInsertThread.c)
 *     KeRundownApcQueues @ 0x14060D84C (KeRundownApcQueues.c)
 *     NtTerminateProcess @ 0x1406D6D10 (NtTerminateProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiResumeThread @ 0x1400813C8 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
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
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v5;
}
