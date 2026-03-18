/*
 * XREFs of KiCheckWaitNext @ 0x14009AE10
 * Callers:
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KeWaitForAlertByThreadId @ 0x14009A310 (KeWaitForAlertByThreadId.c)
 *     KiWaitForAllObjects @ 0x140118F10 (KiWaitForAllObjects.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     RtlGetInterruptTimePrecise @ 0x14009E740 (RtlGetInterruptTimePrecise.c)
 */

__int64 __fastcall KiCheckWaitNext(
        __int64 a1,
        volatile signed __int32 *SchedulerAssist,
        __int64 a3,
        _QWORD *a4,
        _DWORD *a5)
{
  volatile signed __int32 *v6; // rdi
  unsigned __int8 v7; // si
  unsigned __int8 CurrentIrql; // r10
  __int64 UnbiasedInterruptTime; // rcx
  _DWORD *v11; // rax
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v6 = SchedulerAssist;
  v7 = _bittestandreset((signed __int32 *)(a1 + 116), 2u);
  if ( !v7 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    {
      SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      _InterlockedOr(SchedulerAssist, 0x10000u);
    }
    *(_BYTE *)(a1 + 390) = CurrentIrql;
  }
  if ( v6 )
  {
    if ( *((int *)v6 + 1) >= 0 )
    {
      *a4 = *(_QWORD *)v6;
      *a5 = 1;
    }
    else
    {
      if ( (_BYTE)a3 )
        UnbiasedInterruptTime = RtlGetInterruptTimePrecise(&v13, SchedulerAssist, a3) - MEMORY[0xFFFFF780000003B0];
      else
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v11 = a5;
      *a4 = UnbiasedInterruptTime - *(_QWORD *)(a1 + 248) - *(_QWORD *)v6;
      *v11 = 2;
    }
  }
  else
  {
    *a5 = 0;
  }
  return v7;
}
