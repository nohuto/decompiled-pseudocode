/*
 * XREFs of RtlpPossibleDeadlock @ 0x1800E9A20
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18005EA34 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x18006DCC0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006DE00 (RtlAcquireResourceExclusive.c)
 * Callees:
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A0620 (NtQueryInformationProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlCaptureContext @ 0x1800A4330 (RtlCaptureContext.c)
 *     RtlReportException @ 0x1800DDD10 (RtlReportException.c)
 */

void __fastcall RtlpPossibleDeadlock(unsigned __int64 a1)
{
  PVOID v2; // rbx
  unsigned int v3; // edx
  int v4; // eax
  __int64 v5; // rbx
  LONG (__cdecl *v6)(PEXCEPTION_POINTERS); // rcx
  signed __int32 v7; // ecx
  int v8; // eax
  int ProcessInformation; // [rsp+30h] [rbp-598h] BYREF
  LONG (__cdecl *v10)(PEXCEPTION_POINTERS); // [rsp+38h] [rbp-590h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-588h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+E0h] [rbp-4E8h] BYREF

  v2 = RtlpUnhandledExceptionFilter;
  v3 = `RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v3 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  v5 = __ROR8__(v2, 64 - (v3 & 0x3F));
  v6 = (LONG (__cdecl *)(PEXCEPTION_POINTERS))(v5 ^ v3);
  if ( v3 == v5 )
    v6 = RtlUnhandledExceptionFilter;
  v10 = v6;
  ExceptionRecord.ExceptionCode = -1073741420;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = a1;
  v7 = _InterlockedIncrement(&PossibleDeadlockReportCounter);
  if ( PossibleDeadlockReportThreshold && v7 == PossibleDeadlockReportThreshold )
  {
    v8 = 0;
    if ( ((5 * PossibleDeadlockReportThreshold) & 0x40000000) == 0 )
      v8 = 10 * PossibleDeadlockReportThreshold;
    PossibleDeadlockReportThreshold = v8;
    RtlCaptureContext(&ContextRecord);
    RtlReportException(&ExceptionRecord, &ContextRecord, 0xFu);
  }
  if ( RtlpRaiseExceptionOnPossibleDeadlock )
    RtlRaiseException(&ExceptionRecord);
}
