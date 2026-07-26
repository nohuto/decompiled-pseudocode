/*
 * XREFs of McTemplateK0jqxqdq @ 0x1C0068B48
 * Callers:
 *     ndisMDoOidRequest @ 0x1C0006D10 (ndisMDoOidRequest.c)
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C0069F84 (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C006A144 (ndisCancelOidRequestOnMiniport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C006170C (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0jqxqdq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  int v9; // [rsp+30h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-51h] BYREF
  __int64 v11; // [rsp+50h] [rbp-41h]
  __int64 v12; // [rsp+58h] [rbp-39h]
  char *v13; // [rsp+60h] [rbp-31h]
  __int64 v14; // [rsp+68h] [rbp-29h]
  char *v15; // [rsp+70h] [rbp-21h]
  __int64 v16; // [rsp+78h] [rbp-19h]
  char *v17; // [rsp+80h] [rbp-11h]
  __int64 v18; // [rsp+88h] [rbp-9h]
  char *v19; // [rsp+90h] [rbp-1h]
  __int64 v20; // [rsp+98h] [rbp+7h]
  int *v21; // [rsp+A0h] [rbp+Fh]
  __int64 v22; // [rsp+A8h] [rbp+17h]

  v11 = a4;
  v13 = &a5;
  v9 = 65537;
  v15 = &a6;
  v12 = 16LL;
  v17 = &a7;
  v19 = &a8;
  v21 = &v9;
  v14 = 4LL;
  v16 = 8LL;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&NDIS_PROVIDER_ID_Context, a2, a3, 7u, &EventData);
}
