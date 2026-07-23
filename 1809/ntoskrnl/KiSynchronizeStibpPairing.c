/*
 * XREFs of KiSynchronizeStibpPairing @ 0x140295984
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1400F83B0 (KiUpdateSpeculationControl.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KiIpiSendPacket @ 0x1400ED184 (KiIpiSendPacket.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall KiSynchronizeStibpPairing(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  _DWORD v6[44]; // [rsp+30h] [rbp-C8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v3 = *(_QWORD *)(a1 + 11696);
  v6[0] = 1310721;
  memset(&v6[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v6, *(_DWORD *)(v3 + 36));
  KiIpiSendPacket(0, (int)v6, (__int64)KiSynchronizeStibpPairingTarget, 0LL, 0LL, 0LL);
  while ( *(_DWORD *)(a1 + 11648) )
    _mm_pause();
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
