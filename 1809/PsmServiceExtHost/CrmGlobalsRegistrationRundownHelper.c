/*
 * XREFs of CrmGlobalsRegistrationRundownHelper @ 0x1800339E8
 * Callers:
 *     CrmGlobalsRundown @ 0x18003226C (CrmGlobalsRundown.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     CrmLogActivityUpdate @ 0x180033CD0 (CrmLogActivityUpdate.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall CrmGlobalsRegistrationRundownHelper(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 *i; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // [rsp+68h] [rbp-59h] BYREF
  __int64 v8; // [rsp+70h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-49h] BYREF
  UUID *v10; // [rsp+98h] [rbp-29h]
  int v11; // [rsp+A0h] [rbp-21h]
  int v12; // [rsp+A4h] [rbp-1Dh]
  __int64 *v13; // [rsp+A8h] [rbp-19h]
  int v14; // [rsp+B0h] [rbp-11h]
  int v15; // [rsp+B4h] [rbp-Dh]
  EVENT_DATA_DESCRIPTOR v16; // [rsp+B8h] [rbp-9h] BYREF
  UUID *v17; // [rsp+D8h] [rbp+17h]
  int v18; // [rsp+E0h] [rbp+1Fh]
  int v19; // [rsp+E4h] [rbp+23h]
  __int64 *v20; // [rsp+E8h] [rbp+27h]
  int v21; // [rsp+F0h] [rbp+2Fh]
  int v22; // [rsp+F4h] [rbp+33h]

  v1 = a1 - 32;
  v2 = MEMORY[0x7FFE0008];
  if ( dword_18009B128 > 5u )
  {
    v5 = *(_QWORD *)(v1 + 16);
    v12 = 0;
    v15 = 0;
    v7 = v5;
    v13 = &v7;
    v10 = &Uuid;
    v11 = 16;
    v14 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008CDE0, 0LL, 0LL, 4u, &pData);
  }
  RtlAcquireSRWLockShared(v1);
  for ( i = *(__int64 **)(v1 + 56); i != (__int64 *)(v1 + 56); i = (__int64 *)*i )
  {
    CrmLogActivityUpdate(
      i[5],
      *((_DWORD *)i + 13),
      *(_QWORD *)(v1 + 16),
      0,
      0,
      0,
      *((_DWORD *)i + 19),
      *((_DWORD *)i + 19),
      i[12],
      v2,
      1);
    i[12] = v2;
  }
  RtlReleaseSRWLockShared(v1);
  if ( dword_18009B128 > 5u )
  {
    v6 = *(_QWORD *)(v1 + 16);
    v19 = 0;
    v22 = 0;
    v8 = v6;
    v20 = &v8;
    v17 = &Uuid;
    v18 = 16;
    v21 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008CE7D, 0LL, 0LL, 4u, &v16);
  }
  return 0LL;
}
