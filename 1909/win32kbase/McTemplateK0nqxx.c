/*
 * XREFs of McTemplateK0nqxx @ 0x1C010D988
 * Callers:
 *     EtwTraceUIPIMsgError @ 0x1C005BC50 (EtwTraceUIPIMsgError.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0058898 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0nqxx(
        struct _MCGEN_TRACE_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-29h] BYREF
  __int64 v10; // [rsp+40h] [rbp-19h]
  __int64 v11; // [rsp+48h] [rbp-11h]
  char *v12; // [rsp+50h] [rbp-9h]
  __int64 v13; // [rsp+58h] [rbp-1h]
  char *v14; // [rsp+60h] [rbp+7h]
  __int64 v15; // [rsp+68h] [rbp+Fh]
  char *v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]

  v10 = a5;
  v11 = 36LL;
  v12 = &a6;
  v13 = 4LL;
  v14 = &a7;
  v16 = &a8;
  v15 = 8LL;
  v17 = 8LL;
  return McGenEventWrite(a1, &UIPIMsgEvent, (LPCGUID)&Context.Flags, 5u, &EventData);
}
