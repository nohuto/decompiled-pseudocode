/*
 * XREFs of McTemplateK0cp @ 0x1C010F268
 * Callers:
 *     EtwTraceEndSendMessage @ 0x1C007CB80 (EtwTraceEndSendMessage.c)
 *     EtwTraceEndRetrieveSendMessage @ 0x1C007CBE0 (EtwTraceEndRetrieveSendMessage.c)
 * Callees:
 *     McGenEventWrite @ 0x1C006C7F8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0cp(
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
  v11 = 8;
  return McGenEventWrite(a1, a2, (LPCGUID)&Context.Flags, 3u, &v6);
}
