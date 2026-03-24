/*
 * XREFs of KiCheckWaitNext @ 0x14008B5E0
 * Callers:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeWaitForAlertByThreadId @ 0x14008B060 (KeWaitForAlertByThreadId.c)
 *     KiWaitForAllObjects @ 0x1400FA428 (KiWaitForAllObjects.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14008BAA0 (RtlGetInterruptTimePrecise.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CF10 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 __fastcall KiCheckWaitNext(__int64 a1, __int64 a2, char a3, __int64 *a4, _DWORD *a5)
{
  unsigned __int8 v7; // si
  unsigned __int8 CurrentIrql; // r9
  __int64 UnbiasedInterruptTime; // rcx
  _DWORD *v11; // rax
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v7 = _bittestandreset((signed __int32 *)(a1 + 116), 2u);
  if ( !v7 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    *(_BYTE *)(a1 + 390) = CurrentIrql;
  }
  if ( a2 )
  {
    if ( *(int *)(a2 + 4) >= 0 )
    {
      *a4 = *(_QWORD *)a2;
      *a5 = 1;
    }
    else
    {
      if ( a3 )
        UnbiasedInterruptTime = RtlGetInterruptTimePrecise(&v13) - MEMORY[0xFFFFF780000003B0];
      else
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(0LL);
      v11 = a5;
      *a4 = UnbiasedInterruptTime;
      *a4 = UnbiasedInterruptTime - *(_QWORD *)(a1 + 248) - *(_QWORD *)a2;
      *v11 = 2;
    }
  }
  else
  {
    *a5 = 0;
  }
  return v7;
}
