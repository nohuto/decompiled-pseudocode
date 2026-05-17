/*
 * XREFs of RtlReportException @ 0x1800DDD10
 * Callers:
 *     LdrpCallTlsInitializers @ 0x180025DE4 (LdrpCallTlsInitializers.c)
 *     LdrpInitializeNode @ 0x180028428 (LdrpInitializeNode.c)
 *     LdrpProcessDetachNode @ 0x180055D48 (LdrpProcessDetachNode.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CD7D0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800D1770 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D6804 (LdrpInitializeProcessWrapperFilter.c)
 *     RtlReportExceptionEx @ 0x1800DDDE0 (RtlReportExceptionEx.c)
 *     RtlpPossibleDeadlock @ 0x1800E9A20 (RtlpPossibleDeadlock.c)
 *     RtlReportFatalFailure @ 0x1800FB4C0 (RtlReportFatalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800FD160 (RtlUnhandledExceptionFilter2.c)
 *     TppReportExceptionFilter @ 0x180110988 (TppReportExceptionFilter.c)
 *     TppWorkerpInnerExceptionFilter @ 0x1801112D0 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180111354 (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A0600 (NtQueryInformationProcess.c)
 *     RtlReportExceptionHelper @ 0x1800DE2B0 (RtlReportExceptionHelper.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800DEC28 (WerpBreakIntoDebuggerIfPresent.c)
 */

__int64 __fastcall RtlReportException(__int64 a1, __int64 a2, unsigned int a3)
{
  int v7; // ebx
  unsigned int v8; // ebx
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( (a3 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  ((void (*)(void))WerpBreakIntoDebuggerIfPresent)();
  v7 = 0;
  if ( LdrpIsSecureProcess )
    return 0LL;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)37, ProcessInformation, 0x40u, 0LL) >= 0
    && v10 == 1 )
  {
    v7 = 1;
    v11 = -300000000LL;
  }
  v8 = RtlReportExceptionHelper(a1, a2, a3, (unsigned __int64)&v11 & -(__int64)(v7 != 0));
  WerpBreakIntoDebuggerIfPresent(a1, a2, a3);
  return v8;
}
