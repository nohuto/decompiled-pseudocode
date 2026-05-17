/*
 * XREFs of RtlUserThreadStart @ 0x18005A8A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18005A8F0 (RtlExitUserThread.c)
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A0600 (NtQueryInformationProcess.c)
 *     ZwTerminateProcess @ 0x1800A0860 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800FD160 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall RtlUserThreadStart(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  unsigned int v3; // eax

  if ( !Kernel32ThreadInitThunkFunction )
  {
    v3 = a1(a2);
    RtlExitUserThread(v3);
  }
  return Kernel32ThreadInitThunkFunction(0LL, a1, a2, a1);
}
