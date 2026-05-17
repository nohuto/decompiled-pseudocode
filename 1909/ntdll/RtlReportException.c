/*
 * XREFs of RtlReportException @ 0x1800DB9E0
 * Callers:
 *     LdrpCallTlsInitializers @ 0x18002507C (LdrpCallTlsInitializers.c)
 *     LdrpInitializeNode @ 0x180069AA4 (LdrpInitializeNode.c)
 *     LdrpProcessDetachNode @ 0x18006D950 (LdrpProcessDetachNode.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CC040 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CFF40 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D4690 (LdrpInitializeProcessWrapperFilter.c)
 *     RtlReportExceptionEx @ 0x1800DBAB0 (RtlReportExceptionEx.c)
 *     RtlReportFatalFailure @ 0x1800F9130 (RtlReportFatalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800FA420 (RtlUnhandledExceptionFilter2.c)
 *     TppReportExceptionFilter @ 0x18010F178 (TppReportExceptionFilter.c)
 *     TppWorkerpInnerExceptionFilter @ 0x18010FB24 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18010FBA8 (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x18009D1B0 (NtQueryInformationProcess.c)
 *     RtlReportExceptionHelper @ 0x1800DBF80 (RtlReportExceptionHelper.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800DC8F8 (WerpBreakIntoDebuggerIfPresent.c)
 */

__int64 __fastcall RtlReportException(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  unsigned int v8; // ebx
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v11 = 0LL;
  if ( (a3 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  ((void (*)(void))WerpBreakIntoDebuggerIfPresent)();
  if ( LdrpIsSecureProcess )
    return 0LL;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)37, ProcessInformation, 0x40u, 0LL) >= 0
    && v10 == 1 )
  {
    v3 = 1;
    v11 = -300000000LL;
  }
  v8 = RtlReportExceptionHelper(a1, a2, a3, (unsigned __int64)&v11 & -(__int64)(v3 != 0));
  WerpBreakIntoDebuggerIfPresent(a1, a2, a3);
  return v8;
}
