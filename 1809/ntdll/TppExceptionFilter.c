/*
 * XREFs of TppExceptionFilter @ 0x1801107C4
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x1801112D0 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180111354 (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A0600 (NtQueryInformationProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800FD160 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall TppExceptionFilter(const void **a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  __int64 (__fastcall *v6)(const void **); // rbx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  v4 = RtlpUnhandledExceptionFilter;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v5 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &v8, 4u, 0LL);
    if ( v5 < 0 )
      RtlRaiseStatus(v5);
    v2 = v8;
    `RtlpGetCookieValue'::`2'::CookieValue = v8;
  }
  v6 = (__int64 (__fastcall *)(const void **))(v2 ^ __ROR8__(v4, 64 - (v2 & 0x3F)));
  if ( v6 )
    return v6(a1);
  else
    return RtlUnhandledExceptionFilter2(a1);
}
