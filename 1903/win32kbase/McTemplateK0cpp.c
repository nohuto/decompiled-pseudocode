/*
 * XREFs of McTemplateK0cpp @ 0x1C010F2E0
 * Callers:
 *     EtwTracePostInjectedGestureMessage @ 0x1C010E390 (EtwTracePostInjectedGestureMessage.c)
 * Callees:
 *     McGenEventWrite @ 0x1C006C7F8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0cpp(struct _MCGEN_TRACE_CONTEXT *a1, __int64 a2, __int64 a3, char a4, char a5, char a6)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-50h] BYREF
  char *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  char *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  char v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v9 = 1LL;
  v8 = &v14;
  v11 = 8LL;
  v10 = &a5;
  v13 = 8LL;
  v12 = &a6;
  return McGenEventWrite(a1, &PostInjectedGestureMessage, (LPCGUID)&Context.Flags, 4u, &EventData);
}
