/*
 * XREFs of McTemplateK0cq @ 0x1C010F0B8
 * Callers:
 *     EtwTraceEndAppMessageProcessing @ 0x1C007AF20 (EtwTraceEndAppMessageProcessing.c)
 *     EtwTraceBeginDispatchMessage @ 0x1C0090290 (EtwTraceBeginDispatchMessage.c)
 *     EtwTraceEndDispatchMessage @ 0x1C00902B0 (EtwTraceEndDispatchMessage.c)
 *     EtwTraceWakeDIT @ 0x1C00941D0 (EtwTraceWakeDIT.c)
 *     EtwTraceEndTranslateMessage @ 0x1C009DF00 (EtwTraceEndTranslateMessage.c)
 *     EtwTraceBeginTranslateMessage @ 0x1C009DF20 (EtwTraceBeginTranslateMessage.c)
 *     EtwTraceWakeRIT @ 0x1C00A4AD0 (EtwTraceWakeRIT.c)
 * Callees:
 *     McGenEventWrite @ 0x1C006C7F8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
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
