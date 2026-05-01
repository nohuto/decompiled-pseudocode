/*
 * XREFs of CrmLogSrvActivityQueryWindowClosedReasonsStop @ 0x18003451C
 * Callers:
 *     CrmSrvActivityQueryWindowClosedReasons @ 0x1800343CC (CrmSrvActivityQueryWindowClosedReasons.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CrmLogSrvActivityQueryWindowClosedReasonsStop(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int16 a5,
        int a6)
{
  __int64 v6; // r9
  int v7; // r8d
  int v8; // r11d
  TLG_STATUS result; // eax
  __int16 v10; // [rsp+30h] [rbp-89h] BYREF
  int v11; // [rsp+34h] [rbp-85h] BYREF
  int v12; // [rsp+38h] [rbp-81h] BYREF
  int v13; // [rsp+3Ch] [rbp-7Dh] BYREF
  __int64 v14; // [rsp+40h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-69h] BYREF
  UUID *v16; // [rsp+70h] [rbp-49h]
  __int64 v17; // [rsp+78h] [rbp-41h]
  int *v18; // [rsp+80h] [rbp-39h]
  __int64 v19; // [rsp+88h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-29h] BYREF
  int *v21; // [rsp+A0h] [rbp-19h]
  __int64 v22; // [rsp+A8h] [rbp-11h]
  __int64 *v23; // [rsp+B0h] [rbp-9h]
  __int64 v24; // [rsp+B8h] [rbp-1h]
  int *v25; // [rsp+C0h] [rbp+7h]
  __int64 v26; // [rsp+C8h] [rbp+Fh]
  __int16 *v27; // [rsp+D0h] [rbp+17h]
  __int64 v28; // [rsp+D8h] [rbp+1Fh]
  __int64 v29; // [rsp+E0h] [rbp+27h]
  int v30; // [rsp+E8h] [rbp+2Fh]
  int v31; // [rsp+ECh] [rbp+33h]

  if ( dword_18009B128 > 5u )
  {
    v11 = *(_DWORD *)(a1 + 24);
    v13 = a6;
    v16 = &Uuid;
    v12 = a2;
    v14 = a3;
    v18 = &v11;
    v10 = a5;
    v17 = 16LL;
    v19 = 4LL;
    TlgCreateSid(&pDesc, (const SID *)(a1 + 72));
    v23 = &v14;
    v21 = &v12;
    v25 = &v13;
    v27 = &v10;
    v22 = 4LL;
    v24 = 8LL;
    v26 = 4LL;
    v28 = 2LL;
    v29 = v6;
    v30 = 4 * v7;
    v31 = v8;
    return TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008C64D, 0LL, 0LL, 0xAu, &pData);
  }
  return result;
}
