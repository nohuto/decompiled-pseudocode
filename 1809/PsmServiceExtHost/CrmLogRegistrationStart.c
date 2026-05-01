/*
 * XREFs of CrmLogRegistrationStart @ 0x18003BBB8
 * Callers:
 *     CrmRegistrationStart @ 0x18003BB4C (CrmRegistrationStart.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CrmLogRegistrationStart(__int64 a1)
{
  TLG_STATUS result; // eax
  int v2; // [rsp+30h] [rbp-19h] BYREF
  __int64 v3; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  UUID *v5; // [rsp+60h] [rbp+17h]
  __int64 v6; // [rsp+68h] [rbp+1Fh]
  __int64 *v7; // [rsp+70h] [rbp+27h]
  __int64 v8; // [rsp+78h] [rbp+2Fh]
  int *v9; // [rsp+80h] [rbp+37h]
  __int64 v10; // [rsp+88h] [rbp+3Fh]

  if ( dword_18009B128 > 5u )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v5 = &Uuid;
    v7 = &v3;
    v9 = &v2;
    v2 = 0;
    v6 = 16LL;
    v8 = 8LL;
    v10 = 4LL;
    return TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008CEBE, 0LL, 0LL, 5u, &pData);
  }
  return result;
}
