/*
 * XREFs of LdrpFatalExceptionFilter @ 0x1800D78AC
 * Callers:
 *     LdrGetDllHandleByMapping @ 0x180076EC0 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x18007B6D0 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlReportSilentProcessExit @ 0x18006D060 (RtlReportSilentProcessExit.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A0620 (NtQueryInformationProcess.c)
 *     ZwTerminateProcess @ 0x1800A0880 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800FD160 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall LdrpFatalExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  struct _TEB *v2; // rcx
  NTSTATUS ExceptionCode; // ebp
  unsigned int v4; // eax
  PVOID v5; // rsi
  int v6; // eax
  void (__fastcall *v7)(PEXCEPTION_POINTERS); // rsi
  int ProcessInformation; // [rsp+40h] [rbp+8h] BYREF

  v2 = NtCurrentTeb();
  ExceptionCode = ExceptionPointers->ExceptionRecord->ExceptionCode;
  if ( ExceptionCode == -1073741571 && v2->NtTib.StackLimit > v2->DeallocationStack )
  {
    RtlReportSilentProcessExit((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741571);
  }
  else
  {
    v4 = `RtlpGetCookieValue'::`2'::CookieValue;
    v5 = RtlpUnhandledExceptionFilter;
    if ( !`RtlpGetCookieValue'::`2'::CookieValue )
    {
      v6 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
      if ( v6 < 0 )
        RtlRaiseStatus(v6);
      v4 = ProcessInformation;
      `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
    }
    v7 = (void (__fastcall *)(PEXCEPTION_POINTERS))(v4 ^ __ROR8__(v5, 64 - (v4 & 0x3F)));
    if ( v7 )
      v7(ExceptionPointers);
    else
      RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&Flags);
  }
  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionCode);
  return 0LL;
}
