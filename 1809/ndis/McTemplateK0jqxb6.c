/*
 * XREFs of McTemplateK0jqxb6 @ 0x1C006050C
 * Callers:
 *     ndisGetMiniportInfo @ 0x1C00EF6C8 (ndisGetMiniportInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C003D1F0 (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0jqxb6(__int64 a1, __int64 a2, const GUID *a3, __int64 a4, char a5, char a6, __int64 a7)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-21h] BYREF
  __int64 v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  char *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  char *v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  __int64 v16; // [rsp+78h] [rbp+27h]

  v9 = a4;
  v11 = &a5;
  v10 = 16LL;
  v13 = &a6;
  v15 = a7;
  v12 = 4LL;
  v14 = 8LL;
  v16 = 6LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&NDIS_PROVIDER_ID_Context, &MiniportMacAddress, a3, 5u, &EventData);
}
