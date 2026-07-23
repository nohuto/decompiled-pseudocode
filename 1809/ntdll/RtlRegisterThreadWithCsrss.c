/*
 * XREFs of RtlRegisterThreadWithCsrss @ 0x180081390
 * Callers:
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS RtlRegisterThreadWithCsrss(void)
{
  NTSTATUS v0; // ecx
  _CLIENT_ID ClientId; // xmm0
  _QWORD v3[6]; // [rsp+20h] [rbp-1C8h] BYREF
  int v4; // [rsp+50h] [rbp-198h]
  __int64 v5; // [rsp+60h] [rbp-188h]
  _CLIENT_ID v6; // [rsp+68h] [rbp-180h]

  v0 = 0;
  if ( CsrClientProcess || !CsrInitOnceDone || !CsrServerApiRoutine )
    return v0;
  if ( !LdrpIsSecureProcess )
  {
    v5 = 0LL;
    ClientId = NtCurrentTeb()->ClientId;
    v3[5] = 0LL;
    v6 = ClientId;
    v3[0] = 5767216LL;
    v4 = 65561;
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD *))CsrServerApiRoutine)(v3, v3);
  }
  return -1073741637;
}
