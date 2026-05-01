/*
 * XREFs of CrmRegistrationAddActivity @ 0x1800327AC
 * Callers:
 *     CrmRegistrationCreateActivity @ 0x1800326EC (CrmRegistrationCreateActivity.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CrmRegistrationAddActivity(__int64 a1, __int64 a2)
{
  int v2; // esi
  _QWORD *v5; // rcx
  BOOLEAN result; // al
  const struct _TlgProvider_t *v7; // rcx
  int v8; // [rsp+30h] [rbp-29h] BYREF
  __int64 v9; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  UUID *v11; // [rsp+60h] [rbp+7h]
  __int64 v12; // [rsp+68h] [rbp+Fh]
  __int64 *v13; // [rsp+70h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  int *v15; // [rsp+80h] [rbp+27h]
  __int64 v16; // [rsp+88h] [rbp+2Fh]

  v2 = *(_DWORD *)(a2 + 60);
  RtlAcquireSRWLockExclusive(a1);
  *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  v5 = *(_QWORD **)(a1 + 64);
  if ( *v5 != a1 + 56 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 8) = v5;
  *(_QWORD *)a2 = a1 + 56;
  *v5 = a2;
  *(_QWORD *)(a1 + 64) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  result = RtlReleaseSRWLockExclusive(a1);
  if ( dword_1800AB2F8 > 5u )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 2uLL);
    if ( result )
    {
      v9 = *(_QWORD *)(a1 + 16);
      v11 = &Uuid;
      v13 = &v9;
      v15 = &v8;
      v8 = v2;
      v12 = 16LL;
      v14 = 8LL;
      v16 = 4LL;
      return TlgWrite(v7, &unk_18009AF08, 0LL, 0LL, 5u, &pData);
    }
  }
  return result;
}
