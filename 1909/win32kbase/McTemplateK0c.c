/*
 * XREFs of McTemplateK0c @ 0x1C010C6E0
 * Callers:
 *     EtwTraceConvertTimeOutToBlocking @ 0x1C00B0800 (EtwTraceConvertTimeOutToBlocking.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0058898 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0c(struct _MCGEN_TRACE_CONTEXT *a1, __int64 a2, __int64 a3, char a4)
{
  EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  char *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  char v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 1;
  return McGenEventWrite(a1, &ConvertTimeOutToBlocking, (LPCGUID)&Context.Flags, 2u, &v5);
}
