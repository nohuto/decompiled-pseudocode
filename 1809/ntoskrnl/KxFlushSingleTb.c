/*
 * XREFs of KxFlushSingleTb @ 0x1400ECF40
 * Callers:
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x1400ED1E0 (KiIpiSendRequestEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400EDAF0 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KxFlushSingleTb(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbp
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  _BYTE *v6; // rsi
  int v7; // edx
  __int64 result; // rax
  struct _KPRCB *v9; // rcx
  signed __int32 v10[8]; // [rsp+0h] [rbp-128h] BYREF
  __int64 v11; // [rsp+40h] [rbp-E8h] BYREF
  int v12; // [rsp+48h] [rbp-E0h]
  _BYTE v13[176]; // [rsp+50h] [rbp-D8h] BYREF

  v12 = a2;
  v3 = 2147483650LL;
  v11 = a1;
  if ( a3 != 1 )
    v3 = 2LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a3 )
  {
    LODWORD(v6) = 0;
    v7 = 1;
  }
  else
  {
    _InterlockedOr(v10, 0);
    KeCopyAffinityEx(v13, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors);
    v6 = v13;
    KeRemoveProcessorAffinityEx(v13, CurrentPrcb->Number);
    v7 = 0;
  }
  KiIpiSendRequestEx(
    (_DWORD)CurrentPrcb,
    v7,
    (_DWORD)v6,
    (unsigned int)&v11,
    0LL,
    v3,
    (__int64)KiFlushSingleTbWorker,
    (__int64)&v11);
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
