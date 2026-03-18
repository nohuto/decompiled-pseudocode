/*
 * XREFs of McTemplateK0nxqq @ 0x1C0110394
 * Callers:
 *     EtwTraceUIPIHandleValidationError @ 0x1C0072394 (EtwTraceUIPIHandleValidationError.c)
 * Callees:
 *     McGenEventWrite @ 0x1C006C7F8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0nxqq(
        struct _MCGEN_TRACE_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7)
{
  int v8; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-29h] BYREF
  __int64 v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  char *v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  char *v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  int *v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]

  v10 = a5;
  v8 = 0;
  v12 = &a6;
  v14 = &a7;
  v16 = &v8;
  v11 = 36LL;
  v13 = 8LL;
  v15 = 4LL;
  v17 = 4LL;
  return McGenEventWrite(a1, &UIPIHandleValEvent, (LPCGUID)&Context.Flags, 5u, &EventData);
}
