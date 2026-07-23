/*
 * XREFs of KxFlushNonGlobalTb @ 0x1400ED2A0
 * Callers:
 *     KeFlushTb @ 0x1400755A0 (KeFlushTb.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x1400ED1E0 (KiIpiSendRequestEx.c)
 *     KiIpiSendRequest @ 0x1400ED3F0 (KiIpiSendRequest.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400EDAF0 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     KxSetTimeStampBusy @ 0x140117CC0 (KxSetTimeStampBusy.c)
 *     KiFlushProcessTbWorker @ 0x140125560 (KiFlushProcessTbWorker.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KxFlushNonGlobalTb(int a1)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int v3; // ebx
  _BYTE *v4; // rsi
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 result; // rax
  struct _KPRCB *v10; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-108h] BYREF
  _BYTE v12[176]; // [rsp+40h] [rbp-C8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !a1 )
  {
    _InterlockedOr(v11, 0);
    KeCopyAffinityEx(v12, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors);
    v4 = v12;
    KeRemoveProcessorAffinityEx(v12, CurrentPrcb->Number);
    v5 = 0;
    goto LABEL_18;
  }
  v3 = 0;
  v4 = 0LL;
  v5 = 1;
  if ( !KiKvaShadow )
  {
LABEL_18:
    KiIpiSendRequestEx(
      (__int64)CurrentPrcb,
      v5,
      (__int64)v4,
      0,
      0LL,
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
      KiIpiSendRequest((_DWORD)CurrentPrcb, 1, 0, 0, 0, 1LL);
      KiFlushProcessTbWorker(0LL);
      while ( CurrentPrcb->PacketBarrier )
      {
        if ( (++v3 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v7, v6, v8) )
        {
          HvlNotifyLongSpinWait(v3);
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
    v10 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v10);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
