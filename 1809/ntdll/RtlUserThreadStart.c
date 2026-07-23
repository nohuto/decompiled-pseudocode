/*
 * XREFs of RtlUserThreadStart @ 0x18005A8A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18005A8F0 (RtlExitUserThread.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A0620 (NtQueryInformationProcess.c)
 *     ZwTerminateProcess @ 0x1800A0880 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800FD160 (RtlUnhandledExceptionFilter2.c)
 */

void __cdecl RtlUserThreadStart(PTHREAD_START_ROUTINE Function, PVOID Parameter)
{
  NTSTATUS v2; // eax

  if ( !Kernel32ThreadInitThunkFunction )
  {
    v2 = ((__int64 (__fastcall *)(PVOID))Function)(Parameter);
    RtlExitUserThread(v2);
  }
  ((void (__fastcall *)(_QWORD, PTHREAD_START_ROUTINE, PVOID, PTHREAD_START_ROUTINE))Kernel32ThreadInitThunkFunction)(
    0LL,
    Function,
    Parameter,
    Function);
}
