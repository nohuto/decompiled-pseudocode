/*
 * XREFs of McTemplateK0qmqmq @ 0x1C00BD8E8
 * Callers:
 *     EtwTraceUiAuditReadClipboard @ 0x1C00BD7D0 (EtwTraceUiAuditReadClipboard.c)
 * Callees:
 *     McGenEventWrite @ 0x1C006C7F8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qmqmq(
        struct _MCGEN_TRACE_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        char a8)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-39h] BYREF
  int *v10; // [rsp+40h] [rbp-29h]
  __int64 v11; // [rsp+48h] [rbp-21h]
  __int64 v12; // [rsp+50h] [rbp-19h]
  __int64 v13; // [rsp+58h] [rbp-11h]
  char *v14; // [rsp+60h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  __int64 v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  char *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+C8h] [rbp+5Fh] BYREF

  v20 = a4;
  v11 = 4LL;
  v10 = &v20;
  v12 = a5;
  v13 = 8LL;
  v14 = &a6;
  v16 = a7;
  v18 = &a8;
  v15 = 4LL;
  v17 = 8LL;
  v19 = 4LL;
  return McGenEventWrite(a1, &UiAuditReadClipboard, (LPCGUID)&Context.Flags, 6u, &EventData);
}
