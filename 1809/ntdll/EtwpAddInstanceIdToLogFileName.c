/*
 * XREFs of EtwpAddInstanceIdToLogFileName @ 0x1800521A0
 * Callers:
 *     EtwpInitLoggerContext @ 0x180051D88 (EtwpInitLoggerContext.c)
 *     EtwpFlushUmLogger @ 0x18010F3E0 (EtwpFlushUmLogger.c)
 *     EtwpUpdateUmLogger @ 0x18010F7A8 (EtwpUpdateUmLogger.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x1800427A0 (RtlCreateUnicodeString.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     StringCchCopyW @ 0x1800DF380 (StringCchCopyW.c)
 *     StringCchPrintfW @ 0x1800DF408 (StringCchPrintfW.c)
 */

__int64 __fastcall EtwpAddInstanceIdToLogFileName(__int64 a1, int a2, _UNICODE_STRING *a3)
{
  const wchar_t *v6; // r8
  int UniqueProcess; // ecx
  wchar_t *v8; // rdx
  __int64 result; // rax
  wchar_t pszDest[1024]; // [rsp+30h] [rbp-818h] BYREF

  RtlInitUnicodeString(a3, 0LL);
  v6 = *(const wchar_t **)(a1 + 136);
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  *(_DWORD *)(a1 + 100) = UniqueProcess;
  if ( a2 == 1 )
  {
    v8 = (wchar_t *)v6;
  }
  else
  {
    if ( *(_WORD *)(a1 + 130) > 0x800u )
      LODWORD(result) = StringCchCopyW(pszDest, 0x400uLL, v6);
    else
      LODWORD(result) = StringCchPrintfW(pszDest, 0x400uLL, L"%s_%d", v6, UniqueProcess);
    if ( (int)result < 0 )
      return (unsigned __int16)result;
    v8 = pszDest;
  }
  if ( RtlCreateUnicodeString(a3, v8) )
    return 0LL;
  else
    return 8LL;
}
