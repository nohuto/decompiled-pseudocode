/*
 * XREFs of McTemplateK0qqmx @ 0x1C0111018
 * Callers:
 *     ?EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z @ 0x1C010CDD0 (-EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1C006C7F8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qqmx(
        struct _MCGEN_TRACE_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        __int64 a6,
        char a7)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-21h] BYREF
  int *v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  char *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  __int64 v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  char *v15; // [rsp+70h] [rbp+1Fh]
  __int64 v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+B8h] [rbp+67h] BYREF

  v17 = a4;
  v10 = 4LL;
  v9 = &v17;
  v12 = 4LL;
  v11 = &a5;
  v13 = a6;
  v15 = &a7;
  v14 = 8LL;
  v16 = 8LL;
  return McGenEventWrite(a1, &ProcessWindowInfo, (LPCGUID)&Context.Flags, 5u, &EventData);
}
