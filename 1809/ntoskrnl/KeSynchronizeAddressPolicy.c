/*
 * XREFs of KeSynchronizeAddressPolicy @ 0x14012DD18
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1405F8498 (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     KiIpiSendPacket @ 0x1400ED184 (KiIpiSendPacket.c)
 *     KeCountSetBitsAffinityEx @ 0x1400ED9C0 (KeCountSetBitsAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400EDAF0 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x14012DE20 (KiSynchronizeAddressPolicyTarget.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KeSynchronizeAddressPolicy(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  int v3; // ebx
  struct _KPRCB *v4; // rcx
  unsigned __int16 v5[88]; // [rsp+30h] [rbp-C8h] BYREF

  if ( *(_BYTE *)(a1 + 640) == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    KeCopyAffinityEx((__int64)v5, (unsigned __int16 *)(a1 + 272));
    KeRemoveProcessorAffinityEx(v5, CurrentPrcb->Number);
    v3 = KeCountSetBitsAffinityEx(v5);
    KiSynchronizeAddressPolicyTarget(0LL, 0LL, 0LL, 0LL);
    if ( v3 )
    {
      KiIpiSendPacket(0, (int)v5, (__int64)KiSynchronizeAddressPolicyTarget, 1LL, 0LL, 0LL);
      while ( CurrentPrcb->PacketBarrier )
        _mm_pause();
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v4 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v4->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v4);
    }
    __writecr8(CurrentIrql);
  }
}
