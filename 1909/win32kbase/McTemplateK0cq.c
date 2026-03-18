/*
 * XREFs of McTemplateK0cq @ 0x1C010C748
 * Callers:
 *     EtwTraceEndAppMessageProcessing @ 0x1C0076F80 (EtwTraceEndAppMessageProcessing.c)
 *     EtwTraceBeginDispatchMessage @ 0x1C008C400 (EtwTraceBeginDispatchMessage.c)
 *     EtwTraceEndDispatchMessage @ 0x1C008C420 (EtwTraceEndDispatchMessage.c)
 *     EtwTraceWakeDIT @ 0x1C0092A90 (EtwTraceWakeDIT.c)
 *     EtwTraceEndTranslateMessage @ 0x1C009D640 (EtwTraceEndTranslateMessage.c)
 *     EtwTraceBeginTranslateMessage @ 0x1C009D660 (EtwTraceBeginTranslateMessage.c)
 *     EtwTraceWakeRIT @ 0x1C00A3A70 (EtwTraceWakeRIT.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0058898 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0cq(
        struct _MCGEN_TRACE_CONTEXT *a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  char *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  char v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v7 = &v13;
  v9 = 0;
  v8 = 1;
  v10 = &a5;
  v12 = 0;
  v11 = 4;
  return McGenEventWrite(a1, a2, (LPCGUID)&Context.Flags, 3u, &v6);
}
