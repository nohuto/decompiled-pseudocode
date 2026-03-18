/*
 * XREFs of KxFlushSingleTb @ 0x14009F8A0
 * Callers:
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x1400B8BE8 (KiIpiSendRequestEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400BA2E0 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400BA320 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall KxFlushSingleTb(__int64 a1, int a2, int a3)
{
  __int64 v6; // rbp
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  _BYTE *v9; // rsi
  int v10; // edx
  __int64 result; // rax
  struct _KPRCB *v12; // rcx
  signed __int32 v13[8]; // [rsp+0h] [rbp-128h] BYREF
  __int64 v14; // [rsp+40h] [rbp-E8h] BYREF
  int v15; // [rsp+48h] [rbp-E0h]
  int v16; // [rsp+4Ch] [rbp-DCh]
  _BYTE v17[176]; // [rsp+50h] [rbp-D8h] BYREF

  memset(v17, 0, 0xA8uLL);
  v16 = 0;
  v6 = 2147483650LL;
  v15 = a2;
  v14 = a1;
  if ( a3 != 1 )
    v6 = 2LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a3 )
  {
    LODWORD(v9) = 0;
    v10 = 1;
  }
  else
  {
    _InterlockedOr(v13, 0);
    KeCopyAffinityEx(v17, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors);
    v9 = v17;
    KeRemoveProcessorAffinityEx(v17, CurrentPrcb->Number);
    v10 = 0;
  }
  KiIpiSendRequestEx(
    (_DWORD)CurrentPrcb,
    v10,
    (_DWORD)v9,
    (unsigned int)&v14,
    v6,
    (__int64)KiFlushSingleTbWorker,
    (__int64)&v14);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v12 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v12);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
