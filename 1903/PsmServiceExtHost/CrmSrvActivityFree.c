/*
 * XREFs of CrmSrvActivityFree @ 0x180031EE0
 * Callers:
 *     CrmRpcSrvActivityFree @ 0x180031420 (CrmRpcSrvActivityFree.c)
 * Callees:
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     CrmActivityDereference @ 0x180032030 (CrmActivityDereference.c)
 *     CrmRegistrationFindActivity @ 0x18003231C (CrmRegistrationFindActivity.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CrmSrvActivityFree(__int64 a1, __int64 a2)
{
  int v4; // r14d
  const struct _TlgProvider_t *v5; // rcx
  UUID *v6; // r9
  __int64 Activity; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  BOOLEAN result; // al
  int v13; // esi
  __int64 v14; // rax
  int v15; // eax
  int v16; // r8d
  int v17; // [rsp+30h] [rbp-79h] BYREF
  int v18; // [rsp+34h] [rbp-75h] BYREF
  __int64 v19; // [rsp+38h] [rbp-71h] BYREF
  __int64 v20; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  UUID *v22; // [rsp+70h] [rbp-39h]
  int v23; // [rsp+78h] [rbp-31h]
  int v24; // [rsp+7Ch] [rbp-2Dh]
  __int64 *v25; // [rsp+80h] [rbp-29h]
  int v26; // [rsp+88h] [rbp-21h]
  int v27; // [rsp+8Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-19h] BYREF
  int *v29; // [rsp+A0h] [rbp-9h]
  int v30; // [rsp+A8h] [rbp-1h]
  int v31; // [rsp+ACh] [rbp+3h]
  __int64 *v32; // [rsp+B0h] [rbp+7h]
  int v33; // [rsp+B8h] [rbp+Fh]
  int v34; // [rsp+BCh] [rbp+13h]
  __int64 *v35; // [rsp+C0h] [rbp+17h]
  int v36; // [rsp+C8h] [rbp+1Fh]
  int v37; // [rsp+CCh] [rbp+23h]

  v4 = 701;
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL) )
  {
    v24 = 0;
    v22 = v6;
    v23 = 16;
    TlgWrite(v5, &unk_18009A665, 0LL, 0LL, 3u, &pData);
  }
  RtlAcquireSRWLockExclusive(a2);
  *(_DWORD *)(a2 + 8) = GetCurrentThreadId();
  Activity = CrmRegistrationFindActivity(a2, a1);
  v8 = Activity;
  if ( Activity )
  {
    v4 = *(_DWORD *)(Activity + 56);
    v9 = *(_QWORD *)Activity;
    if ( *(_QWORD *)(v9 + 8) != v8 || (v10 = *(_QWORD **)(v8 + 8), *v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)(v8 + 8) = v8;
    *(_QWORD *)v8 = v8;
    if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 2uLL) )
    {
      v14 = *(_QWORD *)(a2 + 16);
      v24 = 0;
      v27 = 0;
      pDesc.Reserved = 0;
      v19 = v14;
      v17 = *(_DWORD *)(v8 + 60);
      v22 = &Uuid;
      v25 = &v19;
      pDesc.Ptr = (ULONGLONG)&v17;
      v23 = 16;
      v26 = 8;
      pDesc.Size = 4;
      TlgWrite(v11, &unk_18009AD91, 0LL, 0LL, 5u, &pData);
    }
    CrmActivityDereference(v8);
    *(_DWORD *)(a2 + 8) = 0;
    result = RtlReleaseSRWLockExclusive(a2);
    v13 = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = 0;
    v13 = -1073741811;
    result = RtlReleaseSRWLockExclusive(a2);
  }
  if ( v8 )
    result = CrmActivityDereference(v8);
  if ( dword_1800AB2F8 > 5u )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL);
    if ( result )
    {
      v15 = *(_DWORD *)(a2 + 24);
      v24 = 0;
      v27 = 0;
      v17 = v15;
      v22 = &Uuid;
      v25 = (__int64 *)&v17;
      v18 = v4;
      v20 = a1;
      LODWORD(v19) = v13;
      v23 = 16;
      v26 = 4;
      TlgCreateSid(&pDesc, (const SID *)(a2 + 72));
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v32 = &v20;
      v29 = &v18;
      v35 = &v19;
      v30 = v16;
      v33 = v16 + 4;
      v36 = v16;
      return TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009A81B, 0LL, 0LL, v16 + 4, &pData);
    }
  }
  return result;
}
