/*
 * XREFs of PfPowerActionNotify @ 0x140596AF4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopUmpoProcessPowerMessage @ 0x14069DBA8 (PopUmpoProcessPowerMessage.c)
 *     PopUmpoSendLegacyEvent @ 0x1407271BC (PopUmpoSendLegacyEvent.c)
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 *     PopDispatchSuperfetchNotification @ 0x140728294 (PopDispatchSuperfetchNotification.c)
 *     PfpProcessScenarioPhase @ 0x140746420 (PfpProcessScenarioPhase.c)
 * Callees:
 *     PfLogEvent @ 0x1400D29C8 (PfLogEvent.c)
 *     PfpServiceMainThreadUnboost @ 0x14015EDB0 (PfpServiceMainThreadUnboost.c)
 *     PfTSetTraceWorkerPriority @ 0x14017F684 (PfTSetTraceWorkerPriority.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140596560 (PfpPowerActionStartScenarioTracing.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140596628 (PfpStartLoggingHardFaultEvents.c)
 *     PfpScenCtxPrefetchWait @ 0x1405966FC (PfpScenCtxPrefetchWait.c)
 *     MmPerformMemoryListCommand @ 0x14059E418 (MmPerformMemoryListCommand.c)
 *     PfpScenCtxScenarioSet @ 0x14059E460 (PfpScenCtxScenarioSet.c)
 *     PfSnBeginBootPhase @ 0x14059EB50 (PfSnBeginBootPhase.c)
 *     PfpLogScenarioEvent @ 0x140746518 (PfpLogScenarioEvent.c)
 *     PfGenerateTrace @ 0x140746628 (PfGenerateTrace.c)
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
          PfpLogScenarioEvent(1, 2, 1, dword_140467894, 0);
LABEL_7:
        v11 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        return PfLogEvent(
                 28,
                 dword_14046785C
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                               + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
                 &v10,
                 8u);
      }
      PfpPowerActionStartScenarioTracing((__int64)&qword_140467860, a2);
      if ( dword_140467890 == 5 )
        PfSnBeginBootPhase(4LL);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140467860);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140467860);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140467860);
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
          v9 = HIDWORD(qword_140467694);
          if ( dword_140467890 == 5 )
            v9 = dword_14046769C;
          else
            v8 = 2;
        }
        else
        {
          v9 = qword_140467694;
          v8 = 1;
        }
        v11 = PfpScenCtxPrefetchWait((ULONG_PTR)&qword_140467860, v8, v9);
        PfpServiceMainThreadUnboost(0LL);
        return PfLogEvent(
                 28,
                 dword_14046785C
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
      return PfpScenCtxScenarioSet((ULONG_PTR)&qword_140467860);
  }
  return result;
}
