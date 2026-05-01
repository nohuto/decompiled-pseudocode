/*
 * XREFs of CrmLogSrvActivityWindowClosedReasonSubscribeStop @ 0x180034F78
 * Callers:
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x180034E4C (CrmSrvActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CrmLogSrvActivityWindowClosedReasonSubscribeStop(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  TLG_STATUS result; // eax
  int v5; // [rsp+30h] [rbp-59h] BYREF
  int v6; // [rsp+34h] [rbp-55h] BYREF
  int v7; // [rsp+38h] [rbp-51h] BYREF
  __int64 v8; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  UUID *v10; // [rsp+70h] [rbp-19h]
  __int64 v11; // [rsp+78h] [rbp-11h]
  int *v12; // [rsp+80h] [rbp-9h]
  __int64 v13; // [rsp+88h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+7h] BYREF
  int *v15; // [rsp+A0h] [rbp+17h]
  __int64 v16; // [rsp+A8h] [rbp+1Fh]
  __int64 *v17; // [rsp+B0h] [rbp+27h]
  __int64 v18; // [rsp+B8h] [rbp+2Fh]
  int *v19; // [rsp+C0h] [rbp+37h]
  __int64 v20; // [rsp+C8h] [rbp+3Fh]

  if ( dword_18009B128 > 5u )
  {
    v5 = *(_DWORD *)(a1 + 24);
    v6 = 31;
    v10 = &Uuid;
    v12 = &v5;
    v8 = a3;
    v7 = a4;
    v11 = 16LL;
    v13 = 4LL;
    TlgCreateSid(&pDesc, (const SID *)(a1 + 72));
    v16 = 4LL;
    v15 = &v6;
    v17 = &v8;
    v18 = 8LL;
    v19 = &v7;
    v20 = 4LL;
    return TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008C9E4, 0LL, 0LL, 8u, &pData);
  }
  return result;
}
