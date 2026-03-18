/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x1402FCD9C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402FB070 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall PopDiagTraceCsResiliencyEnter(__int64 a1, char a2, __int128 *a3)
{
  KIRQL v6; // bp
  int v7; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v6 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  memset(PopCsResiliencyStats, 0, 0x118uLL);
  qword_140442D80 = -1LL;
  v7 = *(_DWORD *)(a1 + 12);
  byte_140442D22 = byte_140443B24;
  byte_140442D21 = dword_140443ACC == 0;
  byte_140442D23 = byte_140443B25;
  PopCsResiliencyStats[0] = 1;
  dword_140442D24 = v7;
  byte_140442D28 = a2;
  xmmword_140442D30 = *a3;
  KxReleaseSpinLock(&PopCsResiliencyStatsLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v6;
  __writecr8(v6);
  return result;
}
