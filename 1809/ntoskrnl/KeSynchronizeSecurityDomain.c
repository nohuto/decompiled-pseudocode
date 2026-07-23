/*
 * XREFs of KeSynchronizeSecurityDomain @ 0x14013853C
 * Callers:
 *     PspCombineSecurityDomains @ 0x14061204C (PspCombineSecurityDomains.c)
 * Callees:
 *     KiIpiSendPacket @ 0x1400ED184 (KiIpiSendPacket.c)
 *     KeCountSetBitsAffinityEx @ 0x1400ED9C0 (KeCountSetBitsAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400EDAF0 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     KiSynchronizeSecurityDomainTarget @ 0x14013B5A0 (KiSynchronizeSecurityDomainTarget.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSynchronizeSecurityDomain(_KPROCESS *a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  int v4; // esi
  __int64 result; // rax
  struct _KPRCB *v6; // rcx
  unsigned __int16 v7[88]; // [rsp+30h] [rbp-C8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  KeCopyAffinityEx((__int64)v7, &a1->ActiveProcessors.Count);
  KeRemoveProcessorAffinityEx(v7, CurrentPrcb->Number);
  v4 = KeCountSetBitsAffinityEx(v7);
  if ( a1 == KeGetCurrentThread()->ApcState.Process )
    KiSynchronizeSecurityDomainTarget(0LL, 0LL, 0LL, 0LL);
  if ( v4 )
  {
    KiIpiSendPacket(0, (int)v7, (__int64)KiSynchronizeSecurityDomainTarget, 1LL, 0LL, 0LL);
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v6 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v6->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v6);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
