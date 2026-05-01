/*
 * XREFs of CrmRegistrationRemoveActivity @ 0x18007E1F4
 * Callers:
 *     CrmRegistrationCleanup @ 0x18003CCEC (CrmRegistrationCleanup.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     CrmActivityDereference @ 0x180032030 (CrmActivityDereference.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

char __fastcall CrmRegistrationRemoveActivity(__int64 a1, volatile signed __int64 *a2, int a3)
{
  volatile signed __int64 v6; // rax
  volatile signed __int64 **v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  __int64 v9; // rax
  int v11; // [rsp+30h] [rbp-29h] BYREF
  __int64 v12; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  UUID *v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  __int64 *v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  int *v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]

  if ( !a3 )
  {
    RtlAcquireSRWLockExclusive(a1);
    *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  }
  v6 = *a2;
  if ( *(volatile signed __int64 **)(*a2 + 8) != a2 || (v7 = (volatile signed __int64 **)*((_QWORD *)a2 + 1), *v7 != a2) )
    __fastfail(3u);
  *v7 = (volatile signed __int64 *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  if ( !a3 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    RtlReleaseSRWLockExclusive(a1);
  }
  *((_QWORD *)a2 + 1) = a2;
  *a2 = (volatile signed __int64)a2;
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 2uLL) )
  {
    v9 = *(_QWORD *)(a1 + 16);
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v12 = v9;
    v11 = *((_DWORD *)a2 + 15);
    v14 = &Uuid;
    v17 = &v12;
    v20 = &v11;
    v15 = 16;
    v18 = 8;
    v21 = 4;
    TlgWrite(v8, &unk_18009AD91, 0LL, 0LL, 5u, &pData);
  }
  return CrmActivityDereference(a2);
}
