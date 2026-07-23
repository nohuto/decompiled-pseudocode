/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x140004F10
 * Callers:
 *     PopDeepSleepSetDisengageReason @ 0x140004DF8 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x140004E80 (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1402E3B40 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1402E3C40 (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 */

__int64 __fastcall PopDeepSleepResiliencyPhaseAccountingUpdate(int a1, char a2)
{
  __int64 v2; // r12
  unsigned int v3; // edi
  unsigned int v5; // ebx
  int v6; // esi
  KIRQL v7; // al
  __int16 v8; // bp
  KIRQL v9; // r14
  __int64 result; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // rdx

  v2 = a1;
  v3 = 0;
  v5 = 0;
  v6 = 1 << a1;
  v7 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  v8 = dword_140418514;
  v9 = v7;
  if ( (dword_140418514 & v6) != 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( a2 )
    {
      *(LARGE_INTEGER *)&PopCsResiliencyStats[8 * v2 + 120] = PerformanceCounter;
    }
    else
    {
      *(_QWORD *)&PopCsResiliencyStats[8 * v2 + 200] += PerformanceCounter.QuadPart
                                                      - *(_QWORD *)&PopCsResiliencyStats[8 * v2 + 120];
      *(_QWORD *)&PopCsResiliencyStats[8 * v2 + 120] = 0LL;
    }
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
    _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick();
  }
  result = v9;
  __writecr8(v9);
  return result;
}
