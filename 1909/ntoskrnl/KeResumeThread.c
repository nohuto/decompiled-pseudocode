/*
 * XREFs of KeResumeThread @ 0x1401258B8
 * Callers:
 *     KeAlertResumeThread @ 0x1402A45E4 (KeAlertResumeThread.c)
 *     PsResumeProcess @ 0x1406CC950 (PsResumeProcess.c)
 *     PsResumeThread @ 0x1406CCAD0 (PsResumeThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiResumeThread @ 0x1400817C8 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeResumeThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  volatile signed __int32 *v4; // rdi
  unsigned int v5; // r14d
  char v6; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (volatile signed __int32 *)(a1 + 736);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736));
  v5 = *(char *)(a1 + 644);
  if ( *(_BYTE *)(a1 + 644) )
  {
    v6 = *(_BYTE *)(a1 + 644) - 1;
    *(_BYTE *)(a1 + 644) = v6;
    if ( !v6 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
      KiResumeThread(a1, (__int64)CurrentPrcb, 0LL);
  }
  _InterlockedAnd(v4, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v5;
}
