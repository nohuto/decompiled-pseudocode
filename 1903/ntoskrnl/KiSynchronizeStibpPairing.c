/*
 * XREFs of KiSynchronizeStibpPairing @ 0x1402AC04C
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1400EA240 (KiUpdateSpeculationControl.c)
 * Callees:
 *     KiIpiSendPacket @ 0x1400B8F44 (KiIpiSendPacket.c)
 *     KeAddProcessorAffinityEx @ 0x1400BE1E0 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall KiSynchronizeStibpPairing(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  _DWORD v6[44]; // [rsp+30h] [rbp-C8h] BYREF

  memset(&v6[2], 0, 0xA0uLL);
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
