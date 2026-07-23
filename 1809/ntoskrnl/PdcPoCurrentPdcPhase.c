/*
 * XREFs of PdcPoCurrentPdcPhase @ 0x1402DE450
 * Callers:
 *     <none>
 * Callees:
 *     PpmConvertTime @ 0x1400A7C54 (PpmConvertTime.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopFxPauseDeviceAccounting @ 0x1402D8C0C (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x1402D9688 (PopFxResumeDeviceAccounting.c)
 *     PopCalculateIdleInformation @ 0x1402DF198 (PopCalculateIdleInformation.c)
 *     PopCalculateTotalHwDripsResidency @ 0x1402DF2AC (PopCalculateTotalHwDripsResidency.c)
 *     PopDiagTraceCsResiliencyEnter @ 0x1402DFEB4 (PopDiagTraceCsResiliencyEnter.c)
 *     PopDiagTraceCsResiliencyExit @ 0x1402DFFAC (PopDiagTraceCsResiliencyExit.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1402E3B40 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1402E3C40 (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     PopCurrentPowerStatePrecise @ 0x14071D430 (PopCurrentPowerStatePrecise.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1408677E8 (PopPowerRequestNotifyStandbyStateChanged.c)
 *     PopGetEnergyCounter @ 0x14086ED88 (PopGetEnergyCounter.c)
 *     PopPdcQueryActivationStats @ 0x1408705CC (PopPdcQueryActivationStats.c)
 *     PopDiagTraceCsResiliencyStats @ 0x140872E80 (PopDiagTraceCsResiliencyStats.c)
 *     PopIdleCsStateChanged @ 0x140878964 (PopIdleCsStateChanged.c)
 *     PopStatsNotifyPowerRequestDamPhase @ 0x14087C450 (PopStatsNotifyPowerRequestDamPhase.c)
 *     PopStatsNotifyPowerRequestLpePhase @ 0x14087C4CC (PopStatsNotifyPowerRequestLpePhase.c)
 */

__int64 __fastcall PdcPoCurrentPdcPhase(int a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  bool v9; // si
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v11; // rdx
  LARGE_INTEGER v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // r8d
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v18[16]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h]
  __int64 v21; // [rsp+70h] [rbp-98h]
  _BYTE v22[32]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v23[40]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v24[208]; // [rsp+C8h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+1B0h] [rbp+A8h] BYREF

  result = (__int64)&retaddr;
  PopBsdCurrentCsPhase = a1;
  v4 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v4 )
  {
    v5 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v5 )
    {
      v6 = (unsigned int)(v5 - 3);
      if ( (_DWORD)v6 )
      {
        v7 = (unsigned int)(v6 - 1);
        if ( (_DWORD)v7 )
        {
          if ( (_DWORD)v7 == 1 )
          {
            v17 = -2500000LL;
            v8 = 0LL;
            v9 = (int)PopCurrentPowerStatePrecise(v22, &v17) >= 0;
            PopGetEnergyCounter(v18);
            if ( a2 )
            {
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              LOBYTE(v11) = v9;
              qword_14043D488 = PerformanceCounter.QuadPart;
              PopDiagTraceCsResiliencyEnter(v22, v11, v18);
              PopDeepSleepResiliencyPhaseAccountingBegin(3LL, 0LL);
              PopCalculateIdleInformation(&v19);
              qword_14043D4C8 = v21;
              qword_14043D4D8 = v20;
              result = (unsigned int)PopFxDeviceAccountingLevel;
              if ( (PopFxDeviceAccountingLevel & 2) != 0 )
                return (__int64)PopFxResumeDeviceAccounting();
            }
            else
            {
              PopCalculateIdleInformation(&v19);
              v12 = KeQueryPerformanceCounter(0LL);
              v13 = PpmConvertTime(v12.QuadPart - qword_14043D488, PopQpcFrequency, 0xF4240uLL);
              qword_14043D490 += v13;
              v14 = PopCalculateTotalHwDripsResidency(qword_14043D4C8, v21, v13);
              if ( v14 != -1 )
                v8 = v14;
              v15 = v20 - qword_14043D4D8;
              qword_14043D4E0 += v20 - qword_14043D4D8;
              qword_14043D4D0 += v8;
              if ( (PopFxDeviceAccountingLevel & 2) != 0 )
                PopFxPauseDeviceAccounting();
              PopDeepSleepResiliencyPhaseAccountingEnd(3LL, 0LL);
              PopPdcQueryActivationStats(v23);
              memset(v24, 0, sizeof(v24));
              LOBYTE(v16) = v9;
              PopDiagTraceCsResiliencyExit(
                (unsigned int)v24,
                (unsigned int)v22,
                v16,
                (unsigned int)v18,
                v13,
                v8,
                v15,
                (__int64)v23);
              return PopDiagTraceCsResiliencyStats(v24);
            }
          }
        }
        else
        {
          LODWORD(v7) = a2;
          return PopStatsNotifyPowerRequestLpePhase(v7);
        }
      }
      else
      {
        LODWORD(v6) = a2;
        return PopStatsNotifyPowerRequestDamPhase(v6);
      }
    }
    else
    {
      LODWORD(v5) = a2 != 0;
      return PopIdleCsStateChanged(v5);
    }
  }
  else
  {
    LODWORD(v4) = a2 != 0;
    return PopPowerRequestNotifyStandbyStateChanged(v4);
  }
  return result;
}
