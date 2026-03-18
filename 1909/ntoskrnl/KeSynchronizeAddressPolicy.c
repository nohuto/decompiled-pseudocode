/*
 * XREFs of KeSynchronizeAddressPolicy @ 0x14012F6AC
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1405E7AFC (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     KeCountSetBitsAffinityEx @ 0x140098BB0 (KeCountSetBitsAffinityEx.c)
 *     KiIpiSendPacket @ 0x140098DB4 (KiIpiSendPacket.c)
 *     KeRemoveProcessorAffinityEx @ 0x14009A150 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14009A190 (KeCopyAffinityEx.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x14012F800 (KiSynchronizeAddressPolicyTarget.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void *__fastcall KeSynchronizeAddressPolicy(__int64 a1)
{
  void *result; // rax
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  int v5; // ebx
  struct _KPRCB *v6; // rcx
  unsigned __int16 v7[88]; // [rsp+30h] [rbp-C8h] BYREF

  result = memset(v7, 0, 0xA8uLL);
  if ( *(_BYTE *)(a1 + 648) == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    KeCopyAffinityEx((__int64)v7, (unsigned __int16 *)(a1 + 272));
    KeRemoveProcessorAffinityEx(v7, CurrentPrcb->Number);
    v5 = KeCountSetBitsAffinityEx(v7);
    KiSynchronizeAddressPolicyTarget(0LL, 0LL, 0LL, 0LL);
    if ( v5 )
    {
      KiIpiSendPacket(0, (int)v7, (__int64)KiSynchronizeAddressPolicyTarget, 1LL, 0LL, 0LL);
      while ( CurrentPrcb->PacketBarrier )
        _mm_pause();
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v6 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v6->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v6);
    }
    result = (void *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
