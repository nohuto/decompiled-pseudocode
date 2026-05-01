/*
 * XREFs of CrmLogRegistrationNotifyWindowClosedReasonChange @ 0x180034224
 * Callers:
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x180034128 (CrmRegistrationNotifyWindowClosedReasonChange.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall CrmLogRegistrationNotifyWindowClosedReasonChange(__int64 a1, __int64 a2, int *a3, int a4)
{
  int v4; // eax
  int v5; // [rsp+30h] [rbp-69h] BYREF
  int v6; // [rsp+34h] [rbp-65h] BYREF
  int v7; // [rsp+38h] [rbp-61h] BYREF
  int v8; // [rsp+3Ch] [rbp-5Dh] BYREF
  __int64 v9; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  UUID *v11; // [rsp+70h] [rbp-29h]
  __int64 v12; // [rsp+78h] [rbp-21h]
  int *v13; // [rsp+80h] [rbp-19h]
  __int64 v14; // [rsp+88h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-9h] BYREF
  int *v16; // [rsp+A0h] [rbp+7h]
  __int64 v17; // [rsp+A8h] [rbp+Fh]
  __int64 *v18; // [rsp+B0h] [rbp+17h]
  __int64 v19; // [rsp+B8h] [rbp+1Fh]
  int *v20; // [rsp+C0h] [rbp+27h]
  __int64 v21; // [rsp+C8h] [rbp+2Fh]
  int *v22; // [rsp+D0h] [rbp+37h]
  __int64 v23; // [rsp+D8h] [rbp+3Fh]

  if ( dword_18009B128 > 5u )
  {
    v5 = *(_DWORD *)(a1 + 24);
    v6 = *(_DWORD *)(a2 + 48);
    v9 = *(_QWORD *)(a2 + 40);
    if ( a3 )
      v4 = *a3;
    else
      v4 = 0;
    v7 = v4;
    v8 = a4;
    v11 = &Uuid;
    v12 = 16LL;
    v13 = &v5;
    v14 = 4LL;
    TlgCreateSid(&pDesc, (const SID *)(a1 + 72));
    v17 = 4LL;
    v18 = &v9;
    v16 = &v6;
    v20 = &v7;
    v22 = &v8;
    v19 = 8LL;
    v21 = 4LL;
    v23 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008D03E, 0LL, 0LL, 9u, &pData);
  }
}
