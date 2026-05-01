/*
 * XREFs of CrmGlobalsRegistrationRundownHelper @ 0x18003C9C8
 * Callers:
 *     CrmGlobalsRundown @ 0x180003E5C (CrmGlobalsRundown.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     CrmLogActivityUpdate @ 0x180032E90 (CrmLogActivityUpdate.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall CrmGlobalsRegistrationRundownHelper(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 *i; // rdi
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+50h] [rbp-59h] BYREF
  __int64 v9; // [rsp+58h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  __int64 v11; // [rsp+80h] [rbp-29h]
  int v12; // [rsp+88h] [rbp-21h]
  int v13; // [rsp+8Ch] [rbp-1Dh]
  __int64 *v14; // [rsp+90h] [rbp-19h]
  int v15; // [rsp+98h] [rbp-11h]
  int v16; // [rsp+9Ch] [rbp-Dh]
  EVENT_DATA_DESCRIPTOR v17; // [rsp+A0h] [rbp-9h] BYREF
  UUID *v18; // [rsp+C0h] [rbp+17h]
  int v19; // [rsp+C8h] [rbp+1Fh]
  int v20; // [rsp+CCh] [rbp+23h]
  __int64 *v21; // [rsp+D0h] [rbp+27h]
  int v22; // [rsp+D8h] [rbp+2Fh]
  int v23; // [rsp+DCh] [rbp+33h]

  v1 = a1 - 32;
  v2 = MEMORY[0x7FFE0008];
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 2uLL) )
  {
    v6 = *(_QWORD *)(v1 + 16);
    v13 = 0;
    v16 = 0;
    v8 = v6;
    v14 = &v8;
    v11 = v5;
    v12 = 16;
    v15 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009AC5B, 0LL, 0LL, 4u, &pData);
  }
  RtlAcquireSRWLockShared(v1);
  for ( i = *(__int64 **)(v1 + 56); i != (__int64 *)(v1 + 56); i = (__int64 *)*i )
  {
    CrmLogActivityUpdate(
      i[6],
      *((_DWORD *)i + 15),
      *(_QWORD *)(v1 + 16),
      0,
      0,
      0,
      *((_DWORD *)i + 23),
      *((_DWORD *)i + 23),
      i[14],
      v2);
    i[14] = v2;
  }
  RtlReleaseSRWLockShared(v1);
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 2uLL) )
  {
    v7 = *(_QWORD *)(v1 + 16);
    v20 = 0;
    v23 = 0;
    v9 = v7;
    v18 = &Uuid;
    v21 = &v9;
    v19 = 16;
    v22 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009AD08, 0LL, 0LL, 4u, &v17);
  }
  return 0LL;
}
