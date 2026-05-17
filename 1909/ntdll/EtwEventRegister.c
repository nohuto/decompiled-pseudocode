/*
 * XREFs of EtwEventRegister @ 0x18000A640
 * Callers:
 *     TraceLoggingRegisterEx @ 0x180007DE8 (TraceLoggingRegisterEx.c)
 *     RtlInitializeHeapLogging @ 0x1800098D0 (RtlInitializeHeapLogging.c)
 *     SbSelectProcedure @ 0x18002CE20 (SbSelectProcedure.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x18007D44C (LdrpLogDeprecatedDllEtwEvent.c)
 *     SbObtainTraceHandle @ 0x18007DE0C (SbObtainTraceHandle.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CC250 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CC2D8 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CFCA0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     EtwNotificationRegister @ 0x18000A800 (EtwNotificationRegister.c)
 *     RtlSetLastWin32Error @ 0x180053C30 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall EtwEventRegister(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( !a2 && a3 )
    return 87LL;
  v4 = EtwNotificationRegister(a1, 3, a2, a3, a4);
  v5 = v4;
  if ( v4 )
    RtlSetLastWin32Error(v4);
  return v5;
}
