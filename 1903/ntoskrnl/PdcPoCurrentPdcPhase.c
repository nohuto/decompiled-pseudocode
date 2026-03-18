/*
 * XREFs of PdcPoCurrentPdcPhase @ 0x1402FB070
 * Callers:
 *     <none>
 * Callees:
 *     PpmConvertTime @ 0x140004E24 (PpmConvertTime.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopFxPauseDeviceAccounting @ 0x1402F3EE8 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x1402F4E50 (PopFxResumeDeviceAccounting.c)
 *     PopCalculateIdleInformation @ 0x1402FBFA8 (PopCalculateIdleInformation.c)
 *     PopCalculateTotalHwDripsResidency @ 0x1402FC0BC (PopCalculateTotalHwDripsResidency.c)
 *     PopDiagTraceCsResiliencyEnter @ 0x1402FCD9C (PopDiagTraceCsResiliencyEnter.c)
 *     PopDiagTraceCsResiliencyExit @ 0x1402FCE94 (PopDiagTraceCsResiliencyExit.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140300710 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x140300810 (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     PopCurrentPowerStatePrecise @ 0x140747960 (PopCurrentPowerStatePrecise.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1408A2AA8 (PopPowerRequestNotifyStandbyStateChanged.c)
 *     PopGetEnergyCounter @ 0x1408AA678 (PopGetEnergyCounter.c)
 *     PopPdcQueryActivationStats @ 0x1408ABFB0 (PopPdcQueryActivationStats.c)
 *     PopDiagTraceCsResiliencyStats @ 0x1408AEA70 (PopDiagTraceCsResiliencyStats.c)
 *     PopIdleCsStateChanged @ 0x1408B65E4 (PopIdleCsStateChanged.c)
 *     PopStatsNotifyPowerRequestDamPhase @ 0x1408B77E8 (PopStatsNotifyPowerRequestDamPhase.c)
 *     PopStatsNotifyPowerRequestLpePhase @ 0x1408B7864 (PopStatsNotifyPowerRequestLpePhase.c)
 */

__int64 __fastcall PdcPoCurrentPdcPhase(int a1, char a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // eax
  char v12; // bl
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v14; // rdx
  LARGE_INTEGER v15; // rax
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // r8d
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v22[4]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v23[32]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v24[40]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v25[208]; // [rsp+C8h] [rbp-40h] BYREF

  memset(v24, 0, sizeof(v24));
  memset(v23, 0, sizeof(v23));
  memset(v25, 0, sizeof(v25));
  v21[0] = 0LL;
  v21[1] = 0LL;
  result = (__int64)memset(v22, 0, sizeof(v22));
  v6 = 0LL;
  PopBsdCurrentCsPhase = a1;
  v20 = 0LL;
  v7 = a1 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 3;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            v20 = -2500000LL;
            v11 = PopCurrentPowerStatePrecise(v23, &v20);
            if ( v11 < 0 || (v12 = 1, v11 == 258) )
              v12 = 0;
            PopGetEnergyCounter(v21);
            if ( a2 )
            {
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              LOBYTE(v14) = v12;
              qword_140467E88 = PerformanceCounter.QuadPart;
              PopDiagTraceCsResiliencyEnter(v23, v14, v21);
              PopDeepSleepResiliencyPhaseAccountingBegin(3LL, 0LL);
              PopCalculateIdleInformation(v22);
              qword_140467EC8 = v22[2];
              qword_140467ED8 = v22[1];
              result = (unsigned int)PopFxDeviceAccountingLevel;
              if ( (PopFxDeviceAccountingLevel & 2) != 0 )
                return (__int64)PopFxResumeDeviceAccounting();
            }
            else
            {
              PopCalculateIdleInformation(v22);
              v15 = KeQueryPerformanceCounter(0LL);
              v16 = PpmConvertTime(v15.QuadPart - qword_140467E88, PopQpcFrequency, 0xF4240uLL);
              qword_140467E90 += v16;
              v17 = PopCalculateTotalHwDripsResidency(qword_140467EC8, v22[2], v16);
              if ( v17 != -1 )
                v6 = v17;
              v18 = v22[1] - qword_140467ED8;
              qword_140467EE0 += v22[1] - qword_140467ED8;
              qword_140467ED0 += v6;
              if ( (PopFxDeviceAccountingLevel & 2) != 0 )
                PopFxPauseDeviceAccounting();
              PopDeepSleepResiliencyPhaseAccountingEnd(3LL, 0LL);
              PopPdcQueryActivationStats(v24);
              memset(v25, 0, sizeof(v25));
              LOBYTE(v19) = v12;
              PopDiagTraceCsResiliencyExit(
                (unsigned int)v25,
                (unsigned int)v23,
                v19,
                (unsigned int)v21,
                v16,
                v6,
                v18,
                (__int64)v24);
              return PopDiagTraceCsResiliencyStats(v25);
            }
          }
        }
        else
        {
          LOBYTE(v5) = a2;
          return PopStatsNotifyPowerRequestLpePhase(v5);
        }
      }
      else
      {
        LOBYTE(v5) = a2;
        return PopStatsNotifyPowerRequestDamPhase(v5);
      }
    }
    else
    {
      LOBYTE(v5) = a2 != 0;
      return PopIdleCsStateChanged(v5);
    }
  }
  else
  {
    LOBYTE(v5) = a2 != 0;
    return PopPowerRequestNotifyStandbyStateChanged(v5);
  }
  return result;
}
