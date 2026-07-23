/*
 * XREFs of PfPowerActionNotify @ 0x140568F10
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PopUmpoProcessPowerMessage @ 0x14058C0C0 (PopUmpoProcessPowerMessage.c)
 *     PopUmpoSendLegacyEvent @ 0x1406DF05C (PopUmpoSendLegacyEvent.c)
 *     PopIssueActionRequest @ 0x1406DFAF0 (PopIssueActionRequest.c)
 *     PopDispatchSuperfetchNotification @ 0x1406E0078 (PopDispatchSuperfetchNotification.c)
 *     PfpProcessScenarioPhase @ 0x14071CE5C (PfpProcessScenarioPhase.c)
 * Callees:
 *     PfLogEvent @ 0x1400D5478 (PfLogEvent.c)
 *     PfpServiceMainThreadUnboost @ 0x140143450 (PfpServiceMainThreadUnboost.c)
 *     PfTSetTraceWorkerPriority @ 0x140175B9C (PfTSetTraceWorkerPriority.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140567844 (PfpPowerActionStartScenarioTracing.c)
 *     PfpStartLoggingHardFaultEvents @ 0x14056790C (PfpStartLoggingHardFaultEvents.c)
 *     PfpScenCtxPrefetchWait @ 0x1405679E0 (PfpScenCtxPrefetchWait.c)
 *     MmPerformMemoryListCommand @ 0x14056FA20 (MmPerformMemoryListCommand.c)
 *     PfpScenCtxScenarioSet @ 0x14056FA68 (PfpScenCtxScenarioSet.c)
 *     PfSnBeginBootPhase @ 0x14057013C (PfSnBeginBootPhase.c)
 *     PfpLogScenarioEvent @ 0x14071CF54 (PfpLogScenarioEvent.c)
 *     PfGenerateTrace @ 0x14071D064 (PfGenerateTrace.c)
 */

__int64 __fastcall PfPowerActionNotify(int a1, __int64 a2, int a3)
{
  int v4; // ecx
  int v5; // ecx
  __int64 result; // rax
  signed int v7; // ebx
  int v8; // ebx
  unsigned int v9; // r8d
  int v10; // [rsp+58h] [rbp+20h] BYREF
  int v11; // [rsp+5Ch] [rbp+24h]

  v11 = 0;
  v10 = 2 * a1;
  if ( (a2 & 1) != 0 )
    v10 = (2 * a1) | 1;
  if ( a1 )
  {
    v4 = a1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 5 && (unsigned int)(a3 - 2) <= 2 )
          PfpLogScenarioEvent(1, 2, 1, dword_14043D194, 0);
LABEL_7:
        v11 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        return PfLogEvent(
                 28,
                 dword_14043D15C
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                               + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
                 &v10,
                 8u);
      }
      PfpPowerActionStartScenarioTracing((__int64)&qword_14043D160, a2);
      if ( dword_14043D190 == 5 )
        PfSnBeginBootPhase(4LL);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_14043D160);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_14043D160);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_14043D160);
      result = PfpStartLoggingHardFaultEvents();
      if ( (int)result >= 0 )
        goto LABEL_7;
    }
    else
    {
      result = (unsigned int)(a3 - 2);
      if ( (unsigned int)result <= 3 )
      {
        MmPerformMemoryListCommand(1LL);
        v7 = PfTSetTraceWorkerPriority(0x10u);
        PfGenerateTrace(&Thread, 1LL);
        if ( v7 <= 31 )
          PfTSetTraceWorkerPriority(v7);
        v8 = 5;
        if ( a3 == 5 )
        {
          v9 = HIDWORD(qword_14043CF94);
          if ( dword_14043D190 == 5 )
            v9 = dword_14043CF9C;
          else
            v8 = 2;
        }
        else
        {
          v9 = qword_14043CF94;
          v8 = 1;
        }
        v11 = PfpScenCtxPrefetchWait((ULONG_PTR)&qword_14043D160, v8, v9);
        PfpServiceMainThreadUnboost(0LL);
        return PfLogEvent(
                 28,
                 dword_14043D15C
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                               + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
                 &v10,
                 8u);
      }
    }
  }
  else
  {
    result = (unsigned int)(a3 - 2);
    if ( (unsigned int)result <= 2 || a3 == 5 )
      return PfpScenCtxScenarioSet((ULONG_PTR)&qword_14043D160);
  }
  return result;
}
