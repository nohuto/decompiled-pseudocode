/*
 * XREFs of CrmRegistrationRemoveActivity @ 0x1800068DC
 * Callers:
 *     CrmSrvActivityFree @ 0x1800066F8 (CrmSrvActivityFree.c)
 *     CrmRegistrationCleanup @ 0x18007064C (CrmRegistrationCleanup.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

int __fastcall CrmRegistrationRemoveActivity(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v6; // rax
  __int64 **v7; // rcx
  __int64 v8; // rax
  int v10; // [rsp+30h] [rbp-29h] BYREF
  __int64 v11; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  UUID *v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  __int64 *v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]
  int *v19; // [rsp+80h] [rbp+27h]
  int v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+8Ch] [rbp+33h]

  if ( !a3 )
  {
    RtlAcquireSRWLockExclusive(a1);
    *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  }
  v6 = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2 || (v7 = (__int64 **)a2[1], *v7 != a2) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (__int64)v7;
  if ( !a3 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    LODWORD(v6) = RtlReleaseSRWLockExclusive(a1);
  }
  a2[1] = (__int64)a2;
  *a2 = (__int64)a2;
  if ( dword_18009B128 > 5u )
  {
    v8 = *(_QWORD *)(a1 + 16);
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v11 = v8;
    v10 = *((_DWORD *)a2 + 13);
    v13 = &Uuid;
    v16 = &v11;
    v19 = &v10;
    v14 = 16;
    v17 = 8;
    v20 = 4;
    LODWORD(v6) = TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008CFAE, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
