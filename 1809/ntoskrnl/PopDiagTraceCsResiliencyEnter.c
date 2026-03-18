/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x1402DFBC4
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402DE160 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

__int64 __fastcall PopDiagTraceCsResiliencyEnter(__int64 a1, char a2, __int128 *a3)
{
  KIRQL v6; // bp
  __int128 v7; // xmm0
  int v8; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v6 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  memset(PopCsResiliencyStats, 0, 0x118uLL);
  qword_140417460 = -1LL;
  v7 = *a3;
  v8 = *(_DWORD *)(a1 + 12);
  byte_140417402 = byte_140418164;
  byte_140417401 = dword_14041810C == 0;
  byte_140417403 = byte_140418165;
  PopCsResiliencyStats[0] = 1;
  dword_140417404 = v8;
  byte_140417408 = a2;
  xmmword_140417410 = v7;
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
