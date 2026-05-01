/*
 * XREFs of CrmStateMonitorListenerAdd @ 0x180004968
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180003980 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorStart @ 0x180003A80 (CrmStateMonitorStart.c)
 *     CrmActivityStart @ 0x180032860 (CrmActivityStart.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN __fastcall CrmStateMonitorListenerAdd(unsigned int *a1, __int64 a2, int a3)
{
  unsigned int **v6; // rcx
  unsigned int *v7; // rax
  BOOLEAN result; // al
  const struct _TlgProvider_t *v9; // rcx
  int v10; // eax
  int v11; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  UUID *v13; // [rsp+60h] [rbp-48h]
  int v14; // [rsp+68h] [rbp-40h]
  int v15; // [rsp+6Ch] [rbp-3Ch]
  int *v16; // [rsp+70h] [rbp-38h]
  int v17; // [rsp+78h] [rbp-30h]
  int v18; // [rsp+7Ch] [rbp-2Ch]

  RtlAcquireSRWLockExclusive(a1 + 2);
  a1[4] = GetCurrentThreadId();
  v6 = (unsigned int **)*((_QWORD *)a1 + 4);
  v7 = (unsigned int *)(a2 + 8);
  if ( *v6 != a1 + 6 )
    __fastfail(3u);
  *(_QWORD *)v7 = a1 + 6;
  *(_QWORD *)(a2 + 16) = v6;
  *v6 = v7;
  *((_QWORD *)a1 + 4) = v7;
  if ( a3 == 1 )
  {
    LODWORD(qword_1800ABE08) = 0;
    RtlReleaseSRWLockExclusive(CrmGlobals);
  }
  else if ( a3 == 2 )
  {
    RtlReleaseSRWLockShared(CrmGlobals);
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))a2)(a2, *a1, *((_QWORD *)a1 + 5));
  a1[4] = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 2);
  if ( dword_1800AB2F8 > 5u )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 8uLL);
    if ( result )
    {
      v10 = *a1;
      v15 = 0;
      v18 = 0;
      v11 = v10;
      v13 = &Uuid;
      v16 = &v11;
      v14 = 16;
      v17 = 4;
      return TlgWrite(v9, &unk_18009B355, 0LL, 0LL, 4u, &pData);
    }
  }
  return result;
}
