/*
 * XREFs of CrmLogRegistrationAddActivity @ 0x1800330F0
 * Callers:
 *     CrmRegistrationAddActivity @ 0x18003307C (CrmRegistrationAddActivity.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CrmLogRegistrationAddActivity(__int64 a1, int a2)
{
  TLG_STATUS result; // eax
  int v3; // [rsp+30h] [rbp-19h] BYREF
  __int64 v4; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  UUID *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  __int64 *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  int *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  if ( dword_18009B128 > 5u )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v6 = &Uuid;
    v8 = &v4;
    v10 = &v3;
    v3 = a2;
    v7 = 16LL;
    v9 = 8LL;
    v11 = 4LL;
    return TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008D162, 0LL, 0LL, 5u, &pData);
  }
  return result;
}
