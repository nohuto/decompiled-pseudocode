/*
 * XREFs of KiCheckWaitNext @ 0x14008B5D0
 * Callers:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeWaitForAlertByThreadId @ 0x14008B050 (KeWaitForAlertByThreadId.c)
 *     KiWaitForAllObjects @ 0x1400FA4A8 (KiWaitForAllObjects.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14008BA90 (RtlGetInterruptTimePrecise.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 __fastcall KiCheckWaitNext(__int64 a1, LARGE_INTEGER *a2, char a3, LARGE_INTEGER *a4, _DWORD *a5)
{
  unsigned __int8 v7; // si
  unsigned __int8 CurrentIrql; // r9
  LARGE_INTEGER v10; // rcx
  _DWORD *v11; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+8h] BYREF

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
    if ( a2->HighPart >= 0 )
    {
      *a4 = *a2;
      *a5 = 1;
    }
    else
    {
      if ( a3 )
        v10 = (LARGE_INTEGER)(*(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter) - MEMORY[0xFFFFF780000003B0]);
      else
        v10.QuadPart = KiQueryUnbiasedInterruptTime(0LL);
      v11 = a5;
      *a4 = v10;
      a4->QuadPart = v10.QuadPart - *(_QWORD *)(a1 + 248) - a2->QuadPart;
      *v11 = 2;
    }
  }
  else
  {
    *a5 = 0;
  }
  return v7;
}
