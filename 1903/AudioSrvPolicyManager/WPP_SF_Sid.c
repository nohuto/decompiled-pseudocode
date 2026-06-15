/*
 * XREFs of WPP_SF_Sid @ 0x180027FBC
 * Callers:
 *     ?Invoke@CAppClosedWorkItem@@UEAAXXZ @ 0x180029350 (-Invoke@CAppClosedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_Sid(TRACEHANDLE LoggerHandle, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  const wchar_t *v7; // rax
  __int64 v9; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v9 = va_arg(va1, _QWORD);
  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10LL;
  }
  v7 = L"NULL";
  if ( a4 )
    v7 = a4;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids,
           0x22u,
           v7,
           v6,
           va,
           8LL,
           va1,
           4LL,
           0LL);
}
