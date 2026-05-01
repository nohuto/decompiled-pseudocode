/*
 * XREFs of CrmRegistrationStart @ 0x18000820C
 * Callers:
 *     CrmSrvRegister @ 0x1800080F8 (CrmSrvRegister.c)
 *     CrmRegistrationStartWithActivity @ 0x180045658 (CrmRegistrationStartWithActivity.c)
 * Callees:
 *     CrmGlobalsRegistrationAdd @ 0x1800082C4 (CrmGlobalsRegistrationAdd.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180049292 (memcpy_0.c)
 */

__int64 __fastcall CrmRegistrationStart(__int64 a1, void *a2, int a3)
{
  signed __int64 v5; // rax
  ULONG v6; // eax
  const struct _TlgProvider_t *v8; // rcx
  __int64 v9; // rax
  int v10; // [rsp+30h] [rbp-19h] BYREF
  __int64 v11; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  UUID *v13; // [rsp+60h] [rbp+17h]
  int v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+6Ch] [rbp+23h]
  __int64 *v16; // [rsp+70h] [rbp+27h]
  int v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+7Ch] [rbp+33h]
  int *v19; // [rsp+80h] [rbp+37h]
  int v20; // [rsp+88h] [rbp+3Fh]
  int v21; // [rsp+8Ch] [rbp+43h]

  v5 = _InterlockedIncrement64(&qword_1800ABF18);
  *(_DWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 16) = v5;
  if ( a2 )
  {
    v6 = RtlLengthSid(a2);
    memcpy_0((void *)(a1 + 72), a2, v6);
  }
  CrmGlobalsRegistrationAdd(a1);
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 2uLL) )
  {
    v9 = *(_QWORD *)(a1 + 16);
    v10 = 0;
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v11 = v9;
    v13 = &Uuid;
    v16 = &v11;
    v19 = &v10;
    v14 = 16;
    v17 = 8;
    v20 = 4;
    TlgWrite(v8, &unk_18009AD49, 0LL, 0LL, 5u, &pData);
  }
  return 0LL;
}
