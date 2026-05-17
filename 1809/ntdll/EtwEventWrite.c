/*
 * XREFs of EtwEventWrite @ 0x18004DC20
 * Callers:
 *     SbSelectProcedure @ 0x180027CD0 (SbSelectProcedure.c)
 *     RtlSetLastWin32Error @ 0x18004ED60 (RtlSetLastWin32Error.c)
 *     EtwEventWriteEndScenario @ 0x180068760 (EtwEventWriteEndScenario.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800715FC (LdrpLogDeprecatedDllEtwEvent.c)
 *     EtwEventWriteStartScenario @ 0x18008F130 (EtwEventWriteStartScenario.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CD9E0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CDA68 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D14D0 (LdrpLogFatalUserCallbackException.c)
 *     RtlpHpStackDbLogStackDbEnd @ 0x180104398 (RtlpHpStackDbLogStackDbEnd.c)
 *     RtlpHpStackDbLogStackDbSnapshot @ 0x180104410 (RtlpHpStackDbLogStackDbSnapshot.c)
 *     SbpTraceContextUpdate @ 0x1801116A8 (SbpTraceContextUpdate.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18004DCF4 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwEventWrite(int a1, int a2, int a3, __int64 a4)
{
  return EtwpEventWriteFull(a1, a2, 0, 0, 0, 0LL, 0LL, a3, a4);
}
