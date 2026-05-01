/*
 * XREFs of CrmRegistrationNotify @ 0x180031310
 * Callers:
 *     CrmRegistrationReadyQueueAdd @ 0x180031220 (CrmRegistrationReadyQueueAdd.c)
 *     CrmRegistrationReadyQueueRemove @ 0x180031718 (CrmRegistrationReadyQueueRemove.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall CrmRegistrationNotify(__int64 a1, __int64 a2, int a3)
{
  int v5; // eax
  int v6; // edi
  char v7; // r9
  char v8; // [rsp+30h] [rbp-69h] BYREF
  int v9; // [rsp+38h] [rbp-61h] BYREF
  int v10; // [rsp+40h] [rbp-59h] BYREF
  __int64 v11; // [rsp+48h] [rbp-51h] BYREF
  __int64 v12; // [rsp+50h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-39h] BYREF
  UUID *v14; // [rsp+80h] [rbp-19h]
  __int64 v15; // [rsp+88h] [rbp-11h]
  __int64 *v16; // [rsp+90h] [rbp-9h]
  __int64 v17; // [rsp+98h] [rbp-1h]
  char *v18; // [rsp+A0h] [rbp+7h]
  __int64 v19; // [rsp+A8h] [rbp+Fh]
  int *v20; // [rsp+B0h] [rbp+17h]
  __int64 v21; // [rsp+B8h] [rbp+1Fh]
  __int64 *v22; // [rsp+C0h] [rbp+27h]
  __int64 v23; // [rsp+C8h] [rbp+2Fh]

  v9 = a3;
  if ( !*(_DWORD *)(a2 + 120) && !*(_DWORD *)(a2 + 124) )
  {
    v6 = 0;
LABEL_3:
    if ( dword_1800AB2F8 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 2uLL) )
      {
        v11 = *(_QWORD *)(a1 + 16);
        v14 = &Uuid;
        v16 = &v11;
        v18 = &v8;
        v20 = &v10;
        v8 = v7;
        v10 = v6;
        v15 = 16LL;
        v17 = 8LL;
        v19 = 1LL;
        v21 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009ADE3, 0LL, 0LL, 6u, &pData);
      }
    }
    return;
  }
  RtlAcquireSRWLockExclusive(a1);
  *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  v5 = RtlPublishWnfStateData(*(_QWORD *)(a2 + 120), 0LL, &v9, 4LL, 0LL);
  *(_DWORD *)(a1 + 8) = 0;
  v6 = v5;
  RtlReleaseSRWLockExclusive(a1);
  if ( v6 >= 0 )
    goto LABEL_3;
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 0x400000000002uLL) )
  {
    v12 = *(_QWORD *)(a1 + 16);
    v8 = v9;
    v14 = &Uuid;
    v16 = &v12;
    v18 = &v8;
    v20 = &v10;
    v22 = &v11;
    v10 = v6;
    v11 = 0x2000000LL;
    v15 = 16LL;
    v17 = 8LL;
    v19 = 1LL;
    v21 = 4LL;
    v23 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009AC9C, 0LL, 0LL, 7u, &pData);
  }
}
