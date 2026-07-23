/*
 * XREFs of RtlUserThreadStart @ 0x18006D4B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18006D500 (RtlExitUserThread.c)
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800FA340 (RtlUnhandledExceptionFilter2.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

void __cdecl RtlUserThreadStart(PTHREAD_START_ROUTINE Function, PVOID Parameter)
{
  NTSTATUS v2; // eax

  if ( !qword_180164EF0 )
  {
    v2 = ((__int64 (__fastcall *)(PVOID))Function)(Parameter);
    RtlExitUserThread(v2);
  }
  ((void (__fastcall *)(_QWORD, PTHREAD_START_ROUTINE, PVOID, PTHREAD_START_ROUTINE))qword_180164EF0)(
    0LL,
    Function,
    Parameter,
    Function);
}
