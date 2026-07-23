/*
 * XREFs of PopCalculateIdleInformation @ 0x1402DF198
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402DE450 (PdcPoCurrentPdcPhase.c)
 *     PopCalculateCsSummary @ 0x1402DED48 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402DF2DC (PopCaptureSleepStudyStatistics.c)
 *     PopDripsWatchdogCallbackWorker @ 0x14086F250 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x14086F680 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogStartWatchdog @ 0x14086FB8C (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14087AE80 (PopDripsWatchdogWorkerRoutine.c)
 *     PopSetDripsWatchdog @ 0x14087B2B0 (PopSetDripsWatchdog.c)
 * Callees:
 *     PpmConvertTime @ 0x1400A7C54 (PpmConvertTime.c)
 *     PpmQueryPlatformStateResidency @ 0x1402D58CC (PpmQueryPlatformStateResidency.c)
 */

unsigned __int64 __fastcall PopCalculateIdleInformation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned int v4; // r15d
  int v5; // r12d
  unsigned __int64 PlatformStateResidency; // rbp
  int v7; // r13d
  unsigned int v8; // r14d
  unsigned __int64 *v9; // rsi
  int v10; // edi
  unsigned __int64 v11; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v14; // [rsp+68h] [rbp+10h]
  unsigned __int64 v15; // [rsp+70h] [rbp+18h]

  v1 = 0LL;
  v2 = a1;
  if ( PpmPlatformStates )
  {
    v3 = *(_QWORD *)(PpmPlatformStates + 48);
    v4 = *(_DWORD *)(v3 + 4);
    v5 = *(_DWORD *)(v3 + 8);
  }
  else
  {
    v3 = 0LL;
    v4 = 0;
    v5 = 0;
  }
  v15 = 0LL;
  PlatformStateResidency = PpmQueryPlatformStateResidency(dword_14043D580);
  if ( PlatformStateResidency != -1LL )
    PlatformStateResidency /= 0xAuLL;
  v7 = 0;
  v8 = 0;
  if ( v4 )
  {
    v9 = (unsigned __int64 *)(v3 + 56);
    v10 = dword_14043D580;
    do
    {
      v14 = PopQpcFrequency;
      v1 += PpmConvertTime(*v9, PopQpcFrequency, 0xF4240uLL);
      if ( v10 != -1 && v8 == v10 )
      {
        v11 = PpmConvertTime(*v9, v14, 0xF4240uLL);
        v7 = *((_DWORD *)v9 - 6);
        v15 = v11;
      }
      ++v8;
      v9 += 126;
    }
    while ( v8 < v4 );
    v2 = a1;
  }
  result = v15;
  *(_QWORD *)v2 = v1;
  *(_QWORD *)(v2 + 8) = v15;
  *(_QWORD *)(v2 + 16) = PlatformStateResidency;
  *(_DWORD *)(v2 + 24) = v7;
  *(_DWORD *)(v2 + 28) = v5;
  return result;
}
