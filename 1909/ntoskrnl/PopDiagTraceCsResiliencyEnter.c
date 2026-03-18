/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x1402FC84C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402FAB20 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall PopDiagTraceCsResiliencyEnter(__int64 a1, char a2, __int128 *a3)
{
  KIRQL v6; // bp
  int v7; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v6 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  memset(PopCsResiliencyStats, 0, 0x118uLL);
  qword_140442D20 = -1LL;
  v7 = *(_DWORD *)(a1 + 12);
  byte_140442CC2 = byte_140443A84;
  byte_140442CC1 = dword_140443A2C == 0;
  byte_140442CC3 = byte_140443A85;
  PopCsResiliencyStats[0] = 1;
  dword_140442CC4 = v7;
  byte_140442CC8 = a2;
  xmmword_140442CD0 = *a3;
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
