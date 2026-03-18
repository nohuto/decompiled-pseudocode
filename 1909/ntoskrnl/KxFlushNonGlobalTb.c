/*
 * XREFs of KxFlushNonGlobalTb @ 0x140099AC0
 * Callers:
 *     KeFlushTb @ 0x1400997B0 (KeFlushTb.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x140098A58 (KiIpiSendRequestEx.c)
 *     KiIpiSendRequest @ 0x140099C40 (KiIpiSendRequest.c)
 *     KeRemoveProcessorAffinityEx @ 0x14009A150 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14009A190 (KeCopyAffinityEx.c)
 *     KxSetTimeStampBusy @ 0x140101CB0 (KxSetTimeStampBusy.c)
 *     KiFlushProcessTbWorker @ 0x140127960 (KiFlushProcessTbWorker.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlNotifyLongSpinWait @ 0x140284ED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AEF40 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KxFlushNonGlobalTb(int a1)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int v4; // ebx
  _BYTE *v5; // rsi
  int v6; // edx
  __int64 v7; // rcx
  __int64 result; // rax
  struct _KPRCB *v9; // rcx
  signed __int32 v10[8]; // [rsp+0h] [rbp-108h] BYREF
  _BYTE v11[176]; // [rsp+40h] [rbp-C8h] BYREF

  memset(v11, 0, 0xA8uLL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !a1 )
  {
    _InterlockedOr(v10, 0);
    KeCopyAffinityEx(v11, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors);
    v5 = v11;
    KeRemoveProcessorAffinityEx(v11, CurrentPrcb->Number);
    v6 = 0;
    goto LABEL_18;
  }
  v4 = 0;
  v5 = 0LL;
  v6 = 1;
  if ( !KiKvaShadow )
  {
LABEL_18:
    KiIpiSendRequestEx(
      (__int64)CurrentPrcb,
      v6,
      (__int64)v5,
      0,
      1LL,
      (void (__fastcall *)(__int64))KiFlushProcessTbWorker,
      0LL);
    goto LABEL_11;
  }
  if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    {
      KiFlushProcessTbWorker(0LL);
    }
    else
    {
      KiIpiSendRequest((_DWORD)CurrentPrcb, 1, 0, 0, 1LL);
      KiFlushProcessTbWorker(0LL);
      while ( CurrentPrcb->PacketBarrier )
      {
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v7) )
        {
          HvlNotifyLongSpinWait(v4);
        }
        else
        {
          _mm_pause();
        }
      }
    }
    _InterlockedIncrement(&KiTbFlushTimeStamp);
  }
LABEL_11:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v9 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v9);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
