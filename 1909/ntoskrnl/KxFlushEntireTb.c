/*
 * XREFs of KxFlushEntireTb @ 0x140188418
 * Callers:
 *     KeFlushTb @ 0x1400997B0 (KeFlushTb.c)
 *     KeFlushEntireTb @ 0x1401883E0 (KeFlushEntireTb.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x140098A58 (KiIpiSendRequestEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x14009A150 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14009A190 (KeCopyAffinityEx.c)
 *     KxSetTimeStampBusy @ 0x140101CB0 (KxSetTimeStampBusy.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall KxFlushEntireTb(int a1)
{
  bool v2; // dl
  __int64 v3; // rsi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  struct _KPRCB *v7; // rcx
  signed __int32 v8[8]; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int16 v9[88]; // [rsp+40h] [rbp-C8h] BYREF

  memset(v9, 0, 0xA8uLL);
  v2 = 1;
  v3 = 3LL;
  if ( a1 == 1 )
  {
    v3 = 2147483651LL;
  }
  else if ( !a1 )
  {
    v2 = KiKvaShadow == 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( v2 )
  {
    if ( KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
    {
      KiIpiSendRequestEx(
        (__int64)KeGetCurrentPrcb(),
        1,
        0LL,
        0,
        v3,
        (void (__fastcall *)(__int64))KiFlushCurrentTbWorker,
        0LL);
      _InterlockedIncrement(&KiTbFlushTimeStamp);
    }
  }
  else
  {
    _InterlockedOr(v8, 0);
    CurrentPrcb = KeGetCurrentPrcb();
    KeCopyAffinityEx((__int64)v9, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors.Count);
    KeRemoveProcessorAffinityEx(v9, CurrentPrcb->Number);
    KiIpiSendRequestEx(
      (__int64)CurrentPrcb,
      0,
      (__int64)v9,
      0,
      v3,
      (void (__fastcall *)(__int64))KiFlushCurrentTbWorker,
      0LL);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v7 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v7);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
