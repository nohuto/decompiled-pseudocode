/*
 * XREFs of McTemplateK0qqqqh @ 0x1C010E7F8
 * Callers:
 *     EtwTraceIdleActionExpiration @ 0x1C00A7690 (EtwTraceIdleActionExpiration.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0058898 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qqqqh(
        struct _MCGEN_TRACE_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  unsigned int v9; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-39h] BYREF
  unsigned int *v11; // [rsp+50h] [rbp-29h]
  __int64 v12; // [rsp+58h] [rbp-21h]
  char *v13; // [rsp+60h] [rbp-19h]
  __int64 v14; // [rsp+68h] [rbp-11h]
  char *v15; // [rsp+70h] [rbp-9h]
  __int64 v16; // [rsp+78h] [rbp-1h]
  char *v17; // [rsp+80h] [rbp+7h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  char *v19; // [rsp+90h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+1Fh]

  v9 = gSessionId;
  v12 = 4LL;
  v11 = &v9;
  v14 = 4LL;
  v13 = &a5;
  v15 = &a6;
  v17 = &a7;
  v19 = &a8;
  v16 = 4LL;
  v18 = 4LL;
  v20 = 2LL;
  return McGenEventWrite(a1, &IdleActionExpireEvent, (LPCGUID)&Context.Flags, 6u, &EventData);
}
