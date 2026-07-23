/*
 * XREFs of RtlSetUnhandledExceptionFilter @ 0x1800833D0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A0620 (NtQueryInformationProcess.c)
 */

void __cdecl RtlSetUnhandledExceptionFilter(PRTLP_UNHANDLED_EXCEPTION_FILTER UnhandledExceptionFilter)
{
  __int64 v1; // rdx
  int v3; // eax
  unsigned int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v1 = (unsigned int)`RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v3 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
    if ( v3 < 0 )
      RtlRaiseStatus(v3);
    v1 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  RtlpUnhandledExceptionFilter = (PVOID)__ROR8__((unsigned __int64)UnhandledExceptionFilter ^ v1, v1 & 0x3F);
}
