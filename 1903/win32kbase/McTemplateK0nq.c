/*
 * XREFs of McTemplateK0nq @ 0x1C0110108
 * Callers:
 *     EtwTraceUIPISystemError @ 0x1C00722D0 (EtwTraceUIPISystemError.c)
 * Callees:
 *     McGenEventWrite @ 0x1C006C7F8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0nq(
        struct _MCGEN_TRACE_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+40h] [rbp-38h]
  int v9; // [rsp+48h] [rbp-30h]
  int v10; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]

  v8 = a5;
  v10 = 0;
  v9 = 36;
  v11 = &a6;
  v13 = 0;
  v12 = 4;
  return McGenEventWrite(a1, &UIPISystemEvent, (LPCGUID)&Context.Flags, 3u, &v7);
}
