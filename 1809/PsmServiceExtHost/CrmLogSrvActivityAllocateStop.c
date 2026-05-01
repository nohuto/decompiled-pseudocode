/*
 * XREFs of CrmLogSrvActivityAllocateStop @ 0x180032D48
 * Callers:
 *     CrmSrvActivityAllocate @ 0x180032E38 (CrmSrvActivityAllocate.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CrmLogSrvActivityAllocateStop(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  LPCWSTR v5; // r9
  TLG_STATUS result; // eax
  int v7; // [rsp+30h] [rbp-71h] BYREF
  int v8; // [rsp+34h] [rbp-6Dh] BYREF
  int v9; // [rsp+38h] [rbp-69h] BYREF
  __int64 v10; // [rsp+40h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-51h] BYREF
  UUID *v12; // [rsp+70h] [rbp-31h]
  __int64 v13; // [rsp+78h] [rbp-29h]
  int *v14; // [rsp+80h] [rbp-21h]
  __int64 v15; // [rsp+88h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-11h] BYREF
  int *v17; // [rsp+A0h] [rbp-1h]
  __int64 v18; // [rsp+A8h] [rbp+7h]
  __int64 *v19; // [rsp+B0h] [rbp+Fh]
  __int64 v20; // [rsp+B8h] [rbp+17h]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+C0h] [rbp+1Fh] BYREF
  int *v22; // [rsp+D0h] [rbp+2Fh]
  __int64 v23; // [rsp+D8h] [rbp+37h]

  if ( dword_18009B128 > 5u )
  {
    v7 = *(_DWORD *)(a1 + 24);
    v9 = a5;
    v12 = &Uuid;
    v8 = a2;
    v14 = &v7;
    v10 = a3;
    v13 = 16LL;
    v15 = 4LL;
    TlgCreateSid(&pDesc, (const SID *)(a1 + 72));
    v18 = 4LL;
    v17 = &v8;
    v19 = &v10;
    v20 = 8LL;
    TlgCreateWsz(&v21, v5);
    v23 = 4LL;
    v22 = &v9;
    return TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008C46C, 0LL, 0LL, 9u, &pData);
  }
  return result;
}
