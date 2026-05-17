/*
 * XREFs of EtwEventRegister @ 0x180021AD0
 * Callers:
 *     SbSelectProcedure @ 0x180027CD0 (SbSelectProcedure.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800715FC (LdrpLogDeprecatedDllEtwEvent.c)
 *     TraceLoggingRegisterEx @ 0x180075FFC (TraceLoggingRegisterEx.c)
 *     SbObtainTraceHandle @ 0x1800826D0 (SbObtainTraceHandle.c)
 *     RtlInitializeHeapLogging @ 0x180084D28 (RtlInitializeHeapLogging.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CD9E0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CDA68 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D14D0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     EtwNotificationRegister @ 0x180020CB0 (EtwNotificationRegister.c)
 *     RtlSetLastWin32Error @ 0x18004ED60 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall EtwEventRegister(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( !a2 && a3 )
    return 87LL;
  v4 = EtwNotificationRegister(a1, 3u, a2, a3, a4);
  v5 = v4;
  if ( v4 )
    RtlSetLastWin32Error(v4);
  return v5;
}
