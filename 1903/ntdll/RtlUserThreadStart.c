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

__int64 __fastcall RtlUserThreadStart(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  unsigned int v3; // eax

  if ( !qword_180164EF0 )
  {
    v3 = a1(a2);
    RtlExitUserThread(v3);
  }
  return qword_180164EF0(0LL, a1, a2, a1);
}
