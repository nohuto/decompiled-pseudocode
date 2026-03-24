/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x1402DFCC4
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402DE260 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1880 (memset.c)
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
  qword_140417480 = -1LL;
  v7 = *a3;
  v8 = *(_DWORD *)(a1 + 12);
  byte_140417422 = byte_140418124;
  byte_140417421 = dword_1404180CC == 0;
  byte_140417423 = byte_140418125;
  PopCsResiliencyStats[0] = 1;
  dword_140417424 = v8;
  byte_140417428 = a2;
  xmmword_140417430 = v7;
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
