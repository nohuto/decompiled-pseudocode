/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1400F07E0
 * Callers:
 *     PopDeepSleepSetDisengageReason @ 0x1400F06C8 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400F0750 (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1403001C0 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1403002C0 (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 */

__int64 __fastcall PopDeepSleepResiliencyPhaseAccountingUpdate(int a1, char a2)
{
  __int64 v2; // r15
  unsigned int v3; // edi
  unsigned int v5; // ebx
  int v6; // esi
  KIRQL v7; // al
  __int16 v8; // bp
  KIRQL v9; // r14
  __int64 result; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // rdx
  char *v13; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = a1;
  v3 = 0;
  v5 = 0;
  v6 = 1 << a1;
  v7 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  v8 = dword_140442D34;
  v9 = v7;
  if ( (dword_140442D34 & v6) != 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v13 = &PopCsResiliencyStats[8 * v2];
    if ( !a2 )
    {
      *(_QWORD *)&PopCsResiliencyStats[8 * v2 + 200] += PerformanceCounter.QuadPart - *((_QWORD *)v13 + 15);
      PerformanceCounter.QuadPart = 0LL;
    }
    *((LARGE_INTEGER *)v13 + 15) = PerformanceCounter;
    if ( a2 )
    {
      if ( (v6 & 3) != 0 )
      {
        if ( (v8 & 0x40) != 0 )
          v5 = 64;
        if ( (v8 & 0x3BC) != 0 )
          v5 |= 0x3BCu;
      }
      else if ( (v6 & 0x40) != 0 && (v8 & 0x3BC) != 0 )
      {
        v5 = 956;
      }
      LOBYTE(v12.LowPart) = 1;
      ((void (__fastcall *)(_QWORD, _QWORD))PopDeepSleepResiliencyPhaseAccountingEnd)(v5, (LARGE_INTEGER)v12.QuadPart);
    }
    else
    {
      if ( (v6 & 3) != 0 )
      {
        if ( (PopDeepSleepDisengageReasonMask & 3) == 0 )
        {
          v3 = 64;
          if ( (PopDeepSleepDisengageReasonMask & 0x40) == 0 )
            v3 = 1020;
        }
      }
      else if ( (v6 & 0x40) != 0 && (PopDeepSleepDisengageReasonMask & 0x40) == 0 )
      {
        v3 = 956;
      }
      LOBYTE(v12.LowPart) = 1;
      ((void (__fastcall *)(_QWORD, _QWORD))PopDeepSleepResiliencyPhaseAccountingBegin)(v3, (LARGE_INTEGER)v12.QuadPart);
    }
  }
  KxReleaseSpinLock(&PopCsResiliencyStatsLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v9;
  __writecr8(v9);
  return result;
}
